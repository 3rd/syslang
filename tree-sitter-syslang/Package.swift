// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterSyslang",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterSyslang", targets: ["TreeSitterSyslang"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.25.0"),
    ],
    targets: [
        .target(name: "TreeSitterSyslang",
                path: ".",
                exclude: [
                    "Cargo.toml",
                    "Makefile",
                    "binding.gyp",
                    "bindings/c",
                    "bindings/go",
                    "bindings/node",
                    "bindings/python",
                    "bindings/rust",
                    "prebuilds",
                    "grammar.js",
                    "package.json",
                    "package-lock.json",
                    "pyproject.toml",
                    "setup.py",
                    "test",
                    "examples",
                    ".editorconfig",
                    ".github",
                    ".gitignore",
                    ".gitattributes",
                    ".gitmodules",
                ],
                sources: [
                    "src/parser.c",
                    "src/scanner.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")]),
        .testTarget(name: "TreeSitterSyslangTests",
                    dependencies: [
                        "TreeSitterSyslang",
                        .product(name: "SwiftTreeSitter", package: "swift-tree-sitter"),
                    ],
                    path: "bindings/swift/TreeSitterSyslangTests")
    ],
    cLanguageStandard: .c11
)
