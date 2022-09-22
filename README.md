# Syslang

This repository contains the Tree-sitter grammar for Syslang (or _slang_), my personal document syntax.

This project was inspired by:

- [Geir Isene's HyperList](https://isene.org/hyperlist/)
- [Org](https://orgmode.org) and [Neorg](https://github.com/nvim-neorg/neorg)
- Markdown, AsciiDoc

I started working on this a few years ago.
The first successful implementation was a custom regex-based Vim syntax, that I iterated on a few times, and ported to Lua.
I've been working on turning it into a tree-sitter grammar for some time, and finally made the breakthrough in September 2022.

This repository can serve as a reference on how to get started if you want to create your own Tree-sitter grammar.

If you'd like to take it for a spin, you'll need the acompanying Neovim [plugin](https://github.com/3rd/config/tree/master/home/dotfiles/nvim/plugins/syslang) and `nvim-treesitter` [config](https://github.com/3rd/config/blob/master/home/dotfiles/nvim/lua/modules/language-support/tree-sitter.lua#L5).

![Highlighting example](https://disk.b-cdn.net/slang/slang.png)
