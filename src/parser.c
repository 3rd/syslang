#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 17
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym_document_title_basic_marker = 1,
  aux_sym_document_meta_token1 = 2,
  aux_sym_document_meta_token2 = 3,
  anon_sym_COLON = 4,
  sym_document_meta_field_key = 5,
  aux_sym_document_meta_field_value_token1 = 6,
  aux_sym__comment_marker_token1 = 7,
  aux_sym__comment_marker_token2 = 8,
  sym_bold_content = 9,
  sym_italic_content = 10,
  sym_underline_content = 11,
  aux_sym__emphasis_token1 = 12,
  sym_string = 13,
  sym_number = 14,
  sym_ticket = 15,
  aux_sym_date_token1 = 16,
  aux_sym_date_token2 = 17,
  aux_sym_date_token3 = 18,
  aux_sym_daterange_token1 = 19,
  aux_sym_time_token1 = 20,
  aux_sym_time_token2 = 21,
  sym_tag_positive = 22,
  sym_tag_negative = 23,
  sym_tag_hash = 24,
  sym_tag_context = 25,
  sym_tag_danger = 26,
  sym_tag_identifier = 27,
  sym_heading_1_marker = 28,
  sym_heading_2_marker = 29,
  sym_heading_3_marker = 30,
  sym_heading_4_marker = 31,
  sym_heading_5_marker = 32,
  sym_heading_6_marker = 33,
  anon_sym_ = 34,
  sym_section_marker = 35,
  aux_sym_task_session_token1 = 36,
  aux_sym_task_schedule_token1 = 37,
  sym_inline_code_content = 38,
  sym_code_block_language = 39,
  anon_sym_ATcode = 40,
  aux_sym_code_block_start_token1 = 41,
  anon_sym_LF = 42,
  sym_code_block_end = 43,
  aux_sym_code_block_token1 = 44,
  sym_external_link = 45,
  aux_sym__text_token1 = 46,
  sym__eof = 47,
  sym__eol = 48,
  sym__indent = 49,
  sym__dedent = 50,
  sym_task_marker_default = 51,
  sym_task_marker_active = 52,
  sym_task_marker_done = 53,
  sym_task_marker_cancelled = 54,
  sym_list_item_marker = 55,
  sym_bold_start = 56,
  sym_bold_end = 57,
  sym_italic_start = 58,
  sym_italic_end = 59,
  sym_underline_start = 60,
  sym_underline_end = 61,
  sym_inline_code_start = 62,
  sym_inline_code_end = 63,
  sym_document = 64,
  sym_document_title_basic = 65,
  sym_document_meta = 66,
  sym_document_meta_field = 67,
  sym_document_meta_field_value = 68,
  sym__comment_marker = 69,
  sym_comment = 70,
  sym_bold = 71,
  sym_italic = 72,
  sym_underline = 73,
  sym__emphasis = 74,
  sym_date = 75,
  sym_daterange = 76,
  sym_time = 77,
  sym_timerange = 78,
  sym_datetime = 79,
  sym_datetimerange = 80,
  sym_heading_1 = 81,
  sym_heading_2 = 82,
  sym_heading_3 = 83,
  sym_heading_4 = 84,
  sym_heading_5 = 85,
  sym_heading_6 = 86,
  sym_section = 87,
  sym__task = 88,
  sym_task_default = 89,
  sym_task_active = 90,
  sym_task_done = 91,
  sym_task_cancelled = 92,
  sym__task_children = 93,
  sym_task_session = 94,
  sym_task_schedule = 95,
  sym_list_item = 96,
  sym__list_item_children = 97,
  sym_inline_code = 98,
  sym_code_block_content = 99,
  sym_code_block_start = 100,
  sym_code_block = 101,
  sym__inline = 102,
  sym_text_to_eol = 103,
  sym_text_line = 104,
  sym__text = 105,
  sym__raw_text_line = 106,
  aux_sym_document_repeat1 = 107,
  aux_sym_document_meta_repeat1 = 108,
  aux_sym_heading_1_repeat1 = 109,
  aux_sym_heading_2_repeat1 = 110,
  aux_sym_heading_3_repeat1 = 111,
  aux_sym_heading_4_repeat1 = 112,
  aux_sym_heading_5_repeat1 = 113,
  aux_sym_heading_6_repeat1 = 114,
  aux_sym_section_repeat1 = 115,
  aux_sym__task_children_repeat1 = 116,
  aux_sym__list_item_children_repeat1 = 117,
  aux_sym_code_block_content_repeat1 = 118,
  aux_sym_text_line_repeat1 = 119,
  aux_sym__text_repeat1 = 120,
  aux_sym__raw_text_line_repeat1 = 121,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_document_title_basic_marker] = "document_title_basic_marker",
  [aux_sym_document_meta_token1] = "document_meta_token1",
  [aux_sym_document_meta_token2] = "document_meta_token2",
  [anon_sym_COLON] = ":",
  [sym_document_meta_field_key] = "document_meta_field_key",
  [aux_sym_document_meta_field_value_token1] = "document_meta_field_value_token1",
  [aux_sym__comment_marker_token1] = "_comment_marker_token1",
  [aux_sym__comment_marker_token2] = "_comment_marker_token2",
  [sym_bold_content] = "bold_content",
  [sym_italic_content] = "italic_content",
  [sym_underline_content] = "underline_content",
  [aux_sym__emphasis_token1] = "_emphasis_token1",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_ticket] = "ticket",
  [aux_sym_date_token1] = "date_token1",
  [aux_sym_date_token2] = "date_token2",
  [aux_sym_date_token3] = "date_token3",
  [aux_sym_daterange_token1] = "daterange_token1",
  [aux_sym_time_token1] = "time_token1",
  [aux_sym_time_token2] = "time_token2",
  [sym_tag_positive] = "tag_positive",
  [sym_tag_negative] = "tag_negative",
  [sym_tag_hash] = "tag_hash",
  [sym_tag_context] = "tag_context",
  [sym_tag_danger] = "tag_danger",
  [sym_tag_identifier] = "tag_identifier",
  [sym_heading_1_marker] = "heading_1_marker",
  [sym_heading_2_marker] = "heading_2_marker",
  [sym_heading_3_marker] = "heading_3_marker",
  [sym_heading_4_marker] = "heading_4_marker",
  [sym_heading_5_marker] = "heading_5_marker",
  [sym_heading_6_marker] = "heading_6_marker",
  [anon_sym_] = " ",
  [sym_section_marker] = "section_marker",
  [aux_sym_task_session_token1] = "task_session_token1",
  [aux_sym_task_schedule_token1] = "task_schedule_token1",
  [sym_inline_code_content] = "inline_code_content",
  [sym_code_block_language] = "code_block_language",
  [anon_sym_ATcode] = "@code",
  [aux_sym_code_block_start_token1] = "code_block_start_token1",
  [anon_sym_LF] = "\n",
  [sym_code_block_end] = "code_block_end",
  [aux_sym_code_block_token1] = "code_block_token1",
  [sym_external_link] = "external_link",
  [aux_sym__text_token1] = "_text_token1",
  [sym__eof] = "_eof",
  [sym__eol] = "_eol",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_task_marker_default] = "task_marker_default",
  [sym_task_marker_active] = "task_marker_active",
  [sym_task_marker_done] = "task_marker_done",
  [sym_task_marker_cancelled] = "task_marker_cancelled",
  [sym_list_item_marker] = "list_item_marker",
  [sym_bold_start] = "bold_start",
  [sym_bold_end] = "bold_end",
  [sym_italic_start] = "italic_start",
  [sym_italic_end] = "italic_end",
  [sym_underline_start] = "underline_start",
  [sym_underline_end] = "underline_end",
  [sym_inline_code_start] = "inline_code_start",
  [sym_inline_code_end] = "inline_code_end",
  [sym_document] = "document",
  [sym_document_title_basic] = "document_title_basic",
  [sym_document_meta] = "document_meta",
  [sym_document_meta_field] = "document_meta_field",
  [sym_document_meta_field_value] = "document_meta_field_value",
  [sym__comment_marker] = "_comment_marker",
  [sym_comment] = "comment",
  [sym_bold] = "bold",
  [sym_italic] = "italic",
  [sym_underline] = "underline",
  [sym__emphasis] = "_emphasis",
  [sym_date] = "date",
  [sym_daterange] = "daterange",
  [sym_time] = "time",
  [sym_timerange] = "timerange",
  [sym_datetime] = "datetime",
  [sym_datetimerange] = "datetimerange",
  [sym_heading_1] = "heading_1",
  [sym_heading_2] = "heading_2",
  [sym_heading_3] = "heading_3",
  [sym_heading_4] = "heading_4",
  [sym_heading_5] = "heading_5",
  [sym_heading_6] = "heading_6",
  [sym_section] = "section",
  [sym__task] = "_task",
  [sym_task_default] = "task_default",
  [sym_task_active] = "task_active",
  [sym_task_done] = "task_done",
  [sym_task_cancelled] = "task_cancelled",
  [sym__task_children] = "_task_children",
  [sym_task_session] = "task_session",
  [sym_task_schedule] = "task_schedule",
  [sym_list_item] = "list_item",
  [sym__list_item_children] = "_list_item_children",
  [sym_inline_code] = "inline_code",
  [sym_code_block_content] = "code_block_content",
  [sym_code_block_start] = "code_block_start",
  [sym_code_block] = "code_block",
  [sym__inline] = "_inline",
  [sym_text_to_eol] = "text_to_eol",
  [sym_text_line] = "text_line",
  [sym__text] = "_text",
  [sym__raw_text_line] = "_raw_text_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_meta_repeat1] = "document_meta_repeat1",
  [aux_sym_heading_1_repeat1] = "heading_1_repeat1",
  [aux_sym_heading_2_repeat1] = "heading_2_repeat1",
  [aux_sym_heading_3_repeat1] = "heading_3_repeat1",
  [aux_sym_heading_4_repeat1] = "heading_4_repeat1",
  [aux_sym_heading_5_repeat1] = "heading_5_repeat1",
  [aux_sym_heading_6_repeat1] = "heading_6_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym__task_children_repeat1] = "_task_children_repeat1",
  [aux_sym__list_item_children_repeat1] = "_list_item_children_repeat1",
  [aux_sym_code_block_content_repeat1] = "code_block_content_repeat1",
  [aux_sym_text_line_repeat1] = "text_line_repeat1",
  [aux_sym__text_repeat1] = "_text_repeat1",
  [aux_sym__raw_text_line_repeat1] = "_raw_text_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_document_title_basic_marker] = sym_document_title_basic_marker,
  [aux_sym_document_meta_token1] = aux_sym_document_meta_token1,
  [aux_sym_document_meta_token2] = aux_sym_document_meta_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_document_meta_field_key] = sym_document_meta_field_key,
  [aux_sym_document_meta_field_value_token1] = aux_sym_document_meta_field_value_token1,
  [aux_sym__comment_marker_token1] = aux_sym__comment_marker_token1,
  [aux_sym__comment_marker_token2] = aux_sym__comment_marker_token2,
  [sym_bold_content] = sym_bold_content,
  [sym_italic_content] = sym_italic_content,
  [sym_underline_content] = sym_underline_content,
  [aux_sym__emphasis_token1] = aux_sym__emphasis_token1,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_ticket] = sym_ticket,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [aux_sym_date_token2] = aux_sym_date_token2,
  [aux_sym_date_token3] = aux_sym_date_token3,
  [aux_sym_daterange_token1] = aux_sym_daterange_token1,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [aux_sym_time_token2] = aux_sym_time_token2,
  [sym_tag_positive] = sym_tag_positive,
  [sym_tag_negative] = sym_tag_negative,
  [sym_tag_hash] = sym_tag_hash,
  [sym_tag_context] = sym_tag_context,
  [sym_tag_danger] = sym_tag_danger,
  [sym_tag_identifier] = sym_tag_identifier,
  [sym_heading_1_marker] = sym_heading_1_marker,
  [sym_heading_2_marker] = sym_heading_2_marker,
  [sym_heading_3_marker] = sym_heading_3_marker,
  [sym_heading_4_marker] = sym_heading_4_marker,
  [sym_heading_5_marker] = sym_heading_5_marker,
  [sym_heading_6_marker] = sym_heading_6_marker,
  [anon_sym_] = anon_sym_,
  [sym_section_marker] = sym_section_marker,
  [aux_sym_task_session_token1] = aux_sym_task_session_token1,
  [aux_sym_task_schedule_token1] = aux_sym_task_schedule_token1,
  [sym_inline_code_content] = sym_inline_code_content,
  [sym_code_block_language] = sym_code_block_language,
  [anon_sym_ATcode] = anon_sym_ATcode,
  [aux_sym_code_block_start_token1] = aux_sym_code_block_start_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_code_block_end] = sym_code_block_end,
  [aux_sym_code_block_token1] = aux_sym_code_block_token1,
  [sym_external_link] = sym_external_link,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [sym__eof] = sym__eof,
  [sym__eol] = sym__eol,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_task_marker_default] = sym_task_marker_default,
  [sym_task_marker_active] = sym_task_marker_active,
  [sym_task_marker_done] = sym_task_marker_done,
  [sym_task_marker_cancelled] = sym_task_marker_cancelled,
  [sym_list_item_marker] = sym_list_item_marker,
  [sym_bold_start] = sym_bold_start,
  [sym_bold_end] = sym_bold_end,
  [sym_italic_start] = sym_italic_start,
  [sym_italic_end] = sym_italic_end,
  [sym_underline_start] = sym_underline_start,
  [sym_underline_end] = sym_underline_end,
  [sym_inline_code_start] = sym_inline_code_start,
  [sym_inline_code_end] = sym_inline_code_end,
  [sym_document] = sym_document,
  [sym_document_title_basic] = sym_document_title_basic,
  [sym_document_meta] = sym_document_meta,
  [sym_document_meta_field] = sym_document_meta_field,
  [sym_document_meta_field_value] = sym_document_meta_field_value,
  [sym__comment_marker] = sym__comment_marker,
  [sym_comment] = sym_comment,
  [sym_bold] = sym_bold,
  [sym_italic] = sym_italic,
  [sym_underline] = sym_underline,
  [sym__emphasis] = sym__emphasis,
  [sym_date] = sym_date,
  [sym_daterange] = sym_daterange,
  [sym_time] = sym_time,
  [sym_timerange] = sym_timerange,
  [sym_datetime] = sym_datetime,
  [sym_datetimerange] = sym_datetimerange,
  [sym_heading_1] = sym_heading_1,
  [sym_heading_2] = sym_heading_2,
  [sym_heading_3] = sym_heading_3,
  [sym_heading_4] = sym_heading_4,
  [sym_heading_5] = sym_heading_5,
  [sym_heading_6] = sym_heading_6,
  [sym_section] = sym_section,
  [sym__task] = sym__task,
  [sym_task_default] = sym_task_default,
  [sym_task_active] = sym_task_active,
  [sym_task_done] = sym_task_done,
  [sym_task_cancelled] = sym_task_cancelled,
  [sym__task_children] = sym__task_children,
  [sym_task_session] = sym_task_session,
  [sym_task_schedule] = sym_task_schedule,
  [sym_list_item] = sym_list_item,
  [sym__list_item_children] = sym__list_item_children,
  [sym_inline_code] = sym_inline_code,
  [sym_code_block_content] = sym_code_block_content,
  [sym_code_block_start] = sym_code_block_start,
  [sym_code_block] = sym_code_block,
  [sym__inline] = sym__inline,
  [sym_text_to_eol] = sym_text_to_eol,
  [sym_text_line] = sym_text_line,
  [sym__text] = sym__text,
  [sym__raw_text_line] = sym__raw_text_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_meta_repeat1] = aux_sym_document_meta_repeat1,
  [aux_sym_heading_1_repeat1] = aux_sym_heading_1_repeat1,
  [aux_sym_heading_2_repeat1] = aux_sym_heading_2_repeat1,
  [aux_sym_heading_3_repeat1] = aux_sym_heading_3_repeat1,
  [aux_sym_heading_4_repeat1] = aux_sym_heading_4_repeat1,
  [aux_sym_heading_5_repeat1] = aux_sym_heading_5_repeat1,
  [aux_sym_heading_6_repeat1] = aux_sym_heading_6_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym__task_children_repeat1] = aux_sym__task_children_repeat1,
  [aux_sym__list_item_children_repeat1] = aux_sym__list_item_children_repeat1,
  [aux_sym_code_block_content_repeat1] = aux_sym_code_block_content_repeat1,
  [aux_sym_text_line_repeat1] = aux_sym_text_line_repeat1,
  [aux_sym__text_repeat1] = aux_sym__text_repeat1,
  [aux_sym__raw_text_line_repeat1] = aux_sym__raw_text_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_document_title_basic_marker] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_meta_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_meta_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_document_meta_field_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_meta_field_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_marker_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_marker_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_bold_content] = {
    .visible = true,
    .named = true,
  },
  [sym_italic_content] = {
    .visible = true,
    .named = true,
  },
  [sym_underline_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__emphasis_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_ticket] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_date_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_daterange_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_tag_positive] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_negative] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_context] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_danger] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_1_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_2_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_3_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_4_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_5_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_6_marker] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_section_marker] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_task_session_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_schedule_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_inline_code_content] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_language] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcode] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_block_start_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_code_block_end] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_code_block_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_external_link] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_task_marker_default] = {
    .visible = true,
    .named = true,
  },
  [sym_task_marker_active] = {
    .visible = true,
    .named = true,
  },
  [sym_task_marker_done] = {
    .visible = true,
    .named = true,
  },
  [sym_task_marker_cancelled] = {
    .visible = true,
    .named = true,
  },
  [sym_list_item_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_bold_start] = {
    .visible = true,
    .named = true,
  },
  [sym_bold_end] = {
    .visible = true,
    .named = true,
  },
  [sym_italic_start] = {
    .visible = true,
    .named = true,
  },
  [sym_italic_end] = {
    .visible = true,
    .named = true,
  },
  [sym_underline_start] = {
    .visible = true,
    .named = true,
  },
  [sym_underline_end] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_code_start] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_code_end] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_document_title_basic] = {
    .visible = true,
    .named = true,
  },
  [sym_document_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_document_meta_field] = {
    .visible = true,
    .named = true,
  },
  [sym_document_meta_field_value] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_marker] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_bold] = {
    .visible = true,
    .named = true,
  },
  [sym_italic] = {
    .visible = true,
    .named = true,
  },
  [sym_underline] = {
    .visible = true,
    .named = true,
  },
  [sym__emphasis] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_daterange] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_timerange] = {
    .visible = true,
    .named = true,
  },
  [sym_datetime] = {
    .visible = true,
    .named = true,
  },
  [sym_datetimerange] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_1] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_2] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_3] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_4] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_5] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_6] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__task] = {
    .visible = false,
    .named = true,
  },
  [sym_task_default] = {
    .visible = true,
    .named = true,
  },
  [sym_task_active] = {
    .visible = true,
    .named = true,
  },
  [sym_task_done] = {
    .visible = true,
    .named = true,
  },
  [sym_task_cancelled] = {
    .visible = true,
    .named = true,
  },
  [sym__task_children] = {
    .visible = false,
    .named = true,
  },
  [sym_task_session] = {
    .visible = true,
    .named = true,
  },
  [sym_task_schedule] = {
    .visible = true,
    .named = true,
  },
  [sym_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item_children] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_code] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_content] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym__inline] = {
    .visible = false,
    .named = true,
  },
  [sym_text_to_eol] = {
    .visible = true,
    .named = true,
  },
  [sym_text_line] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__raw_text_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading_1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading_2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading_3_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading_4_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading_5_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading_6_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__task_children_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_item_children_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_block_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__raw_text_line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_marker = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_marker] = "marker",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_marker, 0},
  [1] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 32,
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 36,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 39,
  [45] = 39,
  [46] = 39,
  [47] = 39,
  [48] = 40,
  [49] = 43,
  [50] = 43,
  [51] = 41,
  [52] = 39,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 58,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 54,
  [74] = 56,
  [75] = 55,
  [76] = 53,
  [77] = 57,
  [78] = 58,
  [79] = 59,
  [80] = 64,
  [81] = 69,
  [82] = 70,
  [83] = 71,
  [84] = 72,
  [85] = 85,
  [86] = 62,
  [87] = 67,
  [88] = 88,
  [89] = 58,
  [90] = 54,
  [91] = 58,
  [92] = 64,
  [93] = 58,
  [94] = 94,
  [95] = 67,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 98,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 106,
  [113] = 104,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 117,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 98,
  [127] = 127,
  [128] = 96,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 97,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 106,
  [137] = 137,
  [138] = 104,
  [139] = 139,
  [140] = 134,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 59,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 114,
  [162] = 107,
  [163] = 163,
  [164] = 164,
  [165] = 98,
  [166] = 166,
  [167] = 167,
  [168] = 147,
  [169] = 153,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
};

static inline bool sym_tag_hash_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(74)
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(87);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(175);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '@') ADVANCE(230);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(176);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '@') ADVANCE(230);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(95);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '@') ADVANCE(230);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\r') ADVANCE(165);
      if (lookahead == ',' ||
          lookahead == '.') SKIP(38)
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(177);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '@') ADVANCE(230);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(43)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(36)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '@') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(85);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(38)
      if (lookahead == '\n') ADVANCE(166);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(160);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(161);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(93);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(94);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(91);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(92);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(89);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(43)
      if (lookahead == '\n') ADVANCE(169);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 67:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(140);
      END_STATE();
    case 68:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 69:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 71:
      if (eof) ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(71)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(174);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 72:
      if (eof) ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(173);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 73:
      if (eof) ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(173);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 74:
      if (eof) ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(74)
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '@') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(76)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '@') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(76)
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '@') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_document_meta_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_document_meta_token2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (lookahead == '-') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__comment_marker_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__comment_marker_token2);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_italic_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_italic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_underline_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_underline_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__emphasis_token1);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ticket);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ticket);
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_date_token3);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(224);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead == '+') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_negative);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_negative);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead == '!') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_heading_6_marker);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_heading_6_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_section_marker);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_section_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_task_session_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_task_schedule_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_ATcode);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_code_block_start_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_code_block_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_code_block_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_external_link);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(87);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(173);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(174);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(175);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '@') ADVANCE(230);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(176);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '@') ADVANCE(230);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(177);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '@') ADVANCE(230);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(135);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(134);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 72, .external_lex_state = 2},
  [2] = {.lex_state = 71, .external_lex_state = 2},
  [3] = {.lex_state = 71, .external_lex_state = 2},
  [4] = {.lex_state = 71, .external_lex_state = 2},
  [5] = {.lex_state = 71, .external_lex_state = 2},
  [6] = {.lex_state = 71, .external_lex_state = 2},
  [7] = {.lex_state = 71, .external_lex_state = 2},
  [8] = {.lex_state = 71, .external_lex_state = 2},
  [9] = {.lex_state = 71, .external_lex_state = 2},
  [10] = {.lex_state = 71, .external_lex_state = 2},
  [11] = {.lex_state = 71, .external_lex_state = 2},
  [12] = {.lex_state = 71, .external_lex_state = 2},
  [13] = {.lex_state = 71, .external_lex_state = 2},
  [14] = {.lex_state = 71, .external_lex_state = 2},
  [15] = {.lex_state = 71, .external_lex_state = 2},
  [16] = {.lex_state = 71, .external_lex_state = 2},
  [17] = {.lex_state = 71, .external_lex_state = 2},
  [18] = {.lex_state = 71, .external_lex_state = 2},
  [19] = {.lex_state = 71, .external_lex_state = 2},
  [20] = {.lex_state = 71, .external_lex_state = 2},
  [21] = {.lex_state = 71, .external_lex_state = 2},
  [22] = {.lex_state = 71, .external_lex_state = 2},
  [23] = {.lex_state = 71, .external_lex_state = 2},
  [24] = {.lex_state = 71, .external_lex_state = 2},
  [25] = {.lex_state = 71, .external_lex_state = 2},
  [26] = {.lex_state = 71, .external_lex_state = 2},
  [27] = {.lex_state = 28, .external_lex_state = 3},
  [28] = {.lex_state = 28, .external_lex_state = 3},
  [29] = {.lex_state = 28, .external_lex_state = 3},
  [30] = {.lex_state = 28, .external_lex_state = 2},
  [31] = {.lex_state = 28, .external_lex_state = 2},
  [32] = {.lex_state = 29, .external_lex_state = 4},
  [33] = {.lex_state = 29, .external_lex_state = 4},
  [34] = {.lex_state = 29, .external_lex_state = 4},
  [35] = {.lex_state = 29, .external_lex_state = 4},
  [36] = {.lex_state = 29, .external_lex_state = 5},
  [37] = {.lex_state = 29, .external_lex_state = 5},
  [38] = {.lex_state = 29, .external_lex_state = 5},
  [39] = {.lex_state = 29, .external_lex_state = 6},
  [40] = {.lex_state = 29, .external_lex_state = 7},
  [41] = {.lex_state = 29, .external_lex_state = 7},
  [42] = {.lex_state = 29, .external_lex_state = 6},
  [43] = {.lex_state = 29, .external_lex_state = 7},
  [44] = {.lex_state = 29, .external_lex_state = 6},
  [45] = {.lex_state = 29, .external_lex_state = 6},
  [46] = {.lex_state = 29, .external_lex_state = 6},
  [47] = {.lex_state = 29, .external_lex_state = 6},
  [48] = {.lex_state = 29, .external_lex_state = 7},
  [49] = {.lex_state = 29, .external_lex_state = 7},
  [50] = {.lex_state = 29, .external_lex_state = 7},
  [51] = {.lex_state = 29, .external_lex_state = 7},
  [52] = {.lex_state = 29, .external_lex_state = 6},
  [53] = {.lex_state = 71, .external_lex_state = 8},
  [54] = {.lex_state = 71, .external_lex_state = 8},
  [55] = {.lex_state = 71, .external_lex_state = 8},
  [56] = {.lex_state = 71, .external_lex_state = 8},
  [57] = {.lex_state = 71, .external_lex_state = 8},
  [58] = {.lex_state = 71, .external_lex_state = 8},
  [59] = {.lex_state = 71, .external_lex_state = 8},
  [60] = {.lex_state = 71, .external_lex_state = 2},
  [61] = {.lex_state = 71, .external_lex_state = 2},
  [62] = {.lex_state = 71, .external_lex_state = 2},
  [63] = {.lex_state = 71, .external_lex_state = 2},
  [64] = {.lex_state = 71, .external_lex_state = 2},
  [65] = {.lex_state = 71, .external_lex_state = 2},
  [66] = {.lex_state = 71, .external_lex_state = 2},
  [67] = {.lex_state = 71, .external_lex_state = 2},
  [68] = {.lex_state = 71, .external_lex_state = 2},
  [69] = {.lex_state = 71, .external_lex_state = 2},
  [70] = {.lex_state = 71, .external_lex_state = 2},
  [71] = {.lex_state = 71, .external_lex_state = 2},
  [72] = {.lex_state = 71, .external_lex_state = 2},
  [73] = {.lex_state = 28, .external_lex_state = 9},
  [74] = {.lex_state = 28, .external_lex_state = 9},
  [75] = {.lex_state = 28, .external_lex_state = 9},
  [76] = {.lex_state = 28, .external_lex_state = 9},
  [77] = {.lex_state = 28, .external_lex_state = 9},
  [78] = {.lex_state = 28, .external_lex_state = 9},
  [79] = {.lex_state = 28, .external_lex_state = 9},
  [80] = {.lex_state = 28, .external_lex_state = 3},
  [81] = {.lex_state = 28, .external_lex_state = 3},
  [82] = {.lex_state = 28, .external_lex_state = 3},
  [83] = {.lex_state = 28, .external_lex_state = 3},
  [84] = {.lex_state = 28, .external_lex_state = 3},
  [85] = {.lex_state = 28, .external_lex_state = 3},
  [86] = {.lex_state = 28, .external_lex_state = 3},
  [87] = {.lex_state = 28, .external_lex_state = 3},
  [88] = {.lex_state = 28, .external_lex_state = 3},
  [89] = {.lex_state = 28, .external_lex_state = 3},
  [90] = {.lex_state = 29, .external_lex_state = 10},
  [91] = {.lex_state = 29, .external_lex_state = 10},
  [92] = {.lex_state = 29, .external_lex_state = 4},
  [93] = {.lex_state = 29, .external_lex_state = 4},
  [94] = {.lex_state = 34, .external_lex_state = 6},
  [95] = {.lex_state = 29, .external_lex_state = 4},
  [96] = {.lex_state = 29, .external_lex_state = 6},
  [97] = {.lex_state = 29, .external_lex_state = 6},
  [98] = {.lex_state = 34, .external_lex_state = 6},
  [99] = {.lex_state = 34, .external_lex_state = 6},
  [100] = {.lex_state = 34, .external_lex_state = 6},
  [101] = {.lex_state = 30, .external_lex_state = 6},
  [102] = {.lex_state = 30, .external_lex_state = 6},
  [103] = {.lex_state = 30, .external_lex_state = 6},
  [104] = {.lex_state = 34, .external_lex_state = 6},
  [105] = {.lex_state = 30, .external_lex_state = 6},
  [106] = {.lex_state = 34, .external_lex_state = 6},
  [107] = {.lex_state = 29, .external_lex_state = 6},
  [108] = {.lex_state = 29, .external_lex_state = 6},
  [109] = {.lex_state = 29, .external_lex_state = 6},
  [110] = {.lex_state = 29, .external_lex_state = 6},
  [111] = {.lex_state = 29, .external_lex_state = 6},
  [112] = {.lex_state = 29, .external_lex_state = 6},
  [113] = {.lex_state = 29, .external_lex_state = 6},
  [114] = {.lex_state = 29, .external_lex_state = 6},
  [115] = {.lex_state = 29, .external_lex_state = 6},
  [116] = {.lex_state = 31},
  [117] = {.lex_state = 75},
  [118] = {.lex_state = 75},
  [119] = {.lex_state = 75},
  [120] = {.lex_state = 31},
  [121] = {.lex_state = 31},
  [122] = {.lex_state = 32, .external_lex_state = 11},
  [123] = {.lex_state = 75, .external_lex_state = 11},
  [124] = {.lex_state = 32, .external_lex_state = 11},
  [125] = {.lex_state = 75},
  [126] = {.lex_state = 75, .external_lex_state = 11},
  [127] = {.lex_state = 36},
  [128] = {.lex_state = 32, .external_lex_state = 11},
  [129] = {.lex_state = 75},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 75},
  [132] = {.lex_state = 32, .external_lex_state = 11},
  [133] = {.lex_state = 36},
  [134] = {.lex_state = 75},
  [135] = {.lex_state = 75},
  [136] = {.lex_state = 75, .external_lex_state = 11},
  [137] = {.lex_state = 75, .external_lex_state = 11},
  [138] = {.lex_state = 75, .external_lex_state = 11},
  [139] = {.lex_state = 75, .external_lex_state = 11},
  [140] = {.lex_state = 75},
  [141] = {.lex_state = 75, .external_lex_state = 11},
  [142] = {.lex_state = 37},
  [143] = {.lex_state = 75, .external_lex_state = 11},
  [144] = {.lex_state = 75, .external_lex_state = 11},
  [145] = {.lex_state = 75, .external_lex_state = 11},
  [146] = {.lex_state = 37},
  [147] = {.lex_state = 37},
  [148] = {.lex_state = 37},
  [149] = {.lex_state = 75, .external_lex_state = 11},
  [150] = {.lex_state = 31},
  [151] = {.lex_state = 31},
  [152] = {.lex_state = 75, .external_lex_state = 11},
  [153] = {.lex_state = 37},
  [154] = {.lex_state = 37},
  [155] = {.lex_state = 75, .external_lex_state = 11},
  [156] = {.lex_state = 75, .external_lex_state = 11},
  [157] = {.lex_state = 37},
  [158] = {.lex_state = 37},
  [159] = {.lex_state = 37},
  [160] = {.lex_state = 37},
  [161] = {.lex_state = 75, .external_lex_state = 11},
  [162] = {.lex_state = 75, .external_lex_state = 11},
  [163] = {.lex_state = 36},
  [164] = {.lex_state = 31},
  [165] = {.lex_state = 75},
  [166] = {.lex_state = 75, .external_lex_state = 11},
  [167] = {.lex_state = 75, .external_lex_state = 11},
  [168] = {.lex_state = 37},
  [169] = {.lex_state = 37},
  [170] = {.lex_state = 37},
  [171] = {.lex_state = 33},
  [172] = {.lex_state = 75, .external_lex_state = 11},
  [173] = {.lex_state = 75, .external_lex_state = 12},
  [174] = {.lex_state = 75, .external_lex_state = 13},
  [175] = {.lex_state = 37},
  [176] = {.lex_state = 75},
  [177] = {.lex_state = 75},
  [178] = {.lex_state = 75, .external_lex_state = 14},
  [179] = {.lex_state = 75, .external_lex_state = 15},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 35},
  [182] = {.lex_state = 35},
  [183] = {.lex_state = 75, .external_lex_state = 16},
  [184] = {.lex_state = 75},
  [185] = {.lex_state = 75, .external_lex_state = 17},
  [186] = {.lex_state = 35},
  [187] = {.lex_state = 35},
  [188] = {.lex_state = 35},
  [189] = {.lex_state = 35},
  [190] = {.lex_state = 75, .external_lex_state = 16},
  [191] = {.lex_state = 75},
  [192] = {.lex_state = 39},
  [193] = {.lex_state = 40},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 42},
  [196] = {.lex_state = 75, .external_lex_state = 17},
};

enum {
  ts_external_token__eof = 0,
  ts_external_token__eol = 1,
  ts_external_token__indent = 2,
  ts_external_token__dedent = 3,
  ts_external_token_task_marker_default = 4,
  ts_external_token_task_marker_active = 5,
  ts_external_token_task_marker_done = 6,
  ts_external_token_task_marker_cancelled = 7,
  ts_external_token_list_item_marker = 8,
  ts_external_token_bold_start = 9,
  ts_external_token_bold_end = 10,
  ts_external_token_italic_start = 11,
  ts_external_token_italic_end = 12,
  ts_external_token_underline_start = 13,
  ts_external_token_underline_end = 14,
  ts_external_token_inline_code_start = 15,
  ts_external_token_inline_code_end = 16,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token__eol] = sym__eol,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_task_marker_default] = sym_task_marker_default,
  [ts_external_token_task_marker_active] = sym_task_marker_active,
  [ts_external_token_task_marker_done] = sym_task_marker_done,
  [ts_external_token_task_marker_cancelled] = sym_task_marker_cancelled,
  [ts_external_token_list_item_marker] = sym_list_item_marker,
  [ts_external_token_bold_start] = sym_bold_start,
  [ts_external_token_bold_end] = sym_bold_end,
  [ts_external_token_italic_start] = sym_italic_start,
  [ts_external_token_italic_end] = sym_italic_end,
  [ts_external_token_underline_start] = sym_underline_start,
  [ts_external_token_underline_end] = sym_underline_end,
  [ts_external_token_inline_code_start] = sym_inline_code_start,
  [ts_external_token_inline_code_end] = sym_inline_code_end,
};

static const bool ts_external_scanner_states[18][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token__eol] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_bold_end] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_italic_end] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_underline_end] = true,
    [ts_external_token_inline_code_start] = true,
    [ts_external_token_inline_code_end] = true,
  },
  [2] = {
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [4] = {
    [ts_external_token__eof] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [5] = {
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [6] = {
    [ts_external_token__eof] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [7] = {
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [8] = {
    [ts_external_token__indent] = true,
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [9] = {
    [ts_external_token__eof] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [10] = {
    [ts_external_token__eof] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [11] = {
    [ts_external_token__eof] = true,
    [ts_external_token__eol] = true,
  },
  [12] = {
    [ts_external_token_inline_code_end] = true,
  },
  [13] = {
    [ts_external_token_bold_end] = true,
  },
  [14] = {
    [ts_external_token_italic_end] = true,
  },
  [15] = {
    [ts_external_token_underline_end] = true,
  },
  [16] = {
    [ts_external_token__eol] = true,
  },
  [17] = {
    [ts_external_token__eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_document_title_basic_marker] = ACTIONS(1),
    [aux_sym_document_meta_token1] = ACTIONS(1),
    [aux_sym_document_meta_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_document_meta_field_key] = ACTIONS(1),
    [aux_sym__comment_marker_token1] = ACTIONS(1),
    [aux_sym__comment_marker_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_ticket] = ACTIONS(1),
    [aux_sym_date_token1] = ACTIONS(1),
    [aux_sym_date_token3] = ACTIONS(1),
    [aux_sym_daterange_token1] = ACTIONS(1),
    [sym_tag_positive] = ACTIONS(1),
    [sym_tag_negative] = ACTIONS(1),
    [sym_tag_hash] = ACTIONS(1),
    [sym_tag_danger] = ACTIONS(1),
    [sym_tag_identifier] = ACTIONS(1),
    [sym_heading_1_marker] = ACTIONS(1),
    [sym_heading_2_marker] = ACTIONS(1),
    [sym_heading_3_marker] = ACTIONS(1),
    [sym_heading_4_marker] = ACTIONS(1),
    [sym_heading_5_marker] = ACTIONS(1),
    [sym_heading_6_marker] = ACTIONS(1),
    [sym_section_marker] = ACTIONS(1),
    [sym_code_block_language] = ACTIONS(1),
    [anon_sym_ATcode] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_code_block_end] = ACTIONS(1),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym__eof] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_task_marker_default] = ACTIONS(1),
    [sym_task_marker_active] = ACTIONS(1),
    [sym_task_marker_done] = ACTIONS(1),
    [sym_task_marker_cancelled] = ACTIONS(1),
    [sym_list_item_marker] = ACTIONS(1),
    [sym_bold_start] = ACTIONS(1),
    [sym_bold_end] = ACTIONS(1),
    [sym_italic_start] = ACTIONS(1),
    [sym_italic_end] = ACTIONS(1),
    [sym_underline_start] = ACTIONS(1),
    [sym_underline_end] = ACTIONS(1),
    [sym_inline_code_start] = ACTIONS(1),
    [sym_inline_code_end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(176),
    [sym_document_title_basic] = STATE(3),
    [sym_document_meta] = STATE(3),
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_1] = STATE(2),
    [sym_heading_2] = STATE(2),
    [sym_heading_3] = STATE(2),
    [sym_heading_4] = STATE(2),
    [sym_heading_5] = STATE(2),
    [sym_heading_6] = STATE(2),
    [sym_section] = STATE(2),
    [sym__task] = STATE(2),
    [sym_task_default] = STATE(2),
    [sym_task_active] = STATE(2),
    [sym_task_done] = STATE(2),
    [sym_task_cancelled] = STATE(2),
    [sym_list_item] = STATE(2),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(52),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_document_title_basic_marker] = ACTIONS(7),
    [aux_sym_document_meta_token1] = ACTIONS(9),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(19),
    [sym_heading_2_marker] = ACTIONS(21),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [2] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_1] = STATE(4),
    [sym_heading_2] = STATE(4),
    [sym_heading_3] = STATE(4),
    [sym_heading_4] = STATE(4),
    [sym_heading_5] = STATE(4),
    [sym_heading_6] = STATE(4),
    [sym_section] = STATE(4),
    [sym__task] = STATE(4),
    [sym_task_default] = STATE(4),
    [sym_task_active] = STATE(4),
    [sym_task_done] = STATE(4),
    [sym_task_cancelled] = STATE(4),
    [sym_list_item] = STATE(4),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(52),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(55),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(19),
    [sym_heading_2_marker] = ACTIONS(21),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [3] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_1] = STATE(5),
    [sym_heading_2] = STATE(5),
    [sym_heading_3] = STATE(5),
    [sym_heading_4] = STATE(5),
    [sym_heading_5] = STATE(5),
    [sym_heading_6] = STATE(5),
    [sym_section] = STATE(5),
    [sym__task] = STATE(5),
    [sym_task_default] = STATE(5),
    [sym_task_active] = STATE(5),
    [sym_task_done] = STATE(5),
    [sym_task_cancelled] = STATE(5),
    [sym_list_item] = STATE(5),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(5),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(5),
    [sym__text] = STATE(52),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(55),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(19),
    [sym_heading_2_marker] = ACTIONS(21),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [4] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_1] = STATE(4),
    [sym_heading_2] = STATE(4),
    [sym_heading_3] = STATE(4),
    [sym_heading_4] = STATE(4),
    [sym_heading_5] = STATE(4),
    [sym_heading_6] = STATE(4),
    [sym_section] = STATE(4),
    [sym__task] = STATE(4),
    [sym_task_default] = STATE(4),
    [sym_task_active] = STATE(4),
    [sym_task_done] = STATE(4),
    [sym_task_cancelled] = STATE(4),
    [sym_list_item] = STATE(4),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(52),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(57),
    [aux_sym__comment_marker_token1] = ACTIONS(59),
    [aux_sym__comment_marker_token2] = ACTIONS(59),
    [sym_string] = ACTIONS(62),
    [sym_number] = ACTIONS(62),
    [sym_ticket] = ACTIONS(62),
    [aux_sym_date_token1] = ACTIONS(65),
    [aux_sym_date_token2] = ACTIONS(65),
    [aux_sym_date_token3] = ACTIONS(65),
    [aux_sym_time_token1] = ACTIONS(68),
    [aux_sym_time_token2] = ACTIONS(68),
    [sym_tag_positive] = ACTIONS(62),
    [sym_tag_negative] = ACTIONS(62),
    [sym_tag_hash] = ACTIONS(62),
    [sym_tag_context] = ACTIONS(62),
    [sym_tag_danger] = ACTIONS(62),
    [sym_tag_identifier] = ACTIONS(62),
    [sym_heading_1_marker] = ACTIONS(71),
    [sym_heading_2_marker] = ACTIONS(74),
    [sym_heading_3_marker] = ACTIONS(77),
    [sym_heading_4_marker] = ACTIONS(80),
    [sym_heading_5_marker] = ACTIONS(83),
    [sym_heading_6_marker] = ACTIONS(86),
    [sym_section_marker] = ACTIONS(89),
    [anon_sym_ATcode] = ACTIONS(92),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(62),
    [aux_sym__text_token1] = ACTIONS(95),
    [sym_task_marker_default] = ACTIONS(98),
    [sym_task_marker_active] = ACTIONS(101),
    [sym_task_marker_done] = ACTIONS(104),
    [sym_task_marker_cancelled] = ACTIONS(107),
    [sym_list_item_marker] = ACTIONS(110),
    [sym_bold_start] = ACTIONS(113),
    [sym_italic_start] = ACTIONS(116),
    [sym_underline_start] = ACTIONS(119),
    [sym_inline_code_start] = ACTIONS(122),
  },
  [5] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_1] = STATE(4),
    [sym_heading_2] = STATE(4),
    [sym_heading_3] = STATE(4),
    [sym_heading_4] = STATE(4),
    [sym_heading_5] = STATE(4),
    [sym_heading_6] = STATE(4),
    [sym_section] = STATE(4),
    [sym__task] = STATE(4),
    [sym_task_default] = STATE(4),
    [sym_task_active] = STATE(4),
    [sym_task_done] = STATE(4),
    [sym_task_cancelled] = STATE(4),
    [sym_list_item] = STATE(4),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(52),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(19),
    [sym_heading_2_marker] = ACTIONS(21),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [6] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_2] = STATE(6),
    [sym_heading_3] = STATE(6),
    [sym_heading_4] = STATE(6),
    [sym_heading_5] = STATE(6),
    [sym_heading_6] = STATE(6),
    [sym_section] = STATE(6),
    [sym__task] = STATE(6),
    [sym_task_default] = STATE(6),
    [sym_task_active] = STATE(6),
    [sym_task_done] = STATE(6),
    [sym_task_cancelled] = STATE(6),
    [sym_list_item] = STATE(6),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(6),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(6),
    [sym__text] = STATE(52),
    [aux_sym_heading_1_repeat1] = STATE(6),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym__comment_marker_token1] = ACTIONS(129),
    [aux_sym__comment_marker_token2] = ACTIONS(129),
    [sym_string] = ACTIONS(132),
    [sym_number] = ACTIONS(132),
    [sym_ticket] = ACTIONS(132),
    [aux_sym_date_token1] = ACTIONS(135),
    [aux_sym_date_token2] = ACTIONS(135),
    [aux_sym_date_token3] = ACTIONS(135),
    [aux_sym_time_token1] = ACTIONS(138),
    [aux_sym_time_token2] = ACTIONS(138),
    [sym_tag_positive] = ACTIONS(132),
    [sym_tag_negative] = ACTIONS(132),
    [sym_tag_hash] = ACTIONS(132),
    [sym_tag_context] = ACTIONS(132),
    [sym_tag_danger] = ACTIONS(132),
    [sym_tag_identifier] = ACTIONS(132),
    [sym_heading_1_marker] = ACTIONS(141),
    [sym_heading_2_marker] = ACTIONS(143),
    [sym_heading_3_marker] = ACTIONS(146),
    [sym_heading_4_marker] = ACTIONS(149),
    [sym_heading_5_marker] = ACTIONS(152),
    [sym_heading_6_marker] = ACTIONS(155),
    [sym_section_marker] = ACTIONS(158),
    [anon_sym_ATcode] = ACTIONS(161),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(132),
    [aux_sym__text_token1] = ACTIONS(164),
    [sym_task_marker_default] = ACTIONS(167),
    [sym_task_marker_active] = ACTIONS(170),
    [sym_task_marker_done] = ACTIONS(173),
    [sym_task_marker_cancelled] = ACTIONS(176),
    [sym_list_item_marker] = ACTIONS(179),
    [sym_bold_start] = ACTIONS(182),
    [sym_italic_start] = ACTIONS(185),
    [sym_underline_start] = ACTIONS(188),
    [sym_inline_code_start] = ACTIONS(191),
  },
  [7] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_2] = STATE(6),
    [sym_heading_3] = STATE(6),
    [sym_heading_4] = STATE(6),
    [sym_heading_5] = STATE(6),
    [sym_heading_6] = STATE(6),
    [sym_section] = STATE(6),
    [sym__task] = STATE(6),
    [sym_task_default] = STATE(6),
    [sym_task_active] = STATE(6),
    [sym_task_done] = STATE(6),
    [sym_task_cancelled] = STATE(6),
    [sym_list_item] = STATE(6),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(6),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(6),
    [sym__text] = STATE(52),
    [aux_sym_heading_1_repeat1] = STATE(6),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(196),
    [sym_heading_2_marker] = ACTIONS(21),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [8] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_2] = STATE(7),
    [sym_heading_3] = STATE(7),
    [sym_heading_4] = STATE(7),
    [sym_heading_5] = STATE(7),
    [sym_heading_6] = STATE(7),
    [sym_section] = STATE(7),
    [sym__task] = STATE(7),
    [sym_task_default] = STATE(7),
    [sym_task_active] = STATE(7),
    [sym_task_done] = STATE(7),
    [sym_task_cancelled] = STATE(7),
    [sym_list_item] = STATE(7),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(7),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(52),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(198),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(200),
    [sym_heading_2_marker] = ACTIONS(21),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [9] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_3] = STATE(9),
    [sym_heading_4] = STATE(9),
    [sym_heading_5] = STATE(9),
    [sym_heading_6] = STATE(9),
    [sym_section] = STATE(9),
    [sym__task] = STATE(9),
    [sym_task_default] = STATE(9),
    [sym_task_active] = STATE(9),
    [sym_task_done] = STATE(9),
    [sym_task_cancelled] = STATE(9),
    [sym_list_item] = STATE(9),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(9),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(9),
    [sym__text] = STATE(52),
    [aux_sym_heading_2_repeat1] = STATE(9),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym__comment_marker_token1] = ACTIONS(204),
    [aux_sym__comment_marker_token2] = ACTIONS(204),
    [sym_string] = ACTIONS(207),
    [sym_number] = ACTIONS(207),
    [sym_ticket] = ACTIONS(207),
    [aux_sym_date_token1] = ACTIONS(210),
    [aux_sym_date_token2] = ACTIONS(210),
    [aux_sym_date_token3] = ACTIONS(210),
    [aux_sym_time_token1] = ACTIONS(213),
    [aux_sym_time_token2] = ACTIONS(213),
    [sym_tag_positive] = ACTIONS(207),
    [sym_tag_negative] = ACTIONS(207),
    [sym_tag_hash] = ACTIONS(207),
    [sym_tag_context] = ACTIONS(207),
    [sym_tag_danger] = ACTIONS(207),
    [sym_tag_identifier] = ACTIONS(207),
    [sym_heading_1_marker] = ACTIONS(216),
    [sym_heading_2_marker] = ACTIONS(216),
    [sym_heading_3_marker] = ACTIONS(218),
    [sym_heading_4_marker] = ACTIONS(221),
    [sym_heading_5_marker] = ACTIONS(224),
    [sym_heading_6_marker] = ACTIONS(227),
    [sym_section_marker] = ACTIONS(230),
    [anon_sym_ATcode] = ACTIONS(233),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(207),
    [aux_sym__text_token1] = ACTIONS(236),
    [sym_task_marker_default] = ACTIONS(239),
    [sym_task_marker_active] = ACTIONS(242),
    [sym_task_marker_done] = ACTIONS(245),
    [sym_task_marker_cancelled] = ACTIONS(248),
    [sym_list_item_marker] = ACTIONS(251),
    [sym_bold_start] = ACTIONS(254),
    [sym_italic_start] = ACTIONS(257),
    [sym_underline_start] = ACTIONS(260),
    [sym_inline_code_start] = ACTIONS(263),
  },
  [10] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_3] = STATE(11),
    [sym_heading_4] = STATE(11),
    [sym_heading_5] = STATE(11),
    [sym_heading_6] = STATE(11),
    [sym_section] = STATE(11),
    [sym__task] = STATE(11),
    [sym_task_default] = STATE(11),
    [sym_task_active] = STATE(11),
    [sym_task_done] = STATE(11),
    [sym_task_cancelled] = STATE(11),
    [sym_list_item] = STATE(11),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(11),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(11),
    [sym__text] = STATE(52),
    [aux_sym_heading_2_repeat1] = STATE(11),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(266),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(268),
    [sym_heading_2_marker] = ACTIONS(268),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [11] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_3] = STATE(9),
    [sym_heading_4] = STATE(9),
    [sym_heading_5] = STATE(9),
    [sym_heading_6] = STATE(9),
    [sym_section] = STATE(9),
    [sym__task] = STATE(9),
    [sym_task_default] = STATE(9),
    [sym_task_active] = STATE(9),
    [sym_task_done] = STATE(9),
    [sym_task_cancelled] = STATE(9),
    [sym_list_item] = STATE(9),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(9),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(9),
    [sym__text] = STATE(52),
    [aux_sym_heading_2_repeat1] = STATE(9),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(270),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(272),
    [sym_heading_2_marker] = ACTIONS(272),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [12] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_4] = STATE(12),
    [sym_heading_5] = STATE(12),
    [sym_heading_6] = STATE(12),
    [sym_section] = STATE(12),
    [sym__task] = STATE(12),
    [sym_task_default] = STATE(12),
    [sym_task_active] = STATE(12),
    [sym_task_done] = STATE(12),
    [sym_task_cancelled] = STATE(12),
    [sym_list_item] = STATE(12),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(52),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(274),
    [aux_sym__comment_marker_token1] = ACTIONS(276),
    [aux_sym__comment_marker_token2] = ACTIONS(276),
    [sym_string] = ACTIONS(279),
    [sym_number] = ACTIONS(279),
    [sym_ticket] = ACTIONS(279),
    [aux_sym_date_token1] = ACTIONS(282),
    [aux_sym_date_token2] = ACTIONS(282),
    [aux_sym_date_token3] = ACTIONS(282),
    [aux_sym_time_token1] = ACTIONS(285),
    [aux_sym_time_token2] = ACTIONS(285),
    [sym_tag_positive] = ACTIONS(279),
    [sym_tag_negative] = ACTIONS(279),
    [sym_tag_hash] = ACTIONS(279),
    [sym_tag_context] = ACTIONS(279),
    [sym_tag_danger] = ACTIONS(279),
    [sym_tag_identifier] = ACTIONS(279),
    [sym_heading_1_marker] = ACTIONS(288),
    [sym_heading_2_marker] = ACTIONS(288),
    [sym_heading_3_marker] = ACTIONS(288),
    [sym_heading_4_marker] = ACTIONS(290),
    [sym_heading_5_marker] = ACTIONS(293),
    [sym_heading_6_marker] = ACTIONS(296),
    [sym_section_marker] = ACTIONS(299),
    [anon_sym_ATcode] = ACTIONS(302),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(279),
    [aux_sym__text_token1] = ACTIONS(305),
    [sym_task_marker_default] = ACTIONS(308),
    [sym_task_marker_active] = ACTIONS(311),
    [sym_task_marker_done] = ACTIONS(314),
    [sym_task_marker_cancelled] = ACTIONS(317),
    [sym_list_item_marker] = ACTIONS(320),
    [sym_bold_start] = ACTIONS(323),
    [sym_italic_start] = ACTIONS(326),
    [sym_underline_start] = ACTIONS(329),
    [sym_inline_code_start] = ACTIONS(332),
  },
  [13] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_4] = STATE(12),
    [sym_heading_5] = STATE(12),
    [sym_heading_6] = STATE(12),
    [sym_section] = STATE(12),
    [sym__task] = STATE(12),
    [sym_task_default] = STATE(12),
    [sym_task_active] = STATE(12),
    [sym_task_done] = STATE(12),
    [sym_task_cancelled] = STATE(12),
    [sym_list_item] = STATE(12),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(52),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(335),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(337),
    [sym_heading_2_marker] = ACTIONS(337),
    [sym_heading_3_marker] = ACTIONS(337),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [14] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_4] = STATE(13),
    [sym_heading_5] = STATE(13),
    [sym_heading_6] = STATE(13),
    [sym_section] = STATE(13),
    [sym__task] = STATE(13),
    [sym_task_default] = STATE(13),
    [sym_task_active] = STATE(13),
    [sym_task_done] = STATE(13),
    [sym_task_cancelled] = STATE(13),
    [sym_list_item] = STATE(13),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(13),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(13),
    [sym__text] = STATE(52),
    [aux_sym_heading_3_repeat1] = STATE(13),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(339),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(341),
    [sym_heading_2_marker] = ACTIONS(341),
    [sym_heading_3_marker] = ACTIONS(341),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [15] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_5] = STATE(16),
    [sym_heading_6] = STATE(16),
    [sym_section] = STATE(16),
    [sym__task] = STATE(16),
    [sym_task_default] = STATE(16),
    [sym_task_active] = STATE(16),
    [sym_task_done] = STATE(16),
    [sym_task_cancelled] = STATE(16),
    [sym_list_item] = STATE(16),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(16),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(16),
    [sym__text] = STATE(52),
    [aux_sym_heading_4_repeat1] = STATE(16),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(343),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(345),
    [sym_heading_2_marker] = ACTIONS(345),
    [sym_heading_3_marker] = ACTIONS(345),
    [sym_heading_4_marker] = ACTIONS(345),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [16] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_5] = STATE(16),
    [sym_heading_6] = STATE(16),
    [sym_section] = STATE(16),
    [sym__task] = STATE(16),
    [sym_task_default] = STATE(16),
    [sym_task_active] = STATE(16),
    [sym_task_done] = STATE(16),
    [sym_task_cancelled] = STATE(16),
    [sym_list_item] = STATE(16),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(16),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(16),
    [sym__text] = STATE(52),
    [aux_sym_heading_4_repeat1] = STATE(16),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym__comment_marker_token1] = ACTIONS(349),
    [aux_sym__comment_marker_token2] = ACTIONS(349),
    [sym_string] = ACTIONS(352),
    [sym_number] = ACTIONS(352),
    [sym_ticket] = ACTIONS(352),
    [aux_sym_date_token1] = ACTIONS(355),
    [aux_sym_date_token2] = ACTIONS(355),
    [aux_sym_date_token3] = ACTIONS(355),
    [aux_sym_time_token1] = ACTIONS(358),
    [aux_sym_time_token2] = ACTIONS(358),
    [sym_tag_positive] = ACTIONS(352),
    [sym_tag_negative] = ACTIONS(352),
    [sym_tag_hash] = ACTIONS(352),
    [sym_tag_context] = ACTIONS(352),
    [sym_tag_danger] = ACTIONS(352),
    [sym_tag_identifier] = ACTIONS(352),
    [sym_heading_1_marker] = ACTIONS(361),
    [sym_heading_2_marker] = ACTIONS(361),
    [sym_heading_3_marker] = ACTIONS(361),
    [sym_heading_4_marker] = ACTIONS(361),
    [sym_heading_5_marker] = ACTIONS(363),
    [sym_heading_6_marker] = ACTIONS(366),
    [sym_section_marker] = ACTIONS(369),
    [anon_sym_ATcode] = ACTIONS(372),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(352),
    [aux_sym__text_token1] = ACTIONS(375),
    [sym_task_marker_default] = ACTIONS(378),
    [sym_task_marker_active] = ACTIONS(381),
    [sym_task_marker_done] = ACTIONS(384),
    [sym_task_marker_cancelled] = ACTIONS(387),
    [sym_list_item_marker] = ACTIONS(390),
    [sym_bold_start] = ACTIONS(393),
    [sym_italic_start] = ACTIONS(396),
    [sym_underline_start] = ACTIONS(399),
    [sym_inline_code_start] = ACTIONS(402),
  },
  [17] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_5] = STATE(15),
    [sym_heading_6] = STATE(15),
    [sym_section] = STATE(15),
    [sym__task] = STATE(15),
    [sym_task_default] = STATE(15),
    [sym_task_active] = STATE(15),
    [sym_task_done] = STATE(15),
    [sym_task_cancelled] = STATE(15),
    [sym_list_item] = STATE(15),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(15),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(15),
    [sym__text] = STATE(52),
    [aux_sym_heading_4_repeat1] = STATE(15),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(405),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(407),
    [sym_heading_2_marker] = ACTIONS(407),
    [sym_heading_3_marker] = ACTIONS(407),
    [sym_heading_4_marker] = ACTIONS(407),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [18] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_6] = STATE(19),
    [sym_section] = STATE(19),
    [sym__task] = STATE(19),
    [sym_task_default] = STATE(19),
    [sym_task_active] = STATE(19),
    [sym_task_done] = STATE(19),
    [sym_task_cancelled] = STATE(19),
    [sym_list_item] = STATE(19),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(19),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(19),
    [sym__text] = STATE(52),
    [aux_sym_heading_5_repeat1] = STATE(19),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(409),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(411),
    [sym_heading_2_marker] = ACTIONS(411),
    [sym_heading_3_marker] = ACTIONS(411),
    [sym_heading_4_marker] = ACTIONS(411),
    [sym_heading_5_marker] = ACTIONS(411),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [19] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_6] = STATE(19),
    [sym_section] = STATE(19),
    [sym__task] = STATE(19),
    [sym_task_default] = STATE(19),
    [sym_task_active] = STATE(19),
    [sym_task_done] = STATE(19),
    [sym_task_cancelled] = STATE(19),
    [sym_list_item] = STATE(19),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(19),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(19),
    [sym__text] = STATE(52),
    [aux_sym_heading_5_repeat1] = STATE(19),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(413),
    [aux_sym__comment_marker_token1] = ACTIONS(415),
    [aux_sym__comment_marker_token2] = ACTIONS(415),
    [sym_string] = ACTIONS(418),
    [sym_number] = ACTIONS(418),
    [sym_ticket] = ACTIONS(418),
    [aux_sym_date_token1] = ACTIONS(421),
    [aux_sym_date_token2] = ACTIONS(421),
    [aux_sym_date_token3] = ACTIONS(421),
    [aux_sym_time_token1] = ACTIONS(424),
    [aux_sym_time_token2] = ACTIONS(424),
    [sym_tag_positive] = ACTIONS(418),
    [sym_tag_negative] = ACTIONS(418),
    [sym_tag_hash] = ACTIONS(418),
    [sym_tag_context] = ACTIONS(418),
    [sym_tag_danger] = ACTIONS(418),
    [sym_tag_identifier] = ACTIONS(418),
    [sym_heading_1_marker] = ACTIONS(427),
    [sym_heading_2_marker] = ACTIONS(427),
    [sym_heading_3_marker] = ACTIONS(427),
    [sym_heading_4_marker] = ACTIONS(427),
    [sym_heading_5_marker] = ACTIONS(427),
    [sym_heading_6_marker] = ACTIONS(429),
    [sym_section_marker] = ACTIONS(432),
    [anon_sym_ATcode] = ACTIONS(435),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(418),
    [aux_sym__text_token1] = ACTIONS(438),
    [sym_task_marker_default] = ACTIONS(441),
    [sym_task_marker_active] = ACTIONS(444),
    [sym_task_marker_done] = ACTIONS(447),
    [sym_task_marker_cancelled] = ACTIONS(450),
    [sym_list_item_marker] = ACTIONS(453),
    [sym_bold_start] = ACTIONS(456),
    [sym_italic_start] = ACTIONS(459),
    [sym_underline_start] = ACTIONS(462),
    [sym_inline_code_start] = ACTIONS(465),
  },
  [20] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_heading_6] = STATE(18),
    [sym_section] = STATE(18),
    [sym__task] = STATE(18),
    [sym_task_default] = STATE(18),
    [sym_task_active] = STATE(18),
    [sym_task_done] = STATE(18),
    [sym_task_cancelled] = STATE(18),
    [sym_list_item] = STATE(18),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(18),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(18),
    [sym__text] = STATE(52),
    [aux_sym_heading_5_repeat1] = STATE(18),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(468),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(470),
    [sym_heading_2_marker] = ACTIONS(470),
    [sym_heading_3_marker] = ACTIONS(470),
    [sym_heading_4_marker] = ACTIONS(470),
    [sym_heading_5_marker] = ACTIONS(470),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [21] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(52),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(472),
    [aux_sym__comment_marker_token1] = ACTIONS(474),
    [aux_sym__comment_marker_token2] = ACTIONS(474),
    [sym_string] = ACTIONS(477),
    [sym_number] = ACTIONS(477),
    [sym_ticket] = ACTIONS(477),
    [aux_sym_date_token1] = ACTIONS(480),
    [aux_sym_date_token2] = ACTIONS(480),
    [aux_sym_date_token3] = ACTIONS(480),
    [aux_sym_time_token1] = ACTIONS(483),
    [aux_sym_time_token2] = ACTIONS(483),
    [sym_tag_positive] = ACTIONS(477),
    [sym_tag_negative] = ACTIONS(477),
    [sym_tag_hash] = ACTIONS(477),
    [sym_tag_context] = ACTIONS(477),
    [sym_tag_danger] = ACTIONS(477),
    [sym_tag_identifier] = ACTIONS(477),
    [sym_heading_1_marker] = ACTIONS(486),
    [sym_heading_2_marker] = ACTIONS(486),
    [sym_heading_3_marker] = ACTIONS(486),
    [sym_heading_4_marker] = ACTIONS(486),
    [sym_heading_5_marker] = ACTIONS(486),
    [sym_heading_6_marker] = ACTIONS(486),
    [sym_section_marker] = ACTIONS(488),
    [anon_sym_ATcode] = ACTIONS(491),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(477),
    [aux_sym__text_token1] = ACTIONS(494),
    [sym_task_marker_default] = ACTIONS(497),
    [sym_task_marker_active] = ACTIONS(500),
    [sym_task_marker_done] = ACTIONS(503),
    [sym_task_marker_cancelled] = ACTIONS(506),
    [sym_list_item_marker] = ACTIONS(509),
    [sym_bold_start] = ACTIONS(512),
    [sym_italic_start] = ACTIONS(515),
    [sym_underline_start] = ACTIONS(518),
    [sym_inline_code_start] = ACTIONS(521),
  },
  [22] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(52),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(524),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(526),
    [sym_heading_2_marker] = ACTIONS(526),
    [sym_heading_3_marker] = ACTIONS(526),
    [sym_heading_4_marker] = ACTIONS(526),
    [sym_heading_5_marker] = ACTIONS(526),
    [sym_heading_6_marker] = ACTIONS(526),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [23] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(52),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(528),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(530),
    [sym_heading_2_marker] = ACTIONS(530),
    [sym_heading_3_marker] = ACTIONS(530),
    [sym_heading_4_marker] = ACTIONS(530),
    [sym_heading_5_marker] = ACTIONS(530),
    [sym_heading_6_marker] = ACTIONS(530),
    [sym_section_marker] = ACTIONS(31),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [24] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym__task] = STATE(25),
    [sym_task_default] = STATE(25),
    [sym_task_active] = STATE(25),
    [sym_task_done] = STATE(25),
    [sym_task_cancelled] = STATE(25),
    [sym_list_item] = STATE(25),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(25),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(25),
    [sym__text] = STATE(52),
    [aux_sym_section_repeat1] = STATE(25),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(532),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(534),
    [sym_heading_2_marker] = ACTIONS(534),
    [sym_heading_3_marker] = ACTIONS(534),
    [sym_heading_4_marker] = ACTIONS(534),
    [sym_heading_5_marker] = ACTIONS(534),
    [sym_heading_6_marker] = ACTIONS(534),
    [sym_section_marker] = ACTIONS(534),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
  [25] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym__task] = STATE(25),
    [sym_task_default] = STATE(25),
    [sym_task_active] = STATE(25),
    [sym_task_done] = STATE(25),
    [sym_task_cancelled] = STATE(25),
    [sym_list_item] = STATE(25),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(25),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(25),
    [sym__text] = STATE(52),
    [aux_sym_section_repeat1] = STATE(25),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(536),
    [aux_sym__comment_marker_token1] = ACTIONS(538),
    [aux_sym__comment_marker_token2] = ACTIONS(538),
    [sym_string] = ACTIONS(541),
    [sym_number] = ACTIONS(541),
    [sym_ticket] = ACTIONS(541),
    [aux_sym_date_token1] = ACTIONS(544),
    [aux_sym_date_token2] = ACTIONS(544),
    [aux_sym_date_token3] = ACTIONS(544),
    [aux_sym_time_token1] = ACTIONS(547),
    [aux_sym_time_token2] = ACTIONS(547),
    [sym_tag_positive] = ACTIONS(541),
    [sym_tag_negative] = ACTIONS(541),
    [sym_tag_hash] = ACTIONS(541),
    [sym_tag_context] = ACTIONS(541),
    [sym_tag_danger] = ACTIONS(541),
    [sym_tag_identifier] = ACTIONS(541),
    [sym_heading_1_marker] = ACTIONS(550),
    [sym_heading_2_marker] = ACTIONS(550),
    [sym_heading_3_marker] = ACTIONS(550),
    [sym_heading_4_marker] = ACTIONS(550),
    [sym_heading_5_marker] = ACTIONS(550),
    [sym_heading_6_marker] = ACTIONS(550),
    [sym_section_marker] = ACTIONS(550),
    [anon_sym_ATcode] = ACTIONS(552),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(541),
    [aux_sym__text_token1] = ACTIONS(555),
    [sym_task_marker_default] = ACTIONS(558),
    [sym_task_marker_active] = ACTIONS(561),
    [sym_task_marker_done] = ACTIONS(564),
    [sym_task_marker_cancelled] = ACTIONS(567),
    [sym_list_item_marker] = ACTIONS(570),
    [sym_bold_start] = ACTIONS(573),
    [sym_italic_start] = ACTIONS(576),
    [sym_underline_start] = ACTIONS(579),
    [sym_inline_code_start] = ACTIONS(582),
  },
  [26] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(52),
    [sym_bold] = STATE(102),
    [sym_italic] = STATE(102),
    [sym_underline] = STATE(102),
    [sym__emphasis] = STATE(52),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(52),
    [sym_time] = STATE(100),
    [sym_timerange] = STATE(52),
    [sym_datetime] = STATE(99),
    [sym_datetimerange] = STATE(52),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_inline_code] = STATE(52),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(52),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(52),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(52),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(585),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_ticket] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(13),
    [sym_tag_negative] = ACTIONS(13),
    [sym_tag_hash] = ACTIONS(13),
    [sym_tag_context] = ACTIONS(13),
    [sym_tag_danger] = ACTIONS(13),
    [sym_tag_identifier] = ACTIONS(13),
    [sym_heading_1_marker] = ACTIONS(587),
    [sym_heading_2_marker] = ACTIONS(587),
    [sym_heading_3_marker] = ACTIONS(587),
    [sym_heading_4_marker] = ACTIONS(587),
    [sym_heading_5_marker] = ACTIONS(587),
    [sym_heading_6_marker] = ACTIONS(587),
    [sym_section_marker] = ACTIONS(587),
    [anon_sym_ATcode] = ACTIONS(33),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym_task_marker_default] = ACTIONS(37),
    [sym_task_marker_active] = ACTIONS(39),
    [sym_task_marker_done] = ACTIONS(41),
    [sym_task_marker_cancelled] = ACTIONS(43),
    [sym_list_item_marker] = ACTIONS(45),
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
    [sym_inline_code_start] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(591), 1,
      aux_sym_task_session_token1,
    ACTIONS(593), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(597), 1,
      sym_task_marker_default,
    ACTIONS(599), 1,
      sym_task_marker_active,
    ACTIONS(601), 1,
      sym_task_marker_done,
    ACTIONS(603), 1,
      sym_task_marker_cancelled,
    ACTIONS(605), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(595), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(47), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(589), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(29), 10,
      sym__task,
      sym_task_default,
      sym_task_active,
      sym_task_done,
      sym_task_cancelled,
      sym_task_session,
      sym_task_schedule,
      sym_list_item,
      sym_text_line,
      aux_sym__task_children_repeat1,
  [112] = 26,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(591), 1,
      aux_sym_task_session_token1,
    ACTIONS(593), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(597), 1,
      sym_task_marker_default,
    ACTIONS(599), 1,
      sym_task_marker_active,
    ACTIONS(601), 1,
      sym_task_marker_done,
    ACTIONS(603), 1,
      sym_task_marker_cancelled,
    ACTIONS(605), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(607), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(47), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(589), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(29), 10,
      sym__task,
      sym_task_default,
      sym_task_active,
      sym_task_done,
      sym_task_cancelled,
      sym_task_session,
      sym_task_schedule,
      sym_list_item,
      sym_text_line,
      aux_sym__task_children_repeat1,
  [224] = 26,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(621), 1,
      aux_sym_task_session_token1,
    ACTIONS(624), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(627), 1,
      aux_sym__text_token1,
    ACTIONS(632), 1,
      sym_task_marker_default,
    ACTIONS(635), 1,
      sym_task_marker_active,
    ACTIONS(638), 1,
      sym_task_marker_done,
    ACTIONS(641), 1,
      sym_task_marker_cancelled,
    ACTIONS(644), 1,
      sym_list_item_marker,
    ACTIONS(647), 1,
      sym_bold_start,
    ACTIONS(650), 1,
      sym_italic_start,
    ACTIONS(653), 1,
      sym_underline_start,
    ACTIONS(656), 1,
      sym_inline_code_start,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(609), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(618), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(630), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(615), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(47), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(612), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(29), 10,
      sym__task,
      sym_task_default,
      sym_task_active,
      sym_task_done,
      sym_task_cancelled,
      sym_task_session,
      sym_task_schedule,
      sym_list_item,
      sym_text_line,
      aux_sym__task_children_repeat1,
  [336] = 25,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(591), 1,
      aux_sym_task_session_token1,
    ACTIONS(593), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(597), 1,
      sym_task_marker_default,
    ACTIONS(599), 1,
      sym_task_marker_active,
    ACTIONS(601), 1,
      sym_task_marker_done,
    ACTIONS(603), 1,
      sym_task_marker_cancelled,
    ACTIONS(605), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(47), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(589), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(27), 10,
      sym__task,
      sym_task_default,
      sym_task_active,
      sym_task_done,
      sym_task_cancelled,
      sym_task_session,
      sym_task_schedule,
      sym_list_item,
      sym_text_line,
      aux_sym__task_children_repeat1,
  [444] = 25,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(591), 1,
      aux_sym_task_session_token1,
    ACTIONS(593), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(597), 1,
      sym_task_marker_default,
    ACTIONS(599), 1,
      sym_task_marker_active,
    ACTIONS(601), 1,
      sym_task_marker_done,
    ACTIONS(603), 1,
      sym_task_marker_cancelled,
    ACTIONS(605), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(47), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(589), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(28), 10,
      sym__task,
      sym_task_default,
      sym_task_active,
      sym_task_done,
      sym_task_cancelled,
      sym_task_session,
      sym_task_schedule,
      sym_list_item,
      sym_text_line,
      aux_sym__task_children_repeat1,
  [552] = 20,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(661), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(46), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [639] = 20,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(665), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(46), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [726] = 20,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(667), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(46), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [813] = 20,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(681), 1,
      aux_sym__text_token1,
    ACTIONS(686), 1,
      sym_list_item_marker,
    ACTIONS(689), 1,
      sym_bold_start,
    ACTIONS(692), 1,
      sym_italic_start,
    ACTIONS(695), 1,
      sym_underline_start,
    ACTIONS(698), 1,
      sym_inline_code_start,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(669), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(678), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(684), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(675), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(46), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(672), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [900] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(32), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(46), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [983] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(46), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1066] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(34), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(46), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1149] = 18,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(703), 1,
      aux_sym_code_block_token1,
    ACTIONS(705), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(42), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(701), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1227] = 18,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    STATE(76), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(45), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(707), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1305] = 18,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    STATE(57), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(39), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(709), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1383] = 18,
    ACTIONS(723), 1,
      aux_sym_code_block_token1,
    ACTIONS(725), 1,
      aux_sym__text_token1,
    ACTIONS(728), 1,
      sym__eof,
    ACTIONS(730), 1,
      sym_bold_start,
    ACTIONS(733), 1,
      sym_italic_start,
    ACTIONS(736), 1,
      sym_underline_start,
    ACTIONS(739), 1,
      sym_inline_code_start,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(711), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(720), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(717), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(42), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(714), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1461] = 18,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    STATE(54), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(39), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(709), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1539] = 18,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(742), 1,
      aux_sym_code_block_token1,
    ACTIONS(744), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(42), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(701), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1617] = 18,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(746), 1,
      aux_sym_code_block_token1,
    ACTIONS(748), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(42), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(701), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1695] = 18,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(750), 1,
      aux_sym_code_block_token1,
    ACTIONS(752), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(42), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(701), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1773] = 18,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(754), 1,
      aux_sym_code_block_token1,
    ACTIONS(756), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(42), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(701), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1851] = 18,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    STATE(53), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(39), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(709), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [1929] = 18,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    STATE(90), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(44), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(758), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [2007] = 18,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    STATE(73), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(45), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(707), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [2085] = 18,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    STATE(77), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(45), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(707), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [2163] = 18,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(53), 1,
      sym_inline_code_start,
    ACTIONS(760), 1,
      aux_sym_code_block_token1,
    ACTIONS(762), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(99), 1,
      sym_datetime,
    STATE(100), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(42), 9,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(701), 10,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
  [2241] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(768), 1,
      sym__indent,
    STATE(69), 1,
      sym__task_children,
    ACTIONS(764), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(766), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2291] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(774), 1,
      sym__indent,
    STATE(64), 1,
      sym__list_item_children,
    ACTIONS(770), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(772), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2341] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(768), 1,
      sym__indent,
    STATE(72), 1,
      sym__task_children,
    ACTIONS(776), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(778), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2391] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(768), 1,
      sym__indent,
    STATE(71), 1,
      sym__task_children,
    ACTIONS(780), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(782), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2441] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(768), 1,
      sym__indent,
    STATE(70), 1,
      sym__task_children,
    ACTIONS(784), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(786), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2491] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(788), 11,
      sym__indent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(790), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2536] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(792), 11,
      sym__indent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(794), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2581] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(796), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(798), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2625] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(800), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(802), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2669] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(804), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(806), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2713] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(808), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(810), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2757] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(812), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(814), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2801] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(816), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(818), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2845] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(820), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(822), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2889] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(824), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(826), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2933] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(788), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(790), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2977] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(828), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(830), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [3021] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(832), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(834), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [3065] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(836), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(838), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [3109] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(840), 10,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      ts_builtin_sym_end,
    ACTIONS(842), 26,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_heading_1_marker,
      sym_heading_2_marker,
      sym_heading_3_marker,
      sym_heading_4_marker,
      sym_heading_5_marker,
      sym_heading_6_marker,
      sym_section_marker,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [3153] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(844), 1,
      sym__indent,
    STATE(80), 1,
      sym__list_item_children,
    ACTIONS(770), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(772), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3198] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(846), 1,
      sym__indent,
    STATE(83), 1,
      sym__task_children,
    ACTIONS(780), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(782), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3243] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(846), 1,
      sym__indent,
    STATE(84), 1,
      sym__task_children,
    ACTIONS(776), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(778), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3288] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(846), 1,
      sym__indent,
    STATE(81), 1,
      sym__task_children,
    ACTIONS(764), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(766), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3333] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(846), 1,
      sym__indent,
    STATE(82), 1,
      sym__task_children,
    ACTIONS(784), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(786), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3378] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(788), 12,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(790), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3418] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(792), 12,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(794), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3458] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(812), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(814), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3497] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(828), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(830), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3536] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(832), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(834), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3575] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(836), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(838), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3614] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(840), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(842), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3653] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(850), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(848), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3692] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(804), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(806), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3731] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(824), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(826), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3770] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(854), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(852), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3809] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(788), 11,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(790), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_task_session_token1,
      aux_sym_task_schedule_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3848] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(856), 1,
      sym__indent,
    STATE(92), 1,
      sym__list_item_children,
    ACTIONS(770), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(772), 18,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
  [3887] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(788), 8,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(790), 18,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
  [3921] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(812), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(814), 18,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
  [3954] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(788), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(790), 18,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
  [3987] = 5,
    ACTIONS(860), 1,
      aux_sym_daterange_token1,
    STATE(104), 1,
      sym_time,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(862), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(858), 17,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4024] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(824), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(826), 18,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
  [4057] = 4,
    ACTIONS(866), 1,
      aux_sym__text_token1,
    STATE(96), 1,
      aux_sym__text_repeat1,
    ACTIONS(869), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(864), 18,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
  [4091] = 4,
    ACTIONS(873), 1,
      aux_sym__text_token1,
    STATE(96), 1,
      aux_sym__text_repeat1,
    ACTIONS(875), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(871), 18,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
  [4125] = 2,
    ACTIONS(879), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(877), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_daterange_token1,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4155] = 3,
    ACTIONS(881), 1,
      aux_sym_daterange_token1,
    ACTIONS(862), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(858), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4187] = 3,
    ACTIONS(883), 1,
      aux_sym_daterange_token1,
    ACTIONS(862), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(858), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4219] = 2,
    ACTIONS(887), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(885), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym__emphasis_token1,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4249] = 3,
    ACTIONS(891), 1,
      aux_sym__emphasis_token1,
    ACTIONS(893), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(889), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4281] = 2,
    ACTIONS(897), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(895), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym__emphasis_token1,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4311] = 2,
    ACTIONS(901), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(899), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_daterange_token1,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4341] = 2,
    ACTIONS(905), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(903), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym__emphasis_token1,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4371] = 2,
    ACTIONS(909), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(907), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_daterange_token1,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4401] = 2,
    ACTIONS(913), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(911), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4430] = 2,
    ACTIONS(879), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(877), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4459] = 2,
    ACTIONS(917), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(915), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4488] = 2,
    ACTIONS(921), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(919), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4517] = 2,
    ACTIONS(925), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(923), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4546] = 2,
    ACTIONS(909), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(907), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4575] = 2,
    ACTIONS(901), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(899), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4604] = 2,
    ACTIONS(929), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(927), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4633] = 2,
    ACTIONS(933), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(931), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_string,
      sym_number,
      sym_ticket,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
      aux_sym_time_token1,
      aux_sym_time_token2,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4662] = 7,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(935), 1,
      sym_code_block_end,
    ACTIONS(937), 1,
      aux_sym__text_token1,
    STATE(132), 1,
      aux_sym__text_repeat1,
    STATE(177), 1,
      sym_code_block_content,
    STATE(120), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(122), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4686] = 7,
    ACTIONS(939), 1,
      aux_sym_date_token1,
    ACTIONS(943), 1,
      aux_sym_time_token1,
    ACTIONS(945), 1,
      aux_sym_time_token2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    STATE(140), 1,
      sym_date,
    ACTIONS(941), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(162), 2,
      sym_time,
      sym_datetime,
  [4710] = 7,
    ACTIONS(939), 1,
      aux_sym_date_token1,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(949), 1,
      aux_sym_time_token1,
    ACTIONS(951), 1,
      aux_sym_time_token2,
    STATE(134), 1,
      sym_date,
    ACTIONS(941), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(107), 2,
      sym_time,
      sym_datetime,
  [4734] = 6,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(953), 1,
      aux_sym_date_token1,
    STATE(123), 1,
      sym_date,
    STATE(137), 1,
      sym_datetime,
    ACTIONS(955), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(172), 2,
      sym_daterange,
      sym_datetimerange,
  [4755] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(937), 1,
      aux_sym__text_token1,
    ACTIONS(957), 1,
      sym_code_block_end,
    STATE(132), 1,
      aux_sym__text_repeat1,
    STATE(121), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(122), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4776] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(959), 1,
      sym_code_block_end,
    ACTIONS(961), 1,
      aux_sym__text_token1,
    STATE(132), 1,
      aux_sym__text_repeat1,
    STATE(121), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(122), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4797] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(964), 1,
      aux_sym__text_token1,
    STATE(132), 1,
      aux_sym__text_repeat1,
    ACTIONS(966), 2,
      sym__eof,
      sym__eol,
    STATE(124), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4815] = 6,
    ACTIONS(943), 1,
      aux_sym_time_token1,
    ACTIONS(945), 1,
      aux_sym_time_token2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(968), 1,
      aux_sym_daterange_token1,
    STATE(138), 1,
      sym_time,
    ACTIONS(970), 2,
      sym__eof,
      sym__eol,
  [4835] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(972), 1,
      aux_sym__text_token1,
    STATE(132), 1,
      aux_sym__text_repeat1,
    ACTIONS(975), 2,
      sym__eof,
      sym__eol,
    STATE(124), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4853] = 6,
    ACTIONS(939), 1,
      aux_sym_date_token1,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    STATE(139), 1,
      sym_datetime,
    STATE(140), 1,
      sym_date,
    STATE(156), 1,
      sym_datetimerange,
    ACTIONS(941), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4873] = 3,
    ACTIONS(877), 1,
      aux_sym_time_token1,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(879), 4,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
      aux_sym_time_token2,
  [4886] = 4,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(977), 1,
      aux_sym_document_meta_token2,
    ACTIONS(979), 1,
      sym_document_meta_field_key,
    STATE(127), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4900] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(982), 1,
      aux_sym__text_token1,
    STATE(128), 1,
      aux_sym__text_repeat1,
    ACTIONS(869), 2,
      sym__eof,
      sym__eol,
  [4914] = 4,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(985), 1,
      aux_sym_date_token1,
    STATE(114), 1,
      sym_date,
    ACTIONS(987), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4928] = 4,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(989), 1,
      aux_sym_document_meta_token2,
    ACTIONS(991), 1,
      sym_document_meta_field_key,
    STATE(127), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4942] = 4,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(953), 1,
      aux_sym_date_token1,
    STATE(161), 1,
      sym_date,
    ACTIONS(955), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4956] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(993), 1,
      aux_sym__text_token1,
    STATE(128), 1,
      aux_sym__text_repeat1,
    ACTIONS(875), 2,
      sym__eof,
      sym__eol,
  [4970] = 4,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(991), 1,
      sym_document_meta_field_key,
    ACTIONS(995), 1,
      aux_sym_document_meta_token2,
    STATE(130), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4984] = 4,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(949), 1,
      aux_sym_time_token1,
    ACTIONS(951), 1,
      aux_sym_time_token2,
    STATE(113), 1,
      sym_time,
  [4997] = 4,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(949), 1,
      aux_sym_time_token1,
    ACTIONS(951), 1,
      aux_sym_time_token2,
    STATE(115), 1,
      sym_time,
  [5010] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(909), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [5019] = 3,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(997), 1,
      aux_sym_daterange_token1,
    ACTIONS(970), 2,
      sym__eof,
      sym__eol,
  [5030] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(901), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [5039] = 3,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(997), 1,
      aux_sym_daterange_token1,
    ACTIONS(999), 2,
      sym__eof,
      sym__eol,
  [5050] = 4,
    ACTIONS(943), 1,
      aux_sym_time_token1,
    ACTIONS(945), 1,
      aux_sym_time_token2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    STATE(138), 1,
      sym_time,
  [5063] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1001), 2,
      sym__eof,
      sym__eol,
  [5071] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1003), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(155), 1,
      sym_text_to_eol,
  [5081] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1005), 2,
      sym__eof,
      sym__eol,
  [5089] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1007), 2,
      sym__eof,
      sym__eol,
  [5097] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1009), 2,
      sym__eof,
      sym__eol,
  [5105] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1011), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(190), 1,
      sym_document_meta_field_value,
  [5115] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1013), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(55), 1,
      sym_text_to_eol,
  [5125] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1003), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(167), 1,
      sym_text_to_eol,
  [5135] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(792), 2,
      sym__eof,
      sym__eol,
  [5143] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1015), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [5151] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1017), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [5159] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1019), 2,
      sym__eof,
      sym__eol,
  [5167] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1013), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(56), 1,
      sym_text_to_eol,
  [5177] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1003), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(166), 1,
      sym_text_to_eol,
  [5187] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1021), 2,
      sym__eof,
      sym__eol,
  [5195] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(999), 2,
      sym__eof,
      sym__eol,
  [5203] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1003), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(141), 1,
      sym_text_to_eol,
  [5213] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1003), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(143), 1,
      sym_text_to_eol,
  [5223] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1003), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(144), 1,
      sym_text_to_eol,
  [5233] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1003), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(145), 1,
      sym_text_to_eol,
  [5243] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(929), 2,
      sym__eof,
      sym__eol,
  [5251] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(913), 2,
      sym__eof,
      sym__eol,
  [5259] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1023), 2,
      aux_sym_document_meta_token2,
      sym_document_meta_field_key,
  [5267] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1025), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [5275] = 3,
    ACTIONS(877), 1,
      aux_sym_time_token1,
    ACTIONS(879), 1,
      aux_sym_time_token2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
  [5285] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1027), 2,
      sym__eof,
      sym__eol,
  [5293] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1029), 2,
      sym__eof,
      sym__eol,
  [5301] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1031), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(75), 1,
      sym_text_to_eol,
  [5311] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1031), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(74), 1,
      sym_text_to_eol,
  [5321] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1003), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(152), 1,
      sym_text_to_eol,
  [5331] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1033), 1,
      aux_sym_code_block_start_token1,
    ACTIONS(1035), 1,
      anon_sym_LF,
  [5341] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(970), 2,
      sym__eof,
      sym__eol,
  [5349] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1037), 1,
      sym_inline_code_end,
  [5356] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1039), 1,
      sym_bold_end,
  [5363] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1041), 1,
      aux_sym_document_meta_field_value_token1,
  [5370] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1043), 1,
      ts_builtin_sym_end,
  [5377] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1045), 1,
      sym_code_block_end,
  [5384] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1047), 1,
      sym_italic_end,
  [5391] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1049), 1,
      sym_underline_end,
  [5398] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1051), 1,
      anon_sym_LF,
  [5405] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1053), 1,
      anon_sym_,
  [5412] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1055), 1,
      anon_sym_,
  [5419] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1057), 1,
      sym__eol,
  [5426] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1059), 1,
      anon_sym_COLON,
  [5433] = 1,
    ACTIONS(1061), 2,
      sym__eof,
      aux_sym_code_block_token1,
  [5438] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1063), 1,
      anon_sym_,
  [5445] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1065), 1,
      anon_sym_,
  [5452] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1067), 1,
      anon_sym_,
  [5459] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1069), 1,
      anon_sym_,
  [5466] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1071), 1,
      sym__eol,
  [5473] = 2,
    ACTIONS(947), 1,
      aux_sym_code_block_token1,
    ACTIONS(1073), 1,
      sym_code_block_language,
  [5480] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1075), 1,
      sym_inline_code_content,
  [5487] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1077), 1,
      sym_underline_content,
  [5494] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1079), 1,
      sym_italic_content,
  [5501] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1081), 1,
      sym_bold_content,
  [5508] = 1,
    ACTIONS(1083), 2,
      sym__eof,
      aux_sym_code_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 112,
  [SMALL_STATE(29)] = 224,
  [SMALL_STATE(30)] = 336,
  [SMALL_STATE(31)] = 444,
  [SMALL_STATE(32)] = 552,
  [SMALL_STATE(33)] = 639,
  [SMALL_STATE(34)] = 726,
  [SMALL_STATE(35)] = 813,
  [SMALL_STATE(36)] = 900,
  [SMALL_STATE(37)] = 983,
  [SMALL_STATE(38)] = 1066,
  [SMALL_STATE(39)] = 1149,
  [SMALL_STATE(40)] = 1227,
  [SMALL_STATE(41)] = 1305,
  [SMALL_STATE(42)] = 1383,
  [SMALL_STATE(43)] = 1461,
  [SMALL_STATE(44)] = 1539,
  [SMALL_STATE(45)] = 1617,
  [SMALL_STATE(46)] = 1695,
  [SMALL_STATE(47)] = 1773,
  [SMALL_STATE(48)] = 1851,
  [SMALL_STATE(49)] = 1929,
  [SMALL_STATE(50)] = 2007,
  [SMALL_STATE(51)] = 2085,
  [SMALL_STATE(52)] = 2163,
  [SMALL_STATE(53)] = 2241,
  [SMALL_STATE(54)] = 2291,
  [SMALL_STATE(55)] = 2341,
  [SMALL_STATE(56)] = 2391,
  [SMALL_STATE(57)] = 2441,
  [SMALL_STATE(58)] = 2491,
  [SMALL_STATE(59)] = 2536,
  [SMALL_STATE(60)] = 2581,
  [SMALL_STATE(61)] = 2625,
  [SMALL_STATE(62)] = 2669,
  [SMALL_STATE(63)] = 2713,
  [SMALL_STATE(64)] = 2757,
  [SMALL_STATE(65)] = 2801,
  [SMALL_STATE(66)] = 2845,
  [SMALL_STATE(67)] = 2889,
  [SMALL_STATE(68)] = 2933,
  [SMALL_STATE(69)] = 2977,
  [SMALL_STATE(70)] = 3021,
  [SMALL_STATE(71)] = 3065,
  [SMALL_STATE(72)] = 3109,
  [SMALL_STATE(73)] = 3153,
  [SMALL_STATE(74)] = 3198,
  [SMALL_STATE(75)] = 3243,
  [SMALL_STATE(76)] = 3288,
  [SMALL_STATE(77)] = 3333,
  [SMALL_STATE(78)] = 3378,
  [SMALL_STATE(79)] = 3418,
  [SMALL_STATE(80)] = 3458,
  [SMALL_STATE(81)] = 3497,
  [SMALL_STATE(82)] = 3536,
  [SMALL_STATE(83)] = 3575,
  [SMALL_STATE(84)] = 3614,
  [SMALL_STATE(85)] = 3653,
  [SMALL_STATE(86)] = 3692,
  [SMALL_STATE(87)] = 3731,
  [SMALL_STATE(88)] = 3770,
  [SMALL_STATE(89)] = 3809,
  [SMALL_STATE(90)] = 3848,
  [SMALL_STATE(91)] = 3887,
  [SMALL_STATE(92)] = 3921,
  [SMALL_STATE(93)] = 3954,
  [SMALL_STATE(94)] = 3987,
  [SMALL_STATE(95)] = 4024,
  [SMALL_STATE(96)] = 4057,
  [SMALL_STATE(97)] = 4091,
  [SMALL_STATE(98)] = 4125,
  [SMALL_STATE(99)] = 4155,
  [SMALL_STATE(100)] = 4187,
  [SMALL_STATE(101)] = 4219,
  [SMALL_STATE(102)] = 4249,
  [SMALL_STATE(103)] = 4281,
  [SMALL_STATE(104)] = 4311,
  [SMALL_STATE(105)] = 4341,
  [SMALL_STATE(106)] = 4371,
  [SMALL_STATE(107)] = 4401,
  [SMALL_STATE(108)] = 4430,
  [SMALL_STATE(109)] = 4459,
  [SMALL_STATE(110)] = 4488,
  [SMALL_STATE(111)] = 4517,
  [SMALL_STATE(112)] = 4546,
  [SMALL_STATE(113)] = 4575,
  [SMALL_STATE(114)] = 4604,
  [SMALL_STATE(115)] = 4633,
  [SMALL_STATE(116)] = 4662,
  [SMALL_STATE(117)] = 4686,
  [SMALL_STATE(118)] = 4710,
  [SMALL_STATE(119)] = 4734,
  [SMALL_STATE(120)] = 4755,
  [SMALL_STATE(121)] = 4776,
  [SMALL_STATE(122)] = 4797,
  [SMALL_STATE(123)] = 4815,
  [SMALL_STATE(124)] = 4835,
  [SMALL_STATE(125)] = 4853,
  [SMALL_STATE(126)] = 4873,
  [SMALL_STATE(127)] = 4886,
  [SMALL_STATE(128)] = 4900,
  [SMALL_STATE(129)] = 4914,
  [SMALL_STATE(130)] = 4928,
  [SMALL_STATE(131)] = 4942,
  [SMALL_STATE(132)] = 4956,
  [SMALL_STATE(133)] = 4970,
  [SMALL_STATE(134)] = 4984,
  [SMALL_STATE(135)] = 4997,
  [SMALL_STATE(136)] = 5010,
  [SMALL_STATE(137)] = 5019,
  [SMALL_STATE(138)] = 5030,
  [SMALL_STATE(139)] = 5039,
  [SMALL_STATE(140)] = 5050,
  [SMALL_STATE(141)] = 5063,
  [SMALL_STATE(142)] = 5071,
  [SMALL_STATE(143)] = 5081,
  [SMALL_STATE(144)] = 5089,
  [SMALL_STATE(145)] = 5097,
  [SMALL_STATE(146)] = 5105,
  [SMALL_STATE(147)] = 5115,
  [SMALL_STATE(148)] = 5125,
  [SMALL_STATE(149)] = 5135,
  [SMALL_STATE(150)] = 5143,
  [SMALL_STATE(151)] = 5151,
  [SMALL_STATE(152)] = 5159,
  [SMALL_STATE(153)] = 5167,
  [SMALL_STATE(154)] = 5177,
  [SMALL_STATE(155)] = 5187,
  [SMALL_STATE(156)] = 5195,
  [SMALL_STATE(157)] = 5203,
  [SMALL_STATE(158)] = 5213,
  [SMALL_STATE(159)] = 5223,
  [SMALL_STATE(160)] = 5233,
  [SMALL_STATE(161)] = 5243,
  [SMALL_STATE(162)] = 5251,
  [SMALL_STATE(163)] = 5259,
  [SMALL_STATE(164)] = 5267,
  [SMALL_STATE(165)] = 5275,
  [SMALL_STATE(166)] = 5285,
  [SMALL_STATE(167)] = 5293,
  [SMALL_STATE(168)] = 5301,
  [SMALL_STATE(169)] = 5311,
  [SMALL_STATE(170)] = 5321,
  [SMALL_STATE(171)] = 5331,
  [SMALL_STATE(172)] = 5341,
  [SMALL_STATE(173)] = 5349,
  [SMALL_STATE(174)] = 5356,
  [SMALL_STATE(175)] = 5363,
  [SMALL_STATE(176)] = 5370,
  [SMALL_STATE(177)] = 5377,
  [SMALL_STATE(178)] = 5384,
  [SMALL_STATE(179)] = 5391,
  [SMALL_STATE(180)] = 5398,
  [SMALL_STATE(181)] = 5405,
  [SMALL_STATE(182)] = 5412,
  [SMALL_STATE(183)] = 5419,
  [SMALL_STATE(184)] = 5426,
  [SMALL_STATE(185)] = 5433,
  [SMALL_STATE(186)] = 5438,
  [SMALL_STATE(187)] = 5445,
  [SMALL_STATE(188)] = 5452,
  [SMALL_STATE(189)] = 5459,
  [SMALL_STATE(190)] = 5466,
  [SMALL_STATE(191)] = 5473,
  [SMALL_STATE(192)] = 5480,
  [SMALL_STATE(193)] = 5487,
  [SMALL_STATE(194)] = 5494,
  [SMALL_STATE(195)] = 5501,
  [SMALL_STATE(196)] = 5508,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(175),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(189),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(188),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(187),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(186),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(182),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(181),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(170),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(171),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(153),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(195),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(194),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(193),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(192),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(175),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(52),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(98),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(106),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(188),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(187),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(186),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(182),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(181),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(170),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(171),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(97),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(48),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(41),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(153),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(147),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(43),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(195),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(194),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(193),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(192),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(175),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(52),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(98),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(106),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(187),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(186),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(182),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(181),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(170),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(171),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(97),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(48),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(41),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(153),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(147),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(43),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(195),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(194),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(193),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(192),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(175),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(52),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(98),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(106),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(186),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(182),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(181),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(170),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(171),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(97),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(48),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(41),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(153),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(147),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(43),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(195),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(194),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(193),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(192),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(175),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(52),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(98),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(106),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(182),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(181),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(170),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(171),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(97),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(48),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(41),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(153),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(147),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(43),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(195),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(194),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(193),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(192),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(175),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(52),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(98),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(106),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(181),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(170),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(171),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(97),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(48),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(41),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(153),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(147),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(43),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(195),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(194),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(193),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(192),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(175),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(52),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(98),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(106),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(170),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(171),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(97),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(48),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(41),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(153),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(147),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(43),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(195),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(194),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(193),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(192),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(175),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(52),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(98),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(106),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(171),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(97),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(48),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(41),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(153),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(147),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(43),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(195),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(194),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(193),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(192),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(175),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(47),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(98),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(106),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(125),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(119),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(97),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(40),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(51),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(169),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(168),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(50),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(195),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(194),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(193),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(192),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(175),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(46),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(98),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(106),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(97),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(49),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(195),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(194),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(193),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(192),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(175),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(42),
  [717] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(98),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(106),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(97),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(195),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(194),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(193),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(192),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 2),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 2),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 2),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_to_eol, 1),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_to_eol, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title_basic, 3),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title_basic, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_children, 3),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__task_children, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 3),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 2),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_children, 3),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_children, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 3),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 3),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 3),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 3),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 3),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 3),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_session, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_session, 3),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_schedule, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_schedule, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline, 1),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2),
  [866] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(96),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 1),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_underline, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_underline, 3),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 1),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 1),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic, 3),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold, 3),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetimerange, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetimerange, 3),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 2),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_code, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_code, 3),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_daterange, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daterange, 3),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timerange, 3),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timerange, 3),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_content, 1),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2),
  [961] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2), SHIFT_REPEAT(132),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2), SHIFT_REPEAT(132),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2), SHIFT_REPEAT(184),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(128),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 2),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_text_line, 2),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field, 4, .production_id = 2),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 4),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1043] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field_value, 1),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_syslang_external_scanner_create(void);
void tree_sitter_syslang_external_scanner_destroy(void *);
bool tree_sitter_syslang_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_syslang_external_scanner_serialize(void *, char *);
void tree_sitter_syslang_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_syslang(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_syslang_external_scanner_create,
      tree_sitter_syslang_external_scanner_destroy,
      tree_sitter_syslang_external_scanner_scan,
      tree_sitter_syslang_external_scanner_serialize,
      tree_sitter_syslang_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
