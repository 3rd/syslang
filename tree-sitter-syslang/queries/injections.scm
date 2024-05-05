(code_block
  (code_block_start (code_block_language) @injection.language)
  (code_block_content) @injection.content
  (#set! injection.include-children t)
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "sh")
  (code_block_content) @injection.content
  (#set! injection.language "bash")
  (#set! injection.include-children t)
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "rs")
  (code_block_content) @injection.content
  (#set! injection.language "rust")
  (#set! injection.include-children t)
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "ts")
  (code_block_content) @injection.content
  (#set! injection.language "typescript")
  (#set! injection.include-children t)
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "tsx")
  (code_block_content) @injection.content
  (#set! injection.language "typescriptreact")
  (#set! injection.include-children t)
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "js")
  (code_block_content) @injection.content
  (#set! injection.language "javascript")
  (#set! injection.include-children t)
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "jsx")
  (code_block_content) @injection.content
  (#set! injection.language "javascriptreact")
  (#set! injection.include-children t)
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "yml")
  (code_block_content) @injection.content
  (#set! injection.language "yaml")
  (#set! injection.include-children t)
)

(code_block
  (code_block_start (code_block_language) @_name)
  (#eq? @_name "svg")
  (code_block_content) @injection.content
  (#set! injection.language "xml")
  (#set! injection.include-children t)
)

