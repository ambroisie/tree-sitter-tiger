; Control flow {{{
(if_expression
  consequence: (_) @indent)
"else" @branch

(while_expression
  body: (_) @indent)

(for_expression
  body: (_) @indent)
; }}}

; Misc{{{
(comment) @ignore
; }}}

; vim: sw=2 foldmethod=marker
