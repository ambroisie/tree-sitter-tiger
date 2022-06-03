; Functions {{{
(function_declaration
  name: (identifier) @name) @definition.function
(primitive_declaration
  name: (identifier) @name) @definition.function

(function_call
  function: (identifier) @name) @reference.call
; }}}

; vim: sw=2 foldmethod=marker
