// @ts-nocheck
/* eslint-disable */

module.exports = grammar({
  name: "syslang",
  externals: ($) => [
    $._eof,
    $._eol,
    $._indent,
    $._dedent,
    $.task_marker_default,
    $.task_marker_active,
    $.task_marker_done,
    $.task_marker_cancelled,
    $.list_item_marker,
  ],
  extras: () => [/ /, /\t/, /\n/, /\./, /,/],
  rules: {
    // document root
    document: ($) =>
      seq(
        optional(choice($.document_title_basic, $.document_meta)),
        repeat(
          choice(
            $.heading_1,
            $.heading_2,
            $.heading_3,
            $.heading_4,
            $.heading_5,
            $.heading_6,
            $.section,
            $.list_item,
            $._task,
            $.code_block,
            $.text_line
          )
        )
      ),

    // document title (basic)
    document_title_basic_marker: () => token(/=/),
    document_title_basic: ($) =>
      prec.right(
        seq($.document_title_basic_marker, $.text_to_eol, choice($._eol, $._eof))
      ),

    // document meta
    document_meta: ($) =>
      seq(
        token.immediate(prec(1, /@document/)),
        repeat($.document_meta_field),
        token(/@end/)
      ),
    document_meta_field: ($) =>
      seq(
        field("key", $.document_meta_field_key),
        token.immediate(":"),
        field("value", $.document_meta_field_value),
        $._eol
      ),
    document_meta_field_key: () => token(/[a-zA-Z0-9_]+/),
    document_meta_field_value: () => token(/[^\n]+/),

    // comments
    _comment_marker: () => choice(token(/# /), token(/-- /)),
    comment: ($) => seq($._comment_marker, /[^\n]+/),

    // emphasis
    bold: () => token(/\*[^*\n]+\*[\.,]?/),
    italic: () => token(/\/[^/\n]+\/[\.,]?/),
    underline: () => token(/_[^_\n]+_[\.,]?/),

    // basic types
    string: () => token(prec(1, /"[^"]*"/)),
    number: () => token(prec(1, /\d+/)),
    ticket: () => token(prec(1, /[A-Z]+-\d+:?/)),

    // datetime types
    date: () =>
      choice(
        token(prec(2, /\d{4}-\d{2}-\d{2}/)),
        token(prec(2, /\d{4}.\d{2}.\d{2}/)),
        token(prec(2, /\d{4}\/\d{2}\/\d{2}/))
      ),
    daterange: ($) => seq($.date, token(/-/), $.date),
    time: () =>
      choice(token(prec(2, /\d{2}:\d{2}/)), token(prec(2, /\d{2}:\d{2}:\d{2}/))),
    timerange: ($) => seq($.time, token(/-/), $.time),
    datetime: ($) => prec.left(1, seq($.date, $.time)),
    datetimerange: ($) =>
      choice(
        seq($.datetime, token(/-/), $.datetime),
        seq($.datetime, token(/-/), $.time)
      ),

    // tags
    tag_positive: () => token(prec(1, /\+[^+\s][^\s]+/)), // +tag
    tag_negative: () => token(prec(1, /-[^-\s][^\s]+/)), // -tag
    tag_hash: () => token(prec(1, /#[^#\s][^\s]+/)), // #tag
    tag_context: () => token(prec(1, /@[^@\s][^\s]+/)), // @tag
    tag_danger: () => token(prec(1, /![^!\s][^\s]+/)), // !tag
    tag_identifier: () => token(prec(1, /\$[^\$\s][^\s]+/)), // $tag

    // headings
    heading_1_marker: () => token(/\*/),
    heading_2_marker: () => token(/\*\*/),
    heading_3_marker: () => token(/\*\*\*/),
    heading_4_marker: () => token(/\*\*\*\*/),
    heading_5_marker: () => token(/\*\*\*\*\*/),
    heading_6_marker: () => token(/\*\*\*\*\*\*/),
    heading_1: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.heading_1_marker),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            seq(
              choice(
                $.heading_2,
                $.heading_3,
                $.heading_4,
                $.heading_5,
                $.heading_6,
                $.section,
                $.code_block,
                $.list_item,
                $._task,
                $.text_line
              ),
              optional($.paragraph_break)
            )
          )
        )
      ),
    heading_2: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.heading_2_marker),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            seq(
              choice(
                $.heading_3,
                $.heading_4,
                $.heading_5,
                $.heading_6,
                $.section,
                $.code_block,
                $.list_item,
                $._task,
                $.text_line
              ),

              optional($.paragraph_break)
            )
          )
        )
      ),
    heading_3: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.heading_3_marker),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            seq(
              choice(
                $.heading_4,
                $.heading_5,
                $.heading_6,
                $.section,
                $.code_block,
                $.list_item,
                $._task,
                $.text_line
              ),
              optional($.paragraph_break)
            )
          )
        )
      ),
    heading_4: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.heading_4_marker),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            seq(
              choice(
                $.heading_5,
                $.heading_6,
                $.section,
                $.code_block,
                $.list_item,
                $._task,
                $.text_line
              ),
              optional($.paragraph_break)
            )
          )
        )
      ),
    heading_5: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.heading_5_marker),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            seq(
              choice(
                $.heading_6,
                $.section,
                $.code_block,
                $.list_item,
                $._task,
                $.text_line
              ),
              optional($.paragraph_break)
            )
          )
        )
      ),
    heading_6: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.heading_6_marker),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            seq(
              choice($.section, $.code_block, $.list_item, $._task, $.text_line),
              optional($.paragraph_break)
            )
          )
        )
      ),

    // section
    section_marker: () => token(/>/),
    section: ($) =>
      prec.right(
        seq(
          $.section_marker,
          $.text_to_eol,
          choice($._eol, $._eof),
          repeat(
            seq(
              choice($.code_block, $.list_item, $._task, $.text_line),
              optional($.paragraph_break)
            )
          )
        )
      ),

    // tasks
    _task: ($) =>
      choice($.task_default, $.task_active, $.task_done, $.task_cancelled),
    task_default: ($) =>
      seq($.task_marker_default, $.text_line, optional($._task_children)),
    task_active: ($) =>
      seq($.task_marker_active, $.text_line, optional($._task_children)),
    task_done: ($) =>
      seq($.task_marker_done, $.text_to_eol, optional($._task_children)),
    task_cancelled: ($) =>
      seq($.task_marker_cancelled, $.text_to_eol, optional($._task_children)),
    _task_children: ($) =>
      seq(
        $._indent,
        repeat1(choice($.task_session, $.task_schedule, $._task, $.text_line)),
        choice($._dedent, $._eof)
      ),
    task_session: ($) =>
      seq(
        token(/Session:/),
        choice($.datetime, $.datetimerange),
        choice($._eol, $._eof)
      ),
    task_schedule: ($) =>
      seq(
        token(/Schedule:/),
        choice($.date, $.daterange, $.datetime, $.datetimerange),
        choice($._eol, $._eof)
      ),

    // list items
    list_item: ($) =>
      seq(
        $.list_item_marker,
        $.text_line,
        // FIXME
        optional($._list_item_children)
      ),
    _list_item_children: ($) =>
      seq(
        $._indent,
        repeat1(choice($.list_item, $.text_line)),
        choice($._dedent, $._eof)
      ),

    // inline code
    inline_code: () => token(prec(1, /`[^`]+`/)),

    // code blocks
    code_block_language: () => token.immediate(/[a-z]+/),
    code_block_content: ($) => seq(repeat1($._raw_text_line)),
    code_block_start: ($) =>
      seq(
        token(prec(1, "@code")),
        optional(seq(token.immediate(/\s/), $.code_block_language)),
        "\n"
      ),
    code_block_end: () => token("@end"),
    code_block: ($) =>
      seq(
        $.code_block_start,
        optional($.code_block_content),
        $.code_block_end,
        choice(/\n/, $._eof)
      ),

    // inline element & text line
    _inline: ($) =>
      choice(
        // emphasis
        $.bold,
        $.italic,
        $.underline,
        // basic types
        $.string,
        $.number,
        $.ticket,
        // datetime types
        $.datetimerange,
        $.datetime,
        $.timerange,
        $.time,
        $.daterange,
        $.date,
        // tags
        $.tag_positive,
        $.tag_negative,
        $.tag_hash,
        $.tag_context,
        $.tag_danger,
        $.tag_identifier,
        // inline code
        $.inline_code,
        // comments
        $.comment,
        // text
        $._text
      ),
    text_to_eol: () => token(/[^\n]+/),
    text_line: ($) => prec.left(seq(repeat1($._inline), choice($._eol, $._eof))),
    _text: () => prec.left(-100, repeat1(token(/[^\s]+/))),
    _raw_text_line: ($) =>
      prec.left(seq(repeat1($._text), choice($._eol, $._eof))),
    paragraph_break: () => /\n\n/,
  },
});
