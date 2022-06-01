function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}

const PREC = {
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

  rules: {
    source_file: ($) => choice(
      $._expr,
    ),

    _expr: ($) => choice(
      $.nil_literal,
      $.integer_literal,
      $.string_literal,

      $.array_expression,
      $.record_expression,

      $.unary_expression,
      $.binary_expression,
      $.sequence_expression,
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
  }
});

// vim: sw=2
