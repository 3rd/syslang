#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  aux_sym_string_token1 = 13,
  aux_sym_string_token2 = 14,
  sym_number = 15,
  sym_ticket = 16,
  aux_sym_date_token1 = 17,
  aux_sym_date_token2 = 18,
  aux_sym_date_token3 = 19,
  aux_sym_daterange_token1 = 20,
  aux_sym_time_token1 = 21,
  aux_sym_time_token2 = 22,
  sym_tag_positive = 23,
  sym_tag_negative = 24,
  sym_tag_hash = 25,
  sym_tag_context = 26,
  sym_tag_danger = 27,
  sym_tag_identifier = 28,
  sym_heading_1_marker = 29,
  sym_heading_2_marker = 30,
  sym_heading_3_marker = 31,
  sym_heading_4_marker = 32,
  sym_heading_5_marker = 33,
  sym_heading_6_marker = 34,
  anon_sym_ = 35,
  sym_section_marker = 36,
  aux_sym_task_session_token1 = 37,
  aux_sym_task_schedule_token1 = 38,
  sym_inline_code_content = 39,
  sym_code_block_language = 40,
  anon_sym_ATcode = 41,
  aux_sym_code_block_start_token1 = 42,
  anon_sym_LF = 43,
  sym_code_block_end = 44,
  aux_sym_code_block_token1 = 45,
  sym_external_link = 46,
  aux_sym__text_token1 = 47,
  sym__eof = 48,
  sym__eol = 49,
  sym__indent = 50,
  sym__dedent = 51,
  sym_task_marker_default = 52,
  sym_task_marker_active = 53,
  sym_task_marker_done = 54,
  sym_task_marker_cancelled = 55,
  sym_list_item_marker = 56,
  sym_bold_start = 57,
  sym_bold_end = 58,
  sym_italic_start = 59,
  sym_italic_end = 60,
  sym_underline_start = 61,
  sym_underline_end = 62,
  sym_inline_code_start = 63,
  sym_inline_code_end = 64,
  sym_document = 65,
  sym_document_title_basic = 66,
  sym_document_meta = 67,
  sym_document_meta_field = 68,
  sym_document_meta_field_value = 69,
  sym__comment_marker = 70,
  sym_comment = 71,
  sym_bold = 72,
  sym_italic = 73,
  sym_underline = 74,
  sym__emphasis = 75,
  sym_string = 76,
  sym_date = 77,
  sym_daterange = 78,
  sym_time = 79,
  sym_timerange = 80,
  sym_datetime = 81,
  sym_datetimerange = 82,
  sym_heading_1 = 83,
  sym_heading_2 = 84,
  sym_heading_3 = 85,
  sym_heading_4 = 86,
  sym_heading_5 = 87,
  sym_heading_6 = 88,
  sym_section = 89,
  sym__task = 90,
  sym_task_default = 91,
  sym_task_active = 92,
  sym_task_done = 93,
  sym_task_cancelled = 94,
  sym__task_children = 95,
  sym_task_session = 96,
  sym_task_schedule = 97,
  sym_list_item = 98,
  sym__list_item_children = 99,
  sym_inline_code = 100,
  sym_code_block_content = 101,
  sym_code_block_start = 102,
  sym_code_block = 103,
  sym__inline = 104,
  sym_text_to_eol = 105,
  sym_text_line = 106,
  sym__text = 107,
  sym__raw_text_line = 108,
  aux_sym_document_repeat1 = 109,
  aux_sym_document_meta_repeat1 = 110,
  aux_sym_heading_1_repeat1 = 111,
  aux_sym_heading_2_repeat1 = 112,
  aux_sym_heading_3_repeat1 = 113,
  aux_sym_heading_4_repeat1 = 114,
  aux_sym_heading_5_repeat1 = 115,
  aux_sym_heading_6_repeat1 = 116,
  aux_sym_section_repeat1 = 117,
  aux_sym__task_children_repeat1 = 118,
  aux_sym__list_item_children_repeat1 = 119,
  aux_sym_code_block_content_repeat1 = 120,
  aux_sym_text_line_repeat1 = 121,
  aux_sym__text_repeat1 = 122,
  aux_sym__raw_text_line_repeat1 = 123,
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
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
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
  [sym_string] = "string",
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
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
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
  [sym_string] = sym_string,
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
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
  [sym_string] = {
    .visible = true,
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
  [47] = 40,
  [48] = 39,
  [49] = 39,
  [50] = 43,
  [51] = 43,
  [52] = 41,
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
  [73] = 55,
  [74] = 57,
  [75] = 56,
  [76] = 54,
  [77] = 53,
  [78] = 58,
  [79] = 59,
  [80] = 80,
  [81] = 81,
  [82] = 70,
  [83] = 71,
  [84] = 72,
  [85] = 64,
  [86] = 62,
  [87] = 65,
  [88] = 69,
  [89] = 58,
  [90] = 55,
  [91] = 58,
  [92] = 58,
  [93] = 69,
  [94] = 94,
  [95] = 62,
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
  [107] = 106,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 104,
  [112] = 105,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 104,
  [128] = 128,
  [129] = 97,
  [130] = 130,
  [131] = 100,
  [132] = 132,
  [133] = 132,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 106,
  [138] = 138,
  [139] = 105,
  [140] = 140,
  [141] = 138,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 59,
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
  [161] = 161,
  [162] = 114,
  [163] = 115,
  [164] = 164,
  [165] = 165,
  [166] = 104,
  [167] = 167,
  [168] = 147,
  [169] = 169,
  [170] = 154,
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
  [197] = 197,
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
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(75)
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(88);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(177);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'S') ADVANCE(183);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(178);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(96);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(212);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == ',' ||
          lookahead == '.') SKIP(39)
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(179);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(44)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(37)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '@') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(86);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(39)
      if (lookahead == '\n') ADVANCE(168);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(162);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(163);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(94);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(95);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(92);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(93);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(90);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(44)
      if (lookahead == '\n') ADVANCE(171);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 68:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 69:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(144);
      END_STATE();
    case 70:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 72:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(72)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(176);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 73:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(175);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '@') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 74:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(175);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 75:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(75)
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(84);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(77)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '@') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(77)
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '@') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_document_meta_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_document_meta_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (lookahead == '-') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__comment_marker_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__comment_marker_token2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_italic_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_italic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_underline_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_underline_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__emphasis_token1);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ticket);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ticket);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_date_token3);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(227);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead == '+') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_negative);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_negative);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead == '!') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead == '$') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_heading_6_marker);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_heading_6_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_section_marker);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_section_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_task_session_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_task_schedule_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ATcode);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_code_block_start_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_code_block_end);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_code_block_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_external_link);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(175);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(176);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(177);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'S') ADVANCE(183);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(178);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(179);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(137);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(136);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'h') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'u') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(212);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(172);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 73, .external_lex_state = 2},
  [2] = {.lex_state = 72, .external_lex_state = 2},
  [3] = {.lex_state = 72, .external_lex_state = 2},
  [4] = {.lex_state = 72, .external_lex_state = 2},
  [5] = {.lex_state = 72, .external_lex_state = 2},
  [6] = {.lex_state = 72, .external_lex_state = 2},
  [7] = {.lex_state = 72, .external_lex_state = 2},
  [8] = {.lex_state = 72, .external_lex_state = 2},
  [9] = {.lex_state = 72, .external_lex_state = 2},
  [10] = {.lex_state = 72, .external_lex_state = 2},
  [11] = {.lex_state = 72, .external_lex_state = 2},
  [12] = {.lex_state = 72, .external_lex_state = 2},
  [13] = {.lex_state = 72, .external_lex_state = 2},
  [14] = {.lex_state = 72, .external_lex_state = 2},
  [15] = {.lex_state = 72, .external_lex_state = 2},
  [16] = {.lex_state = 72, .external_lex_state = 2},
  [17] = {.lex_state = 72, .external_lex_state = 2},
  [18] = {.lex_state = 72, .external_lex_state = 2},
  [19] = {.lex_state = 72, .external_lex_state = 2},
  [20] = {.lex_state = 72, .external_lex_state = 2},
  [21] = {.lex_state = 72, .external_lex_state = 2},
  [22] = {.lex_state = 72, .external_lex_state = 2},
  [23] = {.lex_state = 72, .external_lex_state = 2},
  [24] = {.lex_state = 72, .external_lex_state = 2},
  [25] = {.lex_state = 72, .external_lex_state = 2},
  [26] = {.lex_state = 72, .external_lex_state = 2},
  [27] = {.lex_state = 29, .external_lex_state = 3},
  [28] = {.lex_state = 29, .external_lex_state = 3},
  [29] = {.lex_state = 29, .external_lex_state = 3},
  [30] = {.lex_state = 29, .external_lex_state = 2},
  [31] = {.lex_state = 29, .external_lex_state = 2},
  [32] = {.lex_state = 30, .external_lex_state = 4},
  [33] = {.lex_state = 30, .external_lex_state = 4},
  [34] = {.lex_state = 30, .external_lex_state = 4},
  [35] = {.lex_state = 30, .external_lex_state = 4},
  [36] = {.lex_state = 30, .external_lex_state = 5},
  [37] = {.lex_state = 30, .external_lex_state = 5},
  [38] = {.lex_state = 30, .external_lex_state = 5},
  [39] = {.lex_state = 30, .external_lex_state = 6},
  [40] = {.lex_state = 30, .external_lex_state = 7},
  [41] = {.lex_state = 30, .external_lex_state = 7},
  [42] = {.lex_state = 30, .external_lex_state = 6},
  [43] = {.lex_state = 30, .external_lex_state = 7},
  [44] = {.lex_state = 30, .external_lex_state = 6},
  [45] = {.lex_state = 30, .external_lex_state = 6},
  [46] = {.lex_state = 30, .external_lex_state = 6},
  [47] = {.lex_state = 30, .external_lex_state = 7},
  [48] = {.lex_state = 30, .external_lex_state = 6},
  [49] = {.lex_state = 30, .external_lex_state = 6},
  [50] = {.lex_state = 30, .external_lex_state = 7},
  [51] = {.lex_state = 30, .external_lex_state = 7},
  [52] = {.lex_state = 30, .external_lex_state = 7},
  [53] = {.lex_state = 72, .external_lex_state = 8},
  [54] = {.lex_state = 72, .external_lex_state = 8},
  [55] = {.lex_state = 72, .external_lex_state = 8},
  [56] = {.lex_state = 72, .external_lex_state = 8},
  [57] = {.lex_state = 72, .external_lex_state = 8},
  [58] = {.lex_state = 72, .external_lex_state = 8},
  [59] = {.lex_state = 72, .external_lex_state = 8},
  [60] = {.lex_state = 72, .external_lex_state = 2},
  [61] = {.lex_state = 72, .external_lex_state = 2},
  [62] = {.lex_state = 72, .external_lex_state = 2},
  [63] = {.lex_state = 72, .external_lex_state = 2},
  [64] = {.lex_state = 72, .external_lex_state = 2},
  [65] = {.lex_state = 72, .external_lex_state = 2},
  [66] = {.lex_state = 72, .external_lex_state = 2},
  [67] = {.lex_state = 72, .external_lex_state = 2},
  [68] = {.lex_state = 72, .external_lex_state = 2},
  [69] = {.lex_state = 72, .external_lex_state = 2},
  [70] = {.lex_state = 72, .external_lex_state = 2},
  [71] = {.lex_state = 72, .external_lex_state = 2},
  [72] = {.lex_state = 72, .external_lex_state = 2},
  [73] = {.lex_state = 29, .external_lex_state = 9},
  [74] = {.lex_state = 29, .external_lex_state = 9},
  [75] = {.lex_state = 29, .external_lex_state = 9},
  [76] = {.lex_state = 29, .external_lex_state = 9},
  [77] = {.lex_state = 29, .external_lex_state = 9},
  [78] = {.lex_state = 29, .external_lex_state = 9},
  [79] = {.lex_state = 29, .external_lex_state = 9},
  [80] = {.lex_state = 29, .external_lex_state = 3},
  [81] = {.lex_state = 29, .external_lex_state = 3},
  [82] = {.lex_state = 29, .external_lex_state = 3},
  [83] = {.lex_state = 29, .external_lex_state = 3},
  [84] = {.lex_state = 29, .external_lex_state = 3},
  [85] = {.lex_state = 29, .external_lex_state = 3},
  [86] = {.lex_state = 29, .external_lex_state = 3},
  [87] = {.lex_state = 29, .external_lex_state = 3},
  [88] = {.lex_state = 29, .external_lex_state = 3},
  [89] = {.lex_state = 29, .external_lex_state = 3},
  [90] = {.lex_state = 30, .external_lex_state = 10},
  [91] = {.lex_state = 30, .external_lex_state = 10},
  [92] = {.lex_state = 30, .external_lex_state = 4},
  [93] = {.lex_state = 30, .external_lex_state = 4},
  [94] = {.lex_state = 35, .external_lex_state = 6},
  [95] = {.lex_state = 30, .external_lex_state = 4},
  [96] = {.lex_state = 31, .external_lex_state = 6},
  [97] = {.lex_state = 30, .external_lex_state = 6},
  [98] = {.lex_state = 35, .external_lex_state = 6},
  [99] = {.lex_state = 35, .external_lex_state = 6},
  [100] = {.lex_state = 30, .external_lex_state = 6},
  [101] = {.lex_state = 31, .external_lex_state = 6},
  [102] = {.lex_state = 31, .external_lex_state = 6},
  [103] = {.lex_state = 31, .external_lex_state = 6},
  [104] = {.lex_state = 35, .external_lex_state = 6},
  [105] = {.lex_state = 35, .external_lex_state = 6},
  [106] = {.lex_state = 35, .external_lex_state = 6},
  [107] = {.lex_state = 30, .external_lex_state = 6},
  [108] = {.lex_state = 30, .external_lex_state = 6},
  [109] = {.lex_state = 30, .external_lex_state = 6},
  [110] = {.lex_state = 30, .external_lex_state = 6},
  [111] = {.lex_state = 30, .external_lex_state = 6},
  [112] = {.lex_state = 30, .external_lex_state = 6},
  [113] = {.lex_state = 30, .external_lex_state = 6},
  [114] = {.lex_state = 30, .external_lex_state = 6},
  [115] = {.lex_state = 30, .external_lex_state = 6},
  [116] = {.lex_state = 30, .external_lex_state = 6},
  [117] = {.lex_state = 32},
  [118] = {.lex_state = 76},
  [119] = {.lex_state = 76},
  [120] = {.lex_state = 76},
  [121] = {.lex_state = 32},
  [122] = {.lex_state = 32},
  [123] = {.lex_state = 76, .external_lex_state = 11},
  [124] = {.lex_state = 33, .external_lex_state = 11},
  [125] = {.lex_state = 76},
  [126] = {.lex_state = 33, .external_lex_state = 11},
  [127] = {.lex_state = 76, .external_lex_state = 11},
  [128] = {.lex_state = 37},
  [129] = {.lex_state = 33, .external_lex_state = 11},
  [130] = {.lex_state = 37},
  [131] = {.lex_state = 33, .external_lex_state = 11},
  [132] = {.lex_state = 76},
  [133] = {.lex_state = 76},
  [134] = {.lex_state = 37},
  [135] = {.lex_state = 76, .external_lex_state = 11},
  [136] = {.lex_state = 76},
  [137] = {.lex_state = 76, .external_lex_state = 11},
  [138] = {.lex_state = 76},
  [139] = {.lex_state = 76, .external_lex_state = 11},
  [140] = {.lex_state = 76, .external_lex_state = 11},
  [141] = {.lex_state = 76},
  [142] = {.lex_state = 76, .external_lex_state = 11},
  [143] = {.lex_state = 38},
  [144] = {.lex_state = 76, .external_lex_state = 11},
  [145] = {.lex_state = 76, .external_lex_state = 11},
  [146] = {.lex_state = 38},
  [147] = {.lex_state = 38},
  [148] = {.lex_state = 38},
  [149] = {.lex_state = 32},
  [150] = {.lex_state = 76, .external_lex_state = 11},
  [151] = {.lex_state = 32},
  [152] = {.lex_state = 76, .external_lex_state = 11},
  [153] = {.lex_state = 38},
  [154] = {.lex_state = 38},
  [155] = {.lex_state = 38},
  [156] = {.lex_state = 76, .external_lex_state = 11},
  [157] = {.lex_state = 34},
  [158] = {.lex_state = 38},
  [159] = {.lex_state = 38},
  [160] = {.lex_state = 38},
  [161] = {.lex_state = 37},
  [162] = {.lex_state = 76, .external_lex_state = 11},
  [163] = {.lex_state = 76, .external_lex_state = 11},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 76, .external_lex_state = 11},
  [166] = {.lex_state = 76},
  [167] = {.lex_state = 76, .external_lex_state = 11},
  [168] = {.lex_state = 38},
  [169] = {.lex_state = 76, .external_lex_state = 11},
  [170] = {.lex_state = 38},
  [171] = {.lex_state = 38},
  [172] = {.lex_state = 76, .external_lex_state = 11},
  [173] = {.lex_state = 76, .external_lex_state = 11},
  [174] = {.lex_state = 76, .external_lex_state = 12},
  [175] = {.lex_state = 38},
  [176] = {.lex_state = 76},
  [177] = {.lex_state = 76, .external_lex_state = 13},
  [178] = {.lex_state = 76},
  [179] = {.lex_state = 36},
  [180] = {.lex_state = 76, .external_lex_state = 14},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 36},
  [183] = {.lex_state = 36},
  [184] = {.lex_state = 76, .external_lex_state = 15},
  [185] = {.lex_state = 76},
  [186] = {.lex_state = 76, .external_lex_state = 16},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 76, .external_lex_state = 17},
  [191] = {.lex_state = 76, .external_lex_state = 17},
  [192] = {.lex_state = 76},
  [193] = {.lex_state = 40},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 42},
  [196] = {.lex_state = 43},
  [197] = {.lex_state = 76, .external_lex_state = 16},
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
    [ts_external_token_underline_end] = true,
  },
  [13] = {
    [ts_external_token_bold_end] = true,
  },
  [14] = {
    [ts_external_token_italic_end] = true,
  },
  [15] = {
    [ts_external_token_inline_code_end] = true,
  },
  [16] = {
    [ts_external_token__eof] = true,
  },
  [17] = {
    [ts_external_token__eol] = true,
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
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
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
    [sym_document_title_basic] = STATE(4),
    [sym_document_meta] = STATE(4),
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_heading_1] = STATE(3),
    [sym_heading_2] = STATE(3),
    [sym_heading_3] = STATE(3),
    [sym_heading_4] = STATE(3),
    [sym_heading_5] = STATE(3),
    [sym_heading_6] = STATE(3),
    [sym_section] = STATE(3),
    [sym__task] = STATE(3),
    [sym_task_default] = STATE(3),
    [sym_task_active] = STATE(3),
    [sym_task_done] = STATE(3),
    [sym_task_cancelled] = STATE(3),
    [sym_list_item] = STATE(3),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(3),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(3),
    [sym__text] = STATE(49),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_document_title_basic_marker] = ACTIONS(7),
    [aux_sym_document_meta_token1] = ACTIONS(9),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(21),
    [sym_heading_2_marker] = ACTIONS(23),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [2] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(49),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(57),
    [aux_sym__comment_marker_token1] = ACTIONS(59),
    [aux_sym__comment_marker_token2] = ACTIONS(59),
    [aux_sym_string_token1] = ACTIONS(62),
    [aux_sym_string_token2] = ACTIONS(62),
    [sym_number] = ACTIONS(65),
    [sym_ticket] = ACTIONS(65),
    [aux_sym_date_token1] = ACTIONS(68),
    [aux_sym_date_token2] = ACTIONS(68),
    [aux_sym_date_token3] = ACTIONS(68),
    [aux_sym_time_token1] = ACTIONS(71),
    [aux_sym_time_token2] = ACTIONS(71),
    [sym_tag_positive] = ACTIONS(65),
    [sym_tag_negative] = ACTIONS(65),
    [sym_tag_hash] = ACTIONS(65),
    [sym_tag_context] = ACTIONS(65),
    [sym_tag_danger] = ACTIONS(65),
    [sym_tag_identifier] = ACTIONS(65),
    [sym_heading_1_marker] = ACTIONS(74),
    [sym_heading_2_marker] = ACTIONS(77),
    [sym_heading_3_marker] = ACTIONS(80),
    [sym_heading_4_marker] = ACTIONS(83),
    [sym_heading_5_marker] = ACTIONS(86),
    [sym_heading_6_marker] = ACTIONS(89),
    [sym_section_marker] = ACTIONS(92),
    [anon_sym_ATcode] = ACTIONS(95),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(65),
    [aux_sym__text_token1] = ACTIONS(98),
    [sym_task_marker_default] = ACTIONS(101),
    [sym_task_marker_active] = ACTIONS(104),
    [sym_task_marker_done] = ACTIONS(107),
    [sym_task_marker_cancelled] = ACTIONS(110),
    [sym_list_item_marker] = ACTIONS(113),
    [sym_bold_start] = ACTIONS(116),
    [sym_italic_start] = ACTIONS(119),
    [sym_underline_start] = ACTIONS(122),
    [sym_inline_code_start] = ACTIONS(125),
  },
  [3] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(49),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(128),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(21),
    [sym_heading_2_marker] = ACTIONS(23),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [4] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(5),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(5),
    [sym__text] = STATE(49),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(128),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(21),
    [sym_heading_2_marker] = ACTIONS(23),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [5] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(49),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(130),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(21),
    [sym_heading_2_marker] = ACTIONS(23),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [6] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(7),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(49),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(132),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(134),
    [sym_heading_2_marker] = ACTIONS(23),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [7] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(7),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(49),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(136),
    [aux_sym__comment_marker_token1] = ACTIONS(138),
    [aux_sym__comment_marker_token2] = ACTIONS(138),
    [aux_sym_string_token1] = ACTIONS(141),
    [aux_sym_string_token2] = ACTIONS(141),
    [sym_number] = ACTIONS(144),
    [sym_ticket] = ACTIONS(144),
    [aux_sym_date_token1] = ACTIONS(147),
    [aux_sym_date_token2] = ACTIONS(147),
    [aux_sym_date_token3] = ACTIONS(147),
    [aux_sym_time_token1] = ACTIONS(150),
    [aux_sym_time_token2] = ACTIONS(150),
    [sym_tag_positive] = ACTIONS(144),
    [sym_tag_negative] = ACTIONS(144),
    [sym_tag_hash] = ACTIONS(144),
    [sym_tag_context] = ACTIONS(144),
    [sym_tag_danger] = ACTIONS(144),
    [sym_tag_identifier] = ACTIONS(144),
    [sym_heading_1_marker] = ACTIONS(153),
    [sym_heading_2_marker] = ACTIONS(155),
    [sym_heading_3_marker] = ACTIONS(158),
    [sym_heading_4_marker] = ACTIONS(161),
    [sym_heading_5_marker] = ACTIONS(164),
    [sym_heading_6_marker] = ACTIONS(167),
    [sym_section_marker] = ACTIONS(170),
    [anon_sym_ATcode] = ACTIONS(173),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(144),
    [aux_sym__text_token1] = ACTIONS(176),
    [sym_task_marker_default] = ACTIONS(179),
    [sym_task_marker_active] = ACTIONS(182),
    [sym_task_marker_done] = ACTIONS(185),
    [sym_task_marker_cancelled] = ACTIONS(188),
    [sym_list_item_marker] = ACTIONS(191),
    [sym_bold_start] = ACTIONS(194),
    [sym_italic_start] = ACTIONS(197),
    [sym_underline_start] = ACTIONS(200),
    [sym_inline_code_start] = ACTIONS(203),
  },
  [8] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(6),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(6),
    [sym__text] = STATE(49),
    [aux_sym_heading_1_repeat1] = STATE(6),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(206),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(208),
    [sym_heading_2_marker] = ACTIONS(23),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [9] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(9),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(9),
    [sym__text] = STATE(49),
    [aux_sym_heading_2_repeat1] = STATE(9),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(210),
    [aux_sym__comment_marker_token1] = ACTIONS(212),
    [aux_sym__comment_marker_token2] = ACTIONS(212),
    [aux_sym_string_token1] = ACTIONS(215),
    [aux_sym_string_token2] = ACTIONS(215),
    [sym_number] = ACTIONS(218),
    [sym_ticket] = ACTIONS(218),
    [aux_sym_date_token1] = ACTIONS(221),
    [aux_sym_date_token2] = ACTIONS(221),
    [aux_sym_date_token3] = ACTIONS(221),
    [aux_sym_time_token1] = ACTIONS(224),
    [aux_sym_time_token2] = ACTIONS(224),
    [sym_tag_positive] = ACTIONS(218),
    [sym_tag_negative] = ACTIONS(218),
    [sym_tag_hash] = ACTIONS(218),
    [sym_tag_context] = ACTIONS(218),
    [sym_tag_danger] = ACTIONS(218),
    [sym_tag_identifier] = ACTIONS(218),
    [sym_heading_1_marker] = ACTIONS(227),
    [sym_heading_2_marker] = ACTIONS(227),
    [sym_heading_3_marker] = ACTIONS(229),
    [sym_heading_4_marker] = ACTIONS(232),
    [sym_heading_5_marker] = ACTIONS(235),
    [sym_heading_6_marker] = ACTIONS(238),
    [sym_section_marker] = ACTIONS(241),
    [anon_sym_ATcode] = ACTIONS(244),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(218),
    [aux_sym__text_token1] = ACTIONS(247),
    [sym_task_marker_default] = ACTIONS(250),
    [sym_task_marker_active] = ACTIONS(253),
    [sym_task_marker_done] = ACTIONS(256),
    [sym_task_marker_cancelled] = ACTIONS(259),
    [sym_list_item_marker] = ACTIONS(262),
    [sym_bold_start] = ACTIONS(265),
    [sym_italic_start] = ACTIONS(268),
    [sym_underline_start] = ACTIONS(271),
    [sym_inline_code_start] = ACTIONS(274),
  },
  [10] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(9),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(9),
    [sym__text] = STATE(49),
    [aux_sym_heading_2_repeat1] = STATE(9),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(277),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(279),
    [sym_heading_2_marker] = ACTIONS(279),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [11] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_heading_3] = STATE(10),
    [sym_heading_4] = STATE(10),
    [sym_heading_5] = STATE(10),
    [sym_heading_6] = STATE(10),
    [sym_section] = STATE(10),
    [sym__task] = STATE(10),
    [sym_task_default] = STATE(10),
    [sym_task_active] = STATE(10),
    [sym_task_done] = STATE(10),
    [sym_task_cancelled] = STATE(10),
    [sym_list_item] = STATE(10),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(10),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(10),
    [sym__text] = STATE(49),
    [aux_sym_heading_2_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(283),
    [sym_heading_2_marker] = ACTIONS(283),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [12] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(49),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym__comment_marker_token1] = ACTIONS(287),
    [aux_sym__comment_marker_token2] = ACTIONS(287),
    [aux_sym_string_token1] = ACTIONS(290),
    [aux_sym_string_token2] = ACTIONS(290),
    [sym_number] = ACTIONS(293),
    [sym_ticket] = ACTIONS(293),
    [aux_sym_date_token1] = ACTIONS(296),
    [aux_sym_date_token2] = ACTIONS(296),
    [aux_sym_date_token3] = ACTIONS(296),
    [aux_sym_time_token1] = ACTIONS(299),
    [aux_sym_time_token2] = ACTIONS(299),
    [sym_tag_positive] = ACTIONS(293),
    [sym_tag_negative] = ACTIONS(293),
    [sym_tag_hash] = ACTIONS(293),
    [sym_tag_context] = ACTIONS(293),
    [sym_tag_danger] = ACTIONS(293),
    [sym_tag_identifier] = ACTIONS(293),
    [sym_heading_1_marker] = ACTIONS(302),
    [sym_heading_2_marker] = ACTIONS(302),
    [sym_heading_3_marker] = ACTIONS(302),
    [sym_heading_4_marker] = ACTIONS(304),
    [sym_heading_5_marker] = ACTIONS(307),
    [sym_heading_6_marker] = ACTIONS(310),
    [sym_section_marker] = ACTIONS(313),
    [anon_sym_ATcode] = ACTIONS(316),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(293),
    [aux_sym__text_token1] = ACTIONS(319),
    [sym_task_marker_default] = ACTIONS(322),
    [sym_task_marker_active] = ACTIONS(325),
    [sym_task_marker_done] = ACTIONS(328),
    [sym_task_marker_cancelled] = ACTIONS(331),
    [sym_list_item_marker] = ACTIONS(334),
    [sym_bold_start] = ACTIONS(337),
    [sym_italic_start] = ACTIONS(340),
    [sym_underline_start] = ACTIONS(343),
    [sym_inline_code_start] = ACTIONS(346),
  },
  [13] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_heading_4] = STATE(14),
    [sym_heading_5] = STATE(14),
    [sym_heading_6] = STATE(14),
    [sym_section] = STATE(14),
    [sym__task] = STATE(14),
    [sym_task_default] = STATE(14),
    [sym_task_active] = STATE(14),
    [sym_task_done] = STATE(14),
    [sym_task_cancelled] = STATE(14),
    [sym_list_item] = STATE(14),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(14),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(14),
    [sym__text] = STATE(49),
    [aux_sym_heading_3_repeat1] = STATE(14),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(349),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(351),
    [sym_heading_2_marker] = ACTIONS(351),
    [sym_heading_3_marker] = ACTIONS(351),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [14] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(49),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(353),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(355),
    [sym_heading_2_marker] = ACTIONS(355),
    [sym_heading_3_marker] = ACTIONS(355),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [15] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_heading_5] = STATE(16),
    [sym_heading_6] = STATE(16),
    [sym_section] = STATE(16),
    [sym__task] = STATE(16),
    [sym_task_default] = STATE(16),
    [sym_task_active] = STATE(16),
    [sym_task_done] = STATE(16),
    [sym_task_cancelled] = STATE(16),
    [sym_list_item] = STATE(16),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(16),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(16),
    [sym__text] = STATE(49),
    [aux_sym_heading_4_repeat1] = STATE(16),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(357),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(359),
    [sym_heading_2_marker] = ACTIONS(359),
    [sym_heading_3_marker] = ACTIONS(359),
    [sym_heading_4_marker] = ACTIONS(359),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [16] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_heading_5] = STATE(17),
    [sym_heading_6] = STATE(17),
    [sym_section] = STATE(17),
    [sym__task] = STATE(17),
    [sym_task_default] = STATE(17),
    [sym_task_active] = STATE(17),
    [sym_task_done] = STATE(17),
    [sym_task_cancelled] = STATE(17),
    [sym_list_item] = STATE(17),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(17),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(17),
    [sym__text] = STATE(49),
    [aux_sym_heading_4_repeat1] = STATE(17),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(361),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(363),
    [sym_heading_2_marker] = ACTIONS(363),
    [sym_heading_3_marker] = ACTIONS(363),
    [sym_heading_4_marker] = ACTIONS(363),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [17] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_heading_5] = STATE(17),
    [sym_heading_6] = STATE(17),
    [sym_section] = STATE(17),
    [sym__task] = STATE(17),
    [sym_task_default] = STATE(17),
    [sym_task_active] = STATE(17),
    [sym_task_done] = STATE(17),
    [sym_task_cancelled] = STATE(17),
    [sym_list_item] = STATE(17),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(17),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(17),
    [sym__text] = STATE(49),
    [aux_sym_heading_4_repeat1] = STATE(17),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(365),
    [aux_sym__comment_marker_token1] = ACTIONS(367),
    [aux_sym__comment_marker_token2] = ACTIONS(367),
    [aux_sym_string_token1] = ACTIONS(370),
    [aux_sym_string_token2] = ACTIONS(370),
    [sym_number] = ACTIONS(373),
    [sym_ticket] = ACTIONS(373),
    [aux_sym_date_token1] = ACTIONS(376),
    [aux_sym_date_token2] = ACTIONS(376),
    [aux_sym_date_token3] = ACTIONS(376),
    [aux_sym_time_token1] = ACTIONS(379),
    [aux_sym_time_token2] = ACTIONS(379),
    [sym_tag_positive] = ACTIONS(373),
    [sym_tag_negative] = ACTIONS(373),
    [sym_tag_hash] = ACTIONS(373),
    [sym_tag_context] = ACTIONS(373),
    [sym_tag_danger] = ACTIONS(373),
    [sym_tag_identifier] = ACTIONS(373),
    [sym_heading_1_marker] = ACTIONS(382),
    [sym_heading_2_marker] = ACTIONS(382),
    [sym_heading_3_marker] = ACTIONS(382),
    [sym_heading_4_marker] = ACTIONS(382),
    [sym_heading_5_marker] = ACTIONS(384),
    [sym_heading_6_marker] = ACTIONS(387),
    [sym_section_marker] = ACTIONS(390),
    [anon_sym_ATcode] = ACTIONS(393),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(373),
    [aux_sym__text_token1] = ACTIONS(396),
    [sym_task_marker_default] = ACTIONS(399),
    [sym_task_marker_active] = ACTIONS(402),
    [sym_task_marker_done] = ACTIONS(405),
    [sym_task_marker_cancelled] = ACTIONS(408),
    [sym_list_item_marker] = ACTIONS(411),
    [sym_bold_start] = ACTIONS(414),
    [sym_italic_start] = ACTIONS(417),
    [sym_underline_start] = ACTIONS(420),
    [sym_inline_code_start] = ACTIONS(423),
  },
  [18] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_heading_6] = STATE(20),
    [sym_section] = STATE(20),
    [sym__task] = STATE(20),
    [sym_task_default] = STATE(20),
    [sym_task_active] = STATE(20),
    [sym_task_done] = STATE(20),
    [sym_task_cancelled] = STATE(20),
    [sym_list_item] = STATE(20),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(20),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(20),
    [sym__text] = STATE(49),
    [aux_sym_heading_5_repeat1] = STATE(20),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(426),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(428),
    [sym_heading_2_marker] = ACTIONS(428),
    [sym_heading_3_marker] = ACTIONS(428),
    [sym_heading_4_marker] = ACTIONS(428),
    [sym_heading_5_marker] = ACTIONS(428),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [19] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_heading_6] = STATE(19),
    [sym_section] = STATE(19),
    [sym__task] = STATE(19),
    [sym_task_default] = STATE(19),
    [sym_task_active] = STATE(19),
    [sym_task_done] = STATE(19),
    [sym_task_cancelled] = STATE(19),
    [sym_list_item] = STATE(19),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(19),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(19),
    [sym__text] = STATE(49),
    [aux_sym_heading_5_repeat1] = STATE(19),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(430),
    [aux_sym__comment_marker_token1] = ACTIONS(432),
    [aux_sym__comment_marker_token2] = ACTIONS(432),
    [aux_sym_string_token1] = ACTIONS(435),
    [aux_sym_string_token2] = ACTIONS(435),
    [sym_number] = ACTIONS(438),
    [sym_ticket] = ACTIONS(438),
    [aux_sym_date_token1] = ACTIONS(441),
    [aux_sym_date_token2] = ACTIONS(441),
    [aux_sym_date_token3] = ACTIONS(441),
    [aux_sym_time_token1] = ACTIONS(444),
    [aux_sym_time_token2] = ACTIONS(444),
    [sym_tag_positive] = ACTIONS(438),
    [sym_tag_negative] = ACTIONS(438),
    [sym_tag_hash] = ACTIONS(438),
    [sym_tag_context] = ACTIONS(438),
    [sym_tag_danger] = ACTIONS(438),
    [sym_tag_identifier] = ACTIONS(438),
    [sym_heading_1_marker] = ACTIONS(447),
    [sym_heading_2_marker] = ACTIONS(447),
    [sym_heading_3_marker] = ACTIONS(447),
    [sym_heading_4_marker] = ACTIONS(447),
    [sym_heading_5_marker] = ACTIONS(447),
    [sym_heading_6_marker] = ACTIONS(449),
    [sym_section_marker] = ACTIONS(452),
    [anon_sym_ATcode] = ACTIONS(455),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(438),
    [aux_sym__text_token1] = ACTIONS(458),
    [sym_task_marker_default] = ACTIONS(461),
    [sym_task_marker_active] = ACTIONS(464),
    [sym_task_marker_done] = ACTIONS(467),
    [sym_task_marker_cancelled] = ACTIONS(470),
    [sym_list_item_marker] = ACTIONS(473),
    [sym_bold_start] = ACTIONS(476),
    [sym_italic_start] = ACTIONS(479),
    [sym_underline_start] = ACTIONS(482),
    [sym_inline_code_start] = ACTIONS(485),
  },
  [20] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_heading_6] = STATE(19),
    [sym_section] = STATE(19),
    [sym__task] = STATE(19),
    [sym_task_default] = STATE(19),
    [sym_task_active] = STATE(19),
    [sym_task_done] = STATE(19),
    [sym_task_cancelled] = STATE(19),
    [sym_list_item] = STATE(19),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(19),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(19),
    [sym__text] = STATE(49),
    [aux_sym_heading_5_repeat1] = STATE(19),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(488),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(490),
    [sym_heading_2_marker] = ACTIONS(490),
    [sym_heading_3_marker] = ACTIONS(490),
    [sym_heading_4_marker] = ACTIONS(490),
    [sym_heading_5_marker] = ACTIONS(490),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [21] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(49),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(492),
    [aux_sym__comment_marker_token1] = ACTIONS(494),
    [aux_sym__comment_marker_token2] = ACTIONS(494),
    [aux_sym_string_token1] = ACTIONS(497),
    [aux_sym_string_token2] = ACTIONS(497),
    [sym_number] = ACTIONS(500),
    [sym_ticket] = ACTIONS(500),
    [aux_sym_date_token1] = ACTIONS(503),
    [aux_sym_date_token2] = ACTIONS(503),
    [aux_sym_date_token3] = ACTIONS(503),
    [aux_sym_time_token1] = ACTIONS(506),
    [aux_sym_time_token2] = ACTIONS(506),
    [sym_tag_positive] = ACTIONS(500),
    [sym_tag_negative] = ACTIONS(500),
    [sym_tag_hash] = ACTIONS(500),
    [sym_tag_context] = ACTIONS(500),
    [sym_tag_danger] = ACTIONS(500),
    [sym_tag_identifier] = ACTIONS(500),
    [sym_heading_1_marker] = ACTIONS(509),
    [sym_heading_2_marker] = ACTIONS(509),
    [sym_heading_3_marker] = ACTIONS(509),
    [sym_heading_4_marker] = ACTIONS(509),
    [sym_heading_5_marker] = ACTIONS(509),
    [sym_heading_6_marker] = ACTIONS(509),
    [sym_section_marker] = ACTIONS(511),
    [anon_sym_ATcode] = ACTIONS(514),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(500),
    [aux_sym__text_token1] = ACTIONS(517),
    [sym_task_marker_default] = ACTIONS(520),
    [sym_task_marker_active] = ACTIONS(523),
    [sym_task_marker_done] = ACTIONS(526),
    [sym_task_marker_cancelled] = ACTIONS(529),
    [sym_list_item_marker] = ACTIONS(532),
    [sym_bold_start] = ACTIONS(535),
    [sym_italic_start] = ACTIONS(538),
    [sym_underline_start] = ACTIONS(541),
    [sym_inline_code_start] = ACTIONS(544),
  },
  [22] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(49),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(547),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(549),
    [sym_heading_2_marker] = ACTIONS(549),
    [sym_heading_3_marker] = ACTIONS(549),
    [sym_heading_4_marker] = ACTIONS(549),
    [sym_heading_5_marker] = ACTIONS(549),
    [sym_heading_6_marker] = ACTIONS(549),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [23] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym_section] = STATE(22),
    [sym__task] = STATE(22),
    [sym_task_default] = STATE(22),
    [sym_task_active] = STATE(22),
    [sym_task_done] = STATE(22),
    [sym_task_cancelled] = STATE(22),
    [sym_list_item] = STATE(22),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(22),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(22),
    [sym__text] = STATE(49),
    [aux_sym_heading_6_repeat1] = STATE(22),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(551),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(553),
    [sym_heading_2_marker] = ACTIONS(553),
    [sym_heading_3_marker] = ACTIONS(553),
    [sym_heading_4_marker] = ACTIONS(553),
    [sym_heading_5_marker] = ACTIONS(553),
    [sym_heading_6_marker] = ACTIONS(553),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [24] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym__task] = STATE(26),
    [sym_task_default] = STATE(26),
    [sym_task_active] = STATE(26),
    [sym_task_done] = STATE(26),
    [sym_task_cancelled] = STATE(26),
    [sym_list_item] = STATE(26),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(26),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(26),
    [sym__text] = STATE(49),
    [aux_sym_section_repeat1] = STATE(26),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(555),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(557),
    [sym_heading_2_marker] = ACTIONS(557),
    [sym_heading_3_marker] = ACTIONS(557),
    [sym_heading_4_marker] = ACTIONS(557),
    [sym_heading_5_marker] = ACTIONS(557),
    [sym_heading_6_marker] = ACTIONS(557),
    [sym_section_marker] = ACTIONS(557),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
  [25] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym__task] = STATE(25),
    [sym_task_default] = STATE(25),
    [sym_task_active] = STATE(25),
    [sym_task_done] = STATE(25),
    [sym_task_cancelled] = STATE(25),
    [sym_list_item] = STATE(25),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(25),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(25),
    [sym__text] = STATE(49),
    [aux_sym_section_repeat1] = STATE(25),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(559),
    [aux_sym__comment_marker_token1] = ACTIONS(561),
    [aux_sym__comment_marker_token2] = ACTIONS(561),
    [aux_sym_string_token1] = ACTIONS(564),
    [aux_sym_string_token2] = ACTIONS(564),
    [sym_number] = ACTIONS(567),
    [sym_ticket] = ACTIONS(567),
    [aux_sym_date_token1] = ACTIONS(570),
    [aux_sym_date_token2] = ACTIONS(570),
    [aux_sym_date_token3] = ACTIONS(570),
    [aux_sym_time_token1] = ACTIONS(573),
    [aux_sym_time_token2] = ACTIONS(573),
    [sym_tag_positive] = ACTIONS(567),
    [sym_tag_negative] = ACTIONS(567),
    [sym_tag_hash] = ACTIONS(567),
    [sym_tag_context] = ACTIONS(567),
    [sym_tag_danger] = ACTIONS(567),
    [sym_tag_identifier] = ACTIONS(567),
    [sym_heading_1_marker] = ACTIONS(576),
    [sym_heading_2_marker] = ACTIONS(576),
    [sym_heading_3_marker] = ACTIONS(576),
    [sym_heading_4_marker] = ACTIONS(576),
    [sym_heading_5_marker] = ACTIONS(576),
    [sym_heading_6_marker] = ACTIONS(576),
    [sym_section_marker] = ACTIONS(576),
    [anon_sym_ATcode] = ACTIONS(578),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(567),
    [aux_sym__text_token1] = ACTIONS(581),
    [sym_task_marker_default] = ACTIONS(584),
    [sym_task_marker_active] = ACTIONS(587),
    [sym_task_marker_done] = ACTIONS(590),
    [sym_task_marker_cancelled] = ACTIONS(593),
    [sym_list_item_marker] = ACTIONS(596),
    [sym_bold_start] = ACTIONS(599),
    [sym_italic_start] = ACTIONS(602),
    [sym_underline_start] = ACTIONS(605),
    [sym_inline_code_start] = ACTIONS(608),
  },
  [26] = {
    [sym__comment_marker] = STATE(175),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(101),
    [sym_italic] = STATE(101),
    [sym_underline] = STATE(101),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(99),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(98),
    [sym_datetimerange] = STATE(49),
    [sym__task] = STATE(25),
    [sym_task_default] = STATE(25),
    [sym_task_active] = STATE(25),
    [sym_task_done] = STATE(25),
    [sym_task_cancelled] = STATE(25),
    [sym_list_item] = STATE(25),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(117),
    [sym_code_block] = STATE(25),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(25),
    [sym__text] = STATE(49),
    [aux_sym_section_repeat1] = STATE(25),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(611),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [aux_sym_string_token2] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_ticket] = ACTIONS(15),
    [aux_sym_date_token1] = ACTIONS(17),
    [aux_sym_date_token2] = ACTIONS(17),
    [aux_sym_date_token3] = ACTIONS(17),
    [aux_sym_time_token1] = ACTIONS(19),
    [aux_sym_time_token2] = ACTIONS(19),
    [sym_tag_positive] = ACTIONS(15),
    [sym_tag_negative] = ACTIONS(15),
    [sym_tag_hash] = ACTIONS(15),
    [sym_tag_context] = ACTIONS(15),
    [sym_tag_danger] = ACTIONS(15),
    [sym_tag_identifier] = ACTIONS(15),
    [sym_heading_1_marker] = ACTIONS(613),
    [sym_heading_2_marker] = ACTIONS(613),
    [sym_heading_3_marker] = ACTIONS(613),
    [sym_heading_4_marker] = ACTIONS(613),
    [sym_heading_5_marker] = ACTIONS(613),
    [sym_heading_6_marker] = ACTIONS(613),
    [sym_section_marker] = ACTIONS(613),
    [anon_sym_ATcode] = ACTIONS(35),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(37),
    [sym_task_marker_default] = ACTIONS(39),
    [sym_task_marker_active] = ACTIONS(41),
    [sym_task_marker_done] = ACTIONS(43),
    [sym_task_marker_cancelled] = ACTIONS(45),
    [sym_list_item_marker] = ACTIONS(47),
    [sym_bold_start] = ACTIONS(49),
    [sym_italic_start] = ACTIONS(51),
    [sym_underline_start] = ACTIONS(53),
    [sym_inline_code_start] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(617), 1,
      aux_sym_task_session_token1,
    ACTIONS(619), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(623), 1,
      sym_task_marker_default,
    ACTIONS(625), 1,
      sym_task_marker_active,
    ACTIONS(627), 1,
      sym_task_marker_done,
    ACTIONS(629), 1,
      sym_task_marker_cancelled,
    ACTIONS(631), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(621), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(615), 9,
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
    STATE(48), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [116] = 27,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(617), 1,
      aux_sym_task_session_token1,
    ACTIONS(619), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(623), 1,
      sym_task_marker_default,
    ACTIONS(625), 1,
      sym_task_marker_active,
    ACTIONS(627), 1,
      sym_task_marker_done,
    ACTIONS(629), 1,
      sym_task_marker_cancelled,
    ACTIONS(631), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(633), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(615), 9,
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
    STATE(48), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [232] = 27,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(650), 1,
      aux_sym_task_session_token1,
    ACTIONS(653), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(656), 1,
      aux_sym__text_token1,
    ACTIONS(661), 1,
      sym_task_marker_default,
    ACTIONS(664), 1,
      sym_task_marker_active,
    ACTIONS(667), 1,
      sym_task_marker_done,
    ACTIONS(670), 1,
      sym_task_marker_cancelled,
    ACTIONS(673), 1,
      sym_list_item_marker,
    ACTIONS(676), 1,
      sym_bold_start,
    ACTIONS(679), 1,
      sym_italic_start,
    ACTIONS(682), 1,
      sym_underline_start,
    ACTIONS(685), 1,
      sym_inline_code_start,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(635), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(638), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(647), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(659), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(644), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(641), 9,
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
    STATE(48), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [348] = 26,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(617), 1,
      aux_sym_task_session_token1,
    ACTIONS(619), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(623), 1,
      sym_task_marker_default,
    ACTIONS(625), 1,
      sym_task_marker_active,
    ACTIONS(627), 1,
      sym_task_marker_done,
    ACTIONS(629), 1,
      sym_task_marker_cancelled,
    ACTIONS(631), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(615), 9,
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
    STATE(48), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [460] = 26,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(617), 1,
      aux_sym_task_session_token1,
    ACTIONS(619), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(623), 1,
      sym_task_marker_default,
    ACTIONS(625), 1,
      sym_task_marker_active,
    ACTIONS(627), 1,
      sym_task_marker_done,
    ACTIONS(629), 1,
      sym_task_marker_cancelled,
    ACTIONS(631), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(615), 9,
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
    STATE(48), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [572] = 21,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(692), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(690), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(688), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(46), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [663] = 21,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(692), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(694), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(688), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(46), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [754] = 21,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(692), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(696), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(688), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(46), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [845] = 21,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(713), 1,
      aux_sym__text_token1,
    ACTIONS(718), 1,
      sym_list_item_marker,
    ACTIONS(721), 1,
      sym_bold_start,
    ACTIONS(724), 1,
      sym_italic_start,
    ACTIONS(727), 1,
      sym_underline_start,
    ACTIONS(730), 1,
      sym_inline_code_start,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(698), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(701), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(710), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(716), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(707), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(704), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(46), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [936] = 20,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(692), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(32), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(688), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(46), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1023] = 20,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(692), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(688), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(46), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1110] = 20,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(692), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(34), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(688), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(46), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1197] = 19,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(735), 1,
      aux_sym_code_block_token1,
    ACTIONS(737), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(733), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(42), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1279] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    STATE(77), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(739), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(45), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1361] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    STATE(54), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(741), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(39), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1443] = 19,
    ACTIONS(758), 1,
      aux_sym_code_block_token1,
    ACTIONS(760), 1,
      aux_sym__text_token1,
    ACTIONS(763), 1,
      sym__eof,
    ACTIONS(765), 1,
      sym_bold_start,
    ACTIONS(768), 1,
      sym_italic_start,
    ACTIONS(771), 1,
      sym_underline_start,
    ACTIONS(774), 1,
      sym_inline_code_start,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(743), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(746), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(755), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(752), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(749), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(42), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1525] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    STATE(55), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(741), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(39), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1607] = 19,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(777), 1,
      aux_sym_code_block_token1,
    ACTIONS(779), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(733), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(42), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1689] = 19,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(783), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(733), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(42), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1771] = 19,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(785), 1,
      aux_sym_code_block_token1,
    ACTIONS(787), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(733), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(42), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1853] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    STATE(53), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(741), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(39), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [1935] = 19,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(789), 1,
      aux_sym_code_block_token1,
    ACTIONS(791), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(733), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(42), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [2017] = 19,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    ACTIONS(793), 1,
      aux_sym_code_block_token1,
    ACTIONS(795), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(733), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(42), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [2099] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    STATE(90), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(797), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(44), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [2181] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    STATE(73), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(739), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(45), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [2263] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(51), 1,
      sym_italic_start,
    ACTIONS(53), 1,
      sym_underline_start,
    ACTIONS(55), 1,
      sym_inline_code_start,
    STATE(76), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(98), 1,
      sym_datetime,
    STATE(99), 1,
      sym_time,
    STATE(175), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(101), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(739), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(45), 10,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
  [2345] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(803), 1,
      sym__indent,
    STATE(70), 1,
      sym__task_children,
    ACTIONS(799), 10,
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
    ACTIONS(801), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2396] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(803), 1,
      sym__indent,
    STATE(71), 1,
      sym__task_children,
    ACTIONS(805), 10,
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
    ACTIONS(807), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2447] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(813), 1,
      sym__indent,
    STATE(62), 1,
      sym__list_item_children,
    ACTIONS(809), 10,
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
    ACTIONS(811), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2498] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(803), 1,
      sym__indent,
    STATE(64), 1,
      sym__task_children,
    ACTIONS(815), 10,
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
    ACTIONS(817), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2549] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(803), 1,
      sym__indent,
    STATE(72), 1,
      sym__task_children,
    ACTIONS(819), 10,
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
    ACTIONS(821), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2600] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(823), 11,
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
    ACTIONS(825), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2646] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(827), 11,
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
    ACTIONS(829), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2692] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(831), 10,
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
    ACTIONS(833), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2737] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(835), 10,
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
    ACTIONS(837), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2782] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(839), 10,
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
    ACTIONS(841), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2827] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(843), 10,
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
    ACTIONS(845), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2872] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(847), 10,
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
    ACTIONS(849), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2917] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(851), 10,
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
    ACTIONS(853), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [2962] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(855), 10,
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
    ACTIONS(857), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3007] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(859), 10,
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
    ACTIONS(861), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3052] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(823), 10,
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
    ACTIONS(825), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3097] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(863), 10,
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
    ACTIONS(865), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3142] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(867), 10,
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
    ACTIONS(869), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3187] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(871), 10,
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
    ACTIONS(873), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3232] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(875), 10,
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
    ACTIONS(877), 27,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3277] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(879), 1,
      sym__indent,
    STATE(86), 1,
      sym__list_item_children,
    ACTIONS(809), 11,
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
    ACTIONS(811), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3323] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(881), 1,
      sym__indent,
    STATE(84), 1,
      sym__task_children,
    ACTIONS(819), 11,
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
    ACTIONS(821), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3369] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(881), 1,
      sym__indent,
    STATE(85), 1,
      sym__task_children,
    ACTIONS(815), 11,
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
    ACTIONS(817), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3415] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(881), 1,
      sym__indent,
    STATE(83), 1,
      sym__task_children,
    ACTIONS(805), 11,
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
    ACTIONS(807), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3461] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(881), 1,
      sym__indent,
    STATE(82), 1,
      sym__task_children,
    ACTIONS(799), 11,
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
    ACTIONS(801), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3507] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(823), 12,
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
    ACTIONS(825), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3548] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(827), 12,
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
    ACTIONS(829), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3589] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(885), 11,
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
    ACTIONS(883), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3629] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(889), 11,
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
    ACTIONS(887), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3669] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(867), 11,
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
    ACTIONS(869), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3709] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(871), 11,
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
    ACTIONS(873), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3749] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(875), 11,
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
    ACTIONS(877), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3789] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(847), 11,
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
    ACTIONS(849), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3829] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(839), 11,
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
    ACTIONS(841), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3869] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(851), 11,
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
    ACTIONS(853), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3909] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(863), 11,
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
    ACTIONS(865), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3949] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(823), 11,
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
    ACTIONS(825), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [3989] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(891), 1,
      sym__indent,
    STATE(95), 1,
      sym__list_item_children,
    ACTIONS(809), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(811), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4029] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(823), 8,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(825), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4064] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(823), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(825), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4098] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(863), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(865), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4132] = 5,
    ACTIONS(895), 1,
      aux_sym_daterange_token1,
    STATE(105), 1,
      sym_time,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(897), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(893), 18,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4170] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(839), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(841), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4204] = 2,
    ACTIONS(901), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(899), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym__emphasis_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4235] = 4,
    ACTIONS(905), 1,
      aux_sym__text_token1,
    STATE(100), 1,
      aux_sym__text_repeat1,
    ACTIONS(907), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(903), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4270] = 3,
    ACTIONS(909), 1,
      aux_sym_daterange_token1,
    ACTIONS(897), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(893), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4303] = 3,
    ACTIONS(911), 1,
      aux_sym_daterange_token1,
    ACTIONS(897), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(893), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4336] = 4,
    ACTIONS(915), 1,
      aux_sym__text_token1,
    STATE(100), 1,
      aux_sym__text_repeat1,
    ACTIONS(918), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(913), 19,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4371] = 3,
    ACTIONS(922), 1,
      aux_sym__emphasis_token1,
    ACTIONS(924), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(920), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4404] = 2,
    ACTIONS(928), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(926), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym__emphasis_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4435] = 2,
    ACTIONS(932), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(930), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym__emphasis_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4466] = 2,
    ACTIONS(936), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(934), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4497] = 2,
    ACTIONS(940), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(938), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4528] = 2,
    ACTIONS(944), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(942), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4559] = 2,
    ACTIONS(944), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(942), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4589] = 2,
    ACTIONS(948), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(946), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4619] = 2,
    ACTIONS(952), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(950), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4649] = 2,
    ACTIONS(956), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(954), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4679] = 2,
    ACTIONS(936), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(934), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4709] = 2,
    ACTIONS(940), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(938), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4739] = 2,
    ACTIONS(960), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(958), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4769] = 2,
    ACTIONS(964), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(962), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4799] = 2,
    ACTIONS(968), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(966), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4829] = 2,
    ACTIONS(972), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(970), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      aux_sym_string_token1,
      aux_sym_string_token2,
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
  [4859] = 7,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(974), 1,
      sym_code_block_end,
    ACTIONS(976), 1,
      aux_sym__text_token1,
    STATE(129), 1,
      aux_sym__text_repeat1,
    STATE(178), 1,
      sym_code_block_content,
    STATE(121), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(124), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4883] = 7,
    ACTIONS(978), 1,
      aux_sym_date_token1,
    ACTIONS(982), 1,
      aux_sym_time_token1,
    ACTIONS(984), 1,
      aux_sym_time_token2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    STATE(138), 1,
      sym_date,
    ACTIONS(980), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(163), 2,
      sym_time,
      sym_datetime,
  [4907] = 7,
    ACTIONS(978), 1,
      aux_sym_date_token1,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(988), 1,
      aux_sym_time_token1,
    ACTIONS(990), 1,
      aux_sym_time_token2,
    STATE(141), 1,
      sym_date,
    ACTIONS(980), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(115), 2,
      sym_time,
      sym_datetime,
  [4931] = 6,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(992), 1,
      aux_sym_date_token1,
    STATE(123), 1,
      sym_date,
    STATE(135), 1,
      sym_datetime,
    ACTIONS(994), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(172), 2,
      sym_daterange,
      sym_datetimerange,
  [4952] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(976), 1,
      aux_sym__text_token1,
    ACTIONS(996), 1,
      sym_code_block_end,
    STATE(129), 1,
      aux_sym__text_repeat1,
    STATE(122), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(124), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4973] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(998), 1,
      sym_code_block_end,
    ACTIONS(1000), 1,
      aux_sym__text_token1,
    STATE(129), 1,
      aux_sym__text_repeat1,
    STATE(122), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(124), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4994] = 6,
    ACTIONS(982), 1,
      aux_sym_time_token1,
    ACTIONS(984), 1,
      aux_sym_time_token2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1003), 1,
      aux_sym_daterange_token1,
    STATE(139), 1,
      sym_time,
    ACTIONS(1005), 2,
      sym__eof,
      sym__eol,
  [5014] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1007), 1,
      aux_sym__text_token1,
    STATE(129), 1,
      aux_sym__text_repeat1,
    ACTIONS(1009), 2,
      sym__eof,
      sym__eol,
    STATE(126), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [5032] = 6,
    ACTIONS(978), 1,
      aux_sym_date_token1,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    STATE(138), 1,
      sym_date,
    STATE(140), 1,
      sym_datetime,
    STATE(173), 1,
      sym_datetimerange,
    ACTIONS(980), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [5052] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1011), 1,
      aux_sym__text_token1,
    STATE(129), 1,
      aux_sym__text_repeat1,
    ACTIONS(1014), 2,
      sym__eof,
      sym__eol,
    STATE(126), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [5070] = 3,
    ACTIONS(934), 1,
      aux_sym_time_token1,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(936), 4,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
      aux_sym_time_token2,
  [5083] = 4,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1016), 1,
      aux_sym_document_meta_token2,
    ACTIONS(1018), 1,
      sym_document_meta_field_key,
    STATE(130), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [5097] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1020), 1,
      aux_sym__text_token1,
    STATE(131), 1,
      aux_sym__text_repeat1,
    ACTIONS(907), 2,
      sym__eof,
      sym__eol,
  [5111] = 4,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1018), 1,
      sym_document_meta_field_key,
    ACTIONS(1022), 1,
      aux_sym_document_meta_token2,
    STATE(134), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [5125] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1024), 1,
      aux_sym__text_token1,
    STATE(131), 1,
      aux_sym__text_repeat1,
    ACTIONS(918), 2,
      sym__eof,
      sym__eol,
  [5139] = 4,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(992), 1,
      aux_sym_date_token1,
    STATE(162), 1,
      sym_date,
    ACTIONS(994), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [5153] = 4,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1027), 1,
      aux_sym_date_token1,
    STATE(114), 1,
      sym_date,
    ACTIONS(1029), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [5167] = 4,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1031), 1,
      aux_sym_document_meta_token2,
    ACTIONS(1033), 1,
      sym_document_meta_field_key,
    STATE(134), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [5181] = 3,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1036), 1,
      aux_sym_daterange_token1,
    ACTIONS(1005), 2,
      sym__eof,
      sym__eol,
  [5192] = 4,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(988), 1,
      aux_sym_time_token1,
    ACTIONS(990), 1,
      aux_sym_time_token2,
    STATE(116), 1,
      sym_time,
  [5205] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(944), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [5214] = 4,
    ACTIONS(982), 1,
      aux_sym_time_token1,
    ACTIONS(984), 1,
      aux_sym_time_token2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    STATE(139), 1,
      sym_time,
  [5227] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(940), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [5236] = 3,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1036), 1,
      aux_sym_daterange_token1,
    ACTIONS(1038), 2,
      sym__eof,
      sym__eol,
  [5247] = 4,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(988), 1,
      aux_sym_time_token1,
    ACTIONS(990), 1,
      aux_sym_time_token2,
    STATE(112), 1,
      sym_time,
  [5260] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1040), 2,
      sym__eof,
      sym__eol,
  [5268] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1042), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(156), 1,
      sym_text_to_eol,
  [5278] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1044), 2,
      sym__eof,
      sym__eol,
  [5286] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1046), 2,
      sym__eof,
      sym__eol,
  [5294] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1048), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(191), 1,
      sym_document_meta_field_value,
  [5304] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1050), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(56), 1,
      sym_text_to_eol,
  [5314] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1042), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(165), 1,
      sym_text_to_eol,
  [5324] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1052), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [5332] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(827), 2,
      sym__eof,
      sym__eol,
  [5340] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1054), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [5348] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1056), 2,
      sym__eof,
      sym__eol,
  [5356] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1042), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(167), 1,
      sym_text_to_eol,
  [5366] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1050), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(57), 1,
      sym_text_to_eol,
  [5376] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1042), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(142), 1,
      sym_text_to_eol,
  [5386] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1058), 2,
      sym__eof,
      sym__eol,
  [5394] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1060), 1,
      aux_sym_code_block_start_token1,
    ACTIONS(1062), 1,
      anon_sym_LF,
  [5404] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1042), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(169), 1,
      sym_text_to_eol,
  [5414] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1042), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(144), 1,
      sym_text_to_eol,
  [5424] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1042), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(145), 1,
      sym_text_to_eol,
  [5434] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1064), 2,
      aux_sym_document_meta_token2,
      sym_document_meta_field_key,
  [5442] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(964), 2,
      sym__eof,
      sym__eol,
  [5450] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(968), 2,
      sym__eof,
      sym__eol,
  [5458] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1066), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [5466] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1068), 2,
      sym__eof,
      sym__eol,
  [5474] = 3,
    ACTIONS(934), 1,
      aux_sym_time_token1,
    ACTIONS(936), 1,
      aux_sym_time_token2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
  [5484] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1070), 2,
      sym__eof,
      sym__eol,
  [5492] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1072), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(75), 1,
      sym_text_to_eol,
  [5502] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1074), 2,
      sym__eof,
      sym__eol,
  [5510] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1072), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(74), 1,
      sym_text_to_eol,
  [5520] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1042), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(152), 1,
      sym_text_to_eol,
  [5530] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1005), 2,
      sym__eof,
      sym__eol,
  [5538] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1038), 2,
      sym__eof,
      sym__eol,
  [5546] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1076), 1,
      sym_underline_end,
  [5553] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1078), 1,
      aux_sym_document_meta_field_value_token1,
  [5560] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1080), 1,
      ts_builtin_sym_end,
  [5567] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1082), 1,
      sym_bold_end,
  [5574] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1084), 1,
      sym_code_block_end,
  [5581] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1086), 1,
      anon_sym_,
  [5588] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1088), 1,
      sym_italic_end,
  [5595] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1090), 1,
      anon_sym_LF,
  [5602] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1092), 1,
      anon_sym_,
  [5609] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1094), 1,
      anon_sym_,
  [5616] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1096), 1,
      sym_inline_code_end,
  [5623] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1098), 1,
      anon_sym_COLON,
  [5630] = 1,
    ACTIONS(1100), 2,
      sym__eof,
      aux_sym_code_block_token1,
  [5635] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1102), 1,
      anon_sym_,
  [5642] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1104), 1,
      anon_sym_,
  [5649] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1106), 1,
      anon_sym_,
  [5656] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1108), 1,
      sym__eol,
  [5663] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1110), 1,
      sym__eol,
  [5670] = 2,
    ACTIONS(986), 1,
      aux_sym_code_block_token1,
    ACTIONS(1112), 1,
      sym_code_block_language,
  [5677] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1114), 1,
      sym_inline_code_content,
  [5684] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1116), 1,
      sym_underline_content,
  [5691] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1118), 1,
      sym_italic_content,
  [5698] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1120), 1,
      sym_bold_content,
  [5705] = 1,
    ACTIONS(1122), 2,
      sym__eof,
      aux_sym_code_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 116,
  [SMALL_STATE(29)] = 232,
  [SMALL_STATE(30)] = 348,
  [SMALL_STATE(31)] = 460,
  [SMALL_STATE(32)] = 572,
  [SMALL_STATE(33)] = 663,
  [SMALL_STATE(34)] = 754,
  [SMALL_STATE(35)] = 845,
  [SMALL_STATE(36)] = 936,
  [SMALL_STATE(37)] = 1023,
  [SMALL_STATE(38)] = 1110,
  [SMALL_STATE(39)] = 1197,
  [SMALL_STATE(40)] = 1279,
  [SMALL_STATE(41)] = 1361,
  [SMALL_STATE(42)] = 1443,
  [SMALL_STATE(43)] = 1525,
  [SMALL_STATE(44)] = 1607,
  [SMALL_STATE(45)] = 1689,
  [SMALL_STATE(46)] = 1771,
  [SMALL_STATE(47)] = 1853,
  [SMALL_STATE(48)] = 1935,
  [SMALL_STATE(49)] = 2017,
  [SMALL_STATE(50)] = 2099,
  [SMALL_STATE(51)] = 2181,
  [SMALL_STATE(52)] = 2263,
  [SMALL_STATE(53)] = 2345,
  [SMALL_STATE(54)] = 2396,
  [SMALL_STATE(55)] = 2447,
  [SMALL_STATE(56)] = 2498,
  [SMALL_STATE(57)] = 2549,
  [SMALL_STATE(58)] = 2600,
  [SMALL_STATE(59)] = 2646,
  [SMALL_STATE(60)] = 2692,
  [SMALL_STATE(61)] = 2737,
  [SMALL_STATE(62)] = 2782,
  [SMALL_STATE(63)] = 2827,
  [SMALL_STATE(64)] = 2872,
  [SMALL_STATE(65)] = 2917,
  [SMALL_STATE(66)] = 2962,
  [SMALL_STATE(67)] = 3007,
  [SMALL_STATE(68)] = 3052,
  [SMALL_STATE(69)] = 3097,
  [SMALL_STATE(70)] = 3142,
  [SMALL_STATE(71)] = 3187,
  [SMALL_STATE(72)] = 3232,
  [SMALL_STATE(73)] = 3277,
  [SMALL_STATE(74)] = 3323,
  [SMALL_STATE(75)] = 3369,
  [SMALL_STATE(76)] = 3415,
  [SMALL_STATE(77)] = 3461,
  [SMALL_STATE(78)] = 3507,
  [SMALL_STATE(79)] = 3548,
  [SMALL_STATE(80)] = 3589,
  [SMALL_STATE(81)] = 3629,
  [SMALL_STATE(82)] = 3669,
  [SMALL_STATE(83)] = 3709,
  [SMALL_STATE(84)] = 3749,
  [SMALL_STATE(85)] = 3789,
  [SMALL_STATE(86)] = 3829,
  [SMALL_STATE(87)] = 3869,
  [SMALL_STATE(88)] = 3909,
  [SMALL_STATE(89)] = 3949,
  [SMALL_STATE(90)] = 3989,
  [SMALL_STATE(91)] = 4029,
  [SMALL_STATE(92)] = 4064,
  [SMALL_STATE(93)] = 4098,
  [SMALL_STATE(94)] = 4132,
  [SMALL_STATE(95)] = 4170,
  [SMALL_STATE(96)] = 4204,
  [SMALL_STATE(97)] = 4235,
  [SMALL_STATE(98)] = 4270,
  [SMALL_STATE(99)] = 4303,
  [SMALL_STATE(100)] = 4336,
  [SMALL_STATE(101)] = 4371,
  [SMALL_STATE(102)] = 4404,
  [SMALL_STATE(103)] = 4435,
  [SMALL_STATE(104)] = 4466,
  [SMALL_STATE(105)] = 4497,
  [SMALL_STATE(106)] = 4528,
  [SMALL_STATE(107)] = 4559,
  [SMALL_STATE(108)] = 4589,
  [SMALL_STATE(109)] = 4619,
  [SMALL_STATE(110)] = 4649,
  [SMALL_STATE(111)] = 4679,
  [SMALL_STATE(112)] = 4709,
  [SMALL_STATE(113)] = 4739,
  [SMALL_STATE(114)] = 4769,
  [SMALL_STATE(115)] = 4799,
  [SMALL_STATE(116)] = 4829,
  [SMALL_STATE(117)] = 4859,
  [SMALL_STATE(118)] = 4883,
  [SMALL_STATE(119)] = 4907,
  [SMALL_STATE(120)] = 4931,
  [SMALL_STATE(121)] = 4952,
  [SMALL_STATE(122)] = 4973,
  [SMALL_STATE(123)] = 4994,
  [SMALL_STATE(124)] = 5014,
  [SMALL_STATE(125)] = 5032,
  [SMALL_STATE(126)] = 5052,
  [SMALL_STATE(127)] = 5070,
  [SMALL_STATE(128)] = 5083,
  [SMALL_STATE(129)] = 5097,
  [SMALL_STATE(130)] = 5111,
  [SMALL_STATE(131)] = 5125,
  [SMALL_STATE(132)] = 5139,
  [SMALL_STATE(133)] = 5153,
  [SMALL_STATE(134)] = 5167,
  [SMALL_STATE(135)] = 5181,
  [SMALL_STATE(136)] = 5192,
  [SMALL_STATE(137)] = 5205,
  [SMALL_STATE(138)] = 5214,
  [SMALL_STATE(139)] = 5227,
  [SMALL_STATE(140)] = 5236,
  [SMALL_STATE(141)] = 5247,
  [SMALL_STATE(142)] = 5260,
  [SMALL_STATE(143)] = 5268,
  [SMALL_STATE(144)] = 5278,
  [SMALL_STATE(145)] = 5286,
  [SMALL_STATE(146)] = 5294,
  [SMALL_STATE(147)] = 5304,
  [SMALL_STATE(148)] = 5314,
  [SMALL_STATE(149)] = 5324,
  [SMALL_STATE(150)] = 5332,
  [SMALL_STATE(151)] = 5340,
  [SMALL_STATE(152)] = 5348,
  [SMALL_STATE(153)] = 5356,
  [SMALL_STATE(154)] = 5366,
  [SMALL_STATE(155)] = 5376,
  [SMALL_STATE(156)] = 5386,
  [SMALL_STATE(157)] = 5394,
  [SMALL_STATE(158)] = 5404,
  [SMALL_STATE(159)] = 5414,
  [SMALL_STATE(160)] = 5424,
  [SMALL_STATE(161)] = 5434,
  [SMALL_STATE(162)] = 5442,
  [SMALL_STATE(163)] = 5450,
  [SMALL_STATE(164)] = 5458,
  [SMALL_STATE(165)] = 5466,
  [SMALL_STATE(166)] = 5474,
  [SMALL_STATE(167)] = 5484,
  [SMALL_STATE(168)] = 5492,
  [SMALL_STATE(169)] = 5502,
  [SMALL_STATE(170)] = 5510,
  [SMALL_STATE(171)] = 5520,
  [SMALL_STATE(172)] = 5530,
  [SMALL_STATE(173)] = 5538,
  [SMALL_STATE(174)] = 5546,
  [SMALL_STATE(175)] = 5553,
  [SMALL_STATE(176)] = 5560,
  [SMALL_STATE(177)] = 5567,
  [SMALL_STATE(178)] = 5574,
  [SMALL_STATE(179)] = 5581,
  [SMALL_STATE(180)] = 5588,
  [SMALL_STATE(181)] = 5595,
  [SMALL_STATE(182)] = 5602,
  [SMALL_STATE(183)] = 5609,
  [SMALL_STATE(184)] = 5616,
  [SMALL_STATE(185)] = 5623,
  [SMALL_STATE(186)] = 5630,
  [SMALL_STATE(187)] = 5635,
  [SMALL_STATE(188)] = 5642,
  [SMALL_STATE(189)] = 5649,
  [SMALL_STATE(190)] = 5656,
  [SMALL_STATE(191)] = 5663,
  [SMALL_STATE(192)] = 5670,
  [SMALL_STATE(193)] = 5677,
  [SMALL_STATE(194)] = 5684,
  [SMALL_STATE(195)] = 5691,
  [SMALL_STATE(196)] = 5698,
  [SMALL_STATE(197)] = 5705,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(175),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(189),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(188),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(187),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(183),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(182),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(171),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(157),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(154),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(196),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(195),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(194),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(193),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(175),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(109),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(49),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(104),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(106),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(188),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(187),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(183),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(182),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(179),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(171),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(157),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(97),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(47),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(41),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(154),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(147),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(43),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(196),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(195),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(194),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(193),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(175),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(109),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(49),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(104),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(106),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(187),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(183),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(182),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(179),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(171),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(157),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(97),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(47),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(41),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(154),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(147),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(43),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(196),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(195),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(194),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(193),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(175),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(109),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(49),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(104),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(106),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(183),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(182),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(179),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(171),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(157),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(97),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(47),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(41),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(154),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(147),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(43),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(196),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(195),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(194),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(193),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(175),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(109),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(49),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(104),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(106),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(182),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(179),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(171),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(157),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(97),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(47),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(41),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(154),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(147),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(43),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(196),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(195),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(194),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(193),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(175),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(109),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(49),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(104),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(106),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(179),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(171),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(157),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(97),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(47),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(41),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(154),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(147),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(43),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(196),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(195),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(194),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(193),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(175),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(109),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(49),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(104),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(106),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(171),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(157),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(97),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(47),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(41),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(154),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(147),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(43),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(196),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(195),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(194),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(193),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(175),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(109),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(49),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(104),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(106),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(157),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(97),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(47),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(41),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(154),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(147),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(43),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(196),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(195),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(194),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(193),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(175),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(109),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(48),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(104),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(106),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(125),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(120),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(97),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(40),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(52),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(170),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(168),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(51),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(196),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(195),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(194),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(193),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(175),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(109),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(46),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(104),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(106),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(97),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(50),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(196),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(195),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(194),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(193),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [743] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(175),
  [746] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(109),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(42),
  [752] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(104),
  [755] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(106),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [760] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(97),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(196),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(195),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(194),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(193),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 2),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 2),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 2),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 2),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_to_eol, 1),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_to_eol, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title_basic, 3),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title_basic, 3),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 3),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 3),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_children, 3),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__task_children, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 3),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 3),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 2),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 2),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_children, 3),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_children, 3),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 3),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 3),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 3),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_schedule, 3),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_schedule, 3),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_session, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_session, 3),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline, 1),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_underline, 3),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_underline, 3),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 1),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2),
  [915] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(100),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 1),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 1),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic, 3),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic, 3),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold, 3),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 2),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 2),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 2),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_code, 3),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_code, 3),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_daterange, 3),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daterange, 3),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetimerange, 3),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetimerange, 3),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timerange, 3),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timerange, 3),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_content, 1),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2), SHIFT_REPEAT(129),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2), SHIFT_REPEAT(129),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(131),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2), SHIFT_REPEAT(185),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 2),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_text_line, 2),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field, 4, .production_id = 2),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 4),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1080] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field_value, 1),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
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
