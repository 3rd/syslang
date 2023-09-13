(code_block
  (code_block_start (code_block_language) @injection.language)
  (code_block_content) @injection.content
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "sh")
  (code_block_content) @injection.content
  (#set! injection.language "bash")
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "go")
  (code_block_content) @injection.content
  (#set! injection.language "go")
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "rs")
  (code_block_content) @injection.content
  (#set! injection.language "rust")
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "ts")
  (code_block_content) @injection.content
  (#set! injection.language "typescript")
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "tsx")
  (code_block_content) @injection.content
  (#set! injection.language "typescriptreact")
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "js")
  (code_block_content) @injection.content
  (#set! injection.language "javascript")
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "jsx")
  (code_block_content) @injection.content
  (#set! injection.language "javascriptreact")
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "yml")
  (code_block_content) @injection.content
  (#set! injection.language "yaml")
)
