function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}

module.exports = grammar({
  name: "tiger",

  rules: {
    source_file: ($) => choice(
      $._expr,
    ),

    _expr: ($) => choice(
      "nil",
      $.integer_literal,
      $.string_literal,

      $.unary_expression,
      $.binary_expression,
      $.sequence_expression,
    ),

    integer_literal: (_) => /[0-9]+/,

    string_literal: ($) => seq(
      '"',
      repeat(choice($.escape_sequence, /[^"\\]+/)),
      '"',
    ),

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
        [5, prec.left, choice("*", "/")],
        [4, prec.left, choice("+", "-")],
        // FIXME: comparisons should be non-associative
        // See https://github.com/tree-sitter/tree-sitter/issues/761
        [3, prec.left, choice(">=", "<=", "=", "<>", "<", ">")],
        [2, prec.left, "&"],
        [1, prec.left, "|"],
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
  }
});

// vim: sw=2
