with (import <nixpkgs> { });

mkShell {
  buildInputs = [
    #
    nodejs_latest
    nodePackages_latest.node-gyp
    nodePackages_latest.node-gyp-build
    libuuid
  ];
  APPEND_LIBRARY_PATH = "${pkgs.lib.makeLibraryPath [ pkgs.libuuid ]}";
  shellHook = ''
    export LD_LIBRARY_PATH="$APPEND_LIBRARY_PATH:$LD_LIBRARY_PATH"
  '';
  profile = ''
    export npm_config_build_from_source=true
  '';
}
