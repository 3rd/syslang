(ERROR) @slang.error

(document_title_basic) @slang.document.title
(
 (document_title_basic_marker) @conceal
 (#set! conceal "⚑")
)

(document_meta
  (document_meta_field
    (document_meta_field_key) @slang.document.meta.field.key
    (document_meta_field_value) @slang.document.meta.field.value
    @slang.document.meta.field
    )) @slang.document.meta

(comment) @slang.comment
(bold) @slang.bold
(italic) @slang.italic
(underline) @slang.underline
(string) @slang.string
(number) @slang.number
(ticket) @slang.ticket
(time) @slang.time
(timerange) @slang.timerange
(date) @slang.date
(daterange) @slang.daterange
(datetime) @slang.datetime
(datetimerange) @slang.datetimerange

(heading_1
  (heading_1_marker) @slang.heading_1.marker
  (text_to_eol) @slang.heading_1.text
  ) @slang.heading_1
(heading_2
  (heading_2_marker) @slang.heading_2.marker
  (text_to_eol) @slang.heading_2.text
  ) @slang.heading_2
(heading_3
  (heading_3_marker) @slang.heading_3.marker
  (text_to_eol) @slang.heading_3.text
  ) @slang.heading_3
(heading_4
  (heading_4_marker) @slang.heading_4.marker
  (text_to_eol) @slang.heading_4.text
  ) @slang.heading_4
(heading_5
  (heading_5_marker) @slang.heading_5.marker
  (text_to_eol) @slang.heading_5.text
  ) @slang.heading_5
(heading_6
  (heading_6_marker) @slang.heading_6.marker
  (text_to_eol) @slang.heading_6.text
  ) @slang.heading_6
(
 [
  (heading_1_marker)
  (heading_2_marker)
  (heading_3_marker)
  (heading_4_marker)
  (heading_5_marker)
  (heading_6_marker)
  ] @conceal
 (#set! conceal "◉")
 )

(section (text_to_eol) @slang.section)
(
 (section_marker) @conceal
 (#set! conceal "⮟")
)

; (pipe (text_to_eol) @slang.pipe)
; (
;  (pipe_marker) @conceal
;  (#set! conceal "❙")
; )

(task_default (text_line) @slang.task_default)
(task_active (text_line) @slang.task_active)
(task_cancelled (text_to_eol) @slang.task_cancelled)
(task_done (_) @slang.task_done)
(
 (task_marker_default) @conceal
 (#set! conceal "")
)
(
 (task_marker_active) @conceal
 (#set! conceal "🞆")
)
(
 (task_marker_done) @conceal
 (#set! conceal "")
)
(
 (task_marker_cancelled) @conceal
 (#set! conceal "✘")
)
(task_session) @slang.task_session
(task_schedule) @slang.task_schedule

(tag_hash) @slang.tag.hash
(tag_positive) @slang.tag.positive
(tag_negative) @slang.tag.negative
(tag_context) @slang.tag.context
(tag_danger) @slang.tag.danger
(tag_identifier) @slang.tag.identifier

(external_link) @slang.external_link
; (link_plain) @slang.link_plain

(inline_code) @slang.inline_code

(code_block) @slang.code_block
(code_block_start) @slang.code_block_start
(code_block_language) @slang.code_block_language
(code_block_end) @slang.code_block_end
(code_block (code_block_content) @slang.code_block_content)

(list_item) @slang.list_item
(list_item_marker) @slang.list_item_marker
(
 (list_item_marker) @conceal
 (#set! conceal "•")
)
