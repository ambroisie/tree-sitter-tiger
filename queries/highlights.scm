; Misc {{{
(comment) @comment
; }}}

; Keywords {{{
[
  "array"
  (break_expression)
  "do"
  "else"
  "end"
  "for"
  "function"
  "if"
  "import"
  "in"
  "let"
  "of"
  "primitive"
  "then"
  "to"
  "type"
  "var"
  "while"
] @keyword
; }}}

; Literals {{{
(nil_literal) @constant.builtin
(integer_literal) @number
(string_literal) @string
; }}}

; Operators {{{
(operator) @operator

[
 ","
 ";"
 "."
] @punctuation.delimiter

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket
; }}}

; vim: sw=2 foldmethod=marker
