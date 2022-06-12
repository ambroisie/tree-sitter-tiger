; Control flow {{{
(if_expression) @indent
"then" @branch
"else" @branch

(while_expression) @indent
"do" @branch

(for_expression) @indent
"to" @branch
; }}}

; Class {{{
(class_declaration) @indent
(class_type) @indent
; }}}

; Misc{{{
(comment) @ignore
(string_literal) @ignore
; }}}

; vim: sw=2 foldmethod=marker
