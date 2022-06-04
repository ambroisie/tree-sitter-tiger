; Control flow {{{
(if_expression
  consequence: (_) @indent)
"else" @branch

(while_expression
  body: (_) @indent)

(for_expression
  body: (_) @indent)
; }}}

; Class {{{
(class_declaration
  fields: (_)* @indent)
(class_type
  fields: (_)* @indent)
; }}}

; Misc{{{
(comment) @ignore
(string_literal) @ignore
; }}}

; vim: sw=2 foldmethod=marker
