{
  description = "A tree-sitter grammar for Tiger";

  inputs = {
    flake-utils = {
      type = "github";
      owner = "numtide";
      repo = "flake-utils";
      ref = "master";
    };

    nixpkgs = {
      type = "github";
      owner = "NixOS";
      repo = "nixpkgs";
      ref = "nixpkgs-unstable";
    };

    pre-commit-hooks = {
      type = "github";
      owner = "cachix";
      repo = "pre-commit-hooks.nix";
      ref = "master";
      inputs = {
        flake-utils.follows = "flake-utils";
        nixpkgs.follows = "nixpkgs";
      };
    };
  };

  outputs =
    { self
    , flake-utils
    , nixpkgs
    , pre-commit-hooks
    }:
    let
      inherit (flake-utils.lib) eachSystem system;

      mySystems = [
        system.aarch64-darwin
        system.aarch64-linux
        system.x86_64-darwin
        system.x86_64-linux
      ];

      eachMySystem = eachSystem mySystems;
    in
    eachMySystem
      (system:
      let
        pkgs = import nixpkgs {
          inherit system;
        };

        version = (builtins.fromJSON (builtins.readFile ./package.json)).version;
      in
      rec {
        checks = {
          pre-commit = pre-commit-hooks.lib.${system}.run {
            src = ./.;

            hooks = {
              clang-format = {
                enable = true;
                name = "clang-format";
                entry = "${pkgs.clang-tools}/bin/clang-format -style=file -i";
                types = [ "text" "c" ];
                # I don't care for generated files' formatting
                excludes = [ "src/parser.c" "src/tree_sitter/parser.h" ];
                language = "system";
              };

              nixpkgs-fmt = {
                enable = true;
              };

              tree-sitter = {
                enable = true;
                name = "tree-sitter tests";
                entry = "${pkgs.tree-sitter}/bin/tree-sitter test";
                pass_filenames = false;
              };

              tree-sitter-files = {
                enable = true;
                name = "tree-sitter generated files";
                entry = "${pkgs.tree-sitter}/bin/tree-sitter generate";
                pass_filenames = false;
              };
            };
          };
        };

        devShells = {
          default = pkgs.mkShell {
            nativeBuildInputs = with pkgs; [
              nodejs
              tree-sitter
            ];

            inherit (checks.pre-commit) shellHook;
          };
        };

        packages = {
          default =
            let mkGrammar = pkgs.callPackage "${nixpkgs}/pkgs/development/tools/parsing/tree-sitter/grammar.nix" { };
            in
            mkGrammar {
              language = "tiger";
              inherit version;
              source = ./.;
            };
        };
      });
}
