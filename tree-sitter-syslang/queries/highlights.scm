(ERROR) @slang.error

; https://github.com/lmburns/dotfiles/blob/2d1d1bdb00fc01c995c87777b0db10e17a0e073c/.config/nvim/queries/rust/highlights.scm
; https://www.reddit.com/r/neovim/comments/vdrnmf/is_it_possible_to_have_treesitter_syntax/

; document title
(document_title_basic) @slang.document.title
; ((document_title_basic_marker) @slang.document.title)
(
  ((document_title_basic_marker) @slang.document.title)
  (#match? @slang.document.title "=")
  (#set! conceal "⚑")
)

; document meta
(document_meta
  (document_meta_field
    (document_meta_field_key) @slang.document.meta.field.key
    (document_meta_field_value) @slang.document.meta.field.value
    @slang.document.meta.field
  )
) @slang.document.meta

; emphasis
(bold (bold_content) @slang.bold)
(italic (italic_content) @slang.italic)
(underline (underline_content) @slang.underline)
(inline_code (inline_code_content) @slang.inline_code)
(
 [
  (bold_start)
  (bold_end)
  (italic_start)
  (italic_end)
  (underline_start)
  (underline_end)
  (inline_code_start)
  (inline_code_end)
 ] @conceal
 (#set! conceal "")
)

; basic types
(string) @slang.string
(number) @slang.number
(ticket) @slang.ticket

; datetime
(time) @slang.time
(timerange) @slang.timerange
(date) @slang.date
(daterange) @slang.daterange
(datetime) @slang.datetime
(datetimerange) @slang.datetimerange

; comments
(comment) @slang.comment

; outlines
(outline_1
  (text_to_eol) @slang.outline_1.text
) @slang.outline_1
((outline_1_marker) @slang.outline_1.marker (#set! conceal "⊙"))
(outline_2
  (text_to_eol) @slang.outline_2.text
) @slang.outline_2
((outline_2_marker) @slang.outline_2.marker (#set! conceal "🞊"))
(outline_3
  (text_to_eol) @slang.outline_3.text
) @slang.outline_3
((outline_3_marker) @slang.outline_3.marker (#set! conceal "🞆"))
(outline_4
  (text_to_eol) @slang.outline_4.text
) @slang.outline_4
((outline_4_marker) @slang.outline_4.marker (#set! conceal "🞇"))
(outline_5
  (text_to_eol) @slang.outline_5.text
) @slang.outline_5
((outline_5_marker) @slang.outline_5.marker (#set! conceal "🞈"))
(outline_6
  (text_to_eol) @slang.outline_6.text
) @slang.outline_6
((outline_6_marker) @slang.outline_6.marker (#set! conceal "🞉"))

; headings
(heading_1 (heading_1_marker) @slang.heading_1.marker (text_to_eol) @slang.heading_1.text) @slang.heading_1
(heading_2 (heading_2_marker) @slang.heading_2.marker (text_to_eol) @slang.heading_2.text) @slang.heading_2
(heading_3 (heading_3_marker) @slang.heading_3.marker (text_to_eol) @slang.heading_3.text) @slang.heading_3
(heading_4 (heading_4_marker) @slang.heading_4.marker (text_to_eol) @slang.heading_4.text) @slang.heading_4
(heading_5 (heading_5_marker) @slang.heading_5.marker (text_to_eol) @slang.heading_5.text) @slang.heading_5
(heading_6 (heading_6_marker) @slang.heading_6.marker (text_to_eol) @slang.heading_6.text) @slang.heading_6

; sections
(section (text_to_eol) @slang.section)
((section_marker) @slang.section (#set! conceal "▼"))

; banner
((banner) @slang.banner)
; (
;  (banner_marker) @conceal
;  (#set! conceal "❙")
; )

; tasks
(task_default (text_line) @slang.task_default)
((task_marker_default) @slang.task_marker_default (#set! conceal ""))
(task_active (text_line) @slang.task_active)
((task_marker_active) @slang.task_active (#set! conceal "➡"))
(task_cancelled (text_to_eol) @slang.task_cancelled)
((task_marker_cancelled) @slang.task_cancelled (#set! conceal ""))
(task_done (_) @slang.task_done)
((task_marker_done) @slang.task_done (#set! conceal ""))
(task_session) @slang.task_session
(task_schedule) @slang.task_schedule

; tags
(tag_hash) @slang.tag.hash
(tag_positive) @slang.tag.positive
(tag_negative) @slang.tag.negative
(tag_context) @slang.tag.context
(tag_danger) @slang.tag.danger
(tag_identifier) @slang.tag.identifier

; external links
(external_link) @slang.external_link

; internal links
(internal_link) @slang.internal_link
(internal_link (internal_link_start) @slang.internal_link (#set! conceal ""))
(internal_link (internal_link_end) @slang.internal_link (#set! conceal ""))

; code
(inline_code) @slang.inline_code
(code_block) @slang.code_block
(code_block_start) @slang.code_block_start
(code_block_language) @slang.code_block_language
(code_block_end) @slang.code_block_end
(code_block (code_block_content) @slang.code_block_content @text.literal @nospell)

; list items
(list_item) @slang.list_item
((list_item_marker) @slang.list_item_marker (#set! conceal "•"))
(list_item_label) @slang.list_item_label
(list_item_label_marker) @slang.list_item_label_marker

; labels
(label) @slang.label
(label_line) @slang.label_line

; image
(image (image_start) @slang.image (#set! conceal ""))
(image (image_alt) @slang.image)
(image (image_separator) @slang.image (#set! conceal ""))
(image (image_url) @slang.image (#set! conceal ""))
(image (image_end) @slang.image (#set! conceal ""))

; dividers
(horizontal_rule) @slang.horizontal_rule
(double_horizontal_rule) @slang.double_horizontal_rule
