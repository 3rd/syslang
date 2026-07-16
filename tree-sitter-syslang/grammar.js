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
    // Range separators are external so the dash only commits when the operand
    // that follows actually completes the range (lookahead). _range_sep_date
    // accepts a bare-date tail (daterange); _range_sep_datetime requires a time
    // or a full datetime tail so "datetime - bare-date" degrades to inline text.
    $._range_sep_date,
    $._range_sep_datetime,
    // External so emitting it persists the section's own indent level as the
    // scanner baseline. A line-internal token returns without a token in outline
    // bodies (where INDENT is not valid), and tree-sitter rolls back the indent
    // bookkeeping, which made a nested section adopt its own level as its child
    // baseline and swallow same-indent siblings.
    $.section_marker,
    // A line-start "word:" immediately followed by an inline modifier or link
    // (no space), e.g. "key:*b*" or "key:[[t]]". The internal label token loses
    // here because the greedy text token matches the longer "key:*b*"; the
    // scanner emits this only in that exact shape so text keeps ':' everywhere
    // else (mid-line "word: value" stays plain text). Aliased to `label`.
    $._inline_label,
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
              $._non_outline_line_elements,
            ),
            optional($._breakout),
          ),
        ),
        optional($._eof),
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
        // A bare comment line ("-- " with no body): the inline comment requires
        // a body, so this document-level form keeps an empty marker line from
        // erroring. Non-empty comment lines still parse as (text_line (comment)).
        alias($._empty_comment, $.comment),
        $.text_line,
        $.horizontal_rule,
        $.double_horizontal_rule,
        $.heading,
      ),

    // document title (basic)
    // The emoji marker accepts full grapheme sequences, not just a single
    // codepoint: a base pictographic followed by skin-tone modifiers, VS16, and
    // ZWJ-joined pictographics, or a two-codepoint regional-indicator flag.
    document_title_basic_marker: () =>
      choice(
        token(/=/),
        token(/\p{Regional_Indicator}\p{Regional_Indicator}/),
        token(
          /\p{Extended_Pictographic}(\p{Emoji_Modifier}|\u{FE0F}|\u{200D}\p{Extended_Pictographic})*/,
        ),
      ),
    document_title_basic: ($) =>
      seq(
        $.document_title_basic_marker,
        / /,
        $.text_to_eol,
        choice($._eol, $._eof),
      ),

    // document meta
    document_meta: ($) =>
      seq(
        token.immediate(/@meta/),
        repeat($.document_meta_field),
        token(/@end/),
        // @end must be followed by a line end so it is not the rule's final
        // symbol; otherwise tree-sitter treats a missing @end at EOF (after a
        // trailing newline) as insertable and accepts an unterminated block.
        choice($._eol, $._eof),
      ),
    document_meta_field: ($) =>
      seq(
        field("key", $.document_meta_field_key),
        token.immediate(":"),
        optional(
          seq(
            token.immediate(/[ \t]+/),
            field("value", $.document_meta_field_value),
          ),
        ),
        $._eol,
      ),
    document_meta_field_key: () => token(/[\w]+/),
    document_meta_field_value: () => token(/[^\n]+/),

    // comments
    _comment_marker: () => token(/-- /),
    comment: ($) => seq($._comment_marker, /[^\n]+/),
    _empty_comment: ($) => seq($._comment_marker, choice($._eol, $._eof)),

    // emphasis
    bold_content: () => token(/[^\*]+/),
    bold: ($) => seq($.bold_start, $.bold_content, $.bold_end),
    italic_content: () => token(/[^\/]+/),
    italic: ($) => seq($.italic_start, $.italic_content, $.italic_end),
    underline_content: () => token(/[^_]+/),
    underline: ($) =>
      seq($.underline_start, $.underline_content, $.underline_end),
    _emphasis: ($) =>
      seq(
        choice($.bold, $.italic, $.underline),
        optional(token.immediate(/[.,]/)),
      ),

    // basic types
    string: () => token(prec(1, /"[^"]*"/)),
    number: () => token(prec(1, /-?\d+(\.\d+)?[,\.;\/]?/)),
    ticket: () => token(prec(1, /[A-Z]+-\d+:?/)),
    compound_identifier: () => token(prec(2, /\d+-[a-zA-Z][\w-]*/)), // matches "42-tag" but not dates

    // datetime types
    date: () =>
      choice(
        token(prec(1, /\d{4}-\d{2}-\d{2}/)),
        token(prec(1, /\d{4}\.\d{2}\.\d{2}/)),
        token(prec(1, /\d{4}\/\d{2}\/\d{2}/)),
      ),
    daterange: ($) => prec(1, seq($.date, $._range_sep_date, $.date)),
    time: () =>
      choice(
        token(prec(1, /\d{2}:\d{2}/)),
        token(prec(1, /\d{2}:\d{2}:\d{2}/)),
      ),
    timerange: ($) => prec(1, seq($.time, $._range_sep_datetime, $.time)),
    datetime: ($) => prec(1, seq($.date, $.time)),
    datetimerange: ($) =>
      prec(
        1,
        choice(
          seq($.datetime, $._range_sep_datetime, $.datetime),
          seq($.datetime, $._range_sep_datetime, $.time),
        ),
      ),

    // tags
    tag_positive: () => token(/\+[\pL\pN][^+\s]*/), // +tag
    tag_negative: () => token(/-[\pL\pN][^\s]*/), // -tag
    tag_hash: () => token(/#[\pL\pN][^#\s]*/), // #tag
    tag_context: () => token(/@[\pL\pN][^@\s]*/), // @tag
    tag_danger: () => token(/![\pL\pN][^!\s]*/), // !tag
    tag_identifier: () => token(/\$[\pL\pN][^\$\s]*/), // $tag

    // outlines
    // Markers include the required trailing space so a marker not followed by a
    // space (e.g. "*(foo)") never tokenizes as a marker and degrades to text
    // instead of erroring. The space is part of the marker token.
    outline_1_marker: () => token("* "),
    outline_2_marker: () => token("** "),
    outline_3_marker: () => token("*** "),
    outline_4_marker: () => token("**** "),
    outline_5_marker: () => token("***** "),
    outline_6_marker: () => token("****** "),
    outline_1: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_1_marker),
            optional($.text_to_eol),
            choice($._eol, $._eof),
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
                $._non_outline_line_elements,
              ),
            ),
          ),
        ),
      ),
    outline_2: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_2_marker),
            optional($.text_to_eol),
            choice($._eol, $._eof),
          ),
          repeat(
            seq(
              choice(
                //
                $.outline_3,
                $.outline_4,
                $.outline_5,
                $.outline_6,
                $._non_outline_line_elements,
              ),
            ),
          ),
        ),
      ),
    outline_3: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_3_marker),
            optional($.text_to_eol),
            choice($._eol, $._eof),
          ),
          repeat(
            seq(
              choice(
                //
                $.outline_4,
                $.outline_5,
                $.outline_6,
                $._non_outline_line_elements,
              ),
            ),
          ),
        ),
      ),
    outline_4: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_4_marker),
            optional($.text_to_eol),
            choice($._eol, $._eof),
          ),
          repeat(
            choice(
              //
              $.outline_5,
              $.outline_6,
              $._non_outline_line_elements,
            ),
          ),
        ),
      ),
    outline_5: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_5_marker),
            optional($.text_to_eol),
            choice($._eol, $._eof),
          ),
          repeat(
            choice(
              //
              $.outline_6,
              $._non_outline_line_elements,
            ),
          ),
        ),
      ),
    outline_6: ($) =>
      prec.right(
        seq(
          seq(
            field("marker", $.outline_6_marker),
            optional($.text_to_eol),
            choice($._eol, $._eof),
          ),
          repeat(
            choice(
              //
              $._non_outline_line_elements,
            ),
          ),
        ),
      ),

    // headings
    heading_1_marker: () => token(/# /),
    heading_1: ($) =>
      seq($.heading_1_marker, optional($.text_to_eol), choice($._eol, $._eof)),
    heading_2_marker: () => token(/## /),
    heading_2: ($) =>
      seq($.heading_2_marker, optional($.text_to_eol), choice($._eol, $._eof)),
    heading_3_marker: () => token(/### /),
    heading_3: ($) =>
      seq($.heading_3_marker, optional($.text_to_eol), choice($._eol, $._eof)),
    heading_4_marker: () => token(/#### /),
    heading_4: ($) =>
      seq($.heading_4_marker, optional($.text_to_eol), choice($._eol, $._eof)),
    heading_5_marker: () => token(/##### /),
    heading_5: ($) =>
      seq($.heading_5_marker, optional($.text_to_eol), choice($._eol, $._eof)),
    heading_6_marker: () => token(/###### /),
    heading_6: ($) =>
      seq($.heading_6_marker, optional($.text_to_eol), choice($._eol, $._eof)),
    heading: ($) =>
      choice(
        $.heading_1,
        $.heading_2,
        $.heading_3,
        $.heading_4,
        $.heading_5,
        $.heading_6,
      ),

    // section
    // section_marker is defined in externals so the scanner can record the
    // section's indent level when it fires (see scanner.c scan_section_marker).
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
            $.code_block,
          ),
        ),
        choice($._dedent, $._eof),
      ),
    section: ($) =>
      seq(
        $.section_marker,
        / /,
        optional($.text_to_eol),
        choice($._eol, $._eof),
        optional($._section_children),
      ),

    // banner
    banner_marker: () => token(/\|/),
    banner: ($) =>
      seq($.banner_marker, / /, optional($.text_to_eol), choice($._eol, $._eof)),

    // diviers
    horizontal_rule: () => token(/---/),
    double_horizontal_rule: () => token(/===/),

    // tasks
    _task: ($) =>
      choice($.task_default, $.task_active, $.task_done, $.task_cancelled),
    task_default: ($) =>
      prec.right(seq($.task_marker_default, / /, optional($.text_line), optional($._task_children))),
    task_active: ($) =>
      prec.right(seq($.task_marker_active, / /, optional($.text_line), optional($._task_children))),
    task_done: ($) =>
      prec.right(seq($.task_marker_done, / /, optional($.text_to_eol), optional($._task_children))),
    task_cancelled: ($) =>
      prec.right(
        seq(
          $.task_marker_cancelled,
          / /,
          optional($.text_to_eol),
          optional($._task_children),
        ),
      ),
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
            $.image,
            $.text_line,
            $.list_item,
            $.code_block,
            $.label_line,
          ),
        ),
        choice($._dedent, $._eof),
      ),
    task_session: ($) =>
      seq(
        "Session: ",
        choice($.date, $.daterange, $.datetime, $.datetimerange),
        optional(alias($._task_annotation, $.text_to_eol)),
        choice($._eol, $._eof),
      ),
    // Trailing human annotation after a session/completion operand. It must not
    // begin with a digit or '-' so a time/date continuation (keeping the operand
    // maximal) or a "- datetime" range separator is never swallowed; a plain
    // greedy text_to_eol here ends past those and would win the lex by length.
    _task_annotation: () => token(/[^\s\d\-][^\n]*/),
    task_recurrence: () => token(/@[^\s]+/),
    task_schedule: ($) =>
      seq(
        token("Schedule: "),
        choice($.date, $.daterange, $.datetime, $.datetimerange),
        optional($.task_recurrence),
        choice($._eol, $._eof),
      ),
    task_completion: ($) =>
      seq(
        token("Done: "),
        choice($.date, $.datetime),
        optional(alias($._task_annotation, $.text_to_eol)),
        choice($._eol, $._eof),
      ),

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
            optional($._list_item_children),
          ),
          seq(
            $.list_item_marker,
            optional($.text_line),
            optional($._list_item_children),
          ),
        ),
      ),
    _list_item_children: ($) =>
      seq(
        $._indent,
        repeat1(choice($.list_item, $.image, $.text_line, $.code_block)),
        choice($._dedent, $._eof),
      ),

    // images
    image: ($) =>
      seq(
        //
        $.image_start,
        $.image_alt,
        $.image_separator,
        $.image_url,
        $.image_end,
      ),

    // internal links
    internal_link: ($) =>
      seq($.internal_link_start, $.internal_link_target, $.internal_link_end),

    // inline code
    inline_code_content: () => token(/[^`\n]+/),
    inline_code: ($) =>
      seq($.inline_code_start, $.inline_code_content, $.inline_code_end),

    // code blocks
    code_block_language: () => token.immediate(/[a-z]+/),
    // @end closes the block only when it's on its own line: equal lexical
    // precedence with code_block_line makes the longest match win (so
    // "@end fake" stays content), and declaring code_block_end first wins
    // the exact-"@end" tie via rule order.
    code_block_end: () => token(prec(2, /[ \t]*@end/)),
    code_block_line: () => token(prec(2, /[^\n]+/)),
    code_block_content: ($) =>
      repeat1(seq($.code_block_line, choice($._eol, $._eof))),
    code_block_start: ($) =>
      seq(
        token("@code"),
        optional(seq(token.immediate(/\s/), $.code_block_language)),
        $._eol,
      ),
    code_block: ($) =>
      seq(
        $.code_block_start,
        optional($.code_block_content),
        $.code_block_end,
        choice($._eol, $._eof),
      ),

    // links
    external_link: () => token(/https?:\/\/\S+/),

    // labels
    // TODO: allow for more words before : by fixing task schedule/session
    // priority
    label: () => /[\w\-\/]+:/,

    // inline element & text line
    _inline: ($) =>
      choice(
        $._emphasis,
        $.text,
        $.inline_code,
        $.string,
        $.compound_identifier,
        $.number,
        $.ticket,
        $.datetimerange,
        $.datetime,
        $.timerange,
        $.time,
        $.daterange,
        $.date,
        $.tag_positive,
        $.tag_negative,
        $.tag_hash,
        $.tag_context,
        $.tag_danger,
        $.tag_identifier,
        $.external_link,
        $.internal_link,
        $.comment,
        token("("),
        token(")"),
      ),
    text_to_eol: () => token(/[^\n]+/),
    text_line: ($) =>
      seq(
        choice(
          seq(
            optional(choice($.label, alias($._inline_label, $.label))),
            repeat1($._inline),
          ),
          $.label,
        ),
        choice(token(/\n/), $._eof),
      ),
    // Boundaries are the exact grammar extras (space, tab, newline) plus '(' ')'.
    // Using an explicit set instead of \s means other control-space characters
    // like form feed (\x0c) or vertical tab (\x0b) are absorbed into the text run
    // rather than becoming unlexable gaps that error out the line. ':' stays IN
    // text so mid-line colons ("word: value") do not fragment; the line-start
    // "key:*b*" label case is handled by the scanner's inline-label token.
    text: () => prec.right(repeat1(token(/[^ \t\n()]+/))),
    _raw_text_line: ($) => seq(repeat1($.text), choice($._eol, $._eof)),
  },
});
