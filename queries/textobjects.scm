; Functions {{{
 (function_declaration
   body: (_) @function.inner) @function.outer
 (primitive_declaration) @function.outer
; }}}

; Misc {{{
(comment) @comment.outer
; }}}

; vim: sw=2 foldmethod=marker
