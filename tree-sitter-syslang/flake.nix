{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
    flake-utils.url = "github:numtide/flake-utils";
    flake-compat = {
      url = "github:edolstra/flake-compat";
      flake = true;
    };
  };
  outputs = { nixpkgs, flake-utils, ... }@inputs:
    let
      defaultPackage = pkgs:
        pkgs.callPackage
        (nixpkgs + "/pkgs/development/tools/parsing/tree-sitter/grammar.nix")
        { } {
          language = "syslang";
          source = ./.;
          inherit (pkgs.tree-sitter) version;
        };
    in (flake-utils.lib.eachDefaultSystem (system:
      let pkgs = import nixpkgs { inherit system; };
      in {
        defaultPackage = defaultPackage pkgs;
        devShell = pkgs.mkShell {
          nativeBuildInputs = with pkgs; [
            nodejs_latest
            nodePackages.node-gyp-build
            nodePackages.node-gyp
            # tree-sitter
          ];
          profile = ''
            export npm_config_build_from_source=true
          '';
        };
      })) // (let pkgs = import nixpkgs { };
      in { defaultPackage = defaultPackage pkgs; });
}
