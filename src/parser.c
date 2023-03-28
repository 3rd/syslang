#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 269
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  sym_list_item_label = 98,
  sym_list_item_label_marker = 99,
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
  aux_sym_text_line_repeat1 = 124,
  aux_sym__text_repeat1 = 125,
  aux_sym__raw_text_line_repeat1 = 126,
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
  [sym_list_item_label] = "list_item_label",
  [sym_list_item_label_marker] = "list_item_label_marker",
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
  [sym_list_item_label] = sym_list_item_label,
  [sym_list_item_label_marker] = sym_list_item_label_marker,
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
  [sym_list_item_label] = {
    .visible = true,
    .named = true,
  },
  [sym_list_item_label_marker] = {
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
  [29] = 27,
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
  [40] = 39,
  [41] = 41,
  [42] = 39,
  [43] = 43,
  [44] = 43,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 47,
  [51] = 46,
  [52] = 48,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 53,
  [57] = 57,
  [58] = 53,
  [59] = 57,
  [60] = 57,
  [61] = 53,
  [62] = 57,
  [63] = 57,
  [64] = 53,
  [65] = 57,
  [66] = 66,
  [67] = 66,
  [68] = 66,
  [69] = 66,
  [70] = 66,
  [71] = 66,
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
  [84] = 80,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 78,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 74,
  [97] = 75,
  [98] = 76,
  [99] = 77,
  [100] = 73,
  [101] = 72,
  [102] = 79,
  [103] = 80,
  [104] = 78,
  [105] = 82,
  [106] = 85,
  [107] = 92,
  [108] = 95,
  [109] = 109,
  [110] = 87,
  [111] = 91,
  [112] = 93,
  [113] = 80,
  [114] = 78,
  [115] = 83,
  [116] = 116,
  [117] = 73,
  [118] = 72,
  [119] = 80,
  [120] = 78,
  [121] = 85,
  [122] = 95,
  [123] = 123,
  [124] = 124,
  [125] = 87,
  [126] = 126,
  [127] = 80,
  [128] = 128,
  [129] = 129,
  [130] = 78,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 126,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 132,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 129,
  [149] = 133,
  [150] = 141,
  [151] = 147,
  [152] = 123,
  [153] = 124,
  [154] = 128,
  [155] = 139,
  [156] = 131,
  [157] = 137,
  [158] = 129,
  [159] = 159,
  [160] = 126,
  [161] = 135,
  [162] = 144,
  [163] = 146,
  [164] = 136,
  [165] = 142,
  [166] = 139,
  [167] = 145,
  [168] = 147,
  [169] = 141,
  [170] = 138,
  [171] = 140,
  [172] = 172,
  [173] = 172,
  [174] = 174,
  [175] = 172,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 147,
  [184] = 126,
  [185] = 185,
  [186] = 185,
  [187] = 185,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 129,
  [192] = 141,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 195,
  [197] = 193,
  [198] = 195,
  [199] = 199,
  [200] = 139,
  [201] = 201,
  [202] = 202,
  [203] = 79,
  [204] = 204,
  [205] = 205,
  [206] = 138,
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
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 217,
  [225] = 223,
  [226] = 222,
  [227] = 227,
  [228] = 228,
  [229] = 217,
  [230] = 147,
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
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 240,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 238,
  [258] = 242,
  [259] = 259,
  [260] = 243,
  [261] = 239,
  [262] = 256,
  [263] = 255,
  [264] = 254,
  [265] = 253,
  [266] = 266,
  [267] = 267,
  [268] = 268,
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
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(174);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(89);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(145);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(100);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
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
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(182);
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
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(200);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(207);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(201);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == 'h') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(98);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == 'h') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(248);
      if (lookahead == '@') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == ',' ||
          lookahead == '.') SKIP(43)
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(203);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == 'h') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(97);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == 'h') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(43)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(39)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '@') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(39)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '@') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(41)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '@') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(43)
      if (lookahead == '\n') ADVANCE(195);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(91);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(92);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(93);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(95);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(96);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(178);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(179);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 70:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(158);
      END_STATE();
    case 71:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(160);
      END_STATE();
    case 72:
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 74:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(199);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == '@') ADVANCE(241);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 75:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(198);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == '@') ADVANCE(240);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(198);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == '@') ADVANCE(241);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(77)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(174);
      if (lookahead == '@') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
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
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_document_meta_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_document_meta_token1);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_document_meta_token2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (lookahead == '-') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__comment_marker_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__comment_marker_token2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_italic_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_italic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_underline_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_underline_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__emphasis_token1);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '-') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__emphasis_token1);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '-') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(261);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(261);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ';') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ticket);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ticket);
      if (lookahead == ':') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_date_token3);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(262);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_negative);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead == '#') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead == '!') ADVANCE(269);
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
      if (lookahead == '$') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_heading_6_marker);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_heading_6_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_section_marker);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_section_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_Session_COLON);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_Schedule_COLON);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(86);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATcode);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATcode);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_code_block_start_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_code_block_end);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_code_block_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_external_link);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(198);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == '@') ADVANCE(241);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(199);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == '@') ADVANCE(241);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(200);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(207);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(201);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == 'h') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(203);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == 'h') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\'') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == ':') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'd') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 's') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 's') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 't') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 't') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(153);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(152);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(248);
      if (lookahead == '@') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (sym_tag_hash_character_set_1(lookahead)) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
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
  [39] = {.lex_state = 31, .external_lex_state = 6},
  [40] = {.lex_state = 31, .external_lex_state = 6},
  [41] = {.lex_state = 31, .external_lex_state = 6},
  [42] = {.lex_state = 31, .external_lex_state = 6},
  [43] = {.lex_state = 30, .external_lex_state = 7},
  [44] = {.lex_state = 30, .external_lex_state = 7},
  [45] = {.lex_state = 30, .external_lex_state = 7},
  [46] = {.lex_state = 30, .external_lex_state = 7},
  [47] = {.lex_state = 30, .external_lex_state = 7},
  [48] = {.lex_state = 31, .external_lex_state = 7},
  [49] = {.lex_state = 31, .external_lex_state = 7},
  [50] = {.lex_state = 30, .external_lex_state = 7},
  [51] = {.lex_state = 30, .external_lex_state = 7},
  [52] = {.lex_state = 31, .external_lex_state = 7},
  [53] = {.lex_state = 36, .external_lex_state = 8},
  [54] = {.lex_state = 36, .external_lex_state = 8},
  [55] = {.lex_state = 36, .external_lex_state = 8},
  [56] = {.lex_state = 36, .external_lex_state = 8},
  [57] = {.lex_state = 36, .external_lex_state = 8},
  [58] = {.lex_state = 36, .external_lex_state = 8},
  [59] = {.lex_state = 36, .external_lex_state = 8},
  [60] = {.lex_state = 36, .external_lex_state = 8},
  [61] = {.lex_state = 36, .external_lex_state = 8},
  [62] = {.lex_state = 36, .external_lex_state = 8},
  [63] = {.lex_state = 36, .external_lex_state = 8},
  [64] = {.lex_state = 36, .external_lex_state = 8},
  [65] = {.lex_state = 36, .external_lex_state = 8},
  [66] = {.lex_state = 36, .external_lex_state = 7},
  [67] = {.lex_state = 36, .external_lex_state = 7},
  [68] = {.lex_state = 36, .external_lex_state = 7},
  [69] = {.lex_state = 36, .external_lex_state = 7},
  [70] = {.lex_state = 36, .external_lex_state = 7},
  [71] = {.lex_state = 36, .external_lex_state = 7},
  [72] = {.lex_state = 74, .external_lex_state = 9},
  [73] = {.lex_state = 74, .external_lex_state = 9},
  [74] = {.lex_state = 74, .external_lex_state = 9},
  [75] = {.lex_state = 74, .external_lex_state = 9},
  [76] = {.lex_state = 74, .external_lex_state = 9},
  [77] = {.lex_state = 74, .external_lex_state = 9},
  [78] = {.lex_state = 74, .external_lex_state = 9},
  [79] = {.lex_state = 74, .external_lex_state = 9},
  [80] = {.lex_state = 74, .external_lex_state = 9},
  [81] = {.lex_state = 74, .external_lex_state = 2},
  [82] = {.lex_state = 74, .external_lex_state = 2},
  [83] = {.lex_state = 74, .external_lex_state = 2},
  [84] = {.lex_state = 74, .external_lex_state = 2},
  [85] = {.lex_state = 74, .external_lex_state = 2},
  [86] = {.lex_state = 74, .external_lex_state = 2},
  [87] = {.lex_state = 74, .external_lex_state = 2},
  [88] = {.lex_state = 74, .external_lex_state = 2},
  [89] = {.lex_state = 74, .external_lex_state = 2},
  [90] = {.lex_state = 74, .external_lex_state = 2},
  [91] = {.lex_state = 74, .external_lex_state = 2},
  [92] = {.lex_state = 74, .external_lex_state = 2},
  [93] = {.lex_state = 74, .external_lex_state = 2},
  [94] = {.lex_state = 74, .external_lex_state = 2},
  [95] = {.lex_state = 74, .external_lex_state = 2},
  [96] = {.lex_state = 29, .external_lex_state = 10},
  [97] = {.lex_state = 29, .external_lex_state = 10},
  [98] = {.lex_state = 29, .external_lex_state = 10},
  [99] = {.lex_state = 29, .external_lex_state = 10},
  [100] = {.lex_state = 29, .external_lex_state = 10},
  [101] = {.lex_state = 29, .external_lex_state = 10},
  [102] = {.lex_state = 29, .external_lex_state = 10},
  [103] = {.lex_state = 29, .external_lex_state = 10},
  [104] = {.lex_state = 29, .external_lex_state = 10},
  [105] = {.lex_state = 29, .external_lex_state = 3},
  [106] = {.lex_state = 29, .external_lex_state = 3},
  [107] = {.lex_state = 29, .external_lex_state = 3},
  [108] = {.lex_state = 29, .external_lex_state = 3},
  [109] = {.lex_state = 29, .external_lex_state = 3},
  [110] = {.lex_state = 29, .external_lex_state = 3},
  [111] = {.lex_state = 29, .external_lex_state = 3},
  [112] = {.lex_state = 29, .external_lex_state = 3},
  [113] = {.lex_state = 29, .external_lex_state = 3},
  [114] = {.lex_state = 29, .external_lex_state = 3},
  [115] = {.lex_state = 29, .external_lex_state = 3},
  [116] = {.lex_state = 29, .external_lex_state = 3},
  [117] = {.lex_state = 30, .external_lex_state = 11},
  [118] = {.lex_state = 30, .external_lex_state = 11},
  [119] = {.lex_state = 30, .external_lex_state = 11},
  [120] = {.lex_state = 30, .external_lex_state = 11},
  [121] = {.lex_state = 30, .external_lex_state = 4},
  [122] = {.lex_state = 30, .external_lex_state = 4},
  [123] = {.lex_state = 32, .external_lex_state = 6},
  [124] = {.lex_state = 32, .external_lex_state = 6},
  [125] = {.lex_state = 30, .external_lex_state = 4},
  [126] = {.lex_state = 31, .external_lex_state = 6},
  [127] = {.lex_state = 30, .external_lex_state = 4},
  [128] = {.lex_state = 32, .external_lex_state = 6},
  [129] = {.lex_state = 31, .external_lex_state = 6},
  [130] = {.lex_state = 30, .external_lex_state = 4},
  [131] = {.lex_state = 32, .external_lex_state = 6},
  [132] = {.lex_state = 31, .external_lex_state = 6},
  [133] = {.lex_state = 31, .external_lex_state = 6},
  [134] = {.lex_state = 31, .external_lex_state = 8},
  [135] = {.lex_state = 31, .external_lex_state = 6},
  [136] = {.lex_state = 31, .external_lex_state = 6},
  [137] = {.lex_state = 31, .external_lex_state = 6},
  [138] = {.lex_state = 31, .external_lex_state = 6},
  [139] = {.lex_state = 31, .external_lex_state = 6},
  [140] = {.lex_state = 31, .external_lex_state = 6},
  [141] = {.lex_state = 31, .external_lex_state = 6},
  [142] = {.lex_state = 31, .external_lex_state = 6},
  [143] = {.lex_state = 31, .external_lex_state = 8},
  [144] = {.lex_state = 31, .external_lex_state = 6},
  [145] = {.lex_state = 31, .external_lex_state = 6},
  [146] = {.lex_state = 31, .external_lex_state = 6},
  [147] = {.lex_state = 31, .external_lex_state = 6},
  [148] = {.lex_state = 31, .external_lex_state = 8},
  [149] = {.lex_state = 31, .external_lex_state = 8},
  [150] = {.lex_state = 31, .external_lex_state = 8},
  [151] = {.lex_state = 31, .external_lex_state = 8},
  [152] = {.lex_state = 37, .external_lex_state = 8},
  [153] = {.lex_state = 37, .external_lex_state = 8},
  [154] = {.lex_state = 37, .external_lex_state = 8},
  [155] = {.lex_state = 31, .external_lex_state = 8},
  [156] = {.lex_state = 37, .external_lex_state = 8},
  [157] = {.lex_state = 31, .external_lex_state = 8},
  [158] = {.lex_state = 36, .external_lex_state = 8},
  [159] = {.lex_state = 31, .external_lex_state = 8},
  [160] = {.lex_state = 36, .external_lex_state = 8},
  [161] = {.lex_state = 31, .external_lex_state = 7},
  [162] = {.lex_state = 36, .external_lex_state = 8},
  [163] = {.lex_state = 36, .external_lex_state = 8},
  [164] = {.lex_state = 36, .external_lex_state = 8},
  [165] = {.lex_state = 36, .external_lex_state = 8},
  [166] = {.lex_state = 36, .external_lex_state = 8},
  [167] = {.lex_state = 36, .external_lex_state = 8},
  [168] = {.lex_state = 36, .external_lex_state = 8},
  [169] = {.lex_state = 36, .external_lex_state = 8},
  [170] = {.lex_state = 36, .external_lex_state = 8},
  [171] = {.lex_state = 36, .external_lex_state = 8},
  [172] = {.lex_state = 40},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 33},
  [175] = {.lex_state = 40},
  [176] = {.lex_state = 33},
  [177] = {.lex_state = 33},
  [178] = {.lex_state = 40},
  [179] = {.lex_state = 34, .external_lex_state = 12},
  [180] = {.lex_state = 34, .external_lex_state = 12},
  [181] = {.lex_state = 40},
  [182] = {.lex_state = 40, .external_lex_state = 12},
  [183] = {.lex_state = 40, .external_lex_state = 12},
  [184] = {.lex_state = 34, .external_lex_state = 12},
  [185] = {.lex_state = 40},
  [186] = {.lex_state = 40},
  [187] = {.lex_state = 40},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 41},
  [191] = {.lex_state = 34, .external_lex_state = 12},
  [192] = {.lex_state = 40, .external_lex_state = 12},
  [193] = {.lex_state = 40},
  [194] = {.lex_state = 40, .external_lex_state = 12},
  [195] = {.lex_state = 40},
  [196] = {.lex_state = 40},
  [197] = {.lex_state = 40},
  [198] = {.lex_state = 40},
  [199] = {.lex_state = 40, .external_lex_state = 12},
  [200] = {.lex_state = 40, .external_lex_state = 12},
  [201] = {.lex_state = 0, .external_lex_state = 12},
  [202] = {.lex_state = 42},
  [203] = {.lex_state = 0, .external_lex_state = 12},
  [204] = {.lex_state = 42},
  [205] = {.lex_state = 42},
  [206] = {.lex_state = 0, .external_lex_state = 12},
  [207] = {.lex_state = 0, .external_lex_state = 12},
  [208] = {.lex_state = 42},
  [209] = {.lex_state = 42},
  [210] = {.lex_state = 0, .external_lex_state = 12},
  [211] = {.lex_state = 0, .external_lex_state = 12},
  [212] = {.lex_state = 0, .external_lex_state = 12},
  [213] = {.lex_state = 0, .external_lex_state = 12},
  [214] = {.lex_state = 0, .external_lex_state = 12},
  [215] = {.lex_state = 0, .external_lex_state = 12},
  [216] = {.lex_state = 0, .external_lex_state = 12},
  [217] = {.lex_state = 40},
  [218] = {.lex_state = 33},
  [219] = {.lex_state = 42},
  [220] = {.lex_state = 42},
  [221] = {.lex_state = 35, .external_lex_state = 13},
  [222] = {.lex_state = 42},
  [223] = {.lex_state = 42},
  [224] = {.lex_state = 40},
  [225] = {.lex_state = 42},
  [226] = {.lex_state = 42},
  [227] = {.lex_state = 0, .external_lex_state = 12},
  [228] = {.lex_state = 41},
  [229] = {.lex_state = 40},
  [230] = {.lex_state = 40},
  [231] = {.lex_state = 42},
  [232] = {.lex_state = 42},
  [233] = {.lex_state = 0, .external_lex_state = 12},
  [234] = {.lex_state = 33},
  [235] = {.lex_state = 0, .external_lex_state = 12},
  [236] = {.lex_state = 0, .external_lex_state = 12},
  [237] = {.lex_state = 33},
  [238] = {.lex_state = 0, .external_lex_state = 14},
  [239] = {.lex_state = 0, .external_lex_state = 15},
  [240] = {.lex_state = 42},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0, .external_lex_state = 16},
  [243] = {.lex_state = 0, .external_lex_state = 17},
  [244] = {.lex_state = 40},
  [245] = {.lex_state = 42},
  [246] = {.lex_state = 0, .external_lex_state = 13},
  [247] = {.lex_state = 38},
  [248] = {.lex_state = 38},
  [249] = {.lex_state = 38},
  [250] = {.lex_state = 38},
  [251] = {.lex_state = 38},
  [252] = {.lex_state = 38},
  [253] = {.lex_state = 44},
  [254] = {.lex_state = 45},
  [255] = {.lex_state = 46},
  [256] = {.lex_state = 47},
  [257] = {.lex_state = 0, .external_lex_state = 14},
  [258] = {.lex_state = 0, .external_lex_state = 16},
  [259] = {.lex_state = 0, .external_lex_state = 13},
  [260] = {.lex_state = 0, .external_lex_state = 17},
  [261] = {.lex_state = 0, .external_lex_state = 15},
  [262] = {.lex_state = 47},
  [263] = {.lex_state = 46},
  [264] = {.lex_state = 45},
  [265] = {.lex_state = 44},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 40},
  [268] = {.lex_state = 0, .external_lex_state = 13},
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
    [ts_external_token__eol] = true,
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
    [ts_external_token_bold_end] = true,
  },
  [15] = {
    [ts_external_token_inline_code_end] = true,
  },
  [16] = {
    [ts_external_token_italic_end] = true,
  },
  [17] = {
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
    [sym_document] = STATE(241),
    [sym_document_title_basic] = STATE(5),
    [sym_document_meta] = STATE(5),
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(62),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(62),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(62),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(62),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(3),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(3),
    [sym__text] = STATE(62),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
  [6] = {
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(6),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(6),
    [sym__text] = STATE(62),
    [aux_sym_heading_1_repeat1] = STATE(6),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(8),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(8),
    [sym__text] = STATE(62),
    [aux_sym_heading_1_repeat1] = STATE(8),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(6),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(6),
    [sym__text] = STATE(62),
    [aux_sym_heading_1_repeat1] = STATE(6),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(10),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(10),
    [sym__text] = STATE(62),
    [aux_sym_heading_2_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(11),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(11),
    [sym__text] = STATE(62),
    [aux_sym_heading_2_repeat1] = STATE(11),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
    [ts_builtin_sym_end] = ACTIONS(224),
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
    [sym_heading_1_marker] = ACTIONS(226),
    [sym_heading_2_marker] = ACTIONS(226),
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
  [11] = {
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(11),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(11),
    [sym__text] = STATE(62),
    [aux_sym_heading_2_repeat1] = STATE(11),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
    [ts_builtin_sym_end] = ACTIONS(228),
    [aux_sym__comment_marker_token1] = ACTIONS(230),
    [aux_sym__comment_marker_token2] = ACTIONS(230),
    [aux_sym_string_token1] = ACTIONS(233),
    [aux_sym_string_token2] = ACTIONS(233),
    [sym_number] = ACTIONS(236),
    [sym_ticket] = ACTIONS(236),
    [aux_sym_date_token1] = ACTIONS(239),
    [aux_sym_date_token2] = ACTIONS(239),
    [aux_sym_date_token3] = ACTIONS(239),
    [aux_sym_time_token1] = ACTIONS(242),
    [aux_sym_time_token2] = ACTIONS(242),
    [sym_tag_positive] = ACTIONS(236),
    [sym_tag_negative] = ACTIONS(236),
    [sym_tag_hash] = ACTIONS(236),
    [sym_tag_context] = ACTIONS(236),
    [sym_tag_danger] = ACTIONS(236),
    [sym_tag_identifier] = ACTIONS(236),
    [sym_heading_1_marker] = ACTIONS(245),
    [sym_heading_2_marker] = ACTIONS(245),
    [sym_heading_3_marker] = ACTIONS(247),
    [sym_heading_4_marker] = ACTIONS(250),
    [sym_heading_5_marker] = ACTIONS(253),
    [sym_heading_6_marker] = ACTIONS(256),
    [sym_section_marker] = ACTIONS(259),
    [anon_sym_ATcode] = ACTIONS(262),
    [sym_external_link] = ACTIONS(236),
    [sym_label] = ACTIONS(265),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(268),
    [sym_task_marker_default] = ACTIONS(271),
    [sym_task_marker_active] = ACTIONS(274),
    [sym_task_marker_done] = ACTIONS(277),
    [sym_task_marker_cancelled] = ACTIONS(280),
    [sym_list_item_marker] = ACTIONS(283),
    [sym_bold_start] = ACTIONS(286),
    [sym_italic_start] = ACTIONS(289),
    [sym_underline_start] = ACTIONS(292),
    [sym_inline_code_start] = ACTIONS(295),
  },
  [12] = {
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(13),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(13),
    [sym__text] = STATE(62),
    [aux_sym_heading_3_repeat1] = STATE(13),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(14),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(14),
    [sym__text] = STATE(62),
    [aux_sym_heading_3_repeat1] = STATE(14),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
    [ts_builtin_sym_end] = ACTIONS(302),
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
    [sym_heading_1_marker] = ACTIONS(304),
    [sym_heading_2_marker] = ACTIONS(304),
    [sym_heading_3_marker] = ACTIONS(304),
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
  [14] = {
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
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
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(14),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(14),
    [sym__text] = STATE(62),
    [aux_sym_heading_3_repeat1] = STATE(14),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
    [ts_builtin_sym_end] = ACTIONS(306),
    [aux_sym__comment_marker_token1] = ACTIONS(308),
    [aux_sym__comment_marker_token2] = ACTIONS(308),
    [aux_sym_string_token1] = ACTIONS(311),
    [aux_sym_string_token2] = ACTIONS(311),
    [sym_number] = ACTIONS(314),
    [sym_ticket] = ACTIONS(314),
    [aux_sym_date_token1] = ACTIONS(317),
    [aux_sym_date_token2] = ACTIONS(317),
    [aux_sym_date_token3] = ACTIONS(317),
    [aux_sym_time_token1] = ACTIONS(320),
    [aux_sym_time_token2] = ACTIONS(320),
    [sym_tag_positive] = ACTIONS(314),
    [sym_tag_negative] = ACTIONS(314),
    [sym_tag_hash] = ACTIONS(314),
    [sym_tag_context] = ACTIONS(314),
    [sym_tag_danger] = ACTIONS(314),
    [sym_tag_identifier] = ACTIONS(314),
    [sym_heading_1_marker] = ACTIONS(323),
    [sym_heading_2_marker] = ACTIONS(323),
    [sym_heading_3_marker] = ACTIONS(323),
    [sym_heading_4_marker] = ACTIONS(325),
    [sym_heading_5_marker] = ACTIONS(328),
    [sym_heading_6_marker] = ACTIONS(331),
    [sym_section_marker] = ACTIONS(334),
    [anon_sym_ATcode] = ACTIONS(337),
    [sym_external_link] = ACTIONS(314),
    [sym_label] = ACTIONS(340),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(343),
    [sym_task_marker_default] = ACTIONS(346),
    [sym_task_marker_active] = ACTIONS(349),
    [sym_task_marker_done] = ACTIONS(352),
    [sym_task_marker_cancelled] = ACTIONS(355),
    [sym_list_item_marker] = ACTIONS(358),
    [sym_bold_start] = ACTIONS(361),
    [sym_italic_start] = ACTIONS(364),
    [sym_underline_start] = ACTIONS(367),
    [sym_inline_code_start] = ACTIONS(370),
  },
  [15] = {
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym_heading_5] = STATE(16),
    [sym_heading_6] = STATE(16),
    [sym_section] = STATE(16),
    [sym__task] = STATE(16),
    [sym_task_default] = STATE(16),
    [sym_task_active] = STATE(16),
    [sym_task_done] = STATE(16),
    [sym_task_cancelled] = STATE(16),
    [sym_list_item] = STATE(16),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(16),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(16),
    [sym__text] = STATE(62),
    [aux_sym_heading_4_repeat1] = STATE(16),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
    [ts_builtin_sym_end] = ACTIONS(373),
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
    [sym_heading_1_marker] = ACTIONS(375),
    [sym_heading_2_marker] = ACTIONS(375),
    [sym_heading_3_marker] = ACTIONS(375),
    [sym_heading_4_marker] = ACTIONS(375),
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
  [16] = {
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym_heading_5] = STATE(16),
    [sym_heading_6] = STATE(16),
    [sym_section] = STATE(16),
    [sym__task] = STATE(16),
    [sym_task_default] = STATE(16),
    [sym_task_active] = STATE(16),
    [sym_task_done] = STATE(16),
    [sym_task_cancelled] = STATE(16),
    [sym_list_item] = STATE(16),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(16),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(16),
    [sym__text] = STATE(62),
    [aux_sym_heading_4_repeat1] = STATE(16),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
    [ts_builtin_sym_end] = ACTIONS(377),
    [aux_sym__comment_marker_token1] = ACTIONS(379),
    [aux_sym__comment_marker_token2] = ACTIONS(379),
    [aux_sym_string_token1] = ACTIONS(382),
    [aux_sym_string_token2] = ACTIONS(382),
    [sym_number] = ACTIONS(385),
    [sym_ticket] = ACTIONS(385),
    [aux_sym_date_token1] = ACTIONS(388),
    [aux_sym_date_token2] = ACTIONS(388),
    [aux_sym_date_token3] = ACTIONS(388),
    [aux_sym_time_token1] = ACTIONS(391),
    [aux_sym_time_token2] = ACTIONS(391),
    [sym_tag_positive] = ACTIONS(385),
    [sym_tag_negative] = ACTIONS(385),
    [sym_tag_hash] = ACTIONS(385),
    [sym_tag_context] = ACTIONS(385),
    [sym_tag_danger] = ACTIONS(385),
    [sym_tag_identifier] = ACTIONS(385),
    [sym_heading_1_marker] = ACTIONS(394),
    [sym_heading_2_marker] = ACTIONS(394),
    [sym_heading_3_marker] = ACTIONS(394),
    [sym_heading_4_marker] = ACTIONS(394),
    [sym_heading_5_marker] = ACTIONS(396),
    [sym_heading_6_marker] = ACTIONS(399),
    [sym_section_marker] = ACTIONS(402),
    [anon_sym_ATcode] = ACTIONS(405),
    [sym_external_link] = ACTIONS(385),
    [sym_label] = ACTIONS(408),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(411),
    [sym_task_marker_default] = ACTIONS(414),
    [sym_task_marker_active] = ACTIONS(417),
    [sym_task_marker_done] = ACTIONS(420),
    [sym_task_marker_cancelled] = ACTIONS(423),
    [sym_list_item_marker] = ACTIONS(426),
    [sym_bold_start] = ACTIONS(429),
    [sym_italic_start] = ACTIONS(432),
    [sym_underline_start] = ACTIONS(435),
    [sym_inline_code_start] = ACTIONS(438),
  },
  [17] = {
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym_heading_5] = STATE(15),
    [sym_heading_6] = STATE(15),
    [sym_section] = STATE(15),
    [sym__task] = STATE(15),
    [sym_task_default] = STATE(15),
    [sym_task_active] = STATE(15),
    [sym_task_done] = STATE(15),
    [sym_task_cancelled] = STATE(15),
    [sym_list_item] = STATE(15),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(15),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(15),
    [sym__text] = STATE(62),
    [aux_sym_heading_4_repeat1] = STATE(15),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym_heading_6] = STATE(18),
    [sym_section] = STATE(18),
    [sym__task] = STATE(18),
    [sym_task_default] = STATE(18),
    [sym_task_active] = STATE(18),
    [sym_task_done] = STATE(18),
    [sym_task_cancelled] = STATE(18),
    [sym_list_item] = STATE(18),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(18),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(18),
    [sym__text] = STATE(62),
    [aux_sym_heading_5_repeat1] = STATE(18),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym_heading_6] = STATE(20),
    [sym_section] = STATE(20),
    [sym__task] = STATE(20),
    [sym_task_default] = STATE(20),
    [sym_task_active] = STATE(20),
    [sym_task_done] = STATE(20),
    [sym_task_cancelled] = STATE(20),
    [sym_list_item] = STATE(20),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(20),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(20),
    [sym__text] = STATE(62),
    [aux_sym_heading_5_repeat1] = STATE(20),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym_heading_6] = STATE(18),
    [sym_section] = STATE(18),
    [sym__task] = STATE(18),
    [sym_task_default] = STATE(18),
    [sym_task_active] = STATE(18),
    [sym_task_done] = STATE(18),
    [sym_task_cancelled] = STATE(18),
    [sym_list_item] = STATE(18),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(18),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(18),
    [sym__text] = STATE(62),
    [aux_sym_heading_5_repeat1] = STATE(18),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(62),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(62),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(62),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(62),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
    [ts_builtin_sym_end] = ACTIONS(580),
    [aux_sym__comment_marker_token1] = ACTIONS(582),
    [aux_sym__comment_marker_token2] = ACTIONS(582),
    [aux_sym_string_token1] = ACTIONS(585),
    [aux_sym_string_token2] = ACTIONS(585),
    [sym_number] = ACTIONS(588),
    [sym_ticket] = ACTIONS(588),
    [aux_sym_date_token1] = ACTIONS(591),
    [aux_sym_date_token2] = ACTIONS(591),
    [aux_sym_date_token3] = ACTIONS(591),
    [aux_sym_time_token1] = ACTIONS(594),
    [aux_sym_time_token2] = ACTIONS(594),
    [sym_tag_positive] = ACTIONS(588),
    [sym_tag_negative] = ACTIONS(588),
    [sym_tag_hash] = ACTIONS(588),
    [sym_tag_context] = ACTIONS(588),
    [sym_tag_danger] = ACTIONS(588),
    [sym_tag_identifier] = ACTIONS(588),
    [sym_heading_1_marker] = ACTIONS(597),
    [sym_heading_2_marker] = ACTIONS(597),
    [sym_heading_3_marker] = ACTIONS(597),
    [sym_heading_4_marker] = ACTIONS(597),
    [sym_heading_5_marker] = ACTIONS(597),
    [sym_heading_6_marker] = ACTIONS(597),
    [sym_section_marker] = ACTIONS(597),
    [anon_sym_ATcode] = ACTIONS(599),
    [sym_external_link] = ACTIONS(588),
    [sym_label] = ACTIONS(602),
    [aux_sym_text_line_token1] = ACTIONS(39),
    [aux_sym__text_token1] = ACTIONS(605),
    [sym_task_marker_default] = ACTIONS(608),
    [sym_task_marker_active] = ACTIONS(611),
    [sym_task_marker_done] = ACTIONS(614),
    [sym_task_marker_cancelled] = ACTIONS(617),
    [sym_list_item_marker] = ACTIONS(620),
    [sym_bold_start] = ACTIONS(623),
    [sym_italic_start] = ACTIONS(626),
    [sym_underline_start] = ACTIONS(629),
    [sym_inline_code_start] = ACTIONS(632),
  },
  [25] = {
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(62),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
    [ts_builtin_sym_end] = ACTIONS(635),
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
    [sym_heading_1_marker] = ACTIONS(637),
    [sym_heading_2_marker] = ACTIONS(637),
    [sym_heading_3_marker] = ACTIONS(637),
    [sym_heading_4_marker] = ACTIONS(637),
    [sym_heading_5_marker] = ACTIONS(637),
    [sym_heading_6_marker] = ACTIONS(637),
    [sym_section_marker] = ACTIONS(637),
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
    [sym__comment_marker] = STATE(240),
    [sym_comment] = STATE(62),
    [sym_bold] = STATE(156),
    [sym_italic] = STATE(156),
    [sym_underline] = STATE(156),
    [sym__emphasis] = STATE(62),
    [sym_string] = STATE(62),
    [sym_date] = STATE(143),
    [sym_daterange] = STATE(62),
    [sym_time] = STATE(157),
    [sym_timerange] = STATE(62),
    [sym_datetime] = STATE(149),
    [sym_datetimerange] = STATE(62),
    [sym__task] = STATE(25),
    [sym_task_default] = STATE(25),
    [sym_task_active] = STATE(25),
    [sym_task_done] = STATE(25),
    [sym_task_cancelled] = STATE(25),
    [sym_list_item] = STATE(25),
    [sym_inline_code] = STATE(62),
    [sym_code_block_start] = STATE(174),
    [sym_code_block] = STATE(25),
    [sym__inline] = STATE(62),
    [sym_text_line] = STATE(25),
    [sym__text] = STATE(62),
    [aux_sym_section_repeat1] = STATE(25),
    [aux_sym_text_line_repeat1] = STATE(62),
    [aux_sym__text_repeat1] = STATE(160),
    [ts_builtin_sym_end] = ACTIONS(639),
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
    [sym_heading_1_marker] = ACTIONS(641),
    [sym_heading_2_marker] = ACTIONS(641),
    [sym_heading_3_marker] = ACTIONS(641),
    [sym_heading_4_marker] = ACTIONS(641),
    [sym_heading_5_marker] = ACTIONS(641),
    [sym_heading_6_marker] = ACTIONS(641),
    [sym_section_marker] = ACTIONS(641),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
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
    ACTIONS(645), 1,
      anon_sym_Session_COLON,
    ACTIONS(647), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(649), 1,
      sym_label,
    ACTIONS(653), 1,
      sym_task_marker_default,
    ACTIONS(655), 1,
      sym_task_marker_active,
    ACTIONS(657), 1,
      sym_task_marker_done,
    ACTIONS(659), 1,
      sym_task_marker_cancelled,
    ACTIONS(661), 1,
      sym_list_item_marker,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    ACTIONS(651), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(643), 9,
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
    STATE(65), 10,
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
    ACTIONS(678), 1,
      anon_sym_Session_COLON,
    ACTIONS(681), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(684), 1,
      sym_label,
    ACTIONS(687), 1,
      aux_sym__text_token1,
    ACTIONS(692), 1,
      sym_task_marker_default,
    ACTIONS(695), 1,
      sym_task_marker_active,
    ACTIONS(698), 1,
      sym_task_marker_done,
    ACTIONS(701), 1,
      sym_task_marker_cancelled,
    ACTIONS(704), 1,
      sym_list_item_marker,
    ACTIONS(707), 1,
      sym_bold_start,
    ACTIONS(710), 1,
      sym_italic_start,
    ACTIONS(713), 1,
      sym_underline_start,
    ACTIONS(716), 1,
      sym_inline_code_start,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
      sym__comment_marker,
    ACTIONS(663), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(666), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(675), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(690), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(672), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(669), 9,
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
    STATE(65), 10,
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
    ACTIONS(645), 1,
      anon_sym_Session_COLON,
    ACTIONS(647), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(649), 1,
      sym_label,
    ACTIONS(653), 1,
      sym_task_marker_default,
    ACTIONS(655), 1,
      sym_task_marker_active,
    ACTIONS(657), 1,
      sym_task_marker_done,
    ACTIONS(659), 1,
      sym_task_marker_cancelled,
    ACTIONS(661), 1,
      sym_list_item_marker,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(643), 9,
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
    STATE(65), 10,
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
    ACTIONS(645), 1,
      anon_sym_Session_COLON,
    ACTIONS(647), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(649), 1,
      sym_label,
    ACTIONS(653), 1,
      sym_task_marker_default,
    ACTIONS(655), 1,
      sym_task_marker_active,
    ACTIONS(657), 1,
      sym_task_marker_done,
    ACTIONS(659), 1,
      sym_task_marker_cancelled,
    ACTIONS(661), 1,
      sym_list_item_marker,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(643), 9,
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
    STATE(65), 10,
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
    ACTIONS(645), 1,
      anon_sym_Session_COLON,
    ACTIONS(647), 1,
      anon_sym_Schedule_COLON,
    ACTIONS(649), 1,
      sym_label,
    ACTIONS(653), 1,
      sym_task_marker_default,
    ACTIONS(655), 1,
      sym_task_marker_active,
    ACTIONS(657), 1,
      sym_task_marker_done,
    ACTIONS(659), 1,
      sym_task_marker_cancelled,
    ACTIONS(661), 1,
      sym_list_item_marker,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(643), 9,
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
    STATE(65), 10,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(156), 3,
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
    STATE(60), 10,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    ACTIONS(729), 2,
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
    STATE(156), 3,
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
    STATE(60), 10,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    ACTIONS(731), 2,
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
    STATE(156), 3,
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
    STATE(60), 10,
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
    ACTIONS(748), 1,
      sym_label,
    ACTIONS(751), 1,
      aux_sym__text_token1,
    ACTIONS(756), 1,
      sym_list_item_marker,
    ACTIONS(759), 1,
      sym_bold_start,
    ACTIONS(762), 1,
      sym_italic_start,
    ACTIONS(765), 1,
      sym_underline_start,
    ACTIONS(768), 1,
      sym_inline_code_start,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
      sym__comment_marker,
    ACTIONS(733), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(736), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(745), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(754), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(742), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(156), 3,
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
    STATE(60), 10,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
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
    STATE(60), 10,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
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
    STATE(60), 10,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
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
    STATE(60), 10,
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
    ACTIONS(779), 1,
      aux_sym_daterange_token1,
    ACTIONS(783), 1,
      aux_sym__text_token1,
    ACTIONS(787), 1,
      sym_bold_start,
    ACTIONS(789), 1,
      sym_italic_start,
    ACTIONS(791), 1,
      sym_underline_start,
    ACTIONS(793), 1,
      sym_inline_code_start,
    STATE(126), 1,
      aux_sym__text_repeat1,
    STATE(132), 1,
      sym_date,
    STATE(133), 1,
      sym_datetime,
    STATE(137), 1,
      sym_time,
    STATE(245), 1,
      sym__comment_marker,
    ACTIONS(771), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(773), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(781), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(785), 2,
      sym__eof,
      sym__eol,
    ACTIONS(777), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(131), 3,
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
    STATE(41), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_list_item_label_marker,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
  [1320] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(779), 1,
      aux_sym_daterange_token1,
    ACTIONS(783), 1,
      aux_sym__text_token1,
    ACTIONS(787), 1,
      sym_bold_start,
    ACTIONS(789), 1,
      sym_italic_start,
    ACTIONS(791), 1,
      sym_underline_start,
    ACTIONS(793), 1,
      sym_inline_code_start,
    STATE(126), 1,
      aux_sym__text_repeat1,
    STATE(132), 1,
      sym_date,
    STATE(133), 1,
      sym_datetime,
    STATE(137), 1,
      sym_time,
    STATE(245), 1,
      sym__comment_marker,
    ACTIONS(771), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(773), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(781), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(795), 2,
      sym__eof,
      sym__eol,
    ACTIONS(777), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(131), 3,
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
    STATE(41), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_list_item_label_marker,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
  [1407] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(809), 1,
      aux_sym_daterange_token1,
    ACTIONS(815), 1,
      aux_sym__text_token1,
    ACTIONS(820), 1,
      sym_bold_start,
    ACTIONS(823), 1,
      sym_italic_start,
    ACTIONS(826), 1,
      sym_underline_start,
    ACTIONS(829), 1,
      sym_inline_code_start,
    STATE(126), 1,
      aux_sym__text_repeat1,
    STATE(132), 1,
      sym_date,
    STATE(133), 1,
      sym_datetime,
    STATE(137), 1,
      sym_time,
    STATE(245), 1,
      sym__comment_marker,
    ACTIONS(797), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(800), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(812), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(818), 2,
      sym__eof,
      sym__eol,
    ACTIONS(806), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(131), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(803), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(41), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_list_item_label_marker,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
  [1494] = 20,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(779), 1,
      aux_sym_daterange_token1,
    ACTIONS(783), 1,
      aux_sym__text_token1,
    ACTIONS(787), 1,
      sym_bold_start,
    ACTIONS(789), 1,
      sym_italic_start,
    ACTIONS(791), 1,
      sym_underline_start,
    ACTIONS(793), 1,
      sym_inline_code_start,
    STATE(126), 1,
      aux_sym__text_repeat1,
    STATE(132), 1,
      sym_date,
    STATE(133), 1,
      sym_datetime,
    STATE(137), 1,
      sym_time,
    STATE(245), 1,
      sym__comment_marker,
    ACTIONS(771), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(773), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(781), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(832), 2,
      sym__eof,
      sym__eol,
    ACTIONS(777), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(131), 3,
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
    STATE(41), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_list_item_label_marker,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
  [1581] = 22,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(836), 1,
      sym_label,
    ACTIONS(838), 1,
      aux_sym__text_token1,
    STATE(73), 1,
      sym_text_line,
    STATE(134), 1,
      aux_sym__text_repeat1,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(159), 1,
      sym__text,
    STATE(224), 1,
      sym_list_item_label,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(834), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(63), 9,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      aux_sym_text_line_repeat1,
  [1671] = 22,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(838), 1,
      aux_sym__text_token1,
    ACTIONS(842), 1,
      sym_label,
    STATE(100), 1,
      sym_text_line,
    STATE(134), 1,
      aux_sym__text_repeat1,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(159), 1,
      sym__text,
    STATE(229), 1,
      sym_list_item_label,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(840), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(59), 9,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      aux_sym_text_line_repeat1,
  [1761] = 22,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(53), 1,
      sym_bold_start,
    ACTIONS(55), 1,
      sym_italic_start,
    ACTIONS(57), 1,
      sym_underline_start,
    ACTIONS(59), 1,
      sym_inline_code_start,
    ACTIONS(838), 1,
      aux_sym__text_token1,
    ACTIONS(846), 1,
      sym_label,
    STATE(117), 1,
      sym_text_line,
    STATE(134), 1,
      aux_sym__text_repeat1,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(159), 1,
      sym__text,
    STATE(217), 1,
      sym_list_item_label,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(844), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(57), 9,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_inline_code,
      sym__inline,
      aux_sym_text_line_repeat1,
  [1851] = 20,
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
    ACTIONS(842), 1,
      sym_label,
    STATE(97), 1,
      sym_text_line,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(840), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(59), 10,
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
  [1936] = 20,
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
    ACTIONS(842), 1,
      sym_label,
    STATE(96), 1,
      sym_text_line,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(840), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(59), 10,
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
  [2021] = 19,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(779), 1,
      aux_sym_daterange_token1,
    ACTIONS(783), 1,
      aux_sym__text_token1,
    ACTIONS(787), 1,
      sym_bold_start,
    ACTIONS(789), 1,
      sym_italic_start,
    ACTIONS(791), 1,
      sym_underline_start,
    ACTIONS(793), 1,
      sym_inline_code_start,
    STATE(126), 1,
      aux_sym__text_repeat1,
    STATE(132), 1,
      sym_date,
    STATE(133), 1,
      sym_datetime,
    STATE(137), 1,
      sym_time,
    STATE(245), 1,
      sym__comment_marker,
    ACTIONS(771), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(773), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(781), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(777), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(131), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(848), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(40), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_list_item_label_marker,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
  [2104] = 19,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(779), 1,
      aux_sym_daterange_token1,
    ACTIONS(783), 1,
      aux_sym__text_token1,
    ACTIONS(787), 1,
      sym_bold_start,
    ACTIONS(789), 1,
      sym_italic_start,
    ACTIONS(791), 1,
      sym_underline_start,
    ACTIONS(793), 1,
      sym_inline_code_start,
    STATE(126), 1,
      aux_sym__text_repeat1,
    STATE(132), 1,
      sym_date,
    STATE(133), 1,
      sym_datetime,
    STATE(137), 1,
      sym_time,
    STATE(245), 1,
      sym__comment_marker,
    ACTIONS(771), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(773), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(781), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(777), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(131), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(850), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(39), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_list_item_label_marker,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
  [2187] = 20,
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
    ACTIONS(836), 1,
      sym_label,
    STATE(74), 1,
      sym_text_line,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(834), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(63), 10,
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
  [2272] = 20,
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
    ACTIONS(836), 1,
      sym_label,
    STATE(75), 1,
      sym_text_line,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(834), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(63), 10,
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
  [2357] = 19,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(779), 1,
      aux_sym_daterange_token1,
    ACTIONS(783), 1,
      aux_sym__text_token1,
    ACTIONS(787), 1,
      sym_bold_start,
    ACTIONS(789), 1,
      sym_italic_start,
    ACTIONS(791), 1,
      sym_underline_start,
    ACTIONS(793), 1,
      sym_inline_code_start,
    STATE(126), 1,
      aux_sym__text_repeat1,
    STATE(132), 1,
      sym_date,
    STATE(133), 1,
      sym_datetime,
    STATE(137), 1,
      sym_time,
    STATE(245), 1,
      sym__comment_marker,
    ACTIONS(771), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(773), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(781), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(777), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(131), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(852), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(42), 11,
      sym_comment,
      sym__emphasis,
      sym_string,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym_list_item_label_marker,
      sym_inline_code,
      sym__inline,
      sym__text,
      aux_sym_list_item_repeat1,
  [2440] = 19,
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
    ACTIONS(856), 1,
      aux_sym_text_line_token1,
    ACTIONS(858), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [2522] = 19,
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
    ACTIONS(860), 1,
      aux_sym_text_line_token1,
    ACTIONS(862), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [2604] = 19,
    ACTIONS(879), 1,
      aux_sym_text_line_token1,
    ACTIONS(881), 1,
      aux_sym__text_token1,
    ACTIONS(884), 1,
      sym__eof,
    ACTIONS(886), 1,
      sym_bold_start,
    ACTIONS(889), 1,
      sym_italic_start,
    ACTIONS(892), 1,
      sym_underline_start,
    ACTIONS(895), 1,
      sym_inline_code_start,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
      sym__comment_marker,
    ACTIONS(864), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(867), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(876), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(873), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(870), 9,
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
  [2686] = 19,
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
    ACTIONS(898), 1,
      aux_sym_text_line_token1,
    ACTIONS(900), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [2768] = 19,
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
    ACTIONS(902), 1,
      aux_sym_text_line_token1,
    ACTIONS(904), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [2850] = 19,
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
    ACTIONS(906), 1,
      aux_sym_text_line_token1,
    ACTIONS(908), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [2932] = 19,
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
    ACTIONS(910), 1,
      aux_sym_text_line_token1,
    ACTIONS(912), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [3014] = 19,
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
    ACTIONS(914), 1,
      aux_sym_text_line_token1,
    ACTIONS(916), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [3096] = 19,
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
    ACTIONS(918), 1,
      aux_sym_text_line_token1,
    ACTIONS(920), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [3178] = 19,
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
    ACTIONS(922), 1,
      aux_sym_text_line_token1,
    ACTIONS(924), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [3260] = 19,
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
    ACTIONS(926), 1,
      aux_sym_text_line_token1,
    ACTIONS(928), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [3342] = 19,
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
    ACTIONS(930), 1,
      aux_sym_text_line_token1,
    ACTIONS(932), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [3424] = 19,
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
    ACTIONS(934), 1,
      aux_sym_text_line_token1,
    ACTIONS(936), 1,
      sym__eof,
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(854), 9,
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
  [3506] = 18,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(938), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(61), 10,
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
  [3585] = 18,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(940), 9,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_external_link,
    STATE(64), 10,
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
  [3664] = 18,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(942), 9,
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
  [3743] = 18,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(944), 9,
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
  [3822] = 18,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(946), 9,
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
  [3901] = 18,
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
    STATE(143), 1,
      sym_date,
    STATE(149), 1,
      sym_datetime,
    STATE(157), 1,
      sym_time,
    STATE(160), 1,
      aux_sym__text_repeat1,
    STATE(240), 1,
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
    STATE(156), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    ACTIONS(948), 9,
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
  [3980] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(954), 1,
      sym__indent,
    STATE(87), 1,
      sym__list_item_children,
    ACTIONS(950), 10,
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
    ACTIONS(952), 28,
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
  [4032] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(954), 1,
      sym__indent,
    STATE(85), 1,
      sym__list_item_children,
    ACTIONS(956), 10,
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
    ACTIONS(958), 28,
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
  [4084] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(964), 1,
      sym__indent,
    STATE(83), 1,
      sym__task_children,
    ACTIONS(960), 10,
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
    ACTIONS(962), 28,
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
  [4136] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(964), 1,
      sym__indent,
    STATE(93), 1,
      sym__task_children,
    ACTIONS(966), 10,
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
    ACTIONS(968), 28,
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
  [4188] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(964), 1,
      sym__indent,
    STATE(91), 1,
      sym__task_children,
    ACTIONS(970), 10,
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
    ACTIONS(972), 28,
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
  [4240] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(964), 1,
      sym__indent,
    STATE(82), 1,
      sym__task_children,
    ACTIONS(974), 10,
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
    ACTIONS(976), 28,
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
  [4292] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(978), 11,
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
    ACTIONS(980), 28,
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
  [4339] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(982), 11,
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
    ACTIONS(984), 28,
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
  [4386] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(986), 11,
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
    ACTIONS(988), 28,
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
  [4433] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(990), 10,
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
    ACTIONS(992), 28,
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
  [4479] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(994), 10,
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
    ACTIONS(996), 28,
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
  [4525] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(998), 10,
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
    ACTIONS(1000), 28,
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
  [4571] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(986), 10,
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
    ACTIONS(988), 28,
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
  [4617] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1002), 10,
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
    ACTIONS(1004), 28,
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
  [4663] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1006), 10,
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
    ACTIONS(1008), 28,
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
  [4709] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1010), 10,
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
    ACTIONS(1012), 28,
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
  [4755] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1014), 10,
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
    ACTIONS(1016), 28,
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
  [4801] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1018), 10,
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
    ACTIONS(1020), 28,
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
  [4847] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(978), 10,
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
    ACTIONS(980), 28,
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
  [4893] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1022), 10,
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
    ACTIONS(1024), 28,
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
  [4939] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1026), 10,
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
    ACTIONS(1028), 28,
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
  [4985] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1030), 10,
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
    ACTIONS(1032), 28,
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
  [5031] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1034), 10,
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
    ACTIONS(1036), 28,
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
  [5077] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1038), 10,
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
    ACTIONS(1040), 28,
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
  [5123] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1042), 1,
      sym__indent,
    STATE(115), 1,
      sym__task_children,
    ACTIONS(960), 11,
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
    ACTIONS(962), 22,
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
  [5170] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1042), 1,
      sym__indent,
    STATE(112), 1,
      sym__task_children,
    ACTIONS(966), 11,
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
    ACTIONS(968), 22,
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
  [5217] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1042), 1,
      sym__indent,
    STATE(111), 1,
      sym__task_children,
    ACTIONS(970), 11,
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
    ACTIONS(972), 22,
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
  [5264] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1042), 1,
      sym__indent,
    STATE(105), 1,
      sym__task_children,
    ACTIONS(974), 11,
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
    ACTIONS(976), 22,
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
  [5311] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1044), 1,
      sym__indent,
    STATE(106), 1,
      sym__list_item_children,
    ACTIONS(956), 11,
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
    ACTIONS(958), 22,
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
  [5358] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1044), 1,
      sym__indent,
    STATE(110), 1,
      sym__list_item_children,
    ACTIONS(950), 11,
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
    ACTIONS(952), 22,
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
  [5405] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(982), 12,
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
    ACTIONS(984), 22,
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
  [5447] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(986), 12,
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
    ACTIONS(988), 22,
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
  [5489] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(978), 12,
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
    ACTIONS(980), 22,
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
  [5531] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(994), 11,
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
    ACTIONS(996), 22,
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
  [5572] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1002), 11,
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
    ACTIONS(1004), 22,
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
  [5613] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1026), 11,
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
    ACTIONS(1028), 22,
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
  [5654] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1038), 11,
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
    ACTIONS(1040), 22,
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
  [5695] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1048), 11,
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
    ACTIONS(1046), 22,
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
  [5736] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1010), 11,
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
    ACTIONS(1012), 22,
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
  [5777] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1022), 11,
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
    ACTIONS(1024), 22,
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
  [5818] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1030), 11,
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
    ACTIONS(1032), 22,
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
  [5859] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(986), 11,
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
    ACTIONS(988), 22,
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
  [5900] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(978), 11,
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
    ACTIONS(980), 22,
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
  [5941] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(998), 11,
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
    ACTIONS(1000), 22,
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
  [5982] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1052), 11,
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
    ACTIONS(1050), 22,
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
  [6023] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1054), 1,
      sym__indent,
    STATE(121), 1,
      sym__list_item_children,
    ACTIONS(956), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
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
      sym_external_link,
      sym_label,
      aux_sym__text_token1,
  [6064] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1054), 1,
      sym__indent,
    STATE(125), 1,
      sym__list_item_children,
    ACTIONS(950), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(952), 20,
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
  [6105] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(986), 8,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(988), 20,
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
  [6141] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(978), 8,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(980), 20,
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
  [6177] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1002), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1004), 20,
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
  [6212] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1038), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1040), 20,
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
  [6247] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1058), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1056), 21,
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
  [6282] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1062), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1060), 21,
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
  [6317] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1010), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1012), 20,
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
  [6352] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1066), 1,
      aux_sym__text_token1,
    STATE(129), 1,
      aux_sym__text_repeat1,
    ACTIONS(1068), 6,
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
  [6391] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(986), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(988), 20,
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
  [6426] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1072), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1070), 21,
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
  [6461] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1076), 1,
      aux_sym__text_token1,
    STATE(129), 1,
      aux_sym__text_repeat1,
    ACTIONS(1079), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1074), 19,
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
  [6500] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(978), 7,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(980), 20,
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
  [6535] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1083), 1,
      aux_sym__emphasis_token1,
    ACTIONS(1085), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1081), 20,
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
  [6572] = 6,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1089), 1,
      aux_sym_daterange_token1,
    STATE(141), 1,
      sym_time,
    ACTIONS(781), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(1091), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1087), 17,
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
  [6613] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1093), 1,
      aux_sym_daterange_token1,
    ACTIONS(1091), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1087), 19,
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
  [6649] = 4,
    ACTIONS(1095), 1,
      aux_sym__text_token1,
    STATE(148), 1,
      aux_sym__text_repeat1,
    ACTIONS(1068), 5,
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
  [6685] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1099), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1097), 20,
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
  [6719] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1103), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1101), 20,
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
  [6753] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1105), 1,
      aux_sym_daterange_token1,
    ACTIONS(1091), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1087), 19,
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
  [6789] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1109), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1107), 20,
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
  [6823] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1113), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1111), 20,
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
  [6857] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1117), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1115), 20,
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
  [6891] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1121), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1119), 20,
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
  [6925] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1125), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1123), 20,
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
  [6959] = 5,
    ACTIONS(1127), 1,
      aux_sym_daterange_token1,
    STATE(150), 1,
      sym_time,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(1091), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1087), 18,
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
  [6997] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1131), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1129), 20,
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
  [7031] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1135), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1133), 20,
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
  [7065] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1139), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1137), 20,
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
  [7099] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1143), 6,
      sym__eof,
      sym__eol,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1141), 20,
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
  [7133] = 4,
    ACTIONS(1145), 1,
      aux_sym__text_token1,
    STATE(148), 1,
      aux_sym__text_repeat1,
    ACTIONS(1079), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1074), 20,
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
  [7169] = 3,
    ACTIONS(1148), 1,
      aux_sym_daterange_token1,
    ACTIONS(1091), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1087), 20,
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
  [7202] = 2,
    ACTIONS(1121), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1119), 21,
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
  [7233] = 2,
    ACTIONS(1143), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1141), 21,
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
  [7264] = 2,
    ACTIONS(1058), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1056), 21,
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
  [7295] = 2,
    ACTIONS(1062), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1060), 21,
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
  [7326] = 2,
    ACTIONS(1072), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1070), 21,
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
  [7357] = 2,
    ACTIONS(1113), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1111), 21,
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
  [7388] = 3,
    ACTIONS(1150), 1,
      aux_sym__emphasis_token1,
    ACTIONS(1085), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1081), 20,
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
  [7421] = 3,
    ACTIONS(1152), 1,
      aux_sym_daterange_token1,
    ACTIONS(1091), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1087), 20,
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
  [7454] = 4,
    ACTIONS(1154), 1,
      aux_sym__text_token1,
    STATE(158), 1,
      aux_sym__text_repeat1,
    ACTIONS(1079), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1074), 19,
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
  [7489] = 3,
    ACTIONS(1157), 1,
      aux_sym_daterange_token1,
    ACTIONS(1091), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1087), 20,
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
  [7522] = 4,
    ACTIONS(1159), 1,
      aux_sym__text_token1,
    STATE(158), 1,
      aux_sym__text_repeat1,
    ACTIONS(1068), 5,
      sym__eof,
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
      aux_sym_text_line_token1,
  [7557] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1099), 4,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1097), 20,
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
  [7589] = 2,
    ACTIONS(1131), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1129), 20,
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
  [7619] = 2,
    ACTIONS(1139), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1137), 20,
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
  [7649] = 2,
    ACTIONS(1103), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1101), 20,
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
  [7679] = 2,
    ACTIONS(1125), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1123), 20,
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
  [7709] = 2,
    ACTIONS(1113), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1111), 20,
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
  [7739] = 2,
    ACTIONS(1135), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1133), 20,
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
  [7769] = 2,
    ACTIONS(1143), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1141), 20,
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
  [7799] = 2,
    ACTIONS(1121), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1119), 20,
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
  [7829] = 2,
    ACTIONS(1109), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1107), 20,
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
  [7859] = 2,
    ACTIONS(1117), 5,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      sym_inline_code_start,
    ACTIONS(1115), 20,
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
  [7889] = 7,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(781), 1,
      aux_sym_time_token1,
    ACTIONS(1161), 1,
      aux_sym_date_token1,
    ACTIONS(1165), 1,
      aux_sym_time_token2,
    STATE(198), 1,
      sym_date,
    ACTIONS(1163), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(144), 2,
      sym_time,
      sym_datetime,
  [7913] = 7,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1161), 1,
      aux_sym_date_token1,
    ACTIONS(1167), 1,
      aux_sym_time_token1,
    ACTIONS(1169), 1,
      aux_sym_time_token2,
    STATE(196), 1,
      sym_date,
    ACTIONS(1163), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(162), 2,
      sym_time,
      sym_datetime,
  [7937] = 7,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1171), 1,
      sym_code_block_end,
    ACTIONS(1173), 1,
      aux_sym__text_token1,
    STATE(184), 1,
      aux_sym__text_repeat1,
    STATE(267), 1,
      sym_code_block_content,
    STATE(176), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(179), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [7961] = 7,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1161), 1,
      aux_sym_date_token1,
    ACTIONS(1175), 1,
      aux_sym_time_token1,
    ACTIONS(1177), 1,
      aux_sym_time_token2,
    STATE(195), 1,
      sym_date,
    ACTIONS(1163), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(207), 2,
      sym_time,
      sym_datetime,
  [7985] = 6,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1173), 1,
      aux_sym__text_token1,
    ACTIONS(1179), 1,
      sym_code_block_end,
    STATE(184), 1,
      aux_sym__text_repeat1,
    STATE(177), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(179), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [8006] = 6,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1181), 1,
      sym_code_block_end,
    ACTIONS(1183), 1,
      aux_sym__text_token1,
    STATE(184), 1,
      aux_sym__text_repeat1,
    STATE(177), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(179), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [8027] = 6,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1186), 1,
      aux_sym_date_token1,
    STATE(182), 1,
      sym_date,
    STATE(194), 1,
      sym_datetime,
    ACTIONS(1188), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(236), 2,
      sym_daterange,
      sym_datetimerange,
  [8048] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1190), 1,
      aux_sym__text_token1,
    STATE(184), 1,
      aux_sym__text_repeat1,
    ACTIONS(1192), 2,
      sym__eof,
      sym__eol,
    STATE(180), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [8066] = 5,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1194), 1,
      aux_sym__text_token1,
    STATE(184), 1,
      aux_sym__text_repeat1,
    ACTIONS(1197), 2,
      sym__eof,
      sym__eol,
    STATE(180), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [8084] = 6,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1161), 1,
      aux_sym_date_token1,
    STATE(195), 1,
      sym_date,
    STATE(199), 1,
      sym_datetime,
    STATE(211), 1,
      sym_datetimerange,
    ACTIONS(1163), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [8104] = 6,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1175), 1,
      aux_sym_time_token1,
    ACTIONS(1177), 1,
      aux_sym_time_token2,
    ACTIONS(1199), 1,
      aux_sym_daterange_token1,
    STATE(192), 1,
      sym_time,
    ACTIONS(1201), 2,
      sym__eof,
      sym__eol,
  [8124] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1141), 1,
      aux_sym_time_token1,
    ACTIONS(1143), 4,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
      aux_sym_time_token2,
  [8137] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1203), 1,
      aux_sym__text_token1,
    STATE(191), 1,
      aux_sym__text_repeat1,
    ACTIONS(1068), 2,
      sym__eof,
      sym__eol,
  [8151] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1205), 1,
      aux_sym_date_token1,
    STATE(170), 1,
      sym_date,
    ACTIONS(1207), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [8165] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1186), 1,
      aux_sym_date_token1,
    STATE(206), 1,
      sym_date,
    ACTIONS(1188), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [8179] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1209), 1,
      aux_sym_date_token1,
    STATE(138), 1,
      sym_date,
    ACTIONS(777), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [8193] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1211), 1,
      aux_sym_document_meta_token2,
    ACTIONS(1213), 1,
      sym_document_meta_field_key,
    STATE(189), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [8207] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1213), 1,
      sym_document_meta_field_key,
    ACTIONS(1215), 1,
      aux_sym_document_meta_token2,
    STATE(190), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [8221] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1217), 1,
      aux_sym_document_meta_token2,
    ACTIONS(1219), 1,
      sym_document_meta_field_key,
    STATE(190), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [8235] = 4,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1222), 1,
      aux_sym__text_token1,
    STATE(191), 1,
      aux_sym__text_repeat1,
    ACTIONS(1079), 2,
      sym__eof,
      sym__eol,
  [8249] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1121), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [8258] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1167), 1,
      aux_sym_time_token1,
    ACTIONS(1169), 1,
      aux_sym_time_token2,
    STATE(165), 1,
      sym_time,
  [8271] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1225), 1,
      aux_sym_daterange_token1,
    ACTIONS(1201), 2,
      sym__eof,
      sym__eol,
  [8282] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1175), 1,
      aux_sym_time_token1,
    ACTIONS(1177), 1,
      aux_sym_time_token2,
    STATE(192), 1,
      sym_time,
  [8295] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1167), 1,
      aux_sym_time_token1,
    ACTIONS(1169), 1,
      aux_sym_time_token2,
    STATE(169), 1,
      sym_time,
  [8308] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(781), 1,
      aux_sym_time_token1,
    ACTIONS(1165), 1,
      aux_sym_time_token2,
    STATE(142), 1,
      sym_time,
  [8321] = 4,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(781), 1,
      aux_sym_time_token1,
    ACTIONS(1165), 1,
      aux_sym_time_token2,
    STATE(141), 1,
      sym_time,
  [8334] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1225), 1,
      aux_sym_daterange_token1,
    ACTIONS(1227), 2,
      sym__eof,
      sym__eol,
  [8345] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1113), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [8354] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1229), 2,
      sym__eof,
      sym__eol,
  [8362] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1231), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(235), 1,
      sym_text_to_eol,
  [8372] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(982), 2,
      sym__eof,
      sym__eol,
  [8380] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1231), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(201), 1,
      sym_text_to_eol,
  [8390] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1231), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(210), 1,
      sym_text_to_eol,
  [8400] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1109), 2,
      sym__eof,
      sym__eol,
  [8408] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1131), 2,
      sym__eof,
      sym__eol,
  [8416] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1231), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(216), 1,
      sym_text_to_eol,
  [8426] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1233), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(259), 1,
      sym_document_meta_field_value,
  [8436] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1235), 2,
      sym__eof,
      sym__eol,
  [8444] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1227), 2,
      sym__eof,
      sym__eol,
  [8452] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1237), 2,
      sym__eof,
      sym__eol,
  [8460] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1239), 2,
      sym__eof,
      sym__eol,
  [8468] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1241), 2,
      sym__eof,
      sym__eol,
  [8476] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1243), 2,
      sym__eof,
      sym__eol,
  [8484] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1245), 2,
      sym__eof,
      sym__eol,
  [8492] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1247), 1,
      aux_sym_daterange_token1,
    STATE(52), 1,
      sym_list_item_label_marker,
  [8502] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1249), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [8510] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1231), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(213), 1,
      sym_text_to_eol,
  [8520] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1231), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(212), 1,
      sym_text_to_eol,
  [8530] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1251), 1,
      aux_sym_code_block_start_token1,
    ACTIONS(1253), 1,
      sym__eol,
  [8540] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1255), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(98), 1,
      sym_text_to_eol,
  [8550] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1255), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(99), 1,
      sym_text_to_eol,
  [8560] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1247), 1,
      aux_sym_daterange_token1,
    STATE(49), 1,
      sym_list_item_label_marker,
  [8570] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1257), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(77), 1,
      sym_text_to_eol,
  [8580] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1257), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(76), 1,
      sym_text_to_eol,
  [8590] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1259), 2,
      sym__eof,
      sym__eol,
  [8598] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1261), 2,
      aux_sym_document_meta_token2,
      sym_document_meta_field_key,
  [8606] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1247), 1,
      aux_sym_daterange_token1,
    STATE(48), 1,
      sym_list_item_label_marker,
  [8616] = 3,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1141), 1,
      aux_sym_time_token1,
    ACTIONS(1143), 1,
      aux_sym_time_token2,
  [8626] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1231), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(214), 1,
      sym_text_to_eol,
  [8636] = 3,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1231), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(215), 1,
      sym_text_to_eol,
  [8646] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1263), 2,
      sym__eof,
      sym__eol,
  [8654] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1265), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [8662] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1267), 2,
      sym__eof,
      sym__eol,
  [8670] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1201), 2,
      sym__eof,
      sym__eol,
  [8678] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1269), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [8686] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1271), 1,
      sym_bold_end,
  [8693] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1273), 1,
      sym_inline_code_end,
  [8700] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1275), 1,
      aux_sym_document_meta_field_value_token1,
  [8707] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1277), 1,
      ts_builtin_sym_end,
  [8714] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1279), 1,
      sym_italic_end,
  [8721] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1281), 1,
      sym_underline_end,
  [8728] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1283), 1,
      sym_code_block_language,
  [8735] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1285), 1,
      aux_sym_document_meta_field_value_token1,
  [8742] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1287), 1,
      sym__eol,
  [8749] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1289), 1,
      anon_sym_,
  [8756] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1291), 1,
      anon_sym_,
  [8763] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1293), 1,
      anon_sym_,
  [8770] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1295), 1,
      anon_sym_,
  [8777] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1297), 1,
      anon_sym_,
  [8784] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1299), 1,
      anon_sym_,
  [8791] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1301), 1,
      sym_bold_content,
  [8798] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1303), 1,
      sym_italic_content,
  [8805] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1305), 1,
      sym_underline_content,
  [8812] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1307), 1,
      sym_inline_code_content,
  [8819] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1309), 1,
      sym_bold_end,
  [8826] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1311), 1,
      sym_italic_end,
  [8833] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1313), 1,
      sym__eol,
  [8840] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1315), 1,
      sym_underline_end,
  [8847] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1317), 1,
      sym_inline_code_end,
  [8854] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1319), 1,
      sym_inline_code_content,
  [8861] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1321), 1,
      sym_underline_content,
  [8868] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1323), 1,
      sym_italic_content,
  [8875] = 2,
    ACTIONS(39), 1,
      aux_sym_text_line_token1,
    ACTIONS(1325), 1,
      sym_bold_content,
  [8882] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1327), 1,
      anon_sym_COLON,
  [8889] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1329), 1,
      sym_code_block_end,
  [8896] = 2,
    ACTIONS(3), 1,
      aux_sym_text_line_token1,
    ACTIONS(1331), 1,
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
  [SMALL_STATE(40)] = 1320,
  [SMALL_STATE(41)] = 1407,
  [SMALL_STATE(42)] = 1494,
  [SMALL_STATE(43)] = 1581,
  [SMALL_STATE(44)] = 1671,
  [SMALL_STATE(45)] = 1761,
  [SMALL_STATE(46)] = 1851,
  [SMALL_STATE(47)] = 1936,
  [SMALL_STATE(48)] = 2021,
  [SMALL_STATE(49)] = 2104,
  [SMALL_STATE(50)] = 2187,
  [SMALL_STATE(51)] = 2272,
  [SMALL_STATE(52)] = 2357,
  [SMALL_STATE(53)] = 2440,
  [SMALL_STATE(54)] = 2522,
  [SMALL_STATE(55)] = 2604,
  [SMALL_STATE(56)] = 2686,
  [SMALL_STATE(57)] = 2768,
  [SMALL_STATE(58)] = 2850,
  [SMALL_STATE(59)] = 2932,
  [SMALL_STATE(60)] = 3014,
  [SMALL_STATE(61)] = 3096,
  [SMALL_STATE(62)] = 3178,
  [SMALL_STATE(63)] = 3260,
  [SMALL_STATE(64)] = 3342,
  [SMALL_STATE(65)] = 3424,
  [SMALL_STATE(66)] = 3506,
  [SMALL_STATE(67)] = 3585,
  [SMALL_STATE(68)] = 3664,
  [SMALL_STATE(69)] = 3743,
  [SMALL_STATE(70)] = 3822,
  [SMALL_STATE(71)] = 3901,
  [SMALL_STATE(72)] = 3980,
  [SMALL_STATE(73)] = 4032,
  [SMALL_STATE(74)] = 4084,
  [SMALL_STATE(75)] = 4136,
  [SMALL_STATE(76)] = 4188,
  [SMALL_STATE(77)] = 4240,
  [SMALL_STATE(78)] = 4292,
  [SMALL_STATE(79)] = 4339,
  [SMALL_STATE(80)] = 4386,
  [SMALL_STATE(81)] = 4433,
  [SMALL_STATE(82)] = 4479,
  [SMALL_STATE(83)] = 4525,
  [SMALL_STATE(84)] = 4571,
  [SMALL_STATE(85)] = 4617,
  [SMALL_STATE(86)] = 4663,
  [SMALL_STATE(87)] = 4709,
  [SMALL_STATE(88)] = 4755,
  [SMALL_STATE(89)] = 4801,
  [SMALL_STATE(90)] = 4847,
  [SMALL_STATE(91)] = 4893,
  [SMALL_STATE(92)] = 4939,
  [SMALL_STATE(93)] = 4985,
  [SMALL_STATE(94)] = 5031,
  [SMALL_STATE(95)] = 5077,
  [SMALL_STATE(96)] = 5123,
  [SMALL_STATE(97)] = 5170,
  [SMALL_STATE(98)] = 5217,
  [SMALL_STATE(99)] = 5264,
  [SMALL_STATE(100)] = 5311,
  [SMALL_STATE(101)] = 5358,
  [SMALL_STATE(102)] = 5405,
  [SMALL_STATE(103)] = 5447,
  [SMALL_STATE(104)] = 5489,
  [SMALL_STATE(105)] = 5531,
  [SMALL_STATE(106)] = 5572,
  [SMALL_STATE(107)] = 5613,
  [SMALL_STATE(108)] = 5654,
  [SMALL_STATE(109)] = 5695,
  [SMALL_STATE(110)] = 5736,
  [SMALL_STATE(111)] = 5777,
  [SMALL_STATE(112)] = 5818,
  [SMALL_STATE(113)] = 5859,
  [SMALL_STATE(114)] = 5900,
  [SMALL_STATE(115)] = 5941,
  [SMALL_STATE(116)] = 5982,
  [SMALL_STATE(117)] = 6023,
  [SMALL_STATE(118)] = 6064,
  [SMALL_STATE(119)] = 6105,
  [SMALL_STATE(120)] = 6141,
  [SMALL_STATE(121)] = 6177,
  [SMALL_STATE(122)] = 6212,
  [SMALL_STATE(123)] = 6247,
  [SMALL_STATE(124)] = 6282,
  [SMALL_STATE(125)] = 6317,
  [SMALL_STATE(126)] = 6352,
  [SMALL_STATE(127)] = 6391,
  [SMALL_STATE(128)] = 6426,
  [SMALL_STATE(129)] = 6461,
  [SMALL_STATE(130)] = 6500,
  [SMALL_STATE(131)] = 6535,
  [SMALL_STATE(132)] = 6572,
  [SMALL_STATE(133)] = 6613,
  [SMALL_STATE(134)] = 6649,
  [SMALL_STATE(135)] = 6685,
  [SMALL_STATE(136)] = 6719,
  [SMALL_STATE(137)] = 6753,
  [SMALL_STATE(138)] = 6789,
  [SMALL_STATE(139)] = 6823,
  [SMALL_STATE(140)] = 6857,
  [SMALL_STATE(141)] = 6891,
  [SMALL_STATE(142)] = 6925,
  [SMALL_STATE(143)] = 6959,
  [SMALL_STATE(144)] = 6997,
  [SMALL_STATE(145)] = 7031,
  [SMALL_STATE(146)] = 7065,
  [SMALL_STATE(147)] = 7099,
  [SMALL_STATE(148)] = 7133,
  [SMALL_STATE(149)] = 7169,
  [SMALL_STATE(150)] = 7202,
  [SMALL_STATE(151)] = 7233,
  [SMALL_STATE(152)] = 7264,
  [SMALL_STATE(153)] = 7295,
  [SMALL_STATE(154)] = 7326,
  [SMALL_STATE(155)] = 7357,
  [SMALL_STATE(156)] = 7388,
  [SMALL_STATE(157)] = 7421,
  [SMALL_STATE(158)] = 7454,
  [SMALL_STATE(159)] = 7489,
  [SMALL_STATE(160)] = 7522,
  [SMALL_STATE(161)] = 7557,
  [SMALL_STATE(162)] = 7589,
  [SMALL_STATE(163)] = 7619,
  [SMALL_STATE(164)] = 7649,
  [SMALL_STATE(165)] = 7679,
  [SMALL_STATE(166)] = 7709,
  [SMALL_STATE(167)] = 7739,
  [SMALL_STATE(168)] = 7769,
  [SMALL_STATE(169)] = 7799,
  [SMALL_STATE(170)] = 7829,
  [SMALL_STATE(171)] = 7859,
  [SMALL_STATE(172)] = 7889,
  [SMALL_STATE(173)] = 7913,
  [SMALL_STATE(174)] = 7937,
  [SMALL_STATE(175)] = 7961,
  [SMALL_STATE(176)] = 7985,
  [SMALL_STATE(177)] = 8006,
  [SMALL_STATE(178)] = 8027,
  [SMALL_STATE(179)] = 8048,
  [SMALL_STATE(180)] = 8066,
  [SMALL_STATE(181)] = 8084,
  [SMALL_STATE(182)] = 8104,
  [SMALL_STATE(183)] = 8124,
  [SMALL_STATE(184)] = 8137,
  [SMALL_STATE(185)] = 8151,
  [SMALL_STATE(186)] = 8165,
  [SMALL_STATE(187)] = 8179,
  [SMALL_STATE(188)] = 8193,
  [SMALL_STATE(189)] = 8207,
  [SMALL_STATE(190)] = 8221,
  [SMALL_STATE(191)] = 8235,
  [SMALL_STATE(192)] = 8249,
  [SMALL_STATE(193)] = 8258,
  [SMALL_STATE(194)] = 8271,
  [SMALL_STATE(195)] = 8282,
  [SMALL_STATE(196)] = 8295,
  [SMALL_STATE(197)] = 8308,
  [SMALL_STATE(198)] = 8321,
  [SMALL_STATE(199)] = 8334,
  [SMALL_STATE(200)] = 8345,
  [SMALL_STATE(201)] = 8354,
  [SMALL_STATE(202)] = 8362,
  [SMALL_STATE(203)] = 8372,
  [SMALL_STATE(204)] = 8380,
  [SMALL_STATE(205)] = 8390,
  [SMALL_STATE(206)] = 8400,
  [SMALL_STATE(207)] = 8408,
  [SMALL_STATE(208)] = 8416,
  [SMALL_STATE(209)] = 8426,
  [SMALL_STATE(210)] = 8436,
  [SMALL_STATE(211)] = 8444,
  [SMALL_STATE(212)] = 8452,
  [SMALL_STATE(213)] = 8460,
  [SMALL_STATE(214)] = 8468,
  [SMALL_STATE(215)] = 8476,
  [SMALL_STATE(216)] = 8484,
  [SMALL_STATE(217)] = 8492,
  [SMALL_STATE(218)] = 8502,
  [SMALL_STATE(219)] = 8510,
  [SMALL_STATE(220)] = 8520,
  [SMALL_STATE(221)] = 8530,
  [SMALL_STATE(222)] = 8540,
  [SMALL_STATE(223)] = 8550,
  [SMALL_STATE(224)] = 8560,
  [SMALL_STATE(225)] = 8570,
  [SMALL_STATE(226)] = 8580,
  [SMALL_STATE(227)] = 8590,
  [SMALL_STATE(228)] = 8598,
  [SMALL_STATE(229)] = 8606,
  [SMALL_STATE(230)] = 8616,
  [SMALL_STATE(231)] = 8626,
  [SMALL_STATE(232)] = 8636,
  [SMALL_STATE(233)] = 8646,
  [SMALL_STATE(234)] = 8654,
  [SMALL_STATE(235)] = 8662,
  [SMALL_STATE(236)] = 8670,
  [SMALL_STATE(237)] = 8678,
  [SMALL_STATE(238)] = 8686,
  [SMALL_STATE(239)] = 8693,
  [SMALL_STATE(240)] = 8700,
  [SMALL_STATE(241)] = 8707,
  [SMALL_STATE(242)] = 8714,
  [SMALL_STATE(243)] = 8721,
  [SMALL_STATE(244)] = 8728,
  [SMALL_STATE(245)] = 8735,
  [SMALL_STATE(246)] = 8742,
  [SMALL_STATE(247)] = 8749,
  [SMALL_STATE(248)] = 8756,
  [SMALL_STATE(249)] = 8763,
  [SMALL_STATE(250)] = 8770,
  [SMALL_STATE(251)] = 8777,
  [SMALL_STATE(252)] = 8784,
  [SMALL_STATE(253)] = 8791,
  [SMALL_STATE(254)] = 8798,
  [SMALL_STATE(255)] = 8805,
  [SMALL_STATE(256)] = 8812,
  [SMALL_STATE(257)] = 8819,
  [SMALL_STATE(258)] = 8826,
  [SMALL_STATE(259)] = 8833,
  [SMALL_STATE(260)] = 8840,
  [SMALL_STATE(261)] = 8847,
  [SMALL_STATE(262)] = 8854,
  [SMALL_STATE(263)] = 8861,
  [SMALL_STATE(264)] = 8868,
  [SMALL_STATE(265)] = 8875,
  [SMALL_STATE(266)] = 8882,
  [SMALL_STATE(267)] = 8889,
  [SMALL_STATE(268)] = 8896,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(240),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(171),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(151),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(155),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(252),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(251),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(250),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(249),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(248),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(247),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(202),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(221),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(66),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(160),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(226),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(225),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(265),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(264),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(263),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(262),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(240),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(171),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(62),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(151),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(155),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(251),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(250),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(249),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(248),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(247),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(202),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(221),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(66),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(160),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(50),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(51),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(226),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(225),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(43),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(265),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(264),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(263),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(262),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(240),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(171),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(62),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(151),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(155),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(250),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(249),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(248),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(247),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(202),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(221),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(66),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(160),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(50),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(51),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(226),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(225),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(43),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(265),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(264),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(263),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(262),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(240),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(171),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(62),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(151),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(155),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(249),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(248),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(247),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(202),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(221),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(66),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(160),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(50),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(51),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(226),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(225),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(43),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(265),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(264),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(263),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(262),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(240),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(171),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(62),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(151),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(155),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(248),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(247),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(202),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(221),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(66),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(160),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(50),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(51),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(226),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(225),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(43),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(265),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(264),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(263),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(262),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(240),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(171),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(62),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(151),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(155),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(247),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(202),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(221),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(66),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(160),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(50),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(51),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(226),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(225),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(43),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(265),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(264),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(263),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(262),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(240),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(171),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(62),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(151),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(155),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(202),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(221),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(66),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(160),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(50),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(51),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(226),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(225),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(43),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(265),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(264),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(263),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(262),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(240),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(171),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(62),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(151),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(155),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(221),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(66),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(160),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(50),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(51),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(226),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(225),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(43),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(265),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(264),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(263),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(262),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(240),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(171),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(65),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(151),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(155),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(181),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(178),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(68),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(160),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(47),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(46),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(222),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(223),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(44),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(265),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(264),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(263),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(262),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(240),
  [736] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(171),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(60),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(151),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(155),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(70),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(160),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(45),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(265),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(264),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(263),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(262),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(245),
  [800] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(140),
  [803] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(41),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(147),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(135),
  [812] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(139),
  [815] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(126),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(253),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(254),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(255),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(256),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(240),
  [867] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(171),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(55),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(151),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(155),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [881] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(160),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(265),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(264),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(263),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(262),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 5),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 5),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 2),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 2),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 2),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 2),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 2),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 2),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 3),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 3),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_to_eol, 1),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_to_eol, 1),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 2),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 2),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 3),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 3),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 3),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title_basic, 3),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title_basic, 3),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 6),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 6),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 3),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 3),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 3),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 3),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_children, 3),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__task_children, 3),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 3),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 3),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_children, 3),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_children, 3),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_schedule, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_schedule, 3),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_session, 3),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_session, 3),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_underline, 3),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_underline, 3),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic, 3),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic, 3),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 1),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold, 3),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2),
  [1076] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(129),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2),
  [1081] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 1),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 1),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline, 1),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_label_marker, 1),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_label_marker, 1),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_code, 3),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_code, 3),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_daterange, 3),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daterange, 3),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 2),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timerange, 3),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timerange, 3),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetimerange, 3),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetimerange, 3),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [1137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 2),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [1145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(148),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(158),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_label, 1),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_content, 1),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2),
  [1183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2), SHIFT_REPEAT(184),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2), SHIFT_REPEAT(184),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2),
  [1219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2), SHIFT_REPEAT(266),
  [1222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(191),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 4),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field, 4, .production_id = 2),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_text_line, 2),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 2),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1277] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field_value, 1),
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
