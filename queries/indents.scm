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

; Groups {{{
(let_expression) @indent
"in" @branch
"end" @branch

(sequence_expression) @indent
")" @branch
; }}}

; Functions and methods {{{
(parameters) @indent

(function_call) @indent
(method_call) @indent
")" @branch

(function_declaration) @indent
(primitive_declaration) @indent
(method_declaration) @indent
; }}}

; Misc{{{
(comment) @ignore
(string_literal) @ignore
; }}}

; vim: sw=2 foldmethod=marker
