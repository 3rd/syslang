# Syslang

Syslang (or _slang_) is my personal document syntax.

This project was inspired by [Geir Isene's HyperList](https://isene.org/hyperlist/), Org, Markdown, AsciiDoc, and others.

This repository can serve as a reference on how to get started if you want to create your own Tree-sitter grammar,
integrate it into your editor (with highlights, folds, syntax injection), and build other standalone software using it.

- [Tree-sitter grammar](./tree-sitter-syslang)
- [Go library](./go-syslang)
- [Neovim plugin](https://github.com/3rd/config/tree/master/home/dotfiles/nvim/plugins/syslang)
- [Neovim setup](https://github.com/search?q=repo%3A3rd%2Fconfig%20syslang&type=code) (including [nvim-treesitter config](https://github.com/3rd/config/blob/master/home/dotfiles/nvim/lua/modules/language-support/tree-sitter.lua#L76))

## Reserved Meta Fields

The top-level `@meta` block stays open-ended, but the Go and JS libraries now treat these keys as reserved helpers:

- `root`: absolute project root for code projects
- `archived`: boolean archive flag (`true` or `false`)

If `root` is missing, the document is treated as a non-code project for collection filters. `archived` is always opt-in at the caller level; the libraries expose helpers and explicit filter utilities instead of hiding documents implicitly.

Example:

```text
@meta
  title: Syslang
  root: /home/rabbit/brain/core/syslang
  archived: false
@end
```

## Demo

https://user-images.githubusercontent.com/59587503/235466035-5c30a393-ac33-498f-9da9-4d3b1d87c415.mp4
