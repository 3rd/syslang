#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 216
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
  anon_sym_Session_COLON = 37,
  anon_sym_Schedule_COLON = 38,
  sym_inline_code_content = 39,
  sym_code_block_language = 40,
  anon_sym_ATcode = 41,
  aux_sym_code_block_start_token1 = 42,
  sym_code_block_end = 43,
  sym_external_link = 44,
  sym_label = 45,
  aux_sym_text_line_token1 = 46,
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
  [anon_sym_Session_COLON] = "Session: ",
  [anon_sym_Schedule_COLON] = "Schedule: ",
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
  [anon_sym_Session_COLON] = anon_sym_Session_COLON,
  [anon_sym_Schedule_COLON] = anon_sym_Schedule_COLON,
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
  [anon_sym_Session_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Schedule_COLON] = {
    .visible = true,
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
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 32,
  [36] = 36,
  [37] = 36,
  [38] = 36,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 40,
  [43] = 39,
  [44] = 44,
  [45] = 44,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 46,
  [50] = 47,
  [51] = 46,
  [52] = 46,
  [53] = 47,
  [54] = 46,
  [55] = 47,
  [56] = 47,
  [57] = 46,
  [58] = 47,
  [59] = 59,
  [60] = 59,
  [61] = 59,
  [62] = 59,
  [63] = 59,
  [64] = 59,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 71,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 70,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 67,
  [88] = 69,
  [89] = 66,
  [90] = 68,
  [91] = 65,
  [92] = 70,
  [93] = 71,
  [94] = 72,
  [95] = 85,
  [96] = 96,
  [97] = 81,
  [98] = 79,
  [99] = 78,
  [100] = 77,
  [101] = 76,
  [102] = 102,
  [103] = 73,
  [104] = 70,
  [105] = 71,
  [106] = 69,
  [107] = 70,
  [108] = 71,
  [109] = 81,
  [110] = 85,
  [111] = 71,
  [112] = 70,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 121,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 116,
  [134] = 117,
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 116,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 124,
  [150] = 147,
  [151] = 151,
  [152] = 115,
  [153] = 121,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 117,
  [158] = 155,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 125,
  [172] = 131,
  [173] = 173,
  [174] = 116,
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
  [187] = 72,
  [188] = 179,
  [189] = 164,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
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
          lookahead == '.') SKIP(77)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(176);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(88);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(141);
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
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
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
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(184);
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
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '!') ADVANCE(254);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(256);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(208);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'S') ADVANCE(217);
      if (lookahead == 'h') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(258);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '!') ADVANCE(254);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(256);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'h') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(258);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '!') ADVANCE(290);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '+') ADVANCE(292);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(210);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == 'h') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '!') ADVANCE(290);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '+') ADVANCE(292);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(96);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == 'h') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(272);
      if (lookahead == '@') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(185);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(185);
      if (lookahead == ',' ||
          lookahead == '.') SKIP(42)
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '!') ADVANCE(290);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '+') ADVANCE(292);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(211);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == 'h') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(42)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(38)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '@') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(38)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '@') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(40)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '@') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(86);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(42)
      if (lookahead == '\n') ADVANCE(192);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(90);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(180);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(181);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(94);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(92);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(93);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 70:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(158);
      END_STATE();
    case 71:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 72:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 74:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '!') ADVANCE(254);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(256);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(207);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'h') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(258);
      END_STATE();
    case 75:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '!') ADVANCE(254);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(256);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(206);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == 'h') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(258);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '!') ADVANCE(254);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(256);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(206);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'h') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(258);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(77)
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(176);
      if (lookahead == '@') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(84);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
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
      if (lookahead == '-') ADVANCE(47);
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
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '-') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '/') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ticket);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ticket);
      if (lookahead == ':') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_date_token3);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(285);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead == '+') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead == '+') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_negative);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_negative);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_negative);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead == '@') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(153);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(153);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead == '!') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead == '!') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead == '$') ADVANCE(258);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_heading_6_marker);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_heading_6_marker);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_section_marker);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_section_marker);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_Session_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_Schedule_COLON);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATcode);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_code_block_start_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_code_block_end);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_code_block_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_external_link);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == ':') ADVANCE(201);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(258);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(258);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(190);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(254);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(256);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(206);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'h') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(254);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(256);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(207);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'h') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(254);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(256);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(208);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'S') ADVANCE(217);
      if (lookahead == 'h') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(254);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '+') ADVANCE(256);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'h') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(290);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '+') ADVANCE(292);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(210);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == 'h') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(290);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '+') ADVANCE(292);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(211);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == 'h') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == ':') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(150);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(149);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(258);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(272);
      if (lookahead == '@') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 75, .external_lex_state = 2},
  [2] = {.lex_state = 74, .external_lex_state = 2},
  [3] = {.lex_state = 74, .external_lex_state = 2},
  [4] = {.lex_state = 74, .external_lex_state = 2},
  [5] = {.lex_state = 74, .external_lex_state = 2},
  [6] = {.lex_state = 74, .external_lex_state = 2},
  [7] = {.lex_state = 74, .external_lex_state = 2},
  [8] = {.lex_state = 74, .external_lex_state = 2},
  [9] = {.lex_state = 74, .external_lex_state = 2},
  [10] = {.lex_state = 74, .external_lex_state = 2},
  [11] = {.lex_state = 74, .external_lex_state = 2},
  [12] = {.lex_state = 74, .external_lex_state = 2},
  [13] = {.lex_state = 74, .external_lex_state = 2},
  [14] = {.lex_state = 74, .external_lex_state = 2},
  [15] = {.lex_state = 74, .external_lex_state = 2},
  [16] = {.lex_state = 74, .external_lex_state = 2},
  [17] = {.lex_state = 74, .external_lex_state = 2},
  [18] = {.lex_state = 74, .external_lex_state = 2},
  [19] = {.lex_state = 74, .external_lex_state = 2},
  [20] = {.lex_state = 74, .external_lex_state = 2},
  [21] = {.lex_state = 74, .external_lex_state = 2},
  [22] = {.lex_state = 74, .external_lex_state = 2},
  [23] = {.lex_state = 74, .external_lex_state = 2},
  [24] = {.lex_state = 74, .external_lex_state = 2},
  [25] = {.lex_state = 74, .external_lex_state = 2},
  [26] = {.lex_state = 74, .external_lex_state = 2},
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
  [40] = {.lex_state = 30, .external_lex_state = 6},
  [41] = {.lex_state = 30, .external_lex_state = 6},
  [42] = {.lex_state = 30, .external_lex_state = 6},
  [43] = {.lex_state = 30, .external_lex_state = 6},
  [44] = {.lex_state = 30, .external_lex_state = 6},
  [45] = {.lex_state = 30, .external_lex_state = 6},
  [46] = {.lex_state = 31, .external_lex_state = 7},
  [47] = {.lex_state = 31, .external_lex_state = 7},
  [48] = {.lex_state = 31, .external_lex_state = 7},
  [49] = {.lex_state = 31, .external_lex_state = 7},
  [50] = {.lex_state = 31, .external_lex_state = 7},
  [51] = {.lex_state = 31, .external_lex_state = 7},
  [52] = {.lex_state = 31, .external_lex_state = 7},
  [53] = {.lex_state = 31, .external_lex_state = 7},
  [54] = {.lex_state = 31, .external_lex_state = 7},
  [55] = {.lex_state = 31, .external_lex_state = 7},
  [56] = {.lex_state = 31, .external_lex_state = 7},
  [57] = {.lex_state = 31, .external_lex_state = 7},
  [58] = {.lex_state = 31, .external_lex_state = 7},
  [59] = {.lex_state = 31, .external_lex_state = 6},
  [60] = {.lex_state = 31, .external_lex_state = 6},
  [61] = {.lex_state = 31, .external_lex_state = 6},
  [62] = {.lex_state = 31, .external_lex_state = 6},
  [63] = {.lex_state = 31, .external_lex_state = 6},
  [64] = {.lex_state = 31, .external_lex_state = 6},
  [65] = {.lex_state = 74, .external_lex_state = 8},
  [66] = {.lex_state = 74, .external_lex_state = 8},
  [67] = {.lex_state = 74, .external_lex_state = 8},
  [68] = {.lex_state = 74, .external_lex_state = 8},
  [69] = {.lex_state = 74, .external_lex_state = 8},
  [70] = {.lex_state = 74, .external_lex_state = 8},
  [71] = {.lex_state = 74, .external_lex_state = 8},
  [72] = {.lex_state = 74, .external_lex_state = 8},
  [73] = {.lex_state = 74, .external_lex_state = 2},
  [74] = {.lex_state = 74, .external_lex_state = 2},
  [75] = {.lex_state = 74, .external_lex_state = 2},
  [76] = {.lex_state = 74, .external_lex_state = 2},
  [77] = {.lex_state = 74, .external_lex_state = 2},
  [78] = {.lex_state = 74, .external_lex_state = 2},
  [79] = {.lex_state = 74, .external_lex_state = 2},
  [80] = {.lex_state = 74, .external_lex_state = 2},
  [81] = {.lex_state = 74, .external_lex_state = 2},
  [82] = {.lex_state = 74, .external_lex_state = 2},
  [83] = {.lex_state = 74, .external_lex_state = 2},
  [84] = {.lex_state = 74, .external_lex_state = 2},
  [85] = {.lex_state = 74, .external_lex_state = 2},
  [86] = {.lex_state = 74, .external_lex_state = 2},
  [87] = {.lex_state = 29, .external_lex_state = 9},
  [88] = {.lex_state = 29, .external_lex_state = 9},
  [89] = {.lex_state = 29, .external_lex_state = 9},
  [90] = {.lex_state = 29, .external_lex_state = 9},
  [91] = {.lex_state = 29, .external_lex_state = 9},
  [92] = {.lex_state = 29, .external_lex_state = 9},
  [93] = {.lex_state = 29, .external_lex_state = 9},
  [94] = {.lex_state = 29, .external_lex_state = 9},
  [95] = {.lex_state = 29, .external_lex_state = 3},
  [96] = {.lex_state = 29, .external_lex_state = 3},
  [97] = {.lex_state = 29, .external_lex_state = 3},
  [98] = {.lex_state = 29, .external_lex_state = 3},
  [99] = {.lex_state = 29, .external_lex_state = 3},
  [100] = {.lex_state = 29, .external_lex_state = 3},
  [101] = {.lex_state = 29, .external_lex_state = 3},
  [102] = {.lex_state = 29, .external_lex_state = 3},
  [103] = {.lex_state = 29, .external_lex_state = 3},
  [104] = {.lex_state = 29, .external_lex_state = 3},
  [105] = {.lex_state = 29, .external_lex_state = 3},
  [106] = {.lex_state = 30, .external_lex_state = 10},
  [107] = {.lex_state = 30, .external_lex_state = 10},
  [108] = {.lex_state = 30, .external_lex_state = 10},
  [109] = {.lex_state = 30, .external_lex_state = 4},
  [110] = {.lex_state = 30, .external_lex_state = 4},
  [111] = {.lex_state = 30, .external_lex_state = 4},
  [112] = {.lex_state = 30, .external_lex_state = 4},
  [113] = {.lex_state = 36, .external_lex_state = 7},
  [114] = {.lex_state = 32, .external_lex_state = 7},
  [115] = {.lex_state = 31, .external_lex_state = 7},
  [116] = {.lex_state = 36, .external_lex_state = 7},
  [117] = {.lex_state = 36, .external_lex_state = 7},
  [118] = {.lex_state = 32, .external_lex_state = 7},
  [119] = {.lex_state = 32, .external_lex_state = 7},
  [120] = {.lex_state = 36, .external_lex_state = 7},
  [121] = {.lex_state = 36, .external_lex_state = 7},
  [122] = {.lex_state = 36, .external_lex_state = 7},
  [123] = {.lex_state = 32, .external_lex_state = 7},
  [124] = {.lex_state = 31, .external_lex_state = 7},
  [125] = {.lex_state = 31, .external_lex_state = 7},
  [126] = {.lex_state = 31, .external_lex_state = 7},
  [127] = {.lex_state = 31, .external_lex_state = 7},
  [128] = {.lex_state = 31, .external_lex_state = 7},
  [129] = {.lex_state = 31, .external_lex_state = 7},
  [130] = {.lex_state = 31, .external_lex_state = 7},
  [131] = {.lex_state = 31, .external_lex_state = 7},
  [132] = {.lex_state = 31, .external_lex_state = 7},
  [133] = {.lex_state = 31, .external_lex_state = 7},
  [134] = {.lex_state = 31, .external_lex_state = 7},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 33},
  [137] = {.lex_state = 39},
  [138] = {.lex_state = 33},
  [139] = {.lex_state = 39},
  [140] = {.lex_state = 33},
  [141] = {.lex_state = 34, .external_lex_state = 11},
  [142] = {.lex_state = 39, .external_lex_state = 11},
  [143] = {.lex_state = 39},
  [144] = {.lex_state = 34, .external_lex_state = 11},
  [145] = {.lex_state = 39, .external_lex_state = 11},
  [146] = {.lex_state = 40},
  [147] = {.lex_state = 39},
  [148] = {.lex_state = 40},
  [149] = {.lex_state = 34, .external_lex_state = 11},
  [150] = {.lex_state = 39},
  [151] = {.lex_state = 40},
  [152] = {.lex_state = 34, .external_lex_state = 11},
  [153] = {.lex_state = 39, .external_lex_state = 11},
  [154] = {.lex_state = 39, .external_lex_state = 11},
  [155] = {.lex_state = 39},
  [156] = {.lex_state = 39, .external_lex_state = 11},
  [157] = {.lex_state = 39, .external_lex_state = 11},
  [158] = {.lex_state = 39},
  [159] = {.lex_state = 39},
  [160] = {.lex_state = 0, .external_lex_state = 11},
  [161] = {.lex_state = 41},
  [162] = {.lex_state = 33},
  [163] = {.lex_state = 0, .external_lex_state = 11},
  [164] = {.lex_state = 41},
  [165] = {.lex_state = 0, .external_lex_state = 11},
  [166] = {.lex_state = 0, .external_lex_state = 11},
  [167] = {.lex_state = 0, .external_lex_state = 11},
  [168] = {.lex_state = 0, .external_lex_state = 11},
  [169] = {.lex_state = 0, .external_lex_state = 11},
  [170] = {.lex_state = 0, .external_lex_state = 11},
  [171] = {.lex_state = 0, .external_lex_state = 11},
  [172] = {.lex_state = 0, .external_lex_state = 11},
  [173] = {.lex_state = 41},
  [174] = {.lex_state = 39},
  [175] = {.lex_state = 41},
  [176] = {.lex_state = 0, .external_lex_state = 11},
  [177] = {.lex_state = 0, .external_lex_state = 11},
  [178] = {.lex_state = 41},
  [179] = {.lex_state = 41},
  [180] = {.lex_state = 33},
  [181] = {.lex_state = 0, .external_lex_state = 11},
  [182] = {.lex_state = 41},
  [183] = {.lex_state = 41},
  [184] = {.lex_state = 41},
  [185] = {.lex_state = 41},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 0, .external_lex_state = 11},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 40},
  [191] = {.lex_state = 35, .external_lex_state = 12},
  [192] = {.lex_state = 0, .external_lex_state = 11},
  [193] = {.lex_state = 33},
  [194] = {.lex_state = 37},
  [195] = {.lex_state = 41},
  [196] = {.lex_state = 0, .external_lex_state = 13},
  [197] = {.lex_state = 0, .external_lex_state = 14},
  [198] = {.lex_state = 0, .external_lex_state = 15},
  [199] = {.lex_state = 37},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 39},
  [203] = {.lex_state = 37},
  [204] = {.lex_state = 0, .external_lex_state = 16},
  [205] = {.lex_state = 0, .external_lex_state = 12},
  [206] = {.lex_state = 43},
  [207] = {.lex_state = 37},
  [208] = {.lex_state = 37},
  [209] = {.lex_state = 0, .external_lex_state = 12},
  [210] = {.lex_state = 39},
  [211] = {.lex_state = 44},
  [212] = {.lex_state = 45},
  [213] = {.lex_state = 46},
  [214] = {.lex_state = 37},
  [215] = {.lex_state = 0, .external_lex_state = 12},
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

static const bool ts_external_scanner_states[17][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__eol] = true,
  },
  [13] = {
    [ts_external_token_inline_code_end] = true,
  },
  [14] = {
    [ts_external_token_italic_end] = true,
  },
  [15] = {
    [ts_external_token_bold_end] = true,
  },
  [16] = {
    [ts_external_token_underline_end] = true,
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
    [sym_document] = STATE(200),
    [sym_document_title_basic] = STATE(3),
    [sym_document_meta] = STATE(3),
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
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
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(5),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(5),
    [sym__text] = STATE(49),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
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
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [2] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(49),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(61),
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
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [3] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
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
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(49),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(63),
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
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [4] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(49),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(65),
    [aux_sym__comment_marker_token1] = ACTIONS(67),
    [aux_sym__comment_marker_token2] = ACTIONS(67),
    [aux_sym_string_token1] = ACTIONS(70),
    [aux_sym_string_token2] = ACTIONS(70),
    [sym_number] = ACTIONS(73),
    [sym_ticket] = ACTIONS(73),
    [aux_sym_date_token1] = ACTIONS(76),
    [aux_sym_date_token2] = ACTIONS(76),
    [aux_sym_date_token3] = ACTIONS(76),
    [aux_sym_time_token1] = ACTIONS(79),
    [aux_sym_time_token2] = ACTIONS(79),
    [sym_tag_positive] = ACTIONS(73),
    [sym_tag_negative] = ACTIONS(73),
    [sym_tag_hash] = ACTIONS(73),
    [sym_tag_context] = ACTIONS(73),
    [sym_tag_danger] = ACTIONS(73),
    [sym_tag_identifier] = ACTIONS(73),
    [sym_heading_1_marker] = ACTIONS(82),
    [sym_heading_2_marker] = ACTIONS(85),
    [sym_heading_3_marker] = ACTIONS(88),
    [sym_heading_4_marker] = ACTIONS(91),
    [sym_heading_5_marker] = ACTIONS(94),
    [sym_heading_6_marker] = ACTIONS(97),
    [sym_section_marker] = ACTIONS(100),
    [anon_sym_ATcode] = ACTIONS(103),
    [sym_external_link] = ACTIONS(73),
    [sym_label] = ACTIONS(106),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(109),
    [sym_task_marker_default] = ACTIONS(112),
    [sym_task_marker_active] = ACTIONS(115),
    [sym_task_marker_done] = ACTIONS(118),
    [sym_task_marker_cancelled] = ACTIONS(121),
    [sym_list_item_marker] = ACTIONS(124),
    [sym_bold_start] = ACTIONS(127),
    [sym_italic_start] = ACTIONS(130),
    [sym_underline_start] = ACTIONS(133),
    [sym_inline_code_start] = ACTIONS(136),
  },
  [5] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(49),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(63),
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
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [6] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
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
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(6),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(6),
    [sym__text] = STATE(49),
    [aux_sym_heading_1_repeat1] = STATE(6),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(139),
    [aux_sym__comment_marker_token1] = ACTIONS(141),
    [aux_sym__comment_marker_token2] = ACTIONS(141),
    [aux_sym_string_token1] = ACTIONS(144),
    [aux_sym_string_token2] = ACTIONS(144),
    [sym_number] = ACTIONS(147),
    [sym_ticket] = ACTIONS(147),
    [aux_sym_date_token1] = ACTIONS(150),
    [aux_sym_date_token2] = ACTIONS(150),
    [aux_sym_date_token3] = ACTIONS(150),
    [aux_sym_time_token1] = ACTIONS(153),
    [aux_sym_time_token2] = ACTIONS(153),
    [sym_tag_positive] = ACTIONS(147),
    [sym_tag_negative] = ACTIONS(147),
    [sym_tag_hash] = ACTIONS(147),
    [sym_tag_context] = ACTIONS(147),
    [sym_tag_danger] = ACTIONS(147),
    [sym_tag_identifier] = ACTIONS(147),
    [sym_heading_1_marker] = ACTIONS(156),
    [sym_heading_2_marker] = ACTIONS(158),
    [sym_heading_3_marker] = ACTIONS(161),
    [sym_heading_4_marker] = ACTIONS(164),
    [sym_heading_5_marker] = ACTIONS(167),
    [sym_heading_6_marker] = ACTIONS(170),
    [sym_section_marker] = ACTIONS(173),
    [anon_sym_ATcode] = ACTIONS(176),
    [sym_external_link] = ACTIONS(147),
    [sym_label] = ACTIONS(179),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(182),
    [sym_task_marker_default] = ACTIONS(185),
    [sym_task_marker_active] = ACTIONS(188),
    [sym_task_marker_done] = ACTIONS(191),
    [sym_task_marker_cancelled] = ACTIONS(194),
    [sym_list_item_marker] = ACTIONS(197),
    [sym_bold_start] = ACTIONS(200),
    [sym_italic_start] = ACTIONS(203),
    [sym_underline_start] = ACTIONS(206),
    [sym_inline_code_start] = ACTIONS(209),
  },
  [7] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
    [sym_heading_2] = STATE(8),
    [sym_heading_3] = STATE(8),
    [sym_heading_4] = STATE(8),
    [sym_heading_5] = STATE(8),
    [sym_heading_6] = STATE(8),
    [sym_section] = STATE(8),
    [sym__task] = STATE(8),
    [sym_task_default] = STATE(8),
    [sym_task_active] = STATE(8),
    [sym_task_done] = STATE(8),
    [sym_task_cancelled] = STATE(8),
    [sym_list_item] = STATE(8),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(8),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(8),
    [sym__text] = STATE(49),
    [aux_sym_heading_1_repeat1] = STATE(8),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
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
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [8] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
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
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(6),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(6),
    [sym__text] = STATE(49),
    [aux_sym_heading_1_repeat1] = STATE(6),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(216),
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
    [sym_heading_1_marker] = ACTIONS(218),
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
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [9] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(11),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(11),
    [sym__text] = STATE(49),
    [aux_sym_heading_2_repeat1] = STATE(11),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(220),
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
    [sym_heading_1_marker] = ACTIONS(222),
    [sym_heading_2_marker] = ACTIONS(222),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [10] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
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
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(10),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(10),
    [sym__text] = STATE(49),
    [aux_sym_heading_2_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym__comment_marker_token1] = ACTIONS(226),
    [aux_sym__comment_marker_token2] = ACTIONS(226),
    [aux_sym_string_token1] = ACTIONS(229),
    [aux_sym_string_token2] = ACTIONS(229),
    [sym_number] = ACTIONS(232),
    [sym_ticket] = ACTIONS(232),
    [aux_sym_date_token1] = ACTIONS(235),
    [aux_sym_date_token2] = ACTIONS(235),
    [aux_sym_date_token3] = ACTIONS(235),
    [aux_sym_time_token1] = ACTIONS(238),
    [aux_sym_time_token2] = ACTIONS(238),
    [sym_tag_positive] = ACTIONS(232),
    [sym_tag_negative] = ACTIONS(232),
    [sym_tag_hash] = ACTIONS(232),
    [sym_tag_context] = ACTIONS(232),
    [sym_tag_danger] = ACTIONS(232),
    [sym_tag_identifier] = ACTIONS(232),
    [sym_heading_1_marker] = ACTIONS(241),
    [sym_heading_2_marker] = ACTIONS(241),
    [sym_heading_3_marker] = ACTIONS(243),
    [sym_heading_4_marker] = ACTIONS(246),
    [sym_heading_5_marker] = ACTIONS(249),
    [sym_heading_6_marker] = ACTIONS(252),
    [sym_section_marker] = ACTIONS(255),
    [anon_sym_ATcode] = ACTIONS(258),
    [sym_external_link] = ACTIONS(232),
    [sym_label] = ACTIONS(261),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(264),
    [sym_task_marker_default] = ACTIONS(267),
    [sym_task_marker_active] = ACTIONS(270),
    [sym_task_marker_done] = ACTIONS(273),
    [sym_task_marker_cancelled] = ACTIONS(276),
    [sym_list_item_marker] = ACTIONS(279),
    [sym_bold_start] = ACTIONS(282),
    [sym_italic_start] = ACTIONS(285),
    [sym_underline_start] = ACTIONS(288),
    [sym_inline_code_start] = ACTIONS(291),
  },
  [11] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
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
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(10),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(10),
    [sym__text] = STATE(49),
    [aux_sym_heading_2_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(294),
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
    [sym_heading_1_marker] = ACTIONS(296),
    [sym_heading_2_marker] = ACTIONS(296),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [12] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
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
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(14),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(14),
    [sym__text] = STATE(49),
    [aux_sym_heading_3_repeat1] = STATE(14),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(298),
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
    [sym_heading_1_marker] = ACTIONS(300),
    [sym_heading_2_marker] = ACTIONS(300),
    [sym_heading_3_marker] = ACTIONS(300),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [13] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(13),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(13),
    [sym__text] = STATE(49),
    [aux_sym_heading_3_repeat1] = STATE(13),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(302),
    [aux_sym__comment_marker_token1] = ACTIONS(304),
    [aux_sym__comment_marker_token2] = ACTIONS(304),
    [aux_sym_string_token1] = ACTIONS(307),
    [aux_sym_string_token2] = ACTIONS(307),
    [sym_number] = ACTIONS(310),
    [sym_ticket] = ACTIONS(310),
    [aux_sym_date_token1] = ACTIONS(313),
    [aux_sym_date_token2] = ACTIONS(313),
    [aux_sym_date_token3] = ACTIONS(313),
    [aux_sym_time_token1] = ACTIONS(316),
    [aux_sym_time_token2] = ACTIONS(316),
    [sym_tag_positive] = ACTIONS(310),
    [sym_tag_negative] = ACTIONS(310),
    [sym_tag_hash] = ACTIONS(310),
    [sym_tag_context] = ACTIONS(310),
    [sym_tag_danger] = ACTIONS(310),
    [sym_tag_identifier] = ACTIONS(310),
    [sym_heading_1_marker] = ACTIONS(319),
    [sym_heading_2_marker] = ACTIONS(319),
    [sym_heading_3_marker] = ACTIONS(319),
    [sym_heading_4_marker] = ACTIONS(321),
    [sym_heading_5_marker] = ACTIONS(324),
    [sym_heading_6_marker] = ACTIONS(327),
    [sym_section_marker] = ACTIONS(330),
    [anon_sym_ATcode] = ACTIONS(333),
    [sym_external_link] = ACTIONS(310),
    [sym_label] = ACTIONS(336),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(339),
    [sym_task_marker_default] = ACTIONS(342),
    [sym_task_marker_active] = ACTIONS(345),
    [sym_task_marker_done] = ACTIONS(348),
    [sym_task_marker_cancelled] = ACTIONS(351),
    [sym_list_item_marker] = ACTIONS(354),
    [sym_bold_start] = ACTIONS(357),
    [sym_italic_start] = ACTIONS(360),
    [sym_underline_start] = ACTIONS(363),
    [sym_inline_code_start] = ACTIONS(366),
  },
  [14] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
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
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(13),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(13),
    [sym__text] = STATE(49),
    [aux_sym_heading_3_repeat1] = STATE(13),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(369),
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
    [sym_heading_1_marker] = ACTIONS(371),
    [sym_heading_2_marker] = ACTIONS(371),
    [sym_heading_3_marker] = ACTIONS(371),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [15] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
    [sym_heading_5] = STATE(15),
    [sym_heading_6] = STATE(15),
    [sym_section] = STATE(15),
    [sym__task] = STATE(15),
    [sym_task_default] = STATE(15),
    [sym_task_active] = STATE(15),
    [sym_task_done] = STATE(15),
    [sym_task_cancelled] = STATE(15),
    [sym_list_item] = STATE(15),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(15),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(15),
    [sym__text] = STATE(49),
    [aux_sym_heading_4_repeat1] = STATE(15),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(373),
    [aux_sym__comment_marker_token1] = ACTIONS(375),
    [aux_sym__comment_marker_token2] = ACTIONS(375),
    [aux_sym_string_token1] = ACTIONS(378),
    [aux_sym_string_token2] = ACTIONS(378),
    [sym_number] = ACTIONS(381),
    [sym_ticket] = ACTIONS(381),
    [aux_sym_date_token1] = ACTIONS(384),
    [aux_sym_date_token2] = ACTIONS(384),
    [aux_sym_date_token3] = ACTIONS(384),
    [aux_sym_time_token1] = ACTIONS(387),
    [aux_sym_time_token2] = ACTIONS(387),
    [sym_tag_positive] = ACTIONS(381),
    [sym_tag_negative] = ACTIONS(381),
    [sym_tag_hash] = ACTIONS(381),
    [sym_tag_context] = ACTIONS(381),
    [sym_tag_danger] = ACTIONS(381),
    [sym_tag_identifier] = ACTIONS(381),
    [sym_heading_1_marker] = ACTIONS(390),
    [sym_heading_2_marker] = ACTIONS(390),
    [sym_heading_3_marker] = ACTIONS(390),
    [sym_heading_4_marker] = ACTIONS(390),
    [sym_heading_5_marker] = ACTIONS(392),
    [sym_heading_6_marker] = ACTIONS(395),
    [sym_section_marker] = ACTIONS(398),
    [anon_sym_ATcode] = ACTIONS(401),
    [sym_external_link] = ACTIONS(381),
    [sym_label] = ACTIONS(404),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(407),
    [sym_task_marker_default] = ACTIONS(410),
    [sym_task_marker_active] = ACTIONS(413),
    [sym_task_marker_done] = ACTIONS(416),
    [sym_task_marker_cancelled] = ACTIONS(419),
    [sym_list_item_marker] = ACTIONS(422),
    [sym_bold_start] = ACTIONS(425),
    [sym_italic_start] = ACTIONS(428),
    [sym_underline_start] = ACTIONS(431),
    [sym_inline_code_start] = ACTIONS(434),
  },
  [16] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
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
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(17),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(17),
    [sym__text] = STATE(49),
    [aux_sym_heading_4_repeat1] = STATE(17),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(437),
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
    [sym_heading_1_marker] = ACTIONS(439),
    [sym_heading_2_marker] = ACTIONS(439),
    [sym_heading_3_marker] = ACTIONS(439),
    [sym_heading_4_marker] = ACTIONS(439),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [17] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
    [sym_heading_5] = STATE(15),
    [sym_heading_6] = STATE(15),
    [sym_section] = STATE(15),
    [sym__task] = STATE(15),
    [sym_task_default] = STATE(15),
    [sym_task_active] = STATE(15),
    [sym_task_done] = STATE(15),
    [sym_task_cancelled] = STATE(15),
    [sym_list_item] = STATE(15),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(15),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(15),
    [sym__text] = STATE(49),
    [aux_sym_heading_4_repeat1] = STATE(15),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(441),
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
    [sym_heading_1_marker] = ACTIONS(443),
    [sym_heading_2_marker] = ACTIONS(443),
    [sym_heading_3_marker] = ACTIONS(443),
    [sym_heading_4_marker] = ACTIONS(443),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [18] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
    [sym_heading_6] = STATE(18),
    [sym_section] = STATE(18),
    [sym__task] = STATE(18),
    [sym_task_default] = STATE(18),
    [sym_task_active] = STATE(18),
    [sym_task_done] = STATE(18),
    [sym_task_cancelled] = STATE(18),
    [sym_list_item] = STATE(18),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(18),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(18),
    [sym__text] = STATE(49),
    [aux_sym_heading_5_repeat1] = STATE(18),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(445),
    [aux_sym__comment_marker_token1] = ACTIONS(447),
    [aux_sym__comment_marker_token2] = ACTIONS(447),
    [aux_sym_string_token1] = ACTIONS(450),
    [aux_sym_string_token2] = ACTIONS(450),
    [sym_number] = ACTIONS(453),
    [sym_ticket] = ACTIONS(453),
    [aux_sym_date_token1] = ACTIONS(456),
    [aux_sym_date_token2] = ACTIONS(456),
    [aux_sym_date_token3] = ACTIONS(456),
    [aux_sym_time_token1] = ACTIONS(459),
    [aux_sym_time_token2] = ACTIONS(459),
    [sym_tag_positive] = ACTIONS(453),
    [sym_tag_negative] = ACTIONS(453),
    [sym_tag_hash] = ACTIONS(453),
    [sym_tag_context] = ACTIONS(453),
    [sym_tag_danger] = ACTIONS(453),
    [sym_tag_identifier] = ACTIONS(453),
    [sym_heading_1_marker] = ACTIONS(462),
    [sym_heading_2_marker] = ACTIONS(462),
    [sym_heading_3_marker] = ACTIONS(462),
    [sym_heading_4_marker] = ACTIONS(462),
    [sym_heading_5_marker] = ACTIONS(462),
    [sym_heading_6_marker] = ACTIONS(464),
    [sym_section_marker] = ACTIONS(467),
    [anon_sym_ATcode] = ACTIONS(470),
    [sym_external_link] = ACTIONS(453),
    [sym_label] = ACTIONS(473),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(476),
    [sym_task_marker_default] = ACTIONS(479),
    [sym_task_marker_active] = ACTIONS(482),
    [sym_task_marker_done] = ACTIONS(485),
    [sym_task_marker_cancelled] = ACTIONS(488),
    [sym_list_item_marker] = ACTIONS(491),
    [sym_bold_start] = ACTIONS(494),
    [sym_italic_start] = ACTIONS(497),
    [sym_underline_start] = ACTIONS(500),
    [sym_inline_code_start] = ACTIONS(503),
  },
  [19] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
    [sym_heading_6] = STATE(18),
    [sym_section] = STATE(18),
    [sym__task] = STATE(18),
    [sym_task_default] = STATE(18),
    [sym_task_active] = STATE(18),
    [sym_task_done] = STATE(18),
    [sym_task_cancelled] = STATE(18),
    [sym_list_item] = STATE(18),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(18),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(18),
    [sym__text] = STATE(49),
    [aux_sym_heading_5_repeat1] = STATE(18),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(506),
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
    [sym_heading_1_marker] = ACTIONS(508),
    [sym_heading_2_marker] = ACTIONS(508),
    [sym_heading_3_marker] = ACTIONS(508),
    [sym_heading_4_marker] = ACTIONS(508),
    [sym_heading_5_marker] = ACTIONS(508),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [20] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
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
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(19),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(19),
    [sym__text] = STATE(49),
    [aux_sym_heading_5_repeat1] = STATE(19),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(510),
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
    [sym_heading_1_marker] = ACTIONS(512),
    [sym_heading_2_marker] = ACTIONS(512),
    [sym_heading_3_marker] = ACTIONS(512),
    [sym_heading_4_marker] = ACTIONS(512),
    [sym_heading_5_marker] = ACTIONS(512),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [21] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
    [sym_section] = STATE(22),
    [sym__task] = STATE(22),
    [sym_task_default] = STATE(22),
    [sym_task_active] = STATE(22),
    [sym_task_done] = STATE(22),
    [sym_task_cancelled] = STATE(22),
    [sym_list_item] = STATE(22),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(22),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(22),
    [sym__text] = STATE(49),
    [aux_sym_heading_6_repeat1] = STATE(22),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(514),
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
    [sym_heading_1_marker] = ACTIONS(516),
    [sym_heading_2_marker] = ACTIONS(516),
    [sym_heading_3_marker] = ACTIONS(516),
    [sym_heading_4_marker] = ACTIONS(516),
    [sym_heading_5_marker] = ACTIONS(516),
    [sym_heading_6_marker] = ACTIONS(516),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [22] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(49),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(518),
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
    [sym_heading_1_marker] = ACTIONS(520),
    [sym_heading_2_marker] = ACTIONS(520),
    [sym_heading_3_marker] = ACTIONS(520),
    [sym_heading_4_marker] = ACTIONS(520),
    [sym_heading_5_marker] = ACTIONS(520),
    [sym_heading_6_marker] = ACTIONS(520),
    [sym_section_marker] = ACTIONS(33),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [23] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(49),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(522),
    [aux_sym__comment_marker_token1] = ACTIONS(524),
    [aux_sym__comment_marker_token2] = ACTIONS(524),
    [aux_sym_string_token1] = ACTIONS(527),
    [aux_sym_string_token2] = ACTIONS(527),
    [sym_number] = ACTIONS(530),
    [sym_ticket] = ACTIONS(530),
    [aux_sym_date_token1] = ACTIONS(533),
    [aux_sym_date_token2] = ACTIONS(533),
    [aux_sym_date_token3] = ACTIONS(533),
    [aux_sym_time_token1] = ACTIONS(536),
    [aux_sym_time_token2] = ACTIONS(536),
    [sym_tag_positive] = ACTIONS(530),
    [sym_tag_negative] = ACTIONS(530),
    [sym_tag_hash] = ACTIONS(530),
    [sym_tag_context] = ACTIONS(530),
    [sym_tag_danger] = ACTIONS(530),
    [sym_tag_identifier] = ACTIONS(530),
    [sym_heading_1_marker] = ACTIONS(539),
    [sym_heading_2_marker] = ACTIONS(539),
    [sym_heading_3_marker] = ACTIONS(539),
    [sym_heading_4_marker] = ACTIONS(539),
    [sym_heading_5_marker] = ACTIONS(539),
    [sym_heading_6_marker] = ACTIONS(539),
    [sym_section_marker] = ACTIONS(541),
    [anon_sym_ATcode] = ACTIONS(544),
    [sym_external_link] = ACTIONS(530),
    [sym_label] = ACTIONS(547),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(550),
    [sym_task_marker_default] = ACTIONS(553),
    [sym_task_marker_active] = ACTIONS(556),
    [sym_task_marker_done] = ACTIONS(559),
    [sym_task_marker_cancelled] = ACTIONS(562),
    [sym_list_item_marker] = ACTIONS(565),
    [sym_bold_start] = ACTIONS(568),
    [sym_italic_start] = ACTIONS(571),
    [sym_underline_start] = ACTIONS(574),
    [sym_inline_code_start] = ACTIONS(577),
  },
  [24] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
    [sym__task] = STATE(26),
    [sym_task_default] = STATE(26),
    [sym_task_active] = STATE(26),
    [sym_task_done] = STATE(26),
    [sym_task_cancelled] = STATE(26),
    [sym_list_item] = STATE(26),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(26),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(26),
    [sym__text] = STATE(49),
    [aux_sym_section_repeat1] = STATE(26),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(580),
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
    [sym_heading_1_marker] = ACTIONS(582),
    [sym_heading_2_marker] = ACTIONS(582),
    [sym_heading_3_marker] = ACTIONS(582),
    [sym_heading_4_marker] = ACTIONS(582),
    [sym_heading_5_marker] = ACTIONS(582),
    [sym_heading_6_marker] = ACTIONS(582),
    [sym_section_marker] = ACTIONS(582),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [25] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(49),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(584),
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
    [sym_heading_1_marker] = ACTIONS(586),
    [sym_heading_2_marker] = ACTIONS(586),
    [sym_heading_3_marker] = ACTIONS(586),
    [sym_heading_4_marker] = ACTIONS(586),
    [sym_heading_5_marker] = ACTIONS(586),
    [sym_heading_6_marker] = ACTIONS(586),
    [sym_section_marker] = ACTIONS(586),
    [anon_sym_ATcode] = ACTIONS(35),
    [sym_external_link] = ACTIONS(15),
    [sym_label] = ACTIONS(37),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(41),
    [sym_task_marker_default] = ACTIONS(43),
    [sym_task_marker_active] = ACTIONS(45),
    [sym_task_marker_done] = ACTIONS(47),
    [sym_task_marker_cancelled] = ACTIONS(49),
    [sym_list_item_marker] = ACTIONS(51),
    [sym_bold_start] = ACTIONS(53),
    [sym_italic_start] = ACTIONS(55),
    [sym_underline_start] = ACTIONS(57),
    [sym_inline_code_start] = ACTIONS(59),
  },
  [26] = {
    [sym__comment_marker] = STATE(195),
    [sym_comment] = STATE(49),
    [sym_bold] = STATE(119),
    [sym_italic] = STATE(119),
    [sym_underline] = STATE(119),
    [sym__emphasis] = STATE(49),
    [sym_string] = STATE(49),
    [sym_date] = STATE(113),
    [sym_daterange] = STATE(49),
    [sym_time] = STATE(120),
    [sym_timerange] = STATE(49),
    [sym_datetime] = STATE(122),
    [sym_datetimerange] = STATE(49),
    [sym__task] = STATE(26),
    [sym_task_default] = STATE(26),
    [sym_task_active] = STATE(26),
    [sym_task_done] = STATE(26),
    [sym_task_cancelled] = STATE(26),
    [sym_list_item] = STATE(26),
    [sym_inline_code] = STATE(49),
    [sym_code_block_start] = STATE(136),
    [sym_code_block] = STATE(26),
    [sym__inline] = STATE(49),
    [sym_text_line] = STATE(26),
    [sym__text] = STATE(49),
    [aux_sym_section_repeat1] = STATE(26),
    [aux_sym_text_line_repeat1] = STATE(49),
    [aux_sym__text_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(588),
    [aux_sym__comment_marker_token1] = ACTIONS(590),
    [aux_sym__comment_marker_token2] = ACTIONS(590),
    [aux_sym_string_token1] = ACTIONS(593),
    [aux_sym_string_token2] = ACTIONS(593),
    [sym_number] = ACTIONS(596),
    [sym_ticket] = ACTIONS(596),
    [aux_sym_date_token1] = ACTIONS(599),
    [aux_sym_date_token2] = ACTIONS(599),
    [aux_sym_date_token3] = ACTIONS(599),
    [aux_sym_time_token1] = ACTIONS(602),
    [aux_sym_time_token2] = ACTIONS(602),
    [sym_tag_positive] = ACTIONS(596),
    [sym_tag_negative] = ACTIONS(596),
    [sym_tag_hash] = ACTIONS(596),
    [sym_tag_context] = ACTIONS(596),
    [sym_tag_danger] = ACTIONS(596),
    [sym_tag_identifier] = ACTIONS(596),
    [sym_heading_1_marker] = ACTIONS(605),
    [sym_heading_2_marker] = ACTIONS(605),
    [sym_heading_3_marker] = ACTIONS(605),
    [sym_heading_4_marker] = ACTIONS(605),
    [sym_heading_5_marker] = ACTIONS(605),
    [sym_heading_6_marker] = ACTIONS(605),
    [sym_section_marker] = ACTIONS(605),
    [anon_sym_ATcode] = ACTIONS(607),
    [sym_external_link] = ACTIONS(596),
    [sym_label] = ACTIONS(610),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(613),
    [sym_task_marker_default] = ACTIONS(616),
    [sym_task_marker_active] = ACTIONS(619),
    [sym_task_marker_done] = ACTIONS(622),
    [sym_task_marker_cancelled] = ACTIONS(625),
    [sym_list_item_marker] = ACTIONS(628),
    [sym_bold_start] = ACTIONS(631),
    [sym_italic_start] = ACTIONS(634),
    [sym_underline_start] = ACTIONS(637),
    [sym_inline_code_start] = ACTIONS(640),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(658), 1,
      anon_sym_Session_COLON,
    ACTIONS(661), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(664), 1,
      sym_label,
    ACTIONS(667), 1,
      aux_sym__text_token1,
    ACTIONS(672), 1,
      sym_task_marker_default,
    ACTIONS(675), 1,
      sym_task_marker_active,
    ACTIONS(678), 1,
      sym_task_marker_done,
    ACTIONS(681), 1,
      sym_task_marker_cancelled,
    ACTIONS(684), 1,
      sym_list_item_marker,
    ACTIONS(687), 1,
      sym_bold_start,
    ACTIONS(690), 1,
      sym_italic_start,
    ACTIONS(693), 1,
      sym_underline_start,
    ACTIONS(696), 1,
      sym_inline_code_start,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
      sym__comment_marker,
    ACTIONS(643), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(646), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(655), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(670), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(652), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(649), 9,
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
    STATE(52), 10,
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
  [119] = 28,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(701), 1,
      anon_sym_Session_COLON,
    ACTIONS(703), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(705), 1,
      sym_label,
    ACTIONS(709), 1,
      sym_task_marker_default,
    ACTIONS(711), 1,
      sym_task_marker_active,
    ACTIONS(713), 1,
      sym_task_marker_done,
    ACTIONS(715), 1,
      sym_task_marker_cancelled,
    ACTIONS(717), 1,
      sym_list_item_marker,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    ACTIONS(707), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(699), 9,
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
    STATE(52), 10,
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
  [238] = 28,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(701), 1,
      anon_sym_Session_COLON,
    ACTIONS(703), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(705), 1,
      sym_label,
    ACTIONS(709), 1,
      sym_task_marker_default,
    ACTIONS(711), 1,
      sym_task_marker_active,
    ACTIONS(713), 1,
      sym_task_marker_done,
    ACTIONS(715), 1,
      sym_task_marker_cancelled,
    ACTIONS(717), 1,
      sym_list_item_marker,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    ACTIONS(719), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(699), 9,
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
    STATE(52), 10,
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
  [357] = 27,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(701), 1,
      anon_sym_Session_COLON,
    ACTIONS(703), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(705), 1,
      sym_label,
    ACTIONS(709), 1,
      sym_task_marker_default,
    ACTIONS(711), 1,
      sym_task_marker_active,
    ACTIONS(713), 1,
      sym_task_marker_done,
    ACTIONS(715), 1,
      sym_task_marker_cancelled,
    ACTIONS(717), 1,
      sym_list_item_marker,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(699), 9,
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
    STATE(52), 10,
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
  [472] = 27,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(701), 1,
      anon_sym_Session_COLON,
    ACTIONS(703), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(705), 1,
      sym_label,
    ACTIONS(709), 1,
      sym_task_marker_default,
    ACTIONS(711), 1,
      sym_task_marker_active,
    ACTIONS(713), 1,
      sym_task_marker_done,
    ACTIONS(715), 1,
      sym_task_marker_cancelled,
    ACTIONS(717), 1,
      sym_list_item_marker,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(699), 9,
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
    STATE(52), 10,
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
  [587] = 22,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(723), 1,
      sym_label,
    ACTIONS(727), 1,
      sym_list_item_marker,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    ACTIONS(725), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(721), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(54), 10,
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
  [681] = 22,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(744), 1,
      sym_label,
    ACTIONS(747), 1,
      aux_sym__text_token1,
    ACTIONS(752), 1,
      sym_list_item_marker,
    ACTIONS(755), 1,
      sym_bold_start,
    ACTIONS(758), 1,
      sym_italic_start,
    ACTIONS(761), 1,
      sym_underline_start,
    ACTIONS(764), 1,
      sym_inline_code_start,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
      sym__comment_marker,
    ACTIONS(729), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(732), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(741), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(750), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(738), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(735), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(54), 10,
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
  [775] = 22,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(723), 1,
      sym_label,
    ACTIONS(727), 1,
      sym_list_item_marker,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    ACTIONS(767), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(721), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(54), 10,
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
  [869] = 22,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(723), 1,
      sym_label,
    ACTIONS(727), 1,
      sym_list_item_marker,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    ACTIONS(769), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(721), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(54), 10,
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
  [963] = 21,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(723), 1,
      sym_label,
    ACTIONS(727), 1,
      sym_list_item_marker,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(721), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(54), 10,
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
  [1053] = 21,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(723), 1,
      sym_label,
    ACTIONS(727), 1,
      sym_list_item_marker,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(721), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(54), 10,
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
  [1143] = 21,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(723), 1,
      sym_label,
    ACTIONS(727), 1,
      sym_list_item_marker,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(721), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(54), 10,
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
  [1233] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(773), 1,
      sym_label,
    STATE(68), 1,
      sym_text_line,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(771), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(51), 10,
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
  [1318] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(777), 1,
      sym_label,
    STATE(106), 1,
      sym_text_line,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(775), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(57), 10,
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
  [1403] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(773), 1,
      sym_label,
    STATE(69), 1,
      sym_text_line,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(771), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(51), 10,
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
  [1488] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(781), 1,
      sym_label,
    STATE(88), 1,
      sym_text_line,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(779), 9,
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
  [1573] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(781), 1,
      sym_label,
    STATE(90), 1,
      sym_text_line,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(779), 9,
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
  [1658] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(773), 1,
      sym_label,
    STATE(65), 1,
      sym_text_line,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(771), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(51), 10,
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
  [1743] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(781), 1,
      sym_label,
    STATE(91), 1,
      sym_text_line,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(779), 9,
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
  [1828] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(785), 1,
      aux_sym_text_line_token1,
    ACTIONS(787), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [1910] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(789), 1,
      aux_sym_text_line_token1,
    ACTIONS(791), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [1992] = 19,
    ACTIONS(808), 1,
      aux_sym_text_line_token1,
    ACTIONS(810), 1,
      aux_sym__text_token1,
    ACTIONS(813), 1,
      sym__eof,
    ACTIONS(815), 1,
      sym_bold_start,
    ACTIONS(818), 1,
      sym_italic_start,
    ACTIONS(821), 1,
      sym_underline_start,
    ACTIONS(824), 1,
      sym_inline_code_start,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
      sym__comment_marker,
    ACTIONS(793), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(796), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(805), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(802), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(799), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [2074] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(827), 1,
      aux_sym_text_line_token1,
    ACTIONS(829), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [2156] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(831), 1,
      aux_sym_text_line_token1,
    ACTIONS(833), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [2238] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(835), 1,
      aux_sym_text_line_token1,
    ACTIONS(837), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [2320] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(839), 1,
      aux_sym_text_line_token1,
    ACTIONS(841), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [2402] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(843), 1,
      aux_sym_text_line_token1,
    ACTIONS(845), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [2484] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(847), 1,
      aux_sym_text_line_token1,
    ACTIONS(849), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [2566] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(851), 1,
      aux_sym_text_line_token1,
    ACTIONS(853), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [2648] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(855), 1,
      aux_sym_text_line_token1,
    ACTIONS(857), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [2730] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(859), 1,
      aux_sym_text_line_token1,
    ACTIONS(861), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [2812] = 19,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(863), 1,
      aux_sym_text_line_token1,
    ACTIONS(865), 1,
      sym__eof,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(783), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
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
  [2894] = 18,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(867), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(55), 10,
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
  [2973] = 18,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(869), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(47), 10,
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
  [3052] = 18,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(871), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(50), 10,
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
  [3131] = 18,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(873), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(53), 10,
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
  [3210] = 18,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(875), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(56), 10,
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
  [3289] = 18,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(41), 1,
      aux_sym__text_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    STATE(113), 1,
      sym_date,
    STATE(120), 1,
      sym_time,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      aux_sym__text_repeat1,
    STATE(195), 1,
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
    STATE(119), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(877), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(58), 10,
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
  [3368] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(883), 1,
      sym__indent,
    STATE(76), 1,
      sym__task_children,
    ACTIONS(879), 10,
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
    ACTIONS(881), 28,
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
  [3420] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(883), 1,
      sym__indent,
    STATE(79), 1,
      sym__task_children,
    ACTIONS(885), 10,
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
    ACTIONS(887), 28,
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
  [3472] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(883), 1,
      sym__indent,
    STATE(78), 1,
      sym__task_children,
    ACTIONS(889), 10,
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
    ACTIONS(891), 28,
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
  [3524] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(883), 1,
      sym__indent,
    STATE(77), 1,
      sym__task_children,
    ACTIONS(893), 10,
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
    ACTIONS(895), 28,
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
  [3576] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(901), 1,
      sym__indent,
    STATE(81), 1,
      sym__list_item_children,
    ACTIONS(897), 10,
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
    ACTIONS(899), 28,
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
  [3628] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(903), 11,
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
  [3675] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(907), 11,
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
    ACTIONS(909), 28,
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
  [3722] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(911), 11,
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
    ACTIONS(913), 28,
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
  [3769] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(915), 10,
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
    ACTIONS(917), 28,
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
  [3815] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
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
  [3861] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(907), 10,
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
    ACTIONS(909), 28,
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
  [3907] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
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
  [3953] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
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
  [3999] = 3,
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
  [4045] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(935), 10,
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
  [4091] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
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
  [4137] = 3,
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
  [4183] = 3,
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
  [4229] = 3,
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
  [4275] = 3,
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
  [4321] = 3,
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
  [4367] = 3,
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
  [4413] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(963), 1,
      sym__indent,
    STATE(99), 1,
      sym__task_children,
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
    ACTIONS(891), 22,
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
  [4460] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(965), 1,
      sym__indent,
    STATE(97), 1,
      sym__list_item_children,
    ACTIONS(897), 11,
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
    ACTIONS(899), 22,
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
  [4507] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(963), 1,
      sym__indent,
    STATE(98), 1,
      sym__task_children,
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
    ACTIONS(887), 22,
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
  [4554] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(963), 1,
      sym__indent,
    STATE(100), 1,
      sym__task_children,
    ACTIONS(893), 11,
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
    ACTIONS(895), 22,
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
  [4601] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(963), 1,
      sym__indent,
    STATE(101), 1,
      sym__task_children,
    ACTIONS(879), 11,
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
    ACTIONS(881), 22,
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
  [4648] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(903), 12,
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
  [4690] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(907), 12,
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
    ACTIONS(909), 22,
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
  [4732] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(911), 12,
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
    ACTIONS(913), 22,
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
  [4774] = 3,
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
  [4815] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(969), 11,
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
    ACTIONS(967), 22,
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
  [4856] = 3,
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
  [4897] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(935), 11,
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
  [4938] = 3,
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
  [4979] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
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
  [5020] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
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
  [5061] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(973), 11,
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
    ACTIONS(971), 22,
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
  [5102] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(915), 11,
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
    ACTIONS(917), 22,
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
  [5143] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
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
  [5184] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(907), 11,
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
    ACTIONS(909), 22,
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
  [5225] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(975), 1,
      sym__indent,
    STATE(109), 1,
      sym__list_item_children,
    ACTIONS(897), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(899), 20,
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
  [5266] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(903), 8,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(905), 20,
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
  [5302] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(907), 8,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(909), 20,
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
  [5338] = 3,
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
  [5373] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(955), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(957), 20,
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
  [5408] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(907), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(909), 20,
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
  [5443] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(903), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(905), 20,
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
  [5478] = 5,
    ACTIONS(979), 1,
      aux_sym_daterange_token1,
    STATE(121), 1,
      sym_time,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(981), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(977), 18,
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
  [5516] = 2,
    ACTIONS(985), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(983), 21,
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
  [5547] = 4,
    ACTIONS(989), 1,
      aux_sym__text_token1,
    STATE(115), 1,
      aux_sym__text_repeat1,
    ACTIONS(992), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(987), 19,
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
  [5582] = 2,
    ACTIONS(996), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(994), 21,
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
  [5613] = 2,
    ACTIONS(1000), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(998), 21,
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
  [5644] = 2,
    ACTIONS(1004), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1002), 21,
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
  [5675] = 3,
    ACTIONS(1008), 1,
      aux_sym__emphasis_token1,
    ACTIONS(1010), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1006), 20,
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
  [5708] = 3,
    ACTIONS(1012), 1,
      aux_sym_daterange_token1,
    ACTIONS(981), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(977), 20,
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
  [5741] = 2,
    ACTIONS(1016), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1014), 21,
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
  [5772] = 3,
    ACTIONS(1018), 1,
      aux_sym_daterange_token1,
    ACTIONS(981), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(977), 20,
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
  [5805] = 2,
    ACTIONS(1022), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1020), 21,
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
  [5836] = 4,
    ACTIONS(1026), 1,
      aux_sym__text_token1,
    STATE(115), 1,
      aux_sym__text_repeat1,
    ACTIONS(1028), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1024), 19,
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
  [5871] = 2,
    ACTIONS(1032), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1030), 20,
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
  [5901] = 2,
    ACTIONS(1016), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1014), 20,
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
  [5931] = 2,
    ACTIONS(1036), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1034), 20,
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
  [5961] = 2,
    ACTIONS(1040), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1038), 20,
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
  [5991] = 2,
    ACTIONS(1044), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1042), 20,
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
  [6021] = 2,
    ACTIONS(1048), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1046), 20,
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
  [6051] = 2,
    ACTIONS(1052), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1050), 20,
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
  [6081] = 2,
    ACTIONS(1056), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1054), 20,
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
  [6111] = 2,
    ACTIONS(996), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(994), 20,
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
  [6141] = 2,
    ACTIONS(1000), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(998), 20,
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
  [6171] = 7,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1058), 1,
      aux_sym_date_token1,
    ACTIONS(1062), 1,
      aux_sym_time_token1,
    ACTIONS(1064), 1,
      aux_sym_time_token2,
    STATE(155), 1,
      sym_date,
    ACTIONS(1060), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(172), 2,
      sym_time,
      sym_datetime,
  [6195] = 7,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1066), 1,
      sym_code_block_end,
    ACTIONS(1068), 1,
      aux_sym__text_token1,
    STATE(149), 1,
      aux_sym__text_repeat1,
    STATE(210), 1,
      sym_code_block_content,
    STATE(140), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(144), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [6219] = 7,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1058), 1,
      aux_sym_date_token1,
    ACTIONS(1070), 1,
      aux_sym_time_token1,
    ACTIONS(1072), 1,
      aux_sym_time_token2,
    STATE(158), 1,
      sym_date,
    ACTIONS(1060), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(131), 2,
      sym_time,
      sym_datetime,
  [6243] = 6,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1074), 1,
      sym_code_block_end,
    ACTIONS(1076), 1,
      aux_sym__text_token1,
    STATE(149), 1,
      aux_sym__text_repeat1,
    STATE(138), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(144), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [6264] = 6,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1079), 1,
      aux_sym_date_token1,
    STATE(142), 1,
      sym_date,
    STATE(154), 1,
      sym_datetime,
    ACTIONS(1081), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(177), 2,
      sym_daterange,
      sym_datetimerange,
  [6285] = 6,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1068), 1,
      aux_sym__text_token1,
    ACTIONS(1083), 1,
      sym_code_block_end,
    STATE(149), 1,
      aux_sym__text_repeat1,
    STATE(138), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(144), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [6306] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1085), 1,
      aux_sym__text_token1,
    STATE(149), 1,
      aux_sym__text_repeat1,
    ACTIONS(1088), 2,
      sym__eof,
      sym__eol,
    STATE(141), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [6324] = 6,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1062), 1,
      aux_sym_time_token1,
    ACTIONS(1064), 1,
      aux_sym_time_token2,
    ACTIONS(1090), 1,
      aux_sym_daterange_token1,
    STATE(153), 1,
      sym_time,
    ACTIONS(1092), 2,
      sym__eof,
      sym__eol,
  [6344] = 6,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1058), 1,
      aux_sym_date_token1,
    STATE(155), 1,
      sym_date,
    STATE(156), 1,
      sym_datetime,
    STATE(165), 1,
      sym_datetimerange,
    ACTIONS(1060), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [6364] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1094), 1,
      aux_sym__text_token1,
    STATE(149), 1,
      aux_sym__text_repeat1,
    ACTIONS(1096), 2,
      sym__eof,
      sym__eol,
    STATE(141), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [6382] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(994), 1,
      aux_sym_time_token1,
    ACTIONS(996), 4,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
      aux_sym_time_token2,
  [6395] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1098), 1,
      aux_sym_document_meta_token2,
    ACTIONS(1100), 1,
      sym_document_meta_field_key,
    STATE(148), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [6409] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1079), 1,
      aux_sym_date_token1,
    STATE(171), 1,
      sym_date,
    ACTIONS(1081), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [6423] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1100), 1,
      sym_document_meta_field_key,
    ACTIONS(1102), 1,
      aux_sym_document_meta_token2,
    STATE(151), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [6437] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1104), 1,
      aux_sym__text_token1,
    STATE(152), 1,
      aux_sym__text_repeat1,
    ACTIONS(1028), 2,
      sym__eof,
      sym__eol,
  [6451] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1106), 1,
      aux_sym_date_token1,
    STATE(125), 1,
      sym_date,
    ACTIONS(1108), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [6465] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1110), 1,
      aux_sym_document_meta_token2,
    ACTIONS(1112), 1,
      sym_document_meta_field_key,
    STATE(151), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [6479] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1115), 1,
      aux_sym__text_token1,
    STATE(152), 1,
      aux_sym__text_repeat1,
    ACTIONS(992), 2,
      sym__eof,
      sym__eol,
  [6493] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1016), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [6502] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1118), 1,
      aux_sym_daterange_token1,
    ACTIONS(1092), 2,
      sym__eof,
      sym__eol,
  [6513] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1062), 1,
      aux_sym_time_token1,
    ACTIONS(1064), 1,
      aux_sym_time_token2,
    STATE(153), 1,
      sym_time,
  [6526] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1118), 1,
      aux_sym_daterange_token1,
    ACTIONS(1120), 2,
      sym__eof,
      sym__eol,
  [6537] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1000), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [6546] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1070), 1,
      aux_sym_time_token1,
    ACTIONS(1072), 1,
      aux_sym_time_token2,
    STATE(126), 1,
      sym_time,
  [6559] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1070), 1,
      aux_sym_time_token1,
    ACTIONS(1072), 1,
      aux_sym_time_token2,
    STATE(127), 1,
      sym_time,
  [6572] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1122), 2,
      sym__eof,
      sym__eol,
  [6580] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1124), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(170), 1,
      sym_text_to_eol,
  [6590] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1126), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [6598] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1128), 2,
      sym__eof,
      sym__eol,
  [6606] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1130), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(66), 1,
      sym_text_to_eol,
  [6616] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1120), 2,
      sym__eof,
      sym__eol,
  [6624] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1132), 2,
      sym__eof,
      sym__eol,
  [6632] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1134), 2,
      sym__eof,
      sym__eol,
  [6640] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1136), 2,
      sym__eof,
      sym__eol,
  [6648] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1138), 2,
      sym__eof,
      sym__eol,
  [6656] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1140), 2,
      sym__eof,
      sym__eol,
  [6664] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1032), 2,
      sym__eof,
      sym__eol,
  [6672] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1052), 2,
      sym__eof,
      sym__eol,
  [6680] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1142), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(205), 1,
      sym_document_meta_field_value,
  [6690] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(994), 1,
      aux_sym_time_token1,
    ACTIONS(996), 1,
      aux_sym_time_token2,
  [6700] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1124), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(192), 1,
      sym_text_to_eol,
  [6710] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1144), 2,
      sym__eof,
      sym__eol,
  [6718] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1092), 2,
      sym__eof,
      sym__eol,
  [6726] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1124), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(181), 1,
      sym_text_to_eol,
  [6736] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1130), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(67), 1,
      sym_text_to_eol,
  [6746] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1146), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [6754] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1148), 2,
      sym__eof,
      sym__eol,
  [6762] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1124), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(160), 1,
      sym_text_to_eol,
  [6772] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1124), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(166), 1,
      sym_text_to_eol,
  [6782] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1124), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(167), 1,
      sym_text_to_eol,
  [6792] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1124), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(168), 1,
      sym_text_to_eol,
  [6802] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1124), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(169), 1,
      sym_text_to_eol,
  [6812] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(911), 2,
      sym__eof,
      sym__eol,
  [6820] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1150), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(87), 1,
      sym_text_to_eol,
  [6830] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1150), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(89), 1,
      sym_text_to_eol,
  [6840] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1152), 2,
      aux_sym_document_meta_token2,
      sym_document_meta_field_key,
  [6848] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1154), 1,
      aux_sym_code_block_start_token1,
    ACTIONS(1156), 1,
      sym__eol,
  [6858] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1158), 2,
      sym__eof,
      sym__eol,
  [6866] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1160), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [6874] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1162), 1,
      anon_sym_,
  [6881] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1164), 1,
      aux_sym_document_meta_field_value_token1,
  [6888] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1166), 1,
      sym_inline_code_end,
  [6895] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1168), 1,
      sym_italic_end,
  [6902] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1170), 1,
      sym_bold_end,
  [6909] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1172), 1,
      anon_sym_,
  [6916] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1174), 1,
      ts_builtin_sym_end,
  [6923] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1176), 1,
      anon_sym_COLON,
  [6930] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1178), 1,
      sym_code_block_language,
  [6937] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1180), 1,
      anon_sym_,
  [6944] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1182), 1,
      sym_underline_end,
  [6951] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1184), 1,
      sym__eol,
  [6958] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1186), 1,
      sym_bold_content,
  [6965] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1188), 1,
      anon_sym_,
  [6972] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1190), 1,
      anon_sym_,
  [6979] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1192), 1,
      sym__eol,
  [6986] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1194), 1,
      sym_code_block_end,
  [6993] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1196), 1,
      sym_inline_code_content,
  [7000] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1198), 1,
      sym_underline_content,
  [7007] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1200), 1,
      sym_italic_content,
  [7014] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1202), 1,
      anon_sym_,
  [7021] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1204), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 119,
  [SMALL_STATE(29)] = 238,
  [SMALL_STATE(30)] = 357,
  [SMALL_STATE(31)] = 472,
  [SMALL_STATE(32)] = 587,
  [SMALL_STATE(33)] = 681,
  [SMALL_STATE(34)] = 775,
  [SMALL_STATE(35)] = 869,
  [SMALL_STATE(36)] = 963,
  [SMALL_STATE(37)] = 1053,
  [SMALL_STATE(38)] = 1143,
  [SMALL_STATE(39)] = 1233,
  [SMALL_STATE(40)] = 1318,
  [SMALL_STATE(41)] = 1403,
  [SMALL_STATE(42)] = 1488,
  [SMALL_STATE(43)] = 1573,
  [SMALL_STATE(44)] = 1658,
  [SMALL_STATE(45)] = 1743,
  [SMALL_STATE(46)] = 1828,
  [SMALL_STATE(47)] = 1910,
  [SMALL_STATE(48)] = 1992,
  [SMALL_STATE(49)] = 2074,
  [SMALL_STATE(50)] = 2156,
  [SMALL_STATE(51)] = 2238,
  [SMALL_STATE(52)] = 2320,
  [SMALL_STATE(53)] = 2402,
  [SMALL_STATE(54)] = 2484,
  [SMALL_STATE(55)] = 2566,
  [SMALL_STATE(56)] = 2648,
  [SMALL_STATE(57)] = 2730,
  [SMALL_STATE(58)] = 2812,
  [SMALL_STATE(59)] = 2894,
  [SMALL_STATE(60)] = 2973,
  [SMALL_STATE(61)] = 3052,
  [SMALL_STATE(62)] = 3131,
  [SMALL_STATE(63)] = 3210,
  [SMALL_STATE(64)] = 3289,
  [SMALL_STATE(65)] = 3368,
  [SMALL_STATE(66)] = 3420,
  [SMALL_STATE(67)] = 3472,
  [SMALL_STATE(68)] = 3524,
  [SMALL_STATE(69)] = 3576,
  [SMALL_STATE(70)] = 3628,
  [SMALL_STATE(71)] = 3675,
  [SMALL_STATE(72)] = 3722,
  [SMALL_STATE(73)] = 3769,
  [SMALL_STATE(74)] = 3815,
  [SMALL_STATE(75)] = 3861,
  [SMALL_STATE(76)] = 3907,
  [SMALL_STATE(77)] = 3953,
  [SMALL_STATE(78)] = 3999,
  [SMALL_STATE(79)] = 4045,
  [SMALL_STATE(80)] = 4091,
  [SMALL_STATE(81)] = 4137,
  [SMALL_STATE(82)] = 4183,
  [SMALL_STATE(83)] = 4229,
  [SMALL_STATE(84)] = 4275,
  [SMALL_STATE(85)] = 4321,
  [SMALL_STATE(86)] = 4367,
  [SMALL_STATE(87)] = 4413,
  [SMALL_STATE(88)] = 4460,
  [SMALL_STATE(89)] = 4507,
  [SMALL_STATE(90)] = 4554,
  [SMALL_STATE(91)] = 4601,
  [SMALL_STATE(92)] = 4648,
  [SMALL_STATE(93)] = 4690,
  [SMALL_STATE(94)] = 4732,
  [SMALL_STATE(95)] = 4774,
  [SMALL_STATE(96)] = 4815,
  [SMALL_STATE(97)] = 4856,
  [SMALL_STATE(98)] = 4897,
  [SMALL_STATE(99)] = 4938,
  [SMALL_STATE(100)] = 4979,
  [SMALL_STATE(101)] = 5020,
  [SMALL_STATE(102)] = 5061,
  [SMALL_STATE(103)] = 5102,
  [SMALL_STATE(104)] = 5143,
  [SMALL_STATE(105)] = 5184,
  [SMALL_STATE(106)] = 5225,
  [SMALL_STATE(107)] = 5266,
  [SMALL_STATE(108)] = 5302,
  [SMALL_STATE(109)] = 5338,
  [SMALL_STATE(110)] = 5373,
  [SMALL_STATE(111)] = 5408,
  [SMALL_STATE(112)] = 5443,
  [SMALL_STATE(113)] = 5478,
  [SMALL_STATE(114)] = 5516,
  [SMALL_STATE(115)] = 5547,
  [SMALL_STATE(116)] = 5582,
  [SMALL_STATE(117)] = 5613,
  [SMALL_STATE(118)] = 5644,
  [SMALL_STATE(119)] = 5675,
  [SMALL_STATE(120)] = 5708,
  [SMALL_STATE(121)] = 5741,
  [SMALL_STATE(122)] = 5772,
  [SMALL_STATE(123)] = 5805,
  [SMALL_STATE(124)] = 5836,
  [SMALL_STATE(125)] = 5871,
  [SMALL_STATE(126)] = 5901,
  [SMALL_STATE(127)] = 5931,
  [SMALL_STATE(128)] = 5961,
  [SMALL_STATE(129)] = 5991,
  [SMALL_STATE(130)] = 6021,
  [SMALL_STATE(131)] = 6051,
  [SMALL_STATE(132)] = 6081,
  [SMALL_STATE(133)] = 6111,
  [SMALL_STATE(134)] = 6141,
  [SMALL_STATE(135)] = 6171,
  [SMALL_STATE(136)] = 6195,
  [SMALL_STATE(137)] = 6219,
  [SMALL_STATE(138)] = 6243,
  [SMALL_STATE(139)] = 6264,
  [SMALL_STATE(140)] = 6285,
  [SMALL_STATE(141)] = 6306,
  [SMALL_STATE(142)] = 6324,
  [SMALL_STATE(143)] = 6344,
  [SMALL_STATE(144)] = 6364,
  [SMALL_STATE(145)] = 6382,
  [SMALL_STATE(146)] = 6395,
  [SMALL_STATE(147)] = 6409,
  [SMALL_STATE(148)] = 6423,
  [SMALL_STATE(149)] = 6437,
  [SMALL_STATE(150)] = 6451,
  [SMALL_STATE(151)] = 6465,
  [SMALL_STATE(152)] = 6479,
  [SMALL_STATE(153)] = 6493,
  [SMALL_STATE(154)] = 6502,
  [SMALL_STATE(155)] = 6513,
  [SMALL_STATE(156)] = 6526,
  [SMALL_STATE(157)] = 6537,
  [SMALL_STATE(158)] = 6546,
  [SMALL_STATE(159)] = 6559,
  [SMALL_STATE(160)] = 6572,
  [SMALL_STATE(161)] = 6580,
  [SMALL_STATE(162)] = 6590,
  [SMALL_STATE(163)] = 6598,
  [SMALL_STATE(164)] = 6606,
  [SMALL_STATE(165)] = 6616,
  [SMALL_STATE(166)] = 6624,
  [SMALL_STATE(167)] = 6632,
  [SMALL_STATE(168)] = 6640,
  [SMALL_STATE(169)] = 6648,
  [SMALL_STATE(170)] = 6656,
  [SMALL_STATE(171)] = 6664,
  [SMALL_STATE(172)] = 6672,
  [SMALL_STATE(173)] = 6680,
  [SMALL_STATE(174)] = 6690,
  [SMALL_STATE(175)] = 6700,
  [SMALL_STATE(176)] = 6710,
  [SMALL_STATE(177)] = 6718,
  [SMALL_STATE(178)] = 6726,
  [SMALL_STATE(179)] = 6736,
  [SMALL_STATE(180)] = 6746,
  [SMALL_STATE(181)] = 6754,
  [SMALL_STATE(182)] = 6762,
  [SMALL_STATE(183)] = 6772,
  [SMALL_STATE(184)] = 6782,
  [SMALL_STATE(185)] = 6792,
  [SMALL_STATE(186)] = 6802,
  [SMALL_STATE(187)] = 6812,
  [SMALL_STATE(188)] = 6820,
  [SMALL_STATE(189)] = 6830,
  [SMALL_STATE(190)] = 6840,
  [SMALL_STATE(191)] = 6848,
  [SMALL_STATE(192)] = 6858,
  [SMALL_STATE(193)] = 6866,
  [SMALL_STATE(194)] = 6874,
  [SMALL_STATE(195)] = 6881,
  [SMALL_STATE(196)] = 6888,
  [SMALL_STATE(197)] = 6895,
  [SMALL_STATE(198)] = 6902,
  [SMALL_STATE(199)] = 6909,
  [SMALL_STATE(200)] = 6916,
  [SMALL_STATE(201)] = 6923,
  [SMALL_STATE(202)] = 6930,
  [SMALL_STATE(203)] = 6937,
  [SMALL_STATE(204)] = 6944,
  [SMALL_STATE(205)] = 6951,
  [SMALL_STATE(206)] = 6958,
  [SMALL_STATE(207)] = 6965,
  [SMALL_STATE(208)] = 6972,
  [SMALL_STATE(209)] = 6979,
  [SMALL_STATE(210)] = 6986,
  [SMALL_STATE(211)] = 6993,
  [SMALL_STATE(212)] = 7000,
  [SMALL_STATE(213)] = 7007,
  [SMALL_STATE(214)] = 7014,
  [SMALL_STATE(215)] = 7021,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(195),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(132),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(208),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(207),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(214),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(199),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(194),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(203),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(178),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(191),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(164),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(206),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(213),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(212),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(211),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(195),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(132),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(49),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(116),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(117),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(207),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(214),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(199),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(194),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(203),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(178),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(191),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(60),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(124),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(44),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(39),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(179),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(164),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(41),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(206),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(213),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(212),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(211),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(195),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(132),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(49),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(116),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(117),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(214),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(199),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(194),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(203),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(178),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(191),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(60),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(124),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(44),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(39),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(179),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(164),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(41),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(206),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(213),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(212),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(211),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(195),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(132),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(49),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(116),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(117),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(199),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(194),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(203),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(178),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(191),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(60),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(124),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(44),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(39),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(179),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(164),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(41),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(206),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(213),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(212),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(211),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(195),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(132),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(49),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(116),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(117),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(194),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(203),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(178),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(191),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(60),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(124),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(44),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(39),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(179),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(164),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(41),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(206),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(213),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(212),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(211),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(195),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(132),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(49),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(116),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(117),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(203),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(178),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(191),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(60),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(124),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(44),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(39),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(179),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(164),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(41),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(206),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(213),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(212),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(211),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(195),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(132),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(49),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(116),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(117),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(178),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(191),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(60),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(124),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(44),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(39),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(179),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(164),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(41),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(206),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(213),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(212),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(211),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(195),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(132),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(49),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(116),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(117),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(191),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(60),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(124),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(44),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(39),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(179),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(164),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(41),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(206),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(213),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(212),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(211),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(195),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(132),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(52),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(116),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(117),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(143),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(139),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(62),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(124),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(45),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(43),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(188),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(189),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(42),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(206),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(213),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(212),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(211),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(195),
  [732] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(132),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(54),
  [738] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(116),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(117),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(63),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(124),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(40),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(206),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(213),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(212),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(211),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [793] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(195),
  [796] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(132),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(48),
  [802] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(116),
  [805] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(117),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [810] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(124),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(206),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(213),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(212),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(211),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 2),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 2),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 3),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 3),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_to_eol, 1),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_to_eol, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_children, 3),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__task_children, 3),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 3),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 3),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 3),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 3),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 3),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 3),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title_basic, 3),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title_basic, 3),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 3),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_children, 3),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_children, 3),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 2),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_schedule, 3),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_schedule, 3),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_session, 3),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_session, 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline, 1),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic, 3),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic, 3),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2),
  [989] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(115),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_underline, 3),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_underline, 3),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 1),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 1),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 2),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold, 3),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 1),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_daterange, 3),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daterange, 3),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timerange, 3),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timerange, 3),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_code, 3),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_code, 3),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 2),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 2),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetimerange, 3),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetimerange, 3),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2),
  [1076] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2), SHIFT_REPEAT(149),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_content, 1),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2), SHIFT_REPEAT(149),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2),
  [1112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2), SHIFT_REPEAT(201),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(152),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_text_line, 2),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field, 4, .production_id = 2),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 4),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field_value, 1),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
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
