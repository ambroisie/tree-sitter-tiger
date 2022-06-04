; Functions {{{
 (function_declaration
   parameters: ((_) @parameter.inner)* @parameter.outer
   body: (_) @function.inner) @function.outer
 (primitive_declaration
   parameters: ((_) @parameter.inner)* @parameter.outer) @function.outer

(function_call
  arguments: ((_) @call.inner)*) @call.outer
; }}}

; Control flow {{{
(if_expression
  consequence: (_) @conditional.inner
  alternative: (_)? @conditional.inner) @conditional.outer
; }}}

; Misc {{{
(comment) @comment.outer
; }}}

; vim: sw=2 foldmethod=marker
