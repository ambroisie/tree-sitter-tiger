.PHONE: all
all:
	tree-sitter generate

.PHONE: test
test: all
	tree-sitter test
	nvim-test

.PHONE: update-tests
update-tests: all
	tree-sitter test -u

playground:
	nix shell pkgs#emscripten --command tree-sitter build-wasm
	tree-sitter playground
