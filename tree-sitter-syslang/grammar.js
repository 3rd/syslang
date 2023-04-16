// @ts-nocheck
/* eslint-disable */

module.exports = grammar({
  name: "syslang",
  externals: ($) => [
    $._eof,
    $._eol,
    $._breakout,
    $._indent,
    $._dedent,
    $.task_marker_default,
    $.task_marker_active,
    $.task_marker_done,
    $.task_marker_cancelled,
    $.list_item_marker,
    $.bold_start,
    $.bold_end,
    $.italic_start,
    $.italic_end,
    $.underline_start,
    $.underline_end,
    $.inline_code_start,
    $.inline_code_end,
  ],
  // extras: () => [/ /, /\t/, /\n/, /\./, /,/],
  extras: () => [/ /, /\t/, /\n/],
  rules: {
    // document root
    document: ($) =>
      seq(
        optional(choice($.document_title_basic, $.document_meta)),
        repeat(
          seq(
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
            ),
            optional($._breakout)
          )
        ),
        optional($._eof)
      ),

    // document title (basic)
    document_title_basic_marker: () => token(/=/),
    document_title_basic: ($) => seq($.document_title_basic_marker, / /, $.text_to_eol, choice($._eol, $._eof)),

    // document meta
    document_meta: ($) => seq(token.immediate(/@document/), repeat($.document_meta_field), token(/@end/)),
    document_meta_field: ($) =>
      seq(
        field("key", $.document_meta_field_key),
        token.immediate(": "),
        field("value", $.document_meta_field_value),
        $._eol
      ),
    document_meta_field_key: () => token(/[\w]+/),
    document_meta_field_value: () => token(/[^\n]+/),

    // comments
    _comment_marker: () => choice(token(/# /), token(/-- /)),
    comment: ($) => seq($._comment_marker, /[^\n]+/),

    // emphasis
    bold_content: () => token(/[^\*\n]+/),
    bold: ($) => seq($.bold_start, $.bold_content, $.bold_end),
    italic_content: () => token(/[^\/\n]+/),
    italic: ($) => seq($.italic_start, $.italic_content, $.italic_end),
    underline_content: () => token(/[^_\n]+/),
    underline: ($) => seq($.underline_start, $.underline_content, $.underline_end),
    _emphasis: ($) => seq(choice($.bold, $.italic, $.underline), optional(token.immediate(/[.,]/))),

    // basic types
    string: () => choice(token(prec(1, /"[^"]*"/)), token(prec(1, /'[^']*'/))),
    number: () => token(prec(1, /-?\d+(\.\d+)?[,\.;\/]?/)),
    ticket: () => token(prec(1, /[A-Z]+-\d+:?/)),

    // datetime types
    date: () =>
      choice(
        token(prec(1, /\d{4}-\d{2}-\d{2}/)),
        token(prec(1, /\d{4}.\d{2}.\d{2}/)),
        token(prec(1, /\d{4}\/\d{2}\/\d{2}/))
      ),
    daterange: ($) => prec(1, seq($.date, token(/-/), $.date)),
    time: () => choice(token(prec(1, /\d{2}:\d{2}/)), token(prec(1, /\d{2}:\d{2}:\d{2}/))),
    timerange: ($) => prec(1, seq($.time, token(/-/), $.time)),
    datetime: ($) => prec(1, seq($.date, $.time)),
    datetimerange: ($) => prec(1, choice(seq($.datetime, token(/-/), $.datetime), seq($.datetime, token(/-/), $.time))),

    // tags
    tag_positive: () => token(/\+\pL[^+\s]*/), // +tag
    tag_negative: () => token(/-\pL[^\s]*/), // -tag
    tag_hash: () => token(/#\pL[^#\s]*/), // #tag
    tag_context: () => token(/@\pL[^@\s]*/), // @tag
    tag_danger: () => token(/!\pL[^!\s]*/), // !tag
    tag_identifier: () => token(/\$\pL[^\$\s]*/), // $tag

    // headings
    heading_1_marker: () => token("*"),
    heading_2_marker: () => token("**"),
    heading_3_marker: () => token("***"),
    heading_4_marker: () => token("****"),
    heading_5_marker: () => token("*****"),
    heading_6_marker: () => token("******"),
    heading_1: ($) =>
      prec.right(
        seq(
          seq(field("marker", $.heading_1_marker), token.immediate(" "), $.text_to_eol, choice($._eol, $._eof)),
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
              )
            )
          )
        )
      ),
    heading_2: ($) =>
      prec.right(
        seq(
          seq(field("marker", $.heading_2_marker), token.immediate(" "), $.text_to_eol, choice($._eol, $._eof)),
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
              )
            )
          )
        )
      ),
    heading_3: ($) =>
      prec.right(
        seq(
          seq(field("marker", $.heading_3_marker), token.immediate(" "), $.text_to_eol, choice($._eol, $._eof)),
          repeat(
            seq(
              choice($.heading_4, $.heading_5, $.heading_6, $.section, $.code_block, $.list_item, $._task, $.text_line)
            )
          )
        )
      ),
    heading_4: ($) =>
      prec.right(
        seq(
          seq(field("marker", $.heading_4_marker), token.immediate(" "), $.text_to_eol, choice($._eol, $._eof)),
          repeat(choice($.heading_5, $.heading_6, $.section, $.code_block, $.list_item, $._task, $.text_line))
        )
      ),
    heading_5: ($) =>
      prec.right(
        seq(
          seq(field("marker", $.heading_5_marker), token.immediate(" "), $.text_to_eol, choice($._eol, $._eof)),
          repeat(choice($.heading_6, $.section, $.code_block, $.list_item, $._task, $.text_line))
        )
      ),
    heading_6: ($) =>
      prec.right(
        seq(
          seq(field("marker", $.heading_6_marker), token.immediate(" "), $.text_to_eol, choice($._eol, $._eof)),
          repeat(choice($.section, $.code_block, $.list_item, $._task, $.text_line))
        )
      ),

    // section
    section_marker: () => token(/>/),
    _section_children: ($) =>
      seq(
        $._indent,
        repeat1(choice($.task_session, $.task_schedule, $._task, $.section, $.text_line, $.list_item, $.code_block)),
        choice($._dedent, $._eof)
      ),
    section: ($) => seq($.section_marker, / /, $.text_to_eol, choice($._eol, $._eof), optional($._section_children)),

    // tasks
    _task: ($) => choice($.task_default, $.task_active, $.task_done, $.task_cancelled),
    task_default: ($) => seq($.task_marker_default, / /, $.text_line, optional($._task_children)),
    task_active: ($) => seq($.task_marker_active, / /, $.text_line, optional($._task_children)),
    task_done: ($) => seq($.task_marker_done, / /, $.text_to_eol, optional($._task_children)),
    task_cancelled: ($) => seq($.task_marker_cancelled, / /, $.text_to_eol, optional($._task_children)),
    _task_children: ($) =>
      seq(
        $._indent,
        repeat1(choice($.task_session, $.task_schedule, $._task, $.section, $.text_line, $.list_item, $.code_block)),
        choice($._dedent, $._eof)
      ),
    task_session: ($) => seq("Session: ", choice($.datetime, $.datetimerange), choice($._eol, $._eof)),
    task_schedule: ($) =>
      seq(token("Schedule: "), choice($.date, $.daterange, $.datetime, $.datetimerange), choice($._eol, $._eof)),

    // list items
    list_item_label: ($) => $.text,
    list_item_label_marker: () => /-/,
    list_item: ($) =>
      choice(
        seq(
          $.list_item_marker,
          $.list_item_label,
          $.list_item_label_marker,
          repeat1(choice($._inline, $.list_item_label_marker)),
          choice($._eol, $._eof),
          optional($._list_item_children)
        ),
        seq($.list_item_marker, $.text_line, optional($._list_item_children))
      ),
    _list_item_children: ($) => seq($._indent, repeat1(choice($.list_item, $.text_line)), choice($._dedent, $._eof)),

    // inline code
    inline_code_content: () => token(/[^`\n]+/),
    inline_code: ($) => seq($.inline_code_start, $.inline_code_content, $.inline_code_end),

    // code blocks
    code_block_language: () => token.immediate(/[a-z]+/),
    code_block_content: ($) => seq(repeat1($._raw_text_line)),
    code_block_start: ($) => seq(token("@code"), optional(seq(token.immediate(/\s/), $.code_block_language)), $._eol),
    code_block_end: () => token("@end"),
    code_block: ($) =>
      seq($.code_block_start, optional($.code_block_content), $.code_block_end, choice($._eol, $._eof)),

    // links
    external_link: () => token(/https?:\/\/\S+/),

    // labels
    // TODO: allow for more words before : by fixing task schedule/session
    // priority
    label: () => /[\w]+:/,

    // inline element & text line
    _inline: ($) =>
      choice(
        // emphasis
        $._emphasis,
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
        // links
        $.external_link,
        // comments
        $.comment,
        // text
        $.text
      ),
    text_to_eol: () => token(/[^\n]+/),
    text_line: ($) => seq(choice(seq(optional($.label), repeat1($._inline)), $.label), choice(token(/\n/), $._eof)),
    text: () => prec.right(repeat1(token(/[^\s]+/))),
    _raw_text_line: ($) => seq(repeat1($.text), choice($._eol, $._eof)),
  },
});