#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 266
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 17
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_Session_COLON = 37,
  anon_sym_Schedule_COLON = 38,
  aux_sym_list_item_token1 = 39,
  sym_inline_code_content = 40,
  sym_code_block_language = 41,
  anon_sym_ATcode = 42,
  aux_sym_code_block_start_token1 = 43,
  sym_code_block_end = 44,
  sym_external_link = 45,
  sym_label = 46,
  aux_sym_text_line_token1 = 47,
  aux_sym__text_token1 = 48,
  sym__eof = 49,
  sym__eol = 50,
  sym__indent = 51,
  sym__dedent = 52,
  sym_task_marker_default = 53,
  sym_task_marker_active = 54,
  sym_task_marker_done = 55,
  sym_task_marker_cancelled = 56,
  sym_list_item_marker = 57,
  sym_bold_start = 58,
  sym_bold_end = 59,
  sym_italic_start = 60,
  sym_italic_end = 61,
  sym_underline_start = 62,
  sym_underline_end = 63,
  sym_inline_code_start = 64,
  sym_inline_code_end = 65,
  sym_document = 66,
  sym_document_title_basic = 67,
  sym_document_meta = 68,
  sym_document_meta_field = 69,
  sym_document_meta_field_value = 70,
  sym__comment_marker = 71,
  sym_comment = 72,
  sym_bold = 73,
  sym_italic = 74,
  sym_underline = 75,
  sym__emphasis = 76,
  sym_string = 77,
  sym_date = 78,
  sym_daterange = 79,
  sym_time = 80,
  sym_timerange = 81,
  sym_datetime = 82,
  sym_datetimerange = 83,
  sym_heading_1 = 84,
  sym_heading_2 = 85,
  sym_heading_3 = 86,
  sym_heading_4 = 87,
  sym_heading_5 = 88,
  sym_heading_6 = 89,
  sym_section = 90,
  sym__task = 91,
  sym_task_default = 92,
  sym_task_active = 93,
  sym_task_done = 94,
  sym_task_cancelled = 95,
  sym__task_children = 96,
  sym_task_session = 97,
  sym_task_schedule = 98,
  sym_list_item_label = 99,
  sym_list_item = 100,
  sym__list_item_children = 101,
  sym_inline_code = 102,
  sym_code_block_content = 103,
  sym_code_block_start = 104,
  sym_code_block = 105,
  sym__inline = 106,
  sym_text_to_eol = 107,
  sym_text_line = 108,
  sym__text = 109,
  sym__raw_text_line = 110,
  aux_sym_document_repeat1 = 111,
  aux_sym_document_meta_repeat1 = 112,
  aux_sym_heading_1_repeat1 = 113,
  aux_sym_heading_2_repeat1 = 114,
  aux_sym_heading_3_repeat1 = 115,
  aux_sym_heading_4_repeat1 = 116,
  aux_sym_heading_5_repeat1 = 117,
  aux_sym_heading_6_repeat1 = 118,
  aux_sym_section_repeat1 = 119,
  aux_sym__task_children_repeat1 = 120,
  aux_sym_list_item_repeat1 = 121,
  aux_sym__list_item_children_repeat1 = 122,
  aux_sym_code_block_content_repeat1 = 123,
  aux_sym__text_repeat1 = 124,
  aux_sym__raw_text_line_repeat1 = 125,
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
  [anon_sym_Session_COLON] = "Session: ",
  [anon_sym_Schedule_COLON] = "Schedule: ",
  [aux_sym_list_item_token1] = "list_item_token1",
  [sym_inline_code_content] = "inline_code_content",
  [sym_code_block_language] = "code_block_language",
  [anon_sym_ATcode] = "@code",
  [aux_sym_code_block_start_token1] = "code_block_start_token1",
  [sym_code_block_end] = "code_block_end",
  [sym_external_link] = "external_link",
  [sym_label] = "label",
  [aux_sym_text_line_token1] = "text_line_token1",
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
  [sym_list_item_label] = "list_item_label",
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
  [aux_sym_list_item_repeat1] = "list_item_repeat1",
  [aux_sym__list_item_children_repeat1] = "_list_item_children_repeat1",
  [aux_sym_code_block_content_repeat1] = "code_block_content_repeat1",
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
  [anon_sym_Session_COLON] = anon_sym_Session_COLON,
  [anon_sym_Schedule_COLON] = anon_sym_Schedule_COLON,
  [aux_sym_list_item_token1] = aux_sym_list_item_token1,
  [sym_inline_code_content] = sym_inline_code_content,
  [sym_code_block_language] = sym_code_block_language,
  [anon_sym_ATcode] = anon_sym_ATcode,
  [aux_sym_code_block_start_token1] = aux_sym_code_block_start_token1,
  [sym_code_block_end] = sym_code_block_end,
  [sym_external_link] = sym_external_link,
  [sym_label] = sym_label,
  [aux_sym_text_line_token1] = aux_sym_text_line_token1,
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
  [sym_list_item_label] = sym_list_item_label,
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
  [aux_sym_list_item_repeat1] = aux_sym_list_item_repeat1,
  [aux_sym__list_item_children_repeat1] = aux_sym__list_item_children_repeat1,
  [aux_sym_code_block_content_repeat1] = aux_sym_code_block_content_repeat1,
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
  [anon_sym_Session_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Schedule_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_list_item_token1] = {
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
  [sym_code_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_external_link] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_line_token1] = {
    .visible = false,
    .named = false,
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
  [sym_list_item_label] = {
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
  [aux_sym_list_item_repeat1] = {
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
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 32,
  [36] = 36,
  [37] = 36,
  [38] = 36,
  [39] = 39,
  [40] = 39,
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 45,
  [48] = 45,
  [49] = 43,
  [50] = 46,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 51,
  [55] = 52,
  [56] = 51,
  [57] = 52,
  [58] = 51,
  [59] = 51,
  [60] = 52,
  [61] = 52,
  [62] = 51,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 63,
  [67] = 64,
  [68] = 64,
  [69] = 64,
  [70] = 63,
  [71] = 64,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 80,
  [92] = 92,
  [93] = 78,
  [94] = 94,
  [95] = 95,
  [96] = 74,
  [97] = 76,
  [98] = 75,
  [99] = 73,
  [100] = 77,
  [101] = 72,
  [102] = 79,
  [103] = 80,
  [104] = 78,
  [105] = 83,
  [106] = 90,
  [107] = 86,
  [108] = 108,
  [109] = 109,
  [110] = 84,
  [111] = 78,
  [112] = 92,
  [113] = 82,
  [114] = 85,
  [115] = 95,
  [116] = 80,
  [117] = 77,
  [118] = 74,
  [119] = 78,
  [120] = 80,
  [121] = 83,
  [122] = 78,
  [123] = 80,
  [124] = 124,
  [125] = 85,
  [126] = 95,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 124,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 131,
  [138] = 138,
  [139] = 136,
  [140] = 133,
  [141] = 127,
  [142] = 131,
  [143] = 134,
  [144] = 144,
  [145] = 128,
  [146] = 127,
  [147] = 135,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 128,
  [152] = 135,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 130,
  [157] = 129,
  [158] = 158,
  [159] = 138,
  [160] = 144,
  [161] = 135,
  [162] = 128,
  [163] = 149,
  [164] = 148,
  [165] = 154,
  [166] = 127,
  [167] = 153,
  [168] = 150,
  [169] = 158,
  [170] = 170,
  [171] = 170,
  [172] = 172,
  [173] = 170,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 135,
  [182] = 182,
  [183] = 183,
  [184] = 182,
  [185] = 185,
  [186] = 182,
  [187] = 187,
  [188] = 131,
  [189] = 189,
  [190] = 190,
  [191] = 189,
  [192] = 192,
  [193] = 189,
  [194] = 192,
  [195] = 195,
  [196] = 128,
  [197] = 127,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 154,
  [207] = 144,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 209,
  [221] = 221,
  [222] = 219,
  [223] = 79,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 135,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 234,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 236,
  [246] = 237,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 235,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 243,
  [258] = 258,
  [259] = 253,
  [260] = 252,
  [261] = 233,
  [262] = 242,
  [263] = 263,
  [264] = 238,
  [265] = 238,
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
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(81)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(181);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '_') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(33)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(211);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '@') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(92);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(152);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '@') ADVANCE(277);
      if (lookahead == 'S') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(210);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '@') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(211);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '@') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(211);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '@') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(100);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '@') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(257);
      if (lookahead == '@') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(192);
      if (lookahead == ',' ||
          lookahead == '.') SKIP(47)
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(212);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '@') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(45)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '@') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(47)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(42)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '@') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(42)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '@') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(45)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '@') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(45)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '@') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(90);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(47)
      if (lookahead == '\n') ADVANCE(203);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(96);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(94);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(95);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(98);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(99);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(186);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(187);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 74:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 75:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 76:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(149);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 78:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(208);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 79:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(207);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 80:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(207);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(81)
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(181);
      if (lookahead == '@') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_document_meta_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_document_meta_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (lookahead == '-') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__comment_marker_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__comment_marker_token2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_italic_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_italic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_underline_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_underline_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__emphasis_token1);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '-') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ':') ADVANCE(268);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ticket);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ticket);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_date_token3);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(271);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead == '+') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_tag_negative);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead == '!') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead == '$') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_heading_6_marker);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_heading_6_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_section_marker);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_section_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_Session_COLON);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_Schedule_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_list_item_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(89);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATcode);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATcode);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_code_block_start_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_code_block_end);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_code_block_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_external_link);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(92);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(185);
      if (lookahead == '-') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(207);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(208);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '@') ADVANCE(277);
      if (lookahead == 'S') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(210);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '@') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(211);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '@') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(212);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '@') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == ':') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'd') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'p') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 's') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 's') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == 's') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'd') ADVANCE(160);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(159);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(257);
      if (lookahead == '@') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(195);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 79, .external_lex_state = 2},
  [2] = {.lex_state = 78, .external_lex_state = 2},
  [3] = {.lex_state = 78, .external_lex_state = 2},
  [4] = {.lex_state = 78, .external_lex_state = 2},
  [5] = {.lex_state = 78, .external_lex_state = 2},
  [6] = {.lex_state = 78, .external_lex_state = 2},
  [7] = {.lex_state = 78, .external_lex_state = 2},
  [8] = {.lex_state = 78, .external_lex_state = 2},
  [9] = {.lex_state = 78, .external_lex_state = 2},
  [10] = {.lex_state = 78, .external_lex_state = 2},
  [11] = {.lex_state = 78, .external_lex_state = 2},
  [12] = {.lex_state = 78, .external_lex_state = 2},
  [13] = {.lex_state = 78, .external_lex_state = 2},
  [14] = {.lex_state = 78, .external_lex_state = 2},
  [15] = {.lex_state = 78, .external_lex_state = 2},
  [16] = {.lex_state = 78, .external_lex_state = 2},
  [17] = {.lex_state = 78, .external_lex_state = 2},
  [18] = {.lex_state = 78, .external_lex_state = 2},
  [19] = {.lex_state = 78, .external_lex_state = 2},
  [20] = {.lex_state = 78, .external_lex_state = 2},
  [21] = {.lex_state = 78, .external_lex_state = 2},
  [22] = {.lex_state = 78, .external_lex_state = 2},
  [23] = {.lex_state = 78, .external_lex_state = 2},
  [24] = {.lex_state = 78, .external_lex_state = 2},
  [25] = {.lex_state = 78, .external_lex_state = 2},
  [26] = {.lex_state = 78, .external_lex_state = 2},
  [27] = {.lex_state = 31, .external_lex_state = 3},
  [28] = {.lex_state = 31, .external_lex_state = 3},
  [29] = {.lex_state = 31, .external_lex_state = 3},
  [30] = {.lex_state = 31, .external_lex_state = 2},
  [31] = {.lex_state = 31, .external_lex_state = 2},
  [32] = {.lex_state = 32, .external_lex_state = 4},
  [33] = {.lex_state = 32, .external_lex_state = 4},
  [34] = {.lex_state = 32, .external_lex_state = 4},
  [35] = {.lex_state = 32, .external_lex_state = 4},
  [36] = {.lex_state = 32, .external_lex_state = 5},
  [37] = {.lex_state = 32, .external_lex_state = 5},
  [38] = {.lex_state = 32, .external_lex_state = 5},
  [39] = {.lex_state = 32, .external_lex_state = 6},
  [40] = {.lex_state = 32, .external_lex_state = 6},
  [41] = {.lex_state = 32, .external_lex_state = 6},
  [42] = {.lex_state = 32, .external_lex_state = 6},
  [43] = {.lex_state = 32, .external_lex_state = 6},
  [44] = {.lex_state = 32, .external_lex_state = 6},
  [45] = {.lex_state = 33, .external_lex_state = 7},
  [46] = {.lex_state = 33, .external_lex_state = 7},
  [47] = {.lex_state = 33, .external_lex_state = 7},
  [48] = {.lex_state = 33, .external_lex_state = 7},
  [49] = {.lex_state = 32, .external_lex_state = 6},
  [50] = {.lex_state = 33, .external_lex_state = 8},
  [51] = {.lex_state = 33, .external_lex_state = 8},
  [52] = {.lex_state = 33, .external_lex_state = 8},
  [53] = {.lex_state = 33, .external_lex_state = 8},
  [54] = {.lex_state = 33, .external_lex_state = 8},
  [55] = {.lex_state = 33, .external_lex_state = 8},
  [56] = {.lex_state = 33, .external_lex_state = 8},
  [57] = {.lex_state = 33, .external_lex_state = 8},
  [58] = {.lex_state = 33, .external_lex_state = 8},
  [59] = {.lex_state = 33, .external_lex_state = 8},
  [60] = {.lex_state = 33, .external_lex_state = 8},
  [61] = {.lex_state = 33, .external_lex_state = 8},
  [62] = {.lex_state = 33, .external_lex_state = 8},
  [63] = {.lex_state = 33, .external_lex_state = 6},
  [64] = {.lex_state = 33, .external_lex_state = 6},
  [65] = {.lex_state = 33, .external_lex_state = 6},
  [66] = {.lex_state = 33, .external_lex_state = 6},
  [67] = {.lex_state = 33, .external_lex_state = 6},
  [68] = {.lex_state = 33, .external_lex_state = 6},
  [69] = {.lex_state = 33, .external_lex_state = 6},
  [70] = {.lex_state = 33, .external_lex_state = 6},
  [71] = {.lex_state = 33, .external_lex_state = 6},
  [72] = {.lex_state = 78, .external_lex_state = 9},
  [73] = {.lex_state = 78, .external_lex_state = 9},
  [74] = {.lex_state = 78, .external_lex_state = 9},
  [75] = {.lex_state = 78, .external_lex_state = 9},
  [76] = {.lex_state = 78, .external_lex_state = 9},
  [77] = {.lex_state = 78, .external_lex_state = 9},
  [78] = {.lex_state = 78, .external_lex_state = 9},
  [79] = {.lex_state = 78, .external_lex_state = 9},
  [80] = {.lex_state = 78, .external_lex_state = 9},
  [81] = {.lex_state = 78, .external_lex_state = 2},
  [82] = {.lex_state = 78, .external_lex_state = 2},
  [83] = {.lex_state = 78, .external_lex_state = 2},
  [84] = {.lex_state = 78, .external_lex_state = 2},
  [85] = {.lex_state = 78, .external_lex_state = 2},
  [86] = {.lex_state = 78, .external_lex_state = 2},
  [87] = {.lex_state = 78, .external_lex_state = 2},
  [88] = {.lex_state = 78, .external_lex_state = 2},
  [89] = {.lex_state = 78, .external_lex_state = 2},
  [90] = {.lex_state = 78, .external_lex_state = 2},
  [91] = {.lex_state = 78, .external_lex_state = 2},
  [92] = {.lex_state = 78, .external_lex_state = 2},
  [93] = {.lex_state = 78, .external_lex_state = 2},
  [94] = {.lex_state = 78, .external_lex_state = 2},
  [95] = {.lex_state = 78, .external_lex_state = 2},
  [96] = {.lex_state = 31, .external_lex_state = 10},
  [97] = {.lex_state = 31, .external_lex_state = 10},
  [98] = {.lex_state = 31, .external_lex_state = 10},
  [99] = {.lex_state = 31, .external_lex_state = 10},
  [100] = {.lex_state = 31, .external_lex_state = 10},
  [101] = {.lex_state = 31, .external_lex_state = 10},
  [102] = {.lex_state = 31, .external_lex_state = 10},
  [103] = {.lex_state = 31, .external_lex_state = 10},
  [104] = {.lex_state = 31, .external_lex_state = 10},
  [105] = {.lex_state = 31, .external_lex_state = 3},
  [106] = {.lex_state = 31, .external_lex_state = 3},
  [107] = {.lex_state = 31, .external_lex_state = 3},
  [108] = {.lex_state = 31, .external_lex_state = 3},
  [109] = {.lex_state = 31, .external_lex_state = 3},
  [110] = {.lex_state = 31, .external_lex_state = 3},
  [111] = {.lex_state = 31, .external_lex_state = 3},
  [112] = {.lex_state = 31, .external_lex_state = 3},
  [113] = {.lex_state = 31, .external_lex_state = 3},
  [114] = {.lex_state = 31, .external_lex_state = 3},
  [115] = {.lex_state = 31, .external_lex_state = 3},
  [116] = {.lex_state = 31, .external_lex_state = 3},
  [117] = {.lex_state = 32, .external_lex_state = 11},
  [118] = {.lex_state = 32, .external_lex_state = 11},
  [119] = {.lex_state = 32, .external_lex_state = 11},
  [120] = {.lex_state = 32, .external_lex_state = 11},
  [121] = {.lex_state = 32, .external_lex_state = 4},
  [122] = {.lex_state = 32, .external_lex_state = 4},
  [123] = {.lex_state = 32, .external_lex_state = 4},
  [124] = {.lex_state = 39, .external_lex_state = 7},
  [125] = {.lex_state = 32, .external_lex_state = 4},
  [126] = {.lex_state = 32, .external_lex_state = 4},
  [127] = {.lex_state = 39, .external_lex_state = 7},
  [128] = {.lex_state = 39, .external_lex_state = 7},
  [129] = {.lex_state = 39, .external_lex_state = 7},
  [130] = {.lex_state = 39, .external_lex_state = 7},
  [131] = {.lex_state = 1, .external_lex_state = 8},
  [132] = {.lex_state = 39, .external_lex_state = 8},
  [133] = {.lex_state = 35, .external_lex_state = 7},
  [134] = {.lex_state = 35, .external_lex_state = 7},
  [135] = {.lex_state = 39, .external_lex_state = 7},
  [136] = {.lex_state = 35, .external_lex_state = 7},
  [137] = {.lex_state = 33, .external_lex_state = 7},
  [138] = {.lex_state = 35, .external_lex_state = 7},
  [139] = {.lex_state = 35, .external_lex_state = 8},
  [140] = {.lex_state = 35, .external_lex_state = 8},
  [141] = {.lex_state = 39, .external_lex_state = 8},
  [142] = {.lex_state = 33, .external_lex_state = 8},
  [143] = {.lex_state = 35, .external_lex_state = 8},
  [144] = {.lex_state = 33, .external_lex_state = 7},
  [145] = {.lex_state = 33, .external_lex_state = 7},
  [146] = {.lex_state = 33, .external_lex_state = 7},
  [147] = {.lex_state = 33, .external_lex_state = 7},
  [148] = {.lex_state = 33, .external_lex_state = 7},
  [149] = {.lex_state = 33, .external_lex_state = 7},
  [150] = {.lex_state = 33, .external_lex_state = 7},
  [151] = {.lex_state = 39, .external_lex_state = 8},
  [152] = {.lex_state = 39, .external_lex_state = 8},
  [153] = {.lex_state = 33, .external_lex_state = 7},
  [154] = {.lex_state = 33, .external_lex_state = 7},
  [155] = {.lex_state = 1, .external_lex_state = 8},
  [156] = {.lex_state = 39, .external_lex_state = 8},
  [157] = {.lex_state = 39, .external_lex_state = 8},
  [158] = {.lex_state = 33, .external_lex_state = 7},
  [159] = {.lex_state = 35, .external_lex_state = 8},
  [160] = {.lex_state = 33, .external_lex_state = 8},
  [161] = {.lex_state = 33, .external_lex_state = 8},
  [162] = {.lex_state = 33, .external_lex_state = 8},
  [163] = {.lex_state = 33, .external_lex_state = 8},
  [164] = {.lex_state = 33, .external_lex_state = 8},
  [165] = {.lex_state = 33, .external_lex_state = 8},
  [166] = {.lex_state = 33, .external_lex_state = 8},
  [167] = {.lex_state = 33, .external_lex_state = 8},
  [168] = {.lex_state = 33, .external_lex_state = 8},
  [169] = {.lex_state = 33, .external_lex_state = 8},
  [170] = {.lex_state = 43},
  [171] = {.lex_state = 43},
  [172] = {.lex_state = 36},
  [173] = {.lex_state = 43},
  [174] = {.lex_state = 36},
  [175] = {.lex_state = 36},
  [176] = {.lex_state = 43},
  [177] = {.lex_state = 43},
  [178] = {.lex_state = 43, .external_lex_state = 12},
  [179] = {.lex_state = 37, .external_lex_state = 12},
  [180] = {.lex_state = 37, .external_lex_state = 12},
  [181] = {.lex_state = 43, .external_lex_state = 12},
  [182] = {.lex_state = 43},
  [183] = {.lex_state = 40},
  [184] = {.lex_state = 43},
  [185] = {.lex_state = 40},
  [186] = {.lex_state = 43},
  [187] = {.lex_state = 40},
  [188] = {.lex_state = 37, .external_lex_state = 12},
  [189] = {.lex_state = 43},
  [190] = {.lex_state = 43, .external_lex_state = 12},
  [191] = {.lex_state = 43},
  [192] = {.lex_state = 43},
  [193] = {.lex_state = 43},
  [194] = {.lex_state = 43},
  [195] = {.lex_state = 43, .external_lex_state = 12},
  [196] = {.lex_state = 43, .external_lex_state = 12},
  [197] = {.lex_state = 43, .external_lex_state = 12},
  [198] = {.lex_state = 0, .external_lex_state = 12},
  [199] = {.lex_state = 36},
  [200] = {.lex_state = 0, .external_lex_state = 12},
  [201] = {.lex_state = 0, .external_lex_state = 12},
  [202] = {.lex_state = 40},
  [203] = {.lex_state = 0, .external_lex_state = 12},
  [204] = {.lex_state = 0, .external_lex_state = 12},
  [205] = {.lex_state = 0, .external_lex_state = 12},
  [206] = {.lex_state = 0, .external_lex_state = 12},
  [207] = {.lex_state = 0, .external_lex_state = 12},
  [208] = {.lex_state = 46},
  [209] = {.lex_state = 46},
  [210] = {.lex_state = 0, .external_lex_state = 12},
  [211] = {.lex_state = 46},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 0, .external_lex_state = 12},
  [214] = {.lex_state = 46},
  [215] = {.lex_state = 46},
  [216] = {.lex_state = 46},
  [217] = {.lex_state = 46},
  [218] = {.lex_state = 46},
  [219] = {.lex_state = 46},
  [220] = {.lex_state = 46},
  [221] = {.lex_state = 46},
  [222] = {.lex_state = 46},
  [223] = {.lex_state = 0, .external_lex_state = 12},
  [224] = {.lex_state = 46},
  [225] = {.lex_state = 38, .external_lex_state = 13},
  [226] = {.lex_state = 0, .external_lex_state = 12},
  [227] = {.lex_state = 0, .external_lex_state = 12},
  [228] = {.lex_state = 36},
  [229] = {.lex_state = 43},
  [230] = {.lex_state = 0, .external_lex_state = 12},
  [231] = {.lex_state = 0, .external_lex_state = 12},
  [232] = {.lex_state = 41},
  [233] = {.lex_state = 48},
  [234] = {.lex_state = 0, .external_lex_state = 14},
  [235] = {.lex_state = 0, .external_lex_state = 15},
  [236] = {.lex_state = 0, .external_lex_state = 16},
  [237] = {.lex_state = 0, .external_lex_state = 17},
  [238] = {.lex_state = 40},
  [239] = {.lex_state = 0, .external_lex_state = 13},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0, .external_lex_state = 14},
  [242] = {.lex_state = 49},
  [243] = {.lex_state = 46},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0, .external_lex_state = 16},
  [246] = {.lex_state = 0, .external_lex_state = 17},
  [247] = {.lex_state = 41},
  [248] = {.lex_state = 0, .external_lex_state = 13},
  [249] = {.lex_state = 0, .external_lex_state = 13},
  [250] = {.lex_state = 0, .external_lex_state = 15},
  [251] = {.lex_state = 41},
  [252] = {.lex_state = 50},
  [253] = {.lex_state = 51},
  [254] = {.lex_state = 41},
  [255] = {.lex_state = 41},
  [256] = {.lex_state = 41},
  [257] = {.lex_state = 46},
  [258] = {.lex_state = 43},
  [259] = {.lex_state = 51},
  [260] = {.lex_state = 50},
  [261] = {.lex_state = 48},
  [262] = {.lex_state = 49},
  [263] = {.lex_state = 43},
  [264] = {.lex_state = 40},
  [265] = {.lex_state = 40},
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
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [7] = {
    [ts_external_token__eof] = true,
    [ts_external_token__eol] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [8] = {
    [ts_external_token__eof] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [9] = {
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
  [10] = {
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
  [11] = {
    [ts_external_token__eof] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
    [ts_external_token_inline_code_start] = true,
  },
  [12] = {
    [ts_external_token__eof] = true,
    [ts_external_token__eol] = true,
  },
  [13] = {
    [ts_external_token__eol] = true,
  },
  [14] = {
    [ts_external_token_inline_code_end] = true,
  },
  [15] = {
    [ts_external_token_underline_end] = true,
  },
  [16] = {
    [ts_external_token_italic_end] = true,
  },
  [17] = {
    [ts_external_token_bold_end] = true,
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
    [sym_code_block_end] = ACTIONS(1),
    [aux_sym_text_line_token1] = ACTIONS(3),
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
    [sym_document] = STATE(244),
    [sym_document_title_basic] = STATE(5),
    [sym_document_meta] = STATE(5),
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(3),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(3),
    [sym__text] = STATE(59),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
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
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [2] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(59),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(59),
    [aux_sym__comment_marker_token1] = ACTIONS(61),
    [aux_sym__comment_marker_token2] = ACTIONS(61),
    [aux_sym_string_token1] = ACTIONS(64),
    [aux_sym_string_token2] = ACTIONS(64),
    [sym_number] = ACTIONS(67),
    [sym_ticket] = ACTIONS(67),
    [aux_sym_date_token1] = ACTIONS(70),
    [aux_sym_date_token2] = ACTIONS(70),
    [aux_sym_date_token3] = ACTIONS(70),
    [aux_sym_time_token1] = ACTIONS(73),
    [aux_sym_time_token2] = ACTIONS(73),
    [sym_tag_positive] = ACTIONS(67),
    [sym_tag_negative] = ACTIONS(67),
    [sym_tag_hash] = ACTIONS(67),
    [sym_tag_context] = ACTIONS(67),
    [sym_tag_danger] = ACTIONS(67),
    [sym_tag_identifier] = ACTIONS(67),
    [sym_heading_1_marker] = ACTIONS(76),
    [sym_heading_2_marker] = ACTIONS(79),
    [sym_heading_3_marker] = ACTIONS(82),
    [sym_heading_4_marker] = ACTIONS(85),
    [sym_heading_5_marker] = ACTIONS(88),
    [sym_heading_6_marker] = ACTIONS(91),
    [sym_section_marker] = ACTIONS(94),
    [anon_sym_ATcode] = ACTIONS(97),
    [sym_external_link] = ACTIONS(67),
    [sym_label] = ACTIONS(100),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(67),
    [sym_task_marker_default] = ACTIONS(103),
    [sym_task_marker_active] = ACTIONS(106),
    [sym_task_marker_done] = ACTIONS(109),
    [sym_task_marker_cancelled] = ACTIONS(112),
    [sym_list_item_marker] = ACTIONS(115),
    [sym_bold_start] = ACTIONS(118),
    [sym_italic_start] = ACTIONS(121),
    [sym_underline_start] = ACTIONS(124),
    [sym_inline_code_start] = ACTIONS(127),
  },
  [3] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(59),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
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
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [4] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(59),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
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
    [sym_heading_1_marker] = ACTIONS(21),
    [sym_heading_2_marker] = ACTIONS(23),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [5] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(59),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
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
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [6] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(7),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(59),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(134),
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
    [sym_heading_1_marker] = ACTIONS(136),
    [sym_heading_2_marker] = ACTIONS(23),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [7] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(7),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(59),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym__comment_marker_token1] = ACTIONS(140),
    [aux_sym__comment_marker_token2] = ACTIONS(140),
    [aux_sym_string_token1] = ACTIONS(143),
    [aux_sym_string_token2] = ACTIONS(143),
    [sym_number] = ACTIONS(146),
    [sym_ticket] = ACTIONS(146),
    [aux_sym_date_token1] = ACTIONS(149),
    [aux_sym_date_token2] = ACTIONS(149),
    [aux_sym_date_token3] = ACTIONS(149),
    [aux_sym_time_token1] = ACTIONS(152),
    [aux_sym_time_token2] = ACTIONS(152),
    [sym_tag_positive] = ACTIONS(146),
    [sym_tag_negative] = ACTIONS(146),
    [sym_tag_hash] = ACTIONS(146),
    [sym_tag_context] = ACTIONS(146),
    [sym_tag_danger] = ACTIONS(146),
    [sym_tag_identifier] = ACTIONS(146),
    [sym_heading_1_marker] = ACTIONS(155),
    [sym_heading_2_marker] = ACTIONS(157),
    [sym_heading_3_marker] = ACTIONS(160),
    [sym_heading_4_marker] = ACTIONS(163),
    [sym_heading_5_marker] = ACTIONS(166),
    [sym_heading_6_marker] = ACTIONS(169),
    [sym_section_marker] = ACTIONS(172),
    [anon_sym_ATcode] = ACTIONS(175),
    [sym_external_link] = ACTIONS(146),
    [sym_label] = ACTIONS(178),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(146),
    [sym_task_marker_default] = ACTIONS(181),
    [sym_task_marker_active] = ACTIONS(184),
    [sym_task_marker_done] = ACTIONS(187),
    [sym_task_marker_cancelled] = ACTIONS(190),
    [sym_list_item_marker] = ACTIONS(193),
    [sym_bold_start] = ACTIONS(196),
    [sym_italic_start] = ACTIONS(199),
    [sym_underline_start] = ACTIONS(202),
    [sym_inline_code_start] = ACTIONS(205),
  },
  [8] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(6),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(6),
    [sym__text] = STATE(59),
    [aux_sym_heading_1_repeat1] = STATE(6),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(208),
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
    [sym_heading_1_marker] = ACTIONS(210),
    [sym_heading_2_marker] = ACTIONS(23),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [9] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(10),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(10),
    [sym__text] = STATE(59),
    [aux_sym_heading_2_repeat1] = STATE(10),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(212),
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
    [sym_heading_1_marker] = ACTIONS(214),
    [sym_heading_2_marker] = ACTIONS(214),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [10] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(10),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(10),
    [sym__text] = STATE(59),
    [aux_sym_heading_2_repeat1] = STATE(10),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(216),
    [aux_sym__comment_marker_token1] = ACTIONS(218),
    [aux_sym__comment_marker_token2] = ACTIONS(218),
    [aux_sym_string_token1] = ACTIONS(221),
    [aux_sym_string_token2] = ACTIONS(221),
    [sym_number] = ACTIONS(224),
    [sym_ticket] = ACTIONS(224),
    [aux_sym_date_token1] = ACTIONS(227),
    [aux_sym_date_token2] = ACTIONS(227),
    [aux_sym_date_token3] = ACTIONS(227),
    [aux_sym_time_token1] = ACTIONS(230),
    [aux_sym_time_token2] = ACTIONS(230),
    [sym_tag_positive] = ACTIONS(224),
    [sym_tag_negative] = ACTIONS(224),
    [sym_tag_hash] = ACTIONS(224),
    [sym_tag_context] = ACTIONS(224),
    [sym_tag_danger] = ACTIONS(224),
    [sym_tag_identifier] = ACTIONS(224),
    [sym_heading_1_marker] = ACTIONS(233),
    [sym_heading_2_marker] = ACTIONS(233),
    [sym_heading_3_marker] = ACTIONS(235),
    [sym_heading_4_marker] = ACTIONS(238),
    [sym_heading_5_marker] = ACTIONS(241),
    [sym_heading_6_marker] = ACTIONS(244),
    [sym_section_marker] = ACTIONS(247),
    [anon_sym_ATcode] = ACTIONS(250),
    [sym_external_link] = ACTIONS(224),
    [sym_label] = ACTIONS(253),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(224),
    [sym_task_marker_default] = ACTIONS(256),
    [sym_task_marker_active] = ACTIONS(259),
    [sym_task_marker_done] = ACTIONS(262),
    [sym_task_marker_cancelled] = ACTIONS(265),
    [sym_list_item_marker] = ACTIONS(268),
    [sym_bold_start] = ACTIONS(271),
    [sym_italic_start] = ACTIONS(274),
    [sym_underline_start] = ACTIONS(277),
    [sym_inline_code_start] = ACTIONS(280),
  },
  [11] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(9),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(9),
    [sym__text] = STATE(59),
    [aux_sym_heading_2_repeat1] = STATE(9),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(283),
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
    [sym_heading_1_marker] = ACTIONS(285),
    [sym_heading_2_marker] = ACTIONS(285),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [12] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(59),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym__comment_marker_token1] = ACTIONS(289),
    [aux_sym__comment_marker_token2] = ACTIONS(289),
    [aux_sym_string_token1] = ACTIONS(292),
    [aux_sym_string_token2] = ACTIONS(292),
    [sym_number] = ACTIONS(295),
    [sym_ticket] = ACTIONS(295),
    [aux_sym_date_token1] = ACTIONS(298),
    [aux_sym_date_token2] = ACTIONS(298),
    [aux_sym_date_token3] = ACTIONS(298),
    [aux_sym_time_token1] = ACTIONS(301),
    [aux_sym_time_token2] = ACTIONS(301),
    [sym_tag_positive] = ACTIONS(295),
    [sym_tag_negative] = ACTIONS(295),
    [sym_tag_hash] = ACTIONS(295),
    [sym_tag_context] = ACTIONS(295),
    [sym_tag_danger] = ACTIONS(295),
    [sym_tag_identifier] = ACTIONS(295),
    [sym_heading_1_marker] = ACTIONS(304),
    [sym_heading_2_marker] = ACTIONS(304),
    [sym_heading_3_marker] = ACTIONS(304),
    [sym_heading_4_marker] = ACTIONS(306),
    [sym_heading_5_marker] = ACTIONS(309),
    [sym_heading_6_marker] = ACTIONS(312),
    [sym_section_marker] = ACTIONS(315),
    [anon_sym_ATcode] = ACTIONS(318),
    [sym_external_link] = ACTIONS(295),
    [sym_label] = ACTIONS(321),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(295),
    [sym_task_marker_default] = ACTIONS(324),
    [sym_task_marker_active] = ACTIONS(327),
    [sym_task_marker_done] = ACTIONS(330),
    [sym_task_marker_cancelled] = ACTIONS(333),
    [sym_list_item_marker] = ACTIONS(336),
    [sym_bold_start] = ACTIONS(339),
    [sym_italic_start] = ACTIONS(342),
    [sym_underline_start] = ACTIONS(345),
    [sym_inline_code_start] = ACTIONS(348),
  },
  [13] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(14),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(14),
    [sym__text] = STATE(59),
    [aux_sym_heading_3_repeat1] = STATE(14),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(351),
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
    [sym_heading_1_marker] = ACTIONS(353),
    [sym_heading_2_marker] = ACTIONS(353),
    [sym_heading_3_marker] = ACTIONS(353),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [14] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
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
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(59),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(355),
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
    [sym_heading_1_marker] = ACTIONS(357),
    [sym_heading_2_marker] = ACTIONS(357),
    [sym_heading_3_marker] = ACTIONS(357),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [15] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym_heading_5] = STATE(15),
    [sym_heading_6] = STATE(15),
    [sym_section] = STATE(15),
    [sym__task] = STATE(15),
    [sym_task_default] = STATE(15),
    [sym_task_active] = STATE(15),
    [sym_task_done] = STATE(15),
    [sym_task_cancelled] = STATE(15),
    [sym_list_item] = STATE(15),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(15),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(15),
    [sym__text] = STATE(59),
    [aux_sym_heading_4_repeat1] = STATE(15),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(359),
    [aux_sym__comment_marker_token1] = ACTIONS(361),
    [aux_sym__comment_marker_token2] = ACTIONS(361),
    [aux_sym_string_token1] = ACTIONS(364),
    [aux_sym_string_token2] = ACTIONS(364),
    [sym_number] = ACTIONS(367),
    [sym_ticket] = ACTIONS(367),
    [aux_sym_date_token1] = ACTIONS(370),
    [aux_sym_date_token2] = ACTIONS(370),
    [aux_sym_date_token3] = ACTIONS(370),
    [aux_sym_time_token1] = ACTIONS(373),
    [aux_sym_time_token2] = ACTIONS(373),
    [sym_tag_positive] = ACTIONS(367),
    [sym_tag_negative] = ACTIONS(367),
    [sym_tag_hash] = ACTIONS(367),
    [sym_tag_context] = ACTIONS(367),
    [sym_tag_danger] = ACTIONS(367),
    [sym_tag_identifier] = ACTIONS(367),
    [sym_heading_1_marker] = ACTIONS(376),
    [sym_heading_2_marker] = ACTIONS(376),
    [sym_heading_3_marker] = ACTIONS(376),
    [sym_heading_4_marker] = ACTIONS(376),
    [sym_heading_5_marker] = ACTIONS(378),
    [sym_heading_6_marker] = ACTIONS(381),
    [sym_section_marker] = ACTIONS(384),
    [anon_sym_ATcode] = ACTIONS(387),
    [sym_external_link] = ACTIONS(367),
    [sym_label] = ACTIONS(390),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(367),
    [sym_task_marker_default] = ACTIONS(393),
    [sym_task_marker_active] = ACTIONS(396),
    [sym_task_marker_done] = ACTIONS(399),
    [sym_task_marker_cancelled] = ACTIONS(402),
    [sym_list_item_marker] = ACTIONS(405),
    [sym_bold_start] = ACTIONS(408),
    [sym_italic_start] = ACTIONS(411),
    [sym_underline_start] = ACTIONS(414),
    [sym_inline_code_start] = ACTIONS(417),
  },
  [16] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym_heading_5] = STATE(17),
    [sym_heading_6] = STATE(17),
    [sym_section] = STATE(17),
    [sym__task] = STATE(17),
    [sym_task_default] = STATE(17),
    [sym_task_active] = STATE(17),
    [sym_task_done] = STATE(17),
    [sym_task_cancelled] = STATE(17),
    [sym_list_item] = STATE(17),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(17),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(17),
    [sym__text] = STATE(59),
    [aux_sym_heading_4_repeat1] = STATE(17),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(420),
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
    [sym_heading_1_marker] = ACTIONS(422),
    [sym_heading_2_marker] = ACTIONS(422),
    [sym_heading_3_marker] = ACTIONS(422),
    [sym_heading_4_marker] = ACTIONS(422),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [17] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym_heading_5] = STATE(15),
    [sym_heading_6] = STATE(15),
    [sym_section] = STATE(15),
    [sym__task] = STATE(15),
    [sym_task_default] = STATE(15),
    [sym_task_active] = STATE(15),
    [sym_task_done] = STATE(15),
    [sym_task_cancelled] = STATE(15),
    [sym_list_item] = STATE(15),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(15),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(15),
    [sym__text] = STATE(59),
    [aux_sym_heading_4_repeat1] = STATE(15),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(424),
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
    [sym_heading_1_marker] = ACTIONS(426),
    [sym_heading_2_marker] = ACTIONS(426),
    [sym_heading_3_marker] = ACTIONS(426),
    [sym_heading_4_marker] = ACTIONS(426),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [18] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym_heading_6] = STATE(18),
    [sym_section] = STATE(18),
    [sym__task] = STATE(18),
    [sym_task_default] = STATE(18),
    [sym_task_active] = STATE(18),
    [sym_task_done] = STATE(18),
    [sym_task_cancelled] = STATE(18),
    [sym_list_item] = STATE(18),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(18),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(18),
    [sym__text] = STATE(59),
    [aux_sym_heading_5_repeat1] = STATE(18),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(428),
    [aux_sym__comment_marker_token1] = ACTIONS(430),
    [aux_sym__comment_marker_token2] = ACTIONS(430),
    [aux_sym_string_token1] = ACTIONS(433),
    [aux_sym_string_token2] = ACTIONS(433),
    [sym_number] = ACTIONS(436),
    [sym_ticket] = ACTIONS(436),
    [aux_sym_date_token1] = ACTIONS(439),
    [aux_sym_date_token2] = ACTIONS(439),
    [aux_sym_date_token3] = ACTIONS(439),
    [aux_sym_time_token1] = ACTIONS(442),
    [aux_sym_time_token2] = ACTIONS(442),
    [sym_tag_positive] = ACTIONS(436),
    [sym_tag_negative] = ACTIONS(436),
    [sym_tag_hash] = ACTIONS(436),
    [sym_tag_context] = ACTIONS(436),
    [sym_tag_danger] = ACTIONS(436),
    [sym_tag_identifier] = ACTIONS(436),
    [sym_heading_1_marker] = ACTIONS(445),
    [sym_heading_2_marker] = ACTIONS(445),
    [sym_heading_3_marker] = ACTIONS(445),
    [sym_heading_4_marker] = ACTIONS(445),
    [sym_heading_5_marker] = ACTIONS(445),
    [sym_heading_6_marker] = ACTIONS(447),
    [sym_section_marker] = ACTIONS(450),
    [anon_sym_ATcode] = ACTIONS(453),
    [sym_external_link] = ACTIONS(436),
    [sym_label] = ACTIONS(456),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(436),
    [sym_task_marker_default] = ACTIONS(459),
    [sym_task_marker_active] = ACTIONS(462),
    [sym_task_marker_done] = ACTIONS(465),
    [sym_task_marker_cancelled] = ACTIONS(468),
    [sym_list_item_marker] = ACTIONS(471),
    [sym_bold_start] = ACTIONS(474),
    [sym_italic_start] = ACTIONS(477),
    [sym_underline_start] = ACTIONS(480),
    [sym_inline_code_start] = ACTIONS(483),
  },
  [19] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym_heading_6] = STATE(18),
    [sym_section] = STATE(18),
    [sym__task] = STATE(18),
    [sym_task_default] = STATE(18),
    [sym_task_active] = STATE(18),
    [sym_task_done] = STATE(18),
    [sym_task_cancelled] = STATE(18),
    [sym_list_item] = STATE(18),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(18),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(18),
    [sym__text] = STATE(59),
    [aux_sym_heading_5_repeat1] = STATE(18),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(486),
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
    [sym_heading_1_marker] = ACTIONS(488),
    [sym_heading_2_marker] = ACTIONS(488),
    [sym_heading_3_marker] = ACTIONS(488),
    [sym_heading_4_marker] = ACTIONS(488),
    [sym_heading_5_marker] = ACTIONS(488),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [20] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym_heading_6] = STATE(19),
    [sym_section] = STATE(19),
    [sym__task] = STATE(19),
    [sym_task_default] = STATE(19),
    [sym_task_active] = STATE(19),
    [sym_task_done] = STATE(19),
    [sym_task_cancelled] = STATE(19),
    [sym_list_item] = STATE(19),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(19),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(19),
    [sym__text] = STATE(59),
    [aux_sym_heading_5_repeat1] = STATE(19),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(490),
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
    [sym_heading_1_marker] = ACTIONS(492),
    [sym_heading_2_marker] = ACTIONS(492),
    [sym_heading_3_marker] = ACTIONS(492),
    [sym_heading_4_marker] = ACTIONS(492),
    [sym_heading_5_marker] = ACTIONS(492),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [21] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(59),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(494),
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
    [sym_heading_1_marker] = ACTIONS(496),
    [sym_heading_2_marker] = ACTIONS(496),
    [sym_heading_3_marker] = ACTIONS(496),
    [sym_heading_4_marker] = ACTIONS(496),
    [sym_heading_5_marker] = ACTIONS(496),
    [sym_heading_6_marker] = ACTIONS(496),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [22] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(59),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(498),
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
    [sym_heading_1_marker] = ACTIONS(500),
    [sym_heading_2_marker] = ACTIONS(500),
    [sym_heading_3_marker] = ACTIONS(500),
    [sym_heading_4_marker] = ACTIONS(500),
    [sym_heading_5_marker] = ACTIONS(500),
    [sym_heading_6_marker] = ACTIONS(500),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [23] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(59),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(502),
    [aux_sym__comment_marker_token1] = ACTIONS(504),
    [aux_sym__comment_marker_token2] = ACTIONS(504),
    [aux_sym_string_token1] = ACTIONS(507),
    [aux_sym_string_token2] = ACTIONS(507),
    [sym_number] = ACTIONS(510),
    [sym_ticket] = ACTIONS(510),
    [aux_sym_date_token1] = ACTIONS(513),
    [aux_sym_date_token2] = ACTIONS(513),
    [aux_sym_date_token3] = ACTIONS(513),
    [aux_sym_time_token1] = ACTIONS(516),
    [aux_sym_time_token2] = ACTIONS(516),
    [sym_tag_positive] = ACTIONS(510),
    [sym_tag_negative] = ACTIONS(510),
    [sym_tag_hash] = ACTIONS(510),
    [sym_tag_context] = ACTIONS(510),
    [sym_tag_danger] = ACTIONS(510),
    [sym_tag_identifier] = ACTIONS(510),
    [sym_heading_1_marker] = ACTIONS(519),
    [sym_heading_2_marker] = ACTIONS(519),
    [sym_heading_3_marker] = ACTIONS(519),
    [sym_heading_4_marker] = ACTIONS(519),
    [sym_heading_5_marker] = ACTIONS(519),
    [sym_heading_6_marker] = ACTIONS(519),
    [sym_section_marker] = ACTIONS(521),
    [anon_sym_ATcode] = ACTIONS(524),
    [sym_external_link] = ACTIONS(510),
    [sym_label] = ACTIONS(527),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(510),
    [sym_task_marker_default] = ACTIONS(530),
    [sym_task_marker_active] = ACTIONS(533),
    [sym_task_marker_done] = ACTIONS(536),
    [sym_task_marker_cancelled] = ACTIONS(539),
    [sym_list_item_marker] = ACTIONS(542),
    [sym_bold_start] = ACTIONS(545),
    [sym_italic_start] = ACTIONS(548),
    [sym_underline_start] = ACTIONS(551),
    [sym_inline_code_start] = ACTIONS(554),
  },
  [24] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(59),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(557),
    [aux_sym__comment_marker_token1] = ACTIONS(559),
    [aux_sym__comment_marker_token2] = ACTIONS(559),
    [aux_sym_string_token1] = ACTIONS(562),
    [aux_sym_string_token2] = ACTIONS(562),
    [sym_number] = ACTIONS(565),
    [sym_ticket] = ACTIONS(565),
    [aux_sym_date_token1] = ACTIONS(568),
    [aux_sym_date_token2] = ACTIONS(568),
    [aux_sym_date_token3] = ACTIONS(568),
    [aux_sym_time_token1] = ACTIONS(571),
    [aux_sym_time_token2] = ACTIONS(571),
    [sym_tag_positive] = ACTIONS(565),
    [sym_tag_negative] = ACTIONS(565),
    [sym_tag_hash] = ACTIONS(565),
    [sym_tag_context] = ACTIONS(565),
    [sym_tag_danger] = ACTIONS(565),
    [sym_tag_identifier] = ACTIONS(565),
    [sym_heading_1_marker] = ACTIONS(574),
    [sym_heading_2_marker] = ACTIONS(574),
    [sym_heading_3_marker] = ACTIONS(574),
    [sym_heading_4_marker] = ACTIONS(574),
    [sym_heading_5_marker] = ACTIONS(574),
    [sym_heading_6_marker] = ACTIONS(574),
    [sym_section_marker] = ACTIONS(574),
    [anon_sym_ATcode] = ACTIONS(576),
    [sym_external_link] = ACTIONS(565),
    [sym_label] = ACTIONS(579),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(565),
    [sym_task_marker_default] = ACTIONS(582),
    [sym_task_marker_active] = ACTIONS(585),
    [sym_task_marker_done] = ACTIONS(588),
    [sym_task_marker_cancelled] = ACTIONS(591),
    [sym_list_item_marker] = ACTIONS(594),
    [sym_bold_start] = ACTIONS(597),
    [sym_italic_start] = ACTIONS(600),
    [sym_underline_start] = ACTIONS(603),
    [sym_inline_code_start] = ACTIONS(606),
  },
  [25] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(59),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(609),
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
    [sym_heading_1_marker] = ACTIONS(611),
    [sym_heading_2_marker] = ACTIONS(611),
    [sym_heading_3_marker] = ACTIONS(611),
    [sym_heading_4_marker] = ACTIONS(611),
    [sym_heading_5_marker] = ACTIONS(611),
    [sym_heading_6_marker] = ACTIONS(611),
    [sym_section_marker] = ACTIONS(611),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
  [26] = {
    [sym__comment_marker] = STATE(243),
    [sym_comment] = STATE(59),
    [sym_bold] = STATE(159),
    [sym_italic] = STATE(159),
    [sym_underline] = STATE(159),
    [sym__emphasis] = STATE(59),
    [sym_string] = STATE(59),
    [sym_date] = STATE(132),
    [sym_daterange] = STATE(59),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(59),
    [sym_datetime] = STATE(156),
    [sym_datetimerange] = STATE(59),
    [sym__task] = STATE(25),
    [sym_task_default] = STATE(25),
    [sym_task_active] = STATE(25),
    [sym_task_done] = STATE(25),
    [sym_task_cancelled] = STATE(25),
    [sym_list_item] = STATE(25),
    [sym_inline_code] = STATE(59),
    [sym_code_block_start] = STATE(172),
    [sym_code_block] = STATE(25),
    [sym__inline] = STATE(59),
    [sym_text_line] = STATE(25),
    [sym__text] = STATE(59),
    [aux_sym_section_repeat1] = STATE(25),
    [aux_sym_list_item_repeat1] = STATE(59),
    [aux_sym__text_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(613),
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
    [sym_heading_1_marker] = ACTIONS(615),
    [sym_heading_2_marker] = ACTIONS(615),
    [sym_heading_3_marker] = ACTIONS(615),
    [sym_heading_4_marker] = ACTIONS(615),
    [sym_heading_5_marker] = ACTIONS(615),
    [sym_heading_6_marker] = ACTIONS(615),
    [sym_section_marker] = ACTIONS(615),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(15),
    [sym_task_marker_default] = ACTIONS(41),
    [sym_task_marker_active] = ACTIONS(43),
    [sym_task_marker_done] = ACTIONS(45),
    [sym_task_marker_cancelled] = ACTIONS(47),
    [sym_list_item_marker] = ACTIONS(49),
    [sym_bold_start] = ACTIONS(51),
    [sym_italic_start] = ACTIONS(53),
    [sym_underline_start] = ACTIONS(55),
    [sym_inline_code_start] = ACTIONS(57),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(632), 1,
      anon_sym_Session_COLON,
    ACTIONS(635), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(638), 1,
      sym_label,
    ACTIONS(643), 1,
      sym_task_marker_default,
    ACTIONS(646), 1,
      sym_task_marker_active,
    ACTIONS(649), 1,
      sym_task_marker_done,
    ACTIONS(652), 1,
      sym_task_marker_cancelled,
    ACTIONS(655), 1,
      sym_list_item_marker,
    ACTIONS(658), 1,
      sym_bold_start,
    ACTIONS(661), 1,
      sym_italic_start,
    ACTIONS(664), 1,
      sym_underline_start,
    ACTIONS(667), 1,
      sym_inline_code_start,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
      sym__comment_marker,
    ACTIONS(617), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(620), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(629), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(641), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(626), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(623), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
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
    STATE(62), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [115] = 26,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(672), 1,
      anon_sym_Session_COLON,
    ACTIONS(674), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(676), 1,
      sym_label,
    ACTIONS(680), 1,
      sym_task_marker_default,
    ACTIONS(682), 1,
      sym_task_marker_active,
    ACTIONS(684), 1,
      sym_task_marker_done,
    ACTIONS(686), 1,
      sym_task_marker_cancelled,
    ACTIONS(688), 1,
      sym_list_item_marker,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    ACTIONS(678), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(670), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
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
    STATE(62), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [230] = 26,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(672), 1,
      anon_sym_Session_COLON,
    ACTIONS(674), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(676), 1,
      sym_label,
    ACTIONS(680), 1,
      sym_task_marker_default,
    ACTIONS(682), 1,
      sym_task_marker_active,
    ACTIONS(684), 1,
      sym_task_marker_done,
    ACTIONS(686), 1,
      sym_task_marker_cancelled,
    ACTIONS(688), 1,
      sym_list_item_marker,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(670), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
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
    STATE(62), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [345] = 25,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(672), 1,
      anon_sym_Session_COLON,
    ACTIONS(674), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(676), 1,
      sym_label,
    ACTIONS(680), 1,
      sym_task_marker_default,
    ACTIONS(682), 1,
      sym_task_marker_active,
    ACTIONS(684), 1,
      sym_task_marker_done,
    ACTIONS(686), 1,
      sym_task_marker_cancelled,
    ACTIONS(688), 1,
      sym_list_item_marker,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(670), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
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
    STATE(62), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [456] = 25,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(672), 1,
      anon_sym_Session_COLON,
    ACTIONS(674), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(676), 1,
      sym_label,
    ACTIONS(680), 1,
      sym_task_marker_default,
    ACTIONS(682), 1,
      sym_task_marker_active,
    ACTIONS(684), 1,
      sym_task_marker_done,
    ACTIONS(686), 1,
      sym_task_marker_cancelled,
    ACTIONS(688), 1,
      sym_list_item_marker,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(670), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
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
    STATE(62), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [567] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(694), 1,
      sym_label,
    ACTIONS(698), 1,
      sym_list_item_marker,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(34), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(692), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(58), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [657] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(694), 1,
      sym_label,
    ACTIONS(698), 1,
      sym_list_item_marker,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    ACTIONS(700), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(34), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(692), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(58), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [747] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(717), 1,
      sym_label,
    ACTIONS(722), 1,
      sym_list_item_marker,
    ACTIONS(725), 1,
      sym_bold_start,
    ACTIONS(728), 1,
      sym_italic_start,
    ACTIONS(731), 1,
      sym_underline_start,
    ACTIONS(734), 1,
      sym_inline_code_start,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
      sym__comment_marker,
    ACTIONS(702), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(705), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(714), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(720), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(711), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(34), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(708), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(58), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [837] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(694), 1,
      sym_label,
    ACTIONS(698), 1,
      sym_list_item_marker,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    ACTIONS(737), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(34), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(692), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(58), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [927] = 19,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(694), 1,
      sym_label,
    ACTIONS(698), 1,
      sym_list_item_marker,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(692), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(58), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [1013] = 19,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(694), 1,
      sym_label,
    ACTIONS(698), 1,
      sym_list_item_marker,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(692), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(58), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [1099] = 19,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(694), 1,
      sym_label,
    ACTIONS(698), 1,
      sym_list_item_marker,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(692), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(58), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [1185] = 21,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(741), 1,
      sym_label,
    ACTIONS(743), 1,
      aux_sym__text_token1,
    STATE(117), 1,
      sym_text_line,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
      sym__comment_marker,
    STATE(265), 1,
      sym_list_item_label,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    STATE(155), 2,
      sym__text,
      aux_sym__text_repeat1,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(159), 3,
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
    STATE(51), 9,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      aux_sym_list_item_repeat1,
  [1273] = 21,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(743), 1,
      aux_sym__text_token1,
    ACTIONS(747), 1,
      sym_label,
    STATE(100), 1,
      sym_text_line,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
      sym__comment_marker,
    STATE(264), 1,
      sym_list_item_label,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    STATE(155), 2,
      sym__text,
      aux_sym__text_repeat1,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(745), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(56), 9,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      aux_sym_list_item_repeat1,
  [1361] = 21,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(743), 1,
      aux_sym__text_token1,
    ACTIONS(751), 1,
      sym_label,
    STATE(77), 1,
      sym_text_line,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(238), 1,
      sym_list_item_label,
    STATE(243), 1,
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
    STATE(155), 2,
      sym__text,
      aux_sym__text_repeat1,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(159), 3,
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
    STATE(54), 9,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      aux_sym_list_item_repeat1,
  [1449] = 18,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(747), 1,
      sym_label,
    STATE(99), 1,
      sym_text_line,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(745), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(56), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [1530] = 18,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(751), 1,
      sym_label,
    STATE(72), 1,
      sym_text_line,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(749), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(54), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [1611] = 18,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(751), 1,
      sym_label,
    STATE(73), 1,
      sym_text_line,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(749), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(54), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [1692] = 17,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(765), 1,
      sym_bold_start,
    ACTIONS(767), 1,
      sym_italic_start,
    ACTIONS(769), 1,
      sym_underline_start,
    ACTIONS(771), 1,
      sym_inline_code_start,
    STATE(124), 1,
      sym_date,
    STATE(129), 1,
      sym_time,
    STATE(130), 1,
      sym_datetime,
    STATE(257), 1,
      sym__comment_marker,
    ACTIONS(753), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(755), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(761), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(763), 2,
      sym__eof,
      sym__eol,
    ACTIONS(759), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(138), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(757), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(46), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [1771] = 17,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(790), 1,
      sym_bold_start,
    ACTIONS(793), 1,
      sym_italic_start,
    ACTIONS(796), 1,
      sym_underline_start,
    ACTIONS(799), 1,
      sym_inline_code_start,
    STATE(124), 1,
      sym_date,
    STATE(129), 1,
      sym_time,
    STATE(130), 1,
      sym_datetime,
    STATE(257), 1,
      sym__comment_marker,
    ACTIONS(773), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(776), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(785), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(788), 2,
      sym__eof,
      sym__eol,
    ACTIONS(782), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(138), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(779), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(46), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [1850] = 17,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(765), 1,
      sym_bold_start,
    ACTIONS(767), 1,
      sym_italic_start,
    ACTIONS(769), 1,
      sym_underline_start,
    ACTIONS(771), 1,
      sym_inline_code_start,
    STATE(124), 1,
      sym_date,
    STATE(129), 1,
      sym_time,
    STATE(130), 1,
      sym_datetime,
    STATE(257), 1,
      sym__comment_marker,
    ACTIONS(753), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(755), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(761), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(802), 2,
      sym__eof,
      sym__eol,
    ACTIONS(759), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(138), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(757), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(46), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [1929] = 17,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(765), 1,
      sym_bold_start,
    ACTIONS(767), 1,
      sym_italic_start,
    ACTIONS(769), 1,
      sym_underline_start,
    ACTIONS(771), 1,
      sym_inline_code_start,
    STATE(124), 1,
      sym_date,
    STATE(129), 1,
      sym_time,
    STATE(130), 1,
      sym_datetime,
    STATE(257), 1,
      sym__comment_marker,
    ACTIONS(753), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(755), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(761), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(804), 2,
      sym__eof,
      sym__eol,
    ACTIONS(759), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(138), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(757), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(46), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2008] = 18,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(747), 1,
      sym_label,
    STATE(101), 1,
      sym_text_line,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(745), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(56), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2089] = 17,
    ACTIONS(788), 1,
      sym__eof,
    ACTIONS(821), 1,
      aux_sym_text_line_token1,
    ACTIONS(823), 1,
      sym_bold_start,
    ACTIONS(826), 1,
      sym_italic_start,
    ACTIONS(829), 1,
      sym_underline_start,
    ACTIONS(832), 1,
      sym_inline_code_start,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
      sym__comment_marker,
    ACTIONS(806), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(809), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(818), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(815), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(812), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2167] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(837), 1,
      aux_sym_text_line_token1,
    ACTIONS(839), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2245] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(841), 1,
      aux_sym_text_line_token1,
    ACTIONS(843), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2323] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(845), 1,
      aux_sym_text_line_token1,
    ACTIONS(847), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2401] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(849), 1,
      aux_sym_text_line_token1,
    ACTIONS(851), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2479] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(853), 1,
      aux_sym_text_line_token1,
    ACTIONS(855), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2557] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(857), 1,
      aux_sym_text_line_token1,
    ACTIONS(859), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2635] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(861), 1,
      aux_sym_text_line_token1,
    ACTIONS(863), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2713] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(865), 1,
      aux_sym_text_line_token1,
    ACTIONS(867), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2791] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(869), 1,
      aux_sym_text_line_token1,
    ACTIONS(871), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2869] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(873), 1,
      aux_sym_text_line_token1,
    ACTIONS(875), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [2947] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(877), 1,
      aux_sym_text_line_token1,
    ACTIONS(879), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [3025] = 17,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    ACTIONS(881), 1,
      aux_sym_text_line_token1,
    ACTIONS(883), 1,
      sym__eof,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(835), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(50), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [3103] = 16,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(765), 1,
      sym_bold_start,
    ACTIONS(767), 1,
      sym_italic_start,
    ACTIONS(769), 1,
      sym_underline_start,
    ACTIONS(771), 1,
      sym_inline_code_start,
    STATE(124), 1,
      sym_date,
    STATE(129), 1,
      sym_time,
    STATE(130), 1,
      sym_datetime,
    STATE(257), 1,
      sym__comment_marker,
    ACTIONS(753), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(755), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(761), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(759), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(138), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(885), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(47), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [3178] = 16,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(887), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(60), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [3253] = 16,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(889), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(57), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [3328] = 16,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(765), 1,
      sym_bold_start,
    ACTIONS(767), 1,
      sym_italic_start,
    ACTIONS(769), 1,
      sym_underline_start,
    ACTIONS(771), 1,
      sym_inline_code_start,
    STATE(124), 1,
      sym_date,
    STATE(129), 1,
      sym_time,
    STATE(130), 1,
      sym_datetime,
    STATE(257), 1,
      sym__comment_marker,
    ACTIONS(753), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(755), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(761), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(759), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(138), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(891), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(48), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [3403] = 16,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(893), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(61), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [3478] = 16,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(895), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(55), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [3553] = 16,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(897), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(53), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [3628] = 16,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(765), 1,
      sym_bold_start,
    ACTIONS(767), 1,
      sym_italic_start,
    ACTIONS(769), 1,
      sym_underline_start,
    ACTIONS(771), 1,
      sym_inline_code_start,
    STATE(124), 1,
      sym_date,
    STATE(129), 1,
      sym_time,
    STATE(130), 1,
      sym_datetime,
    STATE(257), 1,
      sym__comment_marker,
    ACTIONS(753), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(755), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(761), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(759), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(138), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(899), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(45), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [3703] = 16,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(51), 1,
      sym_bold_start,
    ACTIONS(53), 1,
      sym_italic_start,
    ACTIONS(55), 1,
      sym_underline_start,
    ACTIONS(57), 1,
      sym_inline_code_start,
    STATE(132), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(243), 1,
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
    STATE(159), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(901), 10,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
      aux_sym__text_token1,
    STATE(52), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
      aux_sym__text_repeat1,
  [3778] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(907), 1,
      sym__indent,
    STATE(82), 1,
      sym__task_children,
    ACTIONS(903), 10,
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
    ACTIONS(905), 28,
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
      sym_label,
      aux_sym__text_token1,
  [3830] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(907), 1,
      sym__indent,
    STATE(90), 1,
      sym__task_children,
    ACTIONS(909), 10,
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
    ACTIONS(911), 28,
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
      sym_label,
      aux_sym__text_token1,
  [3882] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(917), 1,
      sym__indent,
    STATE(85), 1,
      sym__list_item_children,
    ACTIONS(913), 10,
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
    ACTIONS(915), 28,
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
      sym_label,
      aux_sym__text_token1,
  [3934] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(907), 1,
      sym__indent,
    STATE(84), 1,
      sym__task_children,
    ACTIONS(919), 10,
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
    ACTIONS(921), 28,
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
      sym_label,
      aux_sym__text_token1,
  [3986] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(907), 1,
      sym__indent,
    STATE(92), 1,
      sym__task_children,
    ACTIONS(923), 10,
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
    ACTIONS(925), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4038] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(917), 1,
      sym__indent,
    STATE(83), 1,
      sym__list_item_children,
    ACTIONS(927), 10,
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
    ACTIONS(929), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4090] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(931), 11,
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
    ACTIONS(933), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4137] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(935), 11,
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
    ACTIONS(937), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4184] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(939), 11,
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
    ACTIONS(941), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4231] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(943), 10,
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
    ACTIONS(945), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4277] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(947), 10,
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
    ACTIONS(949), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4323] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(951), 10,
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
    ACTIONS(953), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4369] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(955), 10,
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
    ACTIONS(957), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4415] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(959), 10,
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
    ACTIONS(961), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4461] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(963), 10,
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
    ACTIONS(965), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4507] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(967), 10,
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
    ACTIONS(969), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4553] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(971), 10,
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
    ACTIONS(973), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4599] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(975), 10,
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
    ACTIONS(977), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4645] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(979), 10,
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
    ACTIONS(981), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4691] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(939), 10,
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
    ACTIONS(941), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4737] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(983), 10,
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
    ACTIONS(985), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4783] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(931), 10,
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
    ACTIONS(933), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4829] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(987), 10,
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
    ACTIONS(989), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4875] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(991), 10,
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
    ACTIONS(993), 28,
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
      sym_label,
      aux_sym__text_token1,
  [4921] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(995), 1,
      sym__indent,
    STATE(114), 1,
      sym__list_item_children,
    ACTIONS(913), 11,
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
    ACTIONS(915), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [4968] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(997), 1,
      sym__indent,
    STATE(112), 1,
      sym__task_children,
    ACTIONS(923), 11,
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
    ACTIONS(925), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5015] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(997), 1,
      sym__indent,
    STATE(110), 1,
      sym__task_children,
    ACTIONS(919), 11,
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
    ACTIONS(921), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5062] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(997), 1,
      sym__indent,
    STATE(106), 1,
      sym__task_children,
    ACTIONS(909), 11,
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
    ACTIONS(911), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5109] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(995), 1,
      sym__indent,
    STATE(105), 1,
      sym__list_item_children,
    ACTIONS(927), 11,
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
    ACTIONS(929), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5156] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(997), 1,
      sym__indent,
    STATE(113), 1,
      sym__task_children,
    ACTIONS(903), 11,
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
    ACTIONS(905), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5203] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(935), 12,
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
    ACTIONS(937), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5245] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(939), 12,
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
    ACTIONS(941), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5287] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(931), 12,
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
    ACTIONS(933), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5329] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(951), 11,
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
    ACTIONS(953), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5370] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(979), 11,
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
    ACTIONS(981), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5411] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(963), 11,
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
    ACTIONS(965), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5452] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1001), 11,
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
    ACTIONS(999), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5493] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1005), 11,
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
    ACTIONS(1003), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5534] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(955), 11,
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
    ACTIONS(957), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5575] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(931), 11,
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
    ACTIONS(933), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5616] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(983), 11,
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
    ACTIONS(985), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5657] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(947), 11,
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
    ACTIONS(949), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5698] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(959), 11,
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
    ACTIONS(961), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5739] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(991), 11,
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
    ACTIONS(993), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5780] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(939), 11,
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
    ACTIONS(941), 22,
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
      anon_sym_Session_COLON,
      anon_sym_Schedule_COLON,
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [5821] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1007), 1,
      sym__indent,
    STATE(121), 1,
      sym__list_item_children,
    ACTIONS(927), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(929), 20,
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
      sym_label,
      aux_sym__text_token1,
  [5862] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1007), 1,
      sym__indent,
    STATE(125), 1,
      sym__list_item_children,
    ACTIONS(913), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(915), 20,
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
      sym_label,
      aux_sym__text_token1,
  [5903] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(931), 8,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(933), 20,
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
      sym_label,
      aux_sym__text_token1,
  [5939] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(939), 8,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(941), 20,
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
      sym_label,
      aux_sym__text_token1,
  [5975] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(951), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(953), 20,
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
      sym_label,
      aux_sym__text_token1,
  [6010] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(931), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(933), 20,
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
      sym_label,
      aux_sym__text_token1,
  [6045] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(939), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(941), 20,
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
      sym_label,
      aux_sym__text_token1,
  [6080] = 6,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1011), 1,
      aux_sym_daterange_token1,
    STATE(127), 1,
      sym_time,
    ACTIONS(761), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(1013), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1009), 17,
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
      sym_external_link,
      aux_sym__text_token1,
  [6121] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(959), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(961), 20,
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
      sym_label,
      aux_sym__text_token1,
  [6156] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(991), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(993), 20,
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
      sym_label,
      aux_sym__text_token1,
  [6191] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1017), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1015), 20,
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
      sym_external_link,
      aux_sym__text_token1,
  [6225] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1021), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1019), 20,
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
      sym_external_link,
      aux_sym__text_token1,
  [6259] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1023), 1,
      aux_sym_daterange_token1,
    ACTIONS(1013), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1009), 19,
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
  [6295] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1025), 1,
      aux_sym_daterange_token1,
    ACTIONS(1013), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1009), 19,
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
  [6331] = 4,
    ACTIONS(1031), 1,
      aux_sym__text_token1,
    STATE(131), 1,
      aux_sym__text_repeat1,
    ACTIONS(1029), 6,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
      aux_sym_list_item_token1,
    ACTIONS(1027), 19,
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
      aux_sym_text_line_token1,
  [6367] = 5,
    ACTIONS(1034), 1,
      aux_sym_daterange_token1,
    STATE(141), 1,
      sym_time,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(1013), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1009), 18,
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
      sym_external_link,
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [6405] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1038), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1036), 20,
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
      sym_external_link,
      aux_sym__text_token1,
  [6439] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1042), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1040), 20,
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
      sym_external_link,
      aux_sym__text_token1,
  [6473] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1046), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1044), 20,
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
      sym_external_link,
      aux_sym__text_token1,
  [6507] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1050), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1048), 20,
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
      sym_external_link,
      aux_sym__text_token1,
  [6541] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1052), 1,
      aux_sym__text_token1,
    STATE(137), 1,
      aux_sym__text_repeat1,
    ACTIONS(1029), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1027), 18,
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
  [6579] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1057), 1,
      aux_sym__emphasis_token1,
    ACTIONS(1059), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1055), 19,
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
  [6615] = 2,
    ACTIONS(1050), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1048), 21,
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
      sym_external_link,
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [6646] = 2,
    ACTIONS(1038), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1036), 21,
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
      sym_external_link,
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [6677] = 2,
    ACTIONS(1017), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1015), 21,
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
      sym_external_link,
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [6708] = 4,
    ACTIONS(1061), 1,
      aux_sym__text_token1,
    STATE(142), 1,
      aux_sym__text_repeat1,
    ACTIONS(1029), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1027), 19,
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
      aux_sym_text_line_token1,
  [6743] = 2,
    ACTIONS(1042), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1040), 21,
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
      sym_external_link,
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [6774] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1066), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1064), 19,
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
  [6807] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1021), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1019), 19,
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
  [6840] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1017), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1015), 19,
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
  [6873] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1046), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1044), 19,
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
  [6906] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1070), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1068), 19,
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
  [6939] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1074), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1072), 19,
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
  [6972] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1078), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1076), 19,
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
  [7005] = 2,
    ACTIONS(1021), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1019), 21,
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
      sym_external_link,
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7036] = 2,
    ACTIONS(1046), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1044), 21,
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
      sym_external_link,
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7067] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1082), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1080), 19,
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
  [7100] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1086), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1084), 19,
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
  [7133] = 3,
    ACTIONS(1088), 1,
      aux_sym_list_item_token1,
    ACTIONS(1013), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1009), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7166] = 3,
    ACTIONS(1090), 1,
      aux_sym_daterange_token1,
    ACTIONS(1013), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1009), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7199] = 3,
    ACTIONS(1092), 1,
      aux_sym_daterange_token1,
    ACTIONS(1013), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1009), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7232] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1096), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1094), 19,
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
  [7265] = 3,
    ACTIONS(1098), 1,
      aux_sym__emphasis_token1,
    ACTIONS(1059), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1055), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7298] = 2,
    ACTIONS(1066), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1064), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7328] = 2,
    ACTIONS(1046), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1044), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7358] = 2,
    ACTIONS(1021), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1019), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7388] = 2,
    ACTIONS(1074), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1072), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7418] = 2,
    ACTIONS(1070), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1068), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7448] = 2,
    ACTIONS(1086), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1084), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7478] = 2,
    ACTIONS(1017), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1015), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7508] = 2,
    ACTIONS(1082), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1080), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7538] = 2,
    ACTIONS(1078), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1076), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7568] = 2,
    ACTIONS(1096), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1094), 20,
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
      aux_sym_text_line_token1,
      aux_sym__text_token1,
  [7598] = 7,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1100), 1,
      aux_sym_date_token1,
    ACTIONS(1104), 1,
      aux_sym_time_token1,
    ACTIONS(1106), 1,
      aux_sym_time_token2,
    STATE(193), 1,
      sym_date,
    ACTIONS(1102), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(160), 2,
      sym_time,
      sym_datetime,
  [7622] = 7,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1100), 1,
      aux_sym_date_token1,
    ACTIONS(1108), 1,
      aux_sym_time_token1,
    ACTIONS(1110), 1,
      aux_sym_time_token2,
    STATE(191), 1,
      sym_date,
    ACTIONS(1102), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(207), 2,
      sym_time,
      sym_datetime,
  [7646] = 6,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1112), 1,
      sym_code_block_end,
    ACTIONS(1114), 1,
      aux_sym__text_token1,
    STATE(263), 1,
      sym_code_block_content,
    STATE(174), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(180), 3,
      sym__text,
      aux_sym__text_repeat1,
      aux_sym__raw_text_line_repeat1,
  [7668] = 7,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1100), 1,
      aux_sym_date_token1,
    ACTIONS(1116), 1,
      aux_sym_time_token1,
    ACTIONS(1118), 1,
      aux_sym_time_token2,
    STATE(189), 1,
      sym_date,
    ACTIONS(1102), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(144), 2,
      sym_time,
      sym_datetime,
  [7692] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1114), 1,
      aux_sym__text_token1,
    ACTIONS(1120), 1,
      sym_code_block_end,
    STATE(175), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(180), 3,
      sym__text,
      aux_sym__text_repeat1,
      aux_sym__raw_text_line_repeat1,
  [7711] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1122), 1,
      sym_code_block_end,
    ACTIONS(1124), 1,
      aux_sym__text_token1,
    STATE(175), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(180), 3,
      sym__text,
      aux_sym__text_repeat1,
      aux_sym__raw_text_line_repeat1,
  [7730] = 6,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1127), 1,
      aux_sym_date_token1,
    STATE(178), 1,
      sym_date,
    STATE(195), 1,
      sym_datetime,
    ACTIONS(1129), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(226), 2,
      sym_daterange,
      sym_datetimerange,
  [7751] = 6,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1100), 1,
      aux_sym_date_token1,
    STATE(190), 1,
      sym_datetime,
    STATE(191), 1,
      sym_date,
    STATE(227), 1,
      sym_datetimerange,
    ACTIONS(1102), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [7771] = 6,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1108), 1,
      aux_sym_time_token1,
    ACTIONS(1110), 1,
      aux_sym_time_token2,
    ACTIONS(1131), 1,
      aux_sym_daterange_token1,
    STATE(197), 1,
      sym_time,
    ACTIONS(1133), 2,
      sym__eof,
      sym__eol,
  [7791] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1135), 1,
      aux_sym__text_token1,
    ACTIONS(1138), 2,
      sym__eof,
      sym__eol,
    STATE(179), 3,
      sym__text,
      aux_sym__text_repeat1,
      aux_sym__raw_text_line_repeat1,
  [7807] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1140), 1,
      aux_sym__text_token1,
    ACTIONS(1142), 2,
      sym__eof,
      sym__eol,
    STATE(179), 3,
      sym__text,
      aux_sym__text_repeat1,
      aux_sym__raw_text_line_repeat1,
  [7823] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1044), 1,
      aux_sym_time_token1,
    ACTIONS(1046), 4,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
      aux_sym_time_token2,
  [7836] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1127), 1,
      aux_sym_date_token1,
    STATE(206), 1,
      sym_date,
    ACTIONS(1129), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [7850] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1144), 1,
      aux_sym_document_meta_token2,
    ACTIONS(1146), 1,
      sym_document_meta_field_key,
    STATE(185), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [7864] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1148), 1,
      aux_sym_date_token1,
    STATE(154), 1,
      sym_date,
    ACTIONS(1150), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [7878] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1146), 1,
      sym_document_meta_field_key,
    ACTIONS(1152), 1,
      aux_sym_document_meta_token2,
    STATE(187), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [7892] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1154), 1,
      aux_sym_date_token1,
    STATE(165), 1,
      sym_date,
    ACTIONS(1156), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [7906] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1158), 1,
      aux_sym_document_meta_token2,
    ACTIONS(1160), 1,
      sym_document_meta_field_key,
    STATE(187), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [7920] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1163), 1,
      aux_sym__text_token1,
    STATE(188), 1,
      aux_sym__text_repeat1,
    ACTIONS(1029), 2,
      sym__eof,
      sym__eol,
  [7934] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1116), 1,
      aux_sym_time_token1,
    ACTIONS(1118), 1,
      aux_sym_time_token2,
    STATE(146), 1,
      sym_time,
  [7947] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1166), 1,
      aux_sym_daterange_token1,
    ACTIONS(1168), 2,
      sym__eof,
      sym__eol,
  [7958] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1108), 1,
      aux_sym_time_token1,
    ACTIONS(1110), 1,
      aux_sym_time_token2,
    STATE(197), 1,
      sym_time,
  [7971] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1116), 1,
      aux_sym_time_token1,
    ACTIONS(1118), 1,
      aux_sym_time_token2,
    STATE(158), 1,
      sym_time,
  [7984] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1104), 1,
      aux_sym_time_token1,
    ACTIONS(1106), 1,
      aux_sym_time_token2,
    STATE(166), 1,
      sym_time,
  [7997] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1104), 1,
      aux_sym_time_token1,
    ACTIONS(1106), 1,
      aux_sym_time_token2,
    STATE(169), 1,
      sym_time,
  [8010] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1166), 1,
      aux_sym_daterange_token1,
    ACTIONS(1133), 2,
      sym__eof,
      sym__eol,
  [8021] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1021), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [8030] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1017), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [8039] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1170), 2,
      sym__eof,
      sym__eol,
  [8047] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1172), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [8055] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1174), 2,
      sym__eof,
      sym__eol,
  [8063] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1176), 2,
      sym__eof,
      sym__eol,
  [8071] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1178), 2,
      aux_sym_document_meta_token2,
      sym_document_meta_field_key,
  [8079] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1180), 2,
      sym__eof,
      sym__eol,
  [8087] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1182), 2,
      sym__eof,
      sym__eol,
  [8095] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1184), 2,
      sym__eof,
      sym__eol,
  [8103] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1086), 2,
      sym__eof,
      sym__eol,
  [8111] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1066), 2,
      sym__eof,
      sym__eol,
  [8119] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1186), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(248), 1,
      sym_document_meta_field_value,
  [8129] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1188), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(76), 1,
      sym_text_to_eol,
  [8139] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1190), 2,
      sym__eof,
      sym__eol,
  [8147] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1192), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(231), 1,
      sym_text_to_eol,
  [8157] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1194), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [8165] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1196), 2,
      sym__eof,
      sym__eol,
  [8173] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1192), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(200), 1,
      sym_text_to_eol,
  [8183] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1192), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(201), 1,
      sym_text_to_eol,
  [8193] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1192), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(198), 1,
      sym_text_to_eol,
  [8203] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1192), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(203), 1,
      sym_text_to_eol,
  [8213] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1192), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(204), 1,
      sym_text_to_eol,
  [8223] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1198), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(98), 1,
      sym_text_to_eol,
  [8233] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1198), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(97), 1,
      sym_text_to_eol,
  [8243] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1192), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(205), 1,
      sym_text_to_eol,
  [8253] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1188), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(75), 1,
      sym_text_to_eol,
  [8263] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(935), 2,
      sym__eof,
      sym__eol,
  [8271] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1192), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(213), 1,
      sym_text_to_eol,
  [8281] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1200), 1,
      aux_sym_code_block_start_token1,
    ACTIONS(1202), 1,
      sym__eol,
  [8291] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1133), 2,
      sym__eof,
      sym__eol,
  [8299] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1168), 2,
      sym__eof,
      sym__eol,
  [8307] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1204), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [8315] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1044), 1,
      aux_sym_time_token1,
    ACTIONS(1046), 1,
      aux_sym_time_token2,
  [8325] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1206), 2,
      sym__eof,
      sym__eol,
  [8333] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1208), 2,
      sym__eof,
      sym__eol,
  [8341] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1210), 1,
      anon_sym_,
  [8348] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1212), 1,
      sym_italic_content,
  [8355] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1214), 1,
      sym_inline_code_end,
  [8362] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1216), 1,
      sym_underline_end,
  [8369] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1218), 1,
      sym_italic_end,
  [8376] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1220), 1,
      sym_bold_end,
  [8383] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1222), 1,
      aux_sym_list_item_token1,
  [8390] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1224), 1,
      sym__eol,
  [8397] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1226), 1,
      anon_sym_COLON,
  [8404] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1228), 1,
      sym_inline_code_end,
  [8411] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1230), 1,
      sym_bold_content,
  [8418] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1232), 1,
      aux_sym_document_meta_field_value_token1,
  [8425] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1234), 1,
      ts_builtin_sym_end,
  [8432] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1236), 1,
      sym_italic_end,
  [8439] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1238), 1,
      sym_bold_end,
  [8446] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1240), 1,
      anon_sym_,
  [8453] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1242), 1,
      sym__eol,
  [8460] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1244), 1,
      sym__eol,
  [8467] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1246), 1,
      sym_underline_end,
  [8474] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1248), 1,
      anon_sym_,
  [8481] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1250), 1,
      sym_underline_content,
  [8488] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1252), 1,
      sym_inline_code_content,
  [8495] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1254), 1,
      anon_sym_,
  [8502] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1256), 1,
      anon_sym_,
  [8509] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1258), 1,
      anon_sym_,
  [8516] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1260), 1,
      aux_sym_document_meta_field_value_token1,
  [8523] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1262), 1,
      sym_code_block_language,
  [8530] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1264), 1,
      sym_inline_code_content,
  [8537] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1266), 1,
      sym_underline_content,
  [8544] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1268), 1,
      sym_italic_content,
  [8551] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1270), 1,
      sym_bold_content,
  [8558] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1272), 1,
      sym_code_block_end,
  [8565] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1274), 1,
      aux_sym_list_item_token1,
  [8572] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1276), 1,
      aux_sym_list_item_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 115,
  [SMALL_STATE(29)] = 230,
  [SMALL_STATE(30)] = 345,
  [SMALL_STATE(31)] = 456,
  [SMALL_STATE(32)] = 567,
  [SMALL_STATE(33)] = 657,
  [SMALL_STATE(34)] = 747,
  [SMALL_STATE(35)] = 837,
  [SMALL_STATE(36)] = 927,
  [SMALL_STATE(37)] = 1013,
  [SMALL_STATE(38)] = 1099,
  [SMALL_STATE(39)] = 1185,
  [SMALL_STATE(40)] = 1273,
  [SMALL_STATE(41)] = 1361,
  [SMALL_STATE(42)] = 1449,
  [SMALL_STATE(43)] = 1530,
  [SMALL_STATE(44)] = 1611,
  [SMALL_STATE(45)] = 1692,
  [SMALL_STATE(46)] = 1771,
  [SMALL_STATE(47)] = 1850,
  [SMALL_STATE(48)] = 1929,
  [SMALL_STATE(49)] = 2008,
  [SMALL_STATE(50)] = 2089,
  [SMALL_STATE(51)] = 2167,
  [SMALL_STATE(52)] = 2245,
  [SMALL_STATE(53)] = 2323,
  [SMALL_STATE(54)] = 2401,
  [SMALL_STATE(55)] = 2479,
  [SMALL_STATE(56)] = 2557,
  [SMALL_STATE(57)] = 2635,
  [SMALL_STATE(58)] = 2713,
  [SMALL_STATE(59)] = 2791,
  [SMALL_STATE(60)] = 2869,
  [SMALL_STATE(61)] = 2947,
  [SMALL_STATE(62)] = 3025,
  [SMALL_STATE(63)] = 3103,
  [SMALL_STATE(64)] = 3178,
  [SMALL_STATE(65)] = 3253,
  [SMALL_STATE(66)] = 3328,
  [SMALL_STATE(67)] = 3403,
  [SMALL_STATE(68)] = 3478,
  [SMALL_STATE(69)] = 3553,
  [SMALL_STATE(70)] = 3628,
  [SMALL_STATE(71)] = 3703,
  [SMALL_STATE(72)] = 3778,
  [SMALL_STATE(73)] = 3830,
  [SMALL_STATE(74)] = 3882,
  [SMALL_STATE(75)] = 3934,
  [SMALL_STATE(76)] = 3986,
  [SMALL_STATE(77)] = 4038,
  [SMALL_STATE(78)] = 4090,
  [SMALL_STATE(79)] = 4137,
  [SMALL_STATE(80)] = 4184,
  [SMALL_STATE(81)] = 4231,
  [SMALL_STATE(82)] = 4277,
  [SMALL_STATE(83)] = 4323,
  [SMALL_STATE(84)] = 4369,
  [SMALL_STATE(85)] = 4415,
  [SMALL_STATE(86)] = 4461,
  [SMALL_STATE(87)] = 4507,
  [SMALL_STATE(88)] = 4553,
  [SMALL_STATE(89)] = 4599,
  [SMALL_STATE(90)] = 4645,
  [SMALL_STATE(91)] = 4691,
  [SMALL_STATE(92)] = 4737,
  [SMALL_STATE(93)] = 4783,
  [SMALL_STATE(94)] = 4829,
  [SMALL_STATE(95)] = 4875,
  [SMALL_STATE(96)] = 4921,
  [SMALL_STATE(97)] = 4968,
  [SMALL_STATE(98)] = 5015,
  [SMALL_STATE(99)] = 5062,
  [SMALL_STATE(100)] = 5109,
  [SMALL_STATE(101)] = 5156,
  [SMALL_STATE(102)] = 5203,
  [SMALL_STATE(103)] = 5245,
  [SMALL_STATE(104)] = 5287,
  [SMALL_STATE(105)] = 5329,
  [SMALL_STATE(106)] = 5370,
  [SMALL_STATE(107)] = 5411,
  [SMALL_STATE(108)] = 5452,
  [SMALL_STATE(109)] = 5493,
  [SMALL_STATE(110)] = 5534,
  [SMALL_STATE(111)] = 5575,
  [SMALL_STATE(112)] = 5616,
  [SMALL_STATE(113)] = 5657,
  [SMALL_STATE(114)] = 5698,
  [SMALL_STATE(115)] = 5739,
  [SMALL_STATE(116)] = 5780,
  [SMALL_STATE(117)] = 5821,
  [SMALL_STATE(118)] = 5862,
  [SMALL_STATE(119)] = 5903,
  [SMALL_STATE(120)] = 5939,
  [SMALL_STATE(121)] = 5975,
  [SMALL_STATE(122)] = 6010,
  [SMALL_STATE(123)] = 6045,
  [SMALL_STATE(124)] = 6080,
  [SMALL_STATE(125)] = 6121,
  [SMALL_STATE(126)] = 6156,
  [SMALL_STATE(127)] = 6191,
  [SMALL_STATE(128)] = 6225,
  [SMALL_STATE(129)] = 6259,
  [SMALL_STATE(130)] = 6295,
  [SMALL_STATE(131)] = 6331,
  [SMALL_STATE(132)] = 6367,
  [SMALL_STATE(133)] = 6405,
  [SMALL_STATE(134)] = 6439,
  [SMALL_STATE(135)] = 6473,
  [SMALL_STATE(136)] = 6507,
  [SMALL_STATE(137)] = 6541,
  [SMALL_STATE(138)] = 6579,
  [SMALL_STATE(139)] = 6615,
  [SMALL_STATE(140)] = 6646,
  [SMALL_STATE(141)] = 6677,
  [SMALL_STATE(142)] = 6708,
  [SMALL_STATE(143)] = 6743,
  [SMALL_STATE(144)] = 6774,
  [SMALL_STATE(145)] = 6807,
  [SMALL_STATE(146)] = 6840,
  [SMALL_STATE(147)] = 6873,
  [SMALL_STATE(148)] = 6906,
  [SMALL_STATE(149)] = 6939,
  [SMALL_STATE(150)] = 6972,
  [SMALL_STATE(151)] = 7005,
  [SMALL_STATE(152)] = 7036,
  [SMALL_STATE(153)] = 7067,
  [SMALL_STATE(154)] = 7100,
  [SMALL_STATE(155)] = 7133,
  [SMALL_STATE(156)] = 7166,
  [SMALL_STATE(157)] = 7199,
  [SMALL_STATE(158)] = 7232,
  [SMALL_STATE(159)] = 7265,
  [SMALL_STATE(160)] = 7298,
  [SMALL_STATE(161)] = 7328,
  [SMALL_STATE(162)] = 7358,
  [SMALL_STATE(163)] = 7388,
  [SMALL_STATE(164)] = 7418,
  [SMALL_STATE(165)] = 7448,
  [SMALL_STATE(166)] = 7478,
  [SMALL_STATE(167)] = 7508,
  [SMALL_STATE(168)] = 7538,
  [SMALL_STATE(169)] = 7568,
  [SMALL_STATE(170)] = 7598,
  [SMALL_STATE(171)] = 7622,
  [SMALL_STATE(172)] = 7646,
  [SMALL_STATE(173)] = 7668,
  [SMALL_STATE(174)] = 7692,
  [SMALL_STATE(175)] = 7711,
  [SMALL_STATE(176)] = 7730,
  [SMALL_STATE(177)] = 7751,
  [SMALL_STATE(178)] = 7771,
  [SMALL_STATE(179)] = 7791,
  [SMALL_STATE(180)] = 7807,
  [SMALL_STATE(181)] = 7823,
  [SMALL_STATE(182)] = 7836,
  [SMALL_STATE(183)] = 7850,
  [SMALL_STATE(184)] = 7864,
  [SMALL_STATE(185)] = 7878,
  [SMALL_STATE(186)] = 7892,
  [SMALL_STATE(187)] = 7906,
  [SMALL_STATE(188)] = 7920,
  [SMALL_STATE(189)] = 7934,
  [SMALL_STATE(190)] = 7947,
  [SMALL_STATE(191)] = 7958,
  [SMALL_STATE(192)] = 7971,
  [SMALL_STATE(193)] = 7984,
  [SMALL_STATE(194)] = 7997,
  [SMALL_STATE(195)] = 8010,
  [SMALL_STATE(196)] = 8021,
  [SMALL_STATE(197)] = 8030,
  [SMALL_STATE(198)] = 8039,
  [SMALL_STATE(199)] = 8047,
  [SMALL_STATE(200)] = 8055,
  [SMALL_STATE(201)] = 8063,
  [SMALL_STATE(202)] = 8071,
  [SMALL_STATE(203)] = 8079,
  [SMALL_STATE(204)] = 8087,
  [SMALL_STATE(205)] = 8095,
  [SMALL_STATE(206)] = 8103,
  [SMALL_STATE(207)] = 8111,
  [SMALL_STATE(208)] = 8119,
  [SMALL_STATE(209)] = 8129,
  [SMALL_STATE(210)] = 8139,
  [SMALL_STATE(211)] = 8147,
  [SMALL_STATE(212)] = 8157,
  [SMALL_STATE(213)] = 8165,
  [SMALL_STATE(214)] = 8173,
  [SMALL_STATE(215)] = 8183,
  [SMALL_STATE(216)] = 8193,
  [SMALL_STATE(217)] = 8203,
  [SMALL_STATE(218)] = 8213,
  [SMALL_STATE(219)] = 8223,
  [SMALL_STATE(220)] = 8233,
  [SMALL_STATE(221)] = 8243,
  [SMALL_STATE(222)] = 8253,
  [SMALL_STATE(223)] = 8263,
  [SMALL_STATE(224)] = 8271,
  [SMALL_STATE(225)] = 8281,
  [SMALL_STATE(226)] = 8291,
  [SMALL_STATE(227)] = 8299,
  [SMALL_STATE(228)] = 8307,
  [SMALL_STATE(229)] = 8315,
  [SMALL_STATE(230)] = 8325,
  [SMALL_STATE(231)] = 8333,
  [SMALL_STATE(232)] = 8341,
  [SMALL_STATE(233)] = 8348,
  [SMALL_STATE(234)] = 8355,
  [SMALL_STATE(235)] = 8362,
  [SMALL_STATE(236)] = 8369,
  [SMALL_STATE(237)] = 8376,
  [SMALL_STATE(238)] = 8383,
  [SMALL_STATE(239)] = 8390,
  [SMALL_STATE(240)] = 8397,
  [SMALL_STATE(241)] = 8404,
  [SMALL_STATE(242)] = 8411,
  [SMALL_STATE(243)] = 8418,
  [SMALL_STATE(244)] = 8425,
  [SMALL_STATE(245)] = 8432,
  [SMALL_STATE(246)] = 8439,
  [SMALL_STATE(247)] = 8446,
  [SMALL_STATE(248)] = 8453,
  [SMALL_STATE(249)] = 8460,
  [SMALL_STATE(250)] = 8467,
  [SMALL_STATE(251)] = 8474,
  [SMALL_STATE(252)] = 8481,
  [SMALL_STATE(253)] = 8488,
  [SMALL_STATE(254)] = 8495,
  [SMALL_STATE(255)] = 8502,
  [SMALL_STATE(256)] = 8509,
  [SMALL_STATE(257)] = 8516,
  [SMALL_STATE(258)] = 8523,
  [SMALL_STATE(259)] = 8530,
  [SMALL_STATE(260)] = 8537,
  [SMALL_STATE(261)] = 8544,
  [SMALL_STATE(262)] = 8551,
  [SMALL_STATE(263)] = 8558,
  [SMALL_STATE(264)] = 8565,
  [SMALL_STATE(265)] = 8572,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(243),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(168),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(152),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(151),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(256),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(255),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(254),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(251),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(232),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(247),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(224),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(225),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(222),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(209),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(262),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(261),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(260),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(259),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(243),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(168),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(59),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(152),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(151),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(255),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(254),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(251),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(232),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(247),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(224),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(225),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(67),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(43),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(44),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(222),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(209),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(41),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(262),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(261),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(260),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(259),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(243),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(168),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(59),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(152),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(151),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(254),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(251),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(232),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(247),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(224),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(225),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(67),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(43),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(44),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(222),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(209),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(41),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(262),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(261),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(260),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(259),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(243),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(168),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(59),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(152),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(151),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(251),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(232),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(247),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(224),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(225),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(67),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(43),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(44),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(222),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(209),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(41),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(262),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(261),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(260),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(259),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(243),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(168),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(59),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(152),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(151),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(232),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(247),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(224),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(225),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(67),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(43),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(44),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(222),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(209),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(41),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(262),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(261),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(260),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(259),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(243),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(168),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(59),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(152),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(151),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(247),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(224),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(225),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(67),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(43),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(44),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(222),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(209),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(41),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(262),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(261),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(260),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(259),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(243),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(168),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(59),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(152),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(151),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(224),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(225),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(67),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(43),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(44),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(222),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(209),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(41),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(262),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(261),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(260),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(259),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(243),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(168),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(59),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(152),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(151),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(225),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(67),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(43),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(44),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(222),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(209),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(41),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(262),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(261),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(260),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(259),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(243),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(168),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(62),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(152),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(151),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(177),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(176),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(64),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(49),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(42),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(219),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(220),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(40),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(262),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(261),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(260),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(259),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(243),
  [705] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(168),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(58),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(152),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(151),
  [717] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(65),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(39),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(262),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(261),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(260),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(259),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(257),
  [776] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(150),
  [779] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(46),
  [782] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(135),
  [785] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(128),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(242),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(233),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(252),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(253),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(243),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(168),
  [812] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(50),
  [815] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(152),
  [818] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(151),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(262),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(261),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(260),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(259),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 2),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 2),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 5),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 5),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 2),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 2),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 3),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_to_eol, 1),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_to_eol, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 3),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 3),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 3),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 3),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 3),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 6),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 6),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_children, 3),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__task_children, 3),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title_basic, 3),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title_basic, 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 2),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 3),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 3),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 3),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 3),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_children, 3),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_children, 3),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_schedule, 3),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_schedule, 3),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_session, 3),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_session, 3),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline, 1),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2),
  [1031] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(131),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold, 3),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic, 3),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic, 3),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_underline, 3),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_underline, 3),
  [1052] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(137),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 1),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 1),
  [1061] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(142),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetimerange, 3),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetimerange, 3),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 2),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_code, 3),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_code, 3),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_daterange, 3),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daterange, 3),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_label, 1),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timerange, 3),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timerange, 3),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_content, 1),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2),
  [1124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2), SHIFT_REPEAT(180),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2), SHIFT_REPEAT(179),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2),
  [1160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2), SHIFT_REPEAT(240),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(188),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_text_line, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field, 4, .production_id = 2),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 2),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 4),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field_value, 1),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1234] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
