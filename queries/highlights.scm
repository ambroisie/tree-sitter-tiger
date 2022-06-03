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
(escape_sequence) @string.escape
; }}}

; Operators {{{
(operator) @operator

[
 ","
 ";"
 ":"
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

; Functions {{{
(function_call
  function: (identifier) @function)
(function_declaration
  name: (identifier) @function)
(primitive_declaration
  name: (identifier) @function)

(parameters
  name: (identifier) @variable.parameter)
; }}}

; Misc {{{
(comment) @comment

(type_identifier) @type
(field_identifier) @property
(identifier) @variable
; }}}

; vim: sw=2 foldmethod=marker
