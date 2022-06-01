function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}

const PREC = {
  assign: 6,
  multiplicative: 5,
  additive: 4,
  comparative: 3,
  and: 2,
  or: 1,
};

module.exports = grammar({
  name: "tiger",

  // Ensure we don't extract keywords from tokens
  word: ($) => $.identifier,

  conflicts: ($) => [
    [$._lvalue, $.array_expression],
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
    ),

    record_value: ($) => seq(
      field("record", $._lvalue),
      ".",
      field("field", $.identifier),
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
      field("type", $.identifier),
      "[",
      field("size", $._expr),
      "]",
      "of",
      field("init", $._expr),
    ),

    record_expression: ($) => seq(
      field("type", $.identifier),
      "{",
      sepBy(
        ",",
        seq(
          field("field", $.identifier),
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
        ":=",
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
      ":=",
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

    _declaration_chunks: ($) => repeat1($._declaration_chunk),

    _declaration_chunk: ($) => choice(
      $.import_declaration,
    ),

    import_declaration: ($) => seq(
      "import",
      field("file", $.string_literal),
    ),

    // }}}
  }
});

// vim: sw=2
