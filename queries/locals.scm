; Scopes {{{
[
 (for_expression)
 (let_expression)
 (function_declaration)
] @local.scope
; }}}

; Definitions {{{
(type_declaration
  name: (identifier) @local.definition)

(parameters
  name: (identifier) @local.definition)

(function_declaration
  name: (identifier) @local.definition)
(primitive_declaration
  name: (identifier) @local.definition)

(variable_declaration
  name: (identifier) @local.definition)
; }}}

; References {{{
(identifier) @local.reference
; }}}

; vim: sw=2 foldmethod=marker
