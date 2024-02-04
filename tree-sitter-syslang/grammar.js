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
    $.image_start,
    $.image_alt,
    $.image_separator,
    $.image_url,
    $.image_end,
    $.internal_link_start,
    $.internal_link_target,
    $.internal_link_end,
    $.label_line,
  ],
  extras: () => [/ /, /\t/, /\n/],
  rules: {
    // document root
    document: ($) =>
      seq(
        optional(choice($.document_title_basic, $.document_meta)),
        repeat(
          seq(
            choice(
              $.outline_1,
              $.outline_2,
              $.outline_3,
              $.outline_4,
              $.outline_5,
              $.outline_6,
              $._non_outline_line_elements
            ),
            optional($._breakout)
          )
        ),
        optional($._eof)
      ),

    _non_outline_line_elements: ($) =>
      choice(
        //
        $._task,
        $.banner,
        $.code_block,
        $.image,
        $.list_item,
        $.section,
        $.label_line,
        $.text_line,
        $.horizontal_rule,
        $.double_horizontal_rule,
        $.heading
      ),

    // document title (basic)
    document_title_basic_marker: () => choice(token(/=/), token(/\p{Extended_Pictographic}/)),
    document_title_basic: ($) =>
      seq($.document_title_basic_marker, / /, $.text_to_eol, choice($._eol, $._eof)),

    // document meta
    document_meta: ($) => seq(token.immediate(/@meta/), repeat($.document_meta_field), token(/@end/)),
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
    _comment_marker: () => token(/-- /),
    comment: ($) => seq($._comment_marker, /[^\n]+/),

    // emphasis
    bold_content: () => token(/[^\*]+/),
    bold: ($) => seq($.bold_start, $.bold_content, $.bold_end),
    italic_content: () => token(/[^\/]+/),
    italic: ($) => seq($.italic_start, $.italic_content, $.italic_end),
    underline_content: () => token(/[^_]+/),
    underline: ($) => seq($.underline_start, $.underline_content, $.underline_end),
    _emphasis: ($) => seq(choice($.bold, $.italic, $.underline), optional(token.immediate(/[.,]/))),

    // basic types
    string: () => choice(token(prec(1, /"[^"]*"/))),
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
    datetimerange: ($) =>
      prec(1, choice(seq($.datetime, token(/-/), $.datetime), seq($.datetime, token(/-/), $.time))),

    // tags
    tag_positive: () => token(/\+\pL[^+\s]*/), // +tag
    tag_negative: () => token(/-\pL[^\s]*/), // -tag
    tag_hash: () => token(/#\pL[^#\s]*/), // #tag
    tag_context: () => token(/@\pL[^@\s]*/), // @tag
    tag_danger: () => token(/!\pL[^!\s]*/), // !tag
    tag_identifier: () => token(/\$\pL[^\$\s]*/), // $tag

    // outlines
    outline_1_marker: () => token("*"),
    outline_2_marker: () => token("**"),
    outline_3_marker: () => token("***"),
    outline_4_marker: () => token("****"),
    outline_5_marker: () => token("*****"),
    outline_6_marker: () => token("******"),
    outline_1: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_1_marker),
            token.immediate(" "),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            seq(
              choice(
                //
                $.outline_2,
                $.outline_3,
                $.outline_4,
                $.outline_5,
                $.outline_6,
                $._non_outline_line_elements
              )
            )
          )
        )
      ),
    outline_2: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_2_marker),
            token.immediate(" "),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            seq(
              choice(
                //
                $.outline_3,
                $.outline_4,
                $.outline_5,
                $.outline_6,
                $._non_outline_line_elements
              )
            )
          )
        )
      ),
    outline_3: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_3_marker),
            token.immediate(" "),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            seq(
              choice(
                //
                $.outline_4,
                $.outline_5,
                $.outline_6,
                $._non_outline_line_elements
              )
            )
          )
        )
      ),
    outline_4: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_4_marker),
            token.immediate(" "),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            choice(
              //
              $.outline_5,
              $.outline_6,
              $._non_outline_line_elements
            )
          )
        )
      ),
    outline_5: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_5_marker),
            token.immediate(" "),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            choice(
              //
              $.outline_6,
              $._non_outline_line_elements
            )
          )
        )
      ),
    outline_6: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_6_marker),
            token.immediate(" "),
            $.text_to_eol,
            choice($._eol, $._eof)
          ),
          repeat(
            choice(
              //
              $._non_outline_line_elements
            )
          )
        )
      ),

    // headings
    heading_1_marker: () => token(/# /),
    heading_1: ($) => seq($.heading_1_marker, $.text_to_eol, choice($._eol, $._eof)),
    heading_2_marker: () => token(/## /),
    heading_2: ($) => seq($.heading_2_marker, $.text_to_eol, choice($._eol, $._eof)),
    heading_3_marker: () => token(/### /),
    heading_3: ($) => seq($.heading_3_marker, $.text_to_eol, choice($._eol, $._eof)),
    heading_4_marker: () => token(/#### /),
    heading_4: ($) => seq($.heading_4_marker, $.text_to_eol, choice($._eol, $._eof)),
    heading_5_marker: () => token(/##### /),
    heading_5: ($) => seq($.heading_5_marker, $.text_to_eol, choice($._eol, $._eof)),
    heading_6_marker: () => token(/###### /),
    heading_6: ($) => seq($.heading_6_marker, $.text_to_eol, choice($._eol, $._eof)),
    heading: ($) => choice($.heading_1, $.heading_2, $.heading_3, $.heading_4, $.heading_5, $.heading_6),

    // section
    section_marker: () => token(/>/),
    _section_children: ($) =>
      seq(
        $._indent,
        repeat1(
          choice(
            //
            $._task,
            $.section,
            $.text_line,
            $.list_item,
            $.image,
            $.code_block
          )
        ),
        choice($._dedent, $._eof)
      ),
    section: ($) =>
      seq($.section_marker, / /, $.text_to_eol, choice($._eol, $._eof), optional($._section_children)),

    // banner
    banner_marker: () => token(/\|/),
    banner: ($) => seq($.banner_marker, / /, $.text_to_eol, choice($._eol, $._eof)),

    // diviers
    horizontal_rule: ($) => seq(token(/---/), choice($._eol, $._eof)),
    double_horizontal_rule: ($) => seq(token(/===/), choice($._eol, $._eof)),

    // tasks
    _task: ($) => choice($.task_default, $.task_active, $.task_done, $.task_cancelled),
    task_default: ($) => seq($.task_marker_default, / /, $.text_line, optional($._task_children)),
    task_active: ($) => seq($.task_marker_active, / /, $.text_line, optional($._task_children)),
    task_done: ($) => seq($.task_marker_done, / /, $.text_to_eol, optional($._task_children)),
    task_cancelled: ($) => seq($.task_marker_cancelled, / /, $.text_to_eol, optional($._task_children)),
    _task_children: ($) =>
      seq(
        $._indent,
        repeat1(
          choice(
            $.task_session,
            $.task_schedule,
            $.task_completion,
            $._task,
            $.section,
            $.banner,
            $.text_line,
            $.list_item,
            $.code_block,
            $.label_line
          )
        ),
        choice($._dedent, $._eof)
      ),
    task_session: ($) => seq("Session: ", choice($.datetime, $.datetimerange), choice($._eol, $._eof)),
    task_recurrence: () => token(/@[^\s]+/),
    task_schedule: ($) =>
      seq(
        token("Schedule: "),
        choice($.date, $.daterange, $.datetime, $.datetimerange),
        optional($.task_recurrence),
        choice($._eol, $._eof)
      ),
    task_completion: ($) => seq(token("Done: "), $.datetime, choice($._eol, $._eof)),

    // list items
    list_item_label: ($) => repeat1($._inline),
    list_item_label_marker: () => /-/,
    list_item: ($) =>
      prec.right(
        choice(
          seq(
            $.list_item_marker,
            $.list_item_label,
            $.list_item_label_marker,
            repeat1(choice($._inline, $.list_item_label_marker)),
            choice($._eol, $._eof),
            optional($._list_item_children)
          ),
          seq($.list_item_marker, optional($.text_line), optional($._list_item_children))
        )
      ),
    _list_item_children: ($) =>
      seq($._indent, repeat1(choice($.list_item, $.text_line, $.code_block)), choice($._dedent, $._eof)),

    // images
    image: ($) =>
      seq(
        //
        $.image_start,
        $.image_alt,
        $.image_separator,
        $.image_url,
        $.image_end
      ),

    // internal links
    internal_link: ($) => seq($.internal_link_start, $.internal_link_target, $.internal_link_end),

    // inline code
    inline_code_content: () => token(/[^`\n]+/),
    inline_code: ($) => seq($.inline_code_start, $.inline_code_content, $.inline_code_end),

    // code blocks
    code_block_language: () => token.immediate(/[a-z]+/),
    code_block_content: ($) => seq(repeat1($._raw_text_line)),
    code_block_start: ($) =>
      seq(token("@code"), optional(seq(token.immediate(/\s/), $.code_block_language)), $._eol),
    code_block_end: () => token("@end"),
    code_block: ($) =>
      seq($.code_block_start, optional($.code_block_content), $.code_block_end, choice($._eol, $._eof)),

    // links
    external_link: () => token(/https?:\/\/\S+/),

    // labels
    // TODO: allow for more words before : by fixing task schedule/session
    // priority
    label: () => /[\w-]+:/,

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
        $.internal_link,
        // comments
        $.comment,
        // text
        $.text
      ),
    text_to_eol: () => token(/[^\n]+/),
    text_line: ($) =>
      seq(choice(seq(optional($.label), repeat1($._inline)), $.label), choice(token(/\n/), $._eof)),
    text: () => prec.right(repeat1(token(/[^\s]+/))),
    _raw_text_line: ($) => seq(repeat1($.text), choice($._eol, $._eof)),
  },
});
