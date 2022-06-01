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
  }
});

// vim: sw=2
