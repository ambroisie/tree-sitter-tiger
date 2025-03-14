.PHONY: all
all:
	tree-sitter generate

.PHONY: test
test: all
	tree-sitter test
	nvim-test

.PHONY: update-tests
update-tests: all
	tree-sitter test -u

.PHONY: playground
playground:
	nix shell pkgs#emscripten --command tree-sitter build-wasm
	tree-sitter playground
