; Functions {{{
 (function_declaration
   body: (_) @function.inner) @function.outer
 (primitive_declaration) @function.outer

(function_call
  arguments: ((_) @call.inner)*) @call.outer
; }}}

; Misc {{{
(comment) @comment.outer
; }}}

; vim: sw=2 foldmethod=marker
