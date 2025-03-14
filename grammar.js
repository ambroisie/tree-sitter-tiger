function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}

const PREC = {
  multiplicative: 6,
  additive: 5,
  comparative: 4,
  and: 3,
  or: 2,
  assign: 1,
};

module.exports = grammar({
  name: "tiger",

  // Ensure we don't extract keywords from tokens
  word: ($) => $.identifier,

  inline: ($) => [
    $._type_identifier,
    $._field_identifier,
    $._function_declaration_common,
    $._class_declaration_common,
    $._class_field,
  ],

  conflicts: ($) => [
    [$._lvalue, $.array_expression],
  ],

  externals: ($) => [
    // Nested comments need to be tokenized externally
    $.comment,
  ],

  extras: ($) => [
    /( |\n|\r|\t)+/,
    $.comment,
  ],

  rules: {
    source_file: ($) => choice(
      $._expr,
      optional($._declaration_chunks),
    ),

    // Expressions {{{

    _expr: ($) => choice(
      $.nil_literal,
      $.integer_literal,
      $.string_literal,

      $.array_expression,
      $.record_expression,

      $._lvalue,

      $.function_call,

      $.unary_expression,
      $.binary_expression,
      $.sequence_expression,

      $.assignment_expression,

      $.if_expression,
      $.while_expression,
      $.for_expression,
      $.break_expression,
      $.let_expression,

      $.new_expression,
      $.method_call,

      $.meta_cast,
      $.meta_expression,
    ),

    nil_literal: (_) => "nil",

    integer_literal: (_) => /[0-9]+/,

    string_literal: ($) => seq(
      '"',
      repeat(choice($.escape_sequence, /[^"\\]+/)),
      '"',
    ),

    // NOTE: includes reserved identifiers
    identifier: (_) => /[_a-zA-Z0-9]+/,

    _type_identifier: ($) => choice(
      alias($.identifier, $.type_identifier),
      $.meta_type_identifier,
    ),

    _field_identifier: ($) => alias($.identifier, $.field_identifier),

    escape_sequence: (_) => token.immediate(
      seq(
        "\\",
        choice(
          // Special escapes
          choice("a", "b", "f", "n", "r", "t", "v"),
          // Octal
          /[0-3][0-7]{2}/,
          // Hexadecimal
          seq("x", /[0-9a-fA-F]{2}/),
          // Escaped characters
          choice("\\", '"'),
        )
      )
    ),

    _lvalue: ($) => choice(
      $.identifier,
      $.record_value,
      $.array_value,
      $.meta_lvalue,
    ),

    record_value: ($) => seq(
      field("record", $._lvalue),
      ".",
      field("field", $._field_identifier),
    ),

    array_value: ($) => seq(
      field("array", $._lvalue),
      "[",
      field("index", $._expr),
      "]",
    ),

    function_call: ($) => seq(
      field("function", $.identifier),
      "(",
      field("arguments", sepBy(",", $._expr)),
      ")",
    ),

    unary_expression: ($) => seq(
      field("operator", alias("-", $.operator)),
      field("expression", $._expr),
    ),

    binary_expression: ($) => {
      const table = [
        [PREC.multiplicative, prec.left, choice("*", "/")],
        [PREC.additive, prec.left, choice("+", "-")],
        // FIXME: comparisons should be non-associative
        // See https://github.com/tree-sitter/tree-sitter/issues/761
        [PREC.comparative, prec.left, choice(">=", "<=", "=", "<>", "<", ">")],
        [PREC.and, prec.left, "&"],
        [PREC.or, prec.left, "|"],
      ];

      return choice(
        ...table.map(
          ([priority, assoc, operator]) => assoc(
            priority,
            seq(
              field("left", $._expr),
              field("operator", alias(operator, $.operator)),
              field("right", $._expr),
            )
          )
        )
      );
    },

    sequence_expression: ($) => seq("(", sepBy(";", $._expr), ")"),

    array_expression: ($) => seq(
      field("type", $._type_identifier),
      "[",
      field("size", $._expr),
      "]",
      "of",
      field("init", $._expr),
    ),

    record_expression: ($) => seq(
      field("type", $._type_identifier),
      "{",
      sepBy(
        ",",
        seq(
          field("field", $._field_identifier),
          "=",
          field("init", $._expr),
        ),
      ),
      "}",
    ),

    assignment_expression: ($) => prec.right(
      PREC.assign,
      seq(
        field("left", $._lvalue),
        alias(":=", $.operator),
        field("right", $._expr),
      ),
    ),

    if_expression: ($) => prec.right(
      seq(
        "if",
        field("condition", $._expr),
        "then",
        field("consequence", $._expr),
        optional(
          seq(
            "else",
            field("alternative", $._expr),
          ),
        ),
      ),
    ),

    while_expression: ($) => seq(
      "while",
      field("condition", $._expr),
      "do",
      field("body", $._expr),
    ),

    for_expression: ($) => seq(
      "for",
      field("index", $.identifier),
      alias(":=", $.operator),
      field("start", $._expr),
      "to",
      field("end", $._expr),
      "do",
      field("body", $._expr),
    ),

    break_expression: (_) => "break",

    let_expression: ($) => seq(
      "let",
      field("declarations", optional($._declaration_chunks)),
      "in",
      field("body", sepBy(";", $._expr)),
      "end",
    ),

    // }}}

    // Declarations {{{

    _declaration_chunks: ($) => repeat1(
      choice(
        $.meta_chunks,
        $._declaration_chunk,
      ),
    ),

    _declaration_chunk: ($) => prec.left(
      choice(
        repeat1($.type_declaration),
        repeat1($.class_declaration),
        repeat1(choice($.function_declaration, $.primitive_declaration)),
        $.variable_declaration,
        $.import_declaration,
      ),
    ),

    type_declaration: ($) => seq(
      "type",
      field("name", $.identifier),
      "=",
      field("value", $._type)
    ),

    _type: ($) => choice(
      $.type_alias,
      $.record_type,
      $.array_type,
      $.class_type,
    ),

    type_alias: ($) => $._type_identifier,

    record_type: ($) => seq(
      "{",
      sepBy(
        ",",
        seq(
          field("name", $._field_identifier),
          ":",
          field("type", $._type_identifier),
        ),
      ),
      "}",
    ),

    array_type: ($) => seq(
      "array",
      "of",
      field("element_type", $._type_identifier),
    ),

    function_declaration: ($) => seq(
      "function",
      $._function_declaration_common,
      "=",
      field("body", $._expr),
    ),

    primitive_declaration: ($) => seq(
      "primitive",
      $._function_declaration_common,
    ),

    _function_declaration_common: ($) => seq(
      field("name", $.identifier),
      field("parameters", $.parameters),
      optional(seq(":", field("return_type", $._type_identifier))),
    ),

    parameters: ($) => seq(
      "(",
      sepBy(
        ",",
        seq(
          field("name", $.identifier),
          ":",
          field("type", $._type_identifier),
        ),
      ),
      ")",
    ),

    variable_declaration: ($) => seq(
      "var",
      field("name", $.identifier),
      optional(seq(":", field("type", $._type_identifier))),
      alias(":=", $.operator),
      field("value", $._expr),
    ),

    import_declaration: ($) => seq(
      "import",
      field("file", $.string_literal),
    ),

    // }}}

    // Object Oriented {{{

    new_expression: ($) => seq(
      "new",
      field("class", $._type_identifier),
    ),

    method_call: ($) => seq(
      field("object", $._lvalue),
      ".",
      field("method", $.identifier),
      "(",
      field("arguments", sepBy(",", $._expr)),
      ")",
    ),

    class_declaration: ($) => seq(
      "class",
      field("name", $.identifier),
      $._class_declaration_common,
    ),

    class_type: ($) => seq(
      "class",
      $._class_declaration_common,
    ),

    _class_declaration_common: ($) => seq(
      optional($.extends_qualifier),
      "{",
      field("fields", repeat($._class_field)),
      "}",
    ),

    extends_qualifier: ($) => seq(
      "extends",
      field("super", $._type_identifier),
    ),

    _class_field: ($) => choice(
      $._field_declaration,
      $.method_declaration,
    ),

    _field_declaration: ($) => alias($.variable_declaration, $.field_declaration),

    method_declaration: ($) => seq(
      "method",
      $._function_declaration_common,
      "=",
      field("body", $._expr),
    ),

    // }}}

    // Meta-variables {{{

    meta_chunks: ($) => seq(
      "_chunks",
      "(",
      field("index", $.integer_literal),
      ")",
    ),

    meta_cast: ($) => seq(
      "_cast",
      "(",
      field("expression", $._expr),
      ",",
      field("type", $._type),
      ")",
    ),

    meta_expression: ($) => seq(
      "_exp",
      "(",
      field("index", $.integer_literal),
      ")",
    ),

    meta_lvalue: ($) => seq(
      "_lvalue",
      "(",
      field("index", $.integer_literal),
      ")",
    ),

    meta_type_identifier: ($) => seq(
      "_namety",
      "(",
      $.integer_literal,
      ")",
    ),

    // }}}
  }
});

// vim: foldmethod=marker sw=2
