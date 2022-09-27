// @ts-nocheck
/* eslint-disable */

// Tree-sitter DSL
// - $ - access other rules $.identifier
// - seq(rule1, rule2)
// - choice(rule1, rule2)
// - repeat(rule) - zero or more
// - repeat1(rule) - one or more
// - optional(rule) - zero or one
// - prec(number, rule) - define precedence
// - prec.left([number], rule) - define left associativity
// - prec.right([number], rule) - define right associativity
// - token(rule) - mark as token
// - token.immediate(rule) - mark as token if there is no whitespace
// - alias(rule, name)
// - field(name, rule)

module.exports = grammar({
  name: "syslang",
  extras: () => [/ /, /\t/, /\n/],
  externals: ($) => [$._eof],
  conflicts: ($) => [[$.document, $._inline]],
  rules: {
    document: ($) =>
      seq(
        optional(choice($.document_title_basic, $.document_meta)),
        repeat(
          choice(
            // $.paragraph_break,
            $.heading_1,
            $.heading_2,
            $.heading_3,
            $.heading_4,
            $.heading_5,
            $.heading_6,
            $.section,
            $.pipe,
            $.code_block,
            $.task_normal,
            $.task_active,
            $.task_done,
            $.task_blocked,
            $.list_item,
            $.text_line
          )
        )
      ),
    paragraph_break: () => /\n\n/,

    // document title
    // document_title_basic: ($) => seq(token(/=.*/), choice(/\n/, $._eof)),
    document_title_basic_marker: () => token(/=/),
    document_title_basic: ($) =>
      prec.right(
        seq(
          $.document_title_basic_marker,
          $.text_to_eol,
          choice(token(/\n/), $._eof)
        )
      ),

    // document meta (key value pairs)
    document_meta: ($) =>
      seq(
        token.immediate(/@document/),
        repeat($.document_meta_field),
        token(/@end/)
      ),
    document_meta_field: ($) =>
      seq(
        field("key", $.document_meta_field_key),
        token.immediate(":"),
        field("value", $.document_meta_field_value),
        token(/\n/)
      ),
    document_meta_field_key: () => token(/[a-zA-Z0-9_]+/),
    document_meta_field_value: () => token(/[^\n]+/),

    // heading
    text_to_eol: () => token(/[^\n]+/),
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
            choice(token(/\n/), $._eof)
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
                $.pipe,
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
            choice(token(/\n/), $._eof)
          ),
          repeat(
            seq(
              choice(
                $.heading_3,
                $.heading_4,
                $.heading_5,
                $.heading_6,
                $.section,
                $.pipe,
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
            choice(token(/\n/), $._eof)
          ),
          repeat(
            seq(
              choice(
                $.heading_4,
                $.heading_5,
                $.heading_6,
                $.section,
                $.pipe,
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
            choice(token(/\n/), $._eof)
          ),
          repeat(
            seq(
              choice(
                $.heading_5,
                $.heading_6,
                $.section,
                $.pipe,
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
            choice(token(/\n/), $._eof)
          ),
          repeat(
            seq(
              choice(
                $.heading_6,
                $.section,
                $.pipe,
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
            choice(token(/\n/), $._eof)
          ),
          repeat(
            seq(
              choice(
                $.section,
                $.pipe,
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

    // > Section
    section_marker: () => token(/>/),
    section: ($) =>
      prec.right(
        seq(
          $.section_marker,
          $.text_to_eol,
          choice(token(/\n/), $._eof),
          repeat(
            seq(
              choice($.code_block, $.list_item, $._task, $.pipe, $.text_line),
              optional($.paragraph_break)
            )
          )
        )
      ),

    // | Pipe
    pipe_marker: () => token(/\|/),
    pipe: ($) =>
      prec.right(
        seq(
          $.pipe_marker,
          $.text_to_eol,
          choice(token(/\n/), $._eof),
          repeat(seq(choice($.text_line), optional($.paragraph_break)))
        )
      ),

    // types
    time: () => choice(token(/\d{2}:\d{2}/), token(/\d{2}:\d{2}:\d{2}/)),
    timerange: ($) => seq($.time, token(/-/), $.time),
    date: () =>
      choice(
        token(/\d{4}-\d{2}-\d{2}/),
        token(/\d{4}.\d{2}.\d{2}/),
        token(/\d{4}\/\d{2}\/\d{2}/)
      ),
    daterange: ($) => seq($.date, token(/-/), $.date),
    datetime: ($) => prec.left(1, seq($.date, $.time)),
    datetimerange: ($) =>
      choice(
        seq($.datetime, token(/-/), $.datetime),
        seq($.datetime, token(/-/), $.time)
      ),
    ticket: () => token(/[A-Z]+-\d+:?/),

    // tasks
    _task: ($) =>
      choice($.task_normal, $.task_active, $.task_done, $.task_blocked),
    task_normal_marker: () => token(/\[ \]/),
    task_normal: ($) =>
      prec.right(
        seq($.task_normal_marker, $.text_line, repeat($._task_children))
      ),
    task_active_marker: () => token(/\[-\]/),
    task_active: ($) =>
      prec.right(
        seq($.task_active_marker, $.text_line, repeat($._task_children))
      ),
    task_done_marker: () => token(/\[x\]/),
    task_done: ($) =>
      prec.right(
        seq(
          $.task_done_marker,
          $.text_to_eol,
          choice(token(/\n/), $._eof),
          repeat($._task_children)
        )
      ),
    task_blocked_marker: () => token(/\[_\]/),
    task_blocked: ($) =>
      prec.right(
        seq(
          $.task_blocked_marker,
          $.text_to_eol,
          choice(token(/\n/), $._eof),
          repeat($._task_children)
        )
      ),
    _task_children: ($) =>
      prec.left(
        choice(
          $.task_session,
          $.task_schedule,
          $.code_block,
          $.list_item,
          $.pipe,
          $.text_line
        )
      ),
    task_session: ($) =>
      seq(
        token(/Session:/),
        choice($.datetime, $.datetimerange),
        choice(/\n/, $._eof)
      ),
    task_schedule: ($) =>
      seq(
        token(/Schedule:/),
        choice($.date, $.daterange, $.datetime, $.datetimerange),
        choice(/\n/, $._eof)
      ),

    // emphasis
    bold: () => token(/\*[^*\n]+\*[\.,]?/),
    italic: () => token(/\/[^/\n]+\/[\.,]?/),
    underline: () => token(/_[^_\n]+_[\.,]?/),

    // types
    string: () => token(/"[^"]+"/),
    number: () => token(/\d+/),

    // tags
    tag_positive: () => token(/\+\w+/),
    tag_negative: () => token(/-\w+/),
    tag_hash: () => token(/#\w+/),
    tag_context: () => token(/@\w+/),
    tag_danger: () => token(/!\w+/),
    tag_identifier: () => token(/\$\w+/),

    // TODO: link
    // [target]
    // [label](target)
    // unlabeled_link_target: () => token.immediate(/[^\]]+/),
    // labeled_link_label: () => token.immediate(/[^\]]+/),
    // labeled_link_target: () => token.immediate(/[^\)]+/),
    // unlabeled_link: ($) =>
    //   seq(
    //     token.immediate(/\[/),
    //     $.unlabeled_link_target,
    //     token.immediate(/\]/)
    //   ),
    // labeled_link: ($) =>
    //   seq(
    //     token.immediate(/\[/),
    //     $.labeled_link_label,
    //     token.immediate(/\]\(/),
    //     $.labeled_link_target,
    //     token.immediate(/\)/)
    //   ),
    _labeled_link: () => token(/\[[^\]]+\]\([^\)]+\)/),
    link: ($) => $._labeled_link,

    // plain link
    // https://example.com
    link_plain: () => token(/https?:\/\/\S+/),

    // comments
    _comment_marker: () => choice(token(/#/), token(/--/)),
    comment: ($) => seq($._comment_marker, /[^\n]+/),

    // inline code
    inline_code: () => token(/`[^`]+`/),

    // code blocks
    code_block_language: () => token.immediate(/[a-z]+/),
    code_block_content: ($) => seq(repeat1($._raw_text_line)),
    code_block_start: ($) =>
      seq(
        token("@code"),
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

    // list items
    list_item_marker: () => token(/-/),
    list_item: ($) => prec.right(seq($.list_item_marker, repeat($.text_line))),

    // atoms
    _inline: ($) =>
      choice(
        $.bold,
        $.italic,
        $.underline,
        $.datetimerange,
        $.datetime,
        $.timerange,
        $.time,
        $.daterange,
        $.date,
        $.ticket,
        $.tag_positive,
        $.tag_negative,
        $.tag_hash,
        $.tag_context,
        $.tag_danger,
        $.tag_identifier,
        $.comment,
        $.string,
        $.number,
        $.link,
        $.link_plain,
        $.inline_code,
        $._text
      ),

    // text
    text_line: ($) =>
      prec.left(seq(repeat1($._inline), choice(token(/\n/), $._eof))),
    _raw_text_line: ($) =>
      prec.left(seq(repeat1($._text), choice(token(/\n/), $._eof))),

    _text: () => prec.left(-100, repeat1(token(/[^\s]+/))),
  },
});
