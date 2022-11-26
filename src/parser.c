#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 15
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym_section_marker = 34,
  aux_sym_task_session_token1 = 35,
  aux_sym_task_schedule_token1 = 36,
  sym_inline_code = 37,
  sym_code_block_language = 38,
  anon_sym_ATcode = 39,
  aux_sym_code_block_start_token1 = 40,
  anon_sym_LF = 41,
  sym_code_block_end = 42,
  aux_sym_code_block_token1 = 43,
  sym_external_link = 44,
  aux_sym__text_token1 = 45,
  sym__eof = 46,
  sym__eol = 47,
  sym__indent = 48,
  sym__dedent = 49,
  sym_task_marker_default = 50,
  sym_task_marker_active = 51,
  sym_task_marker_done = 52,
  sym_task_marker_cancelled = 53,
  sym_list_item_marker = 54,
  sym_bold_start = 55,
  sym_bold_end = 56,
  sym_italic_start = 57,
  sym_italic_end = 58,
  sym_underline_start = 59,
  sym_underline_end = 60,
  sym_document = 61,
  sym_document_title_basic = 62,
  sym_document_meta = 63,
  sym_document_meta_field = 64,
  sym_document_meta_field_value = 65,
  sym__comment_marker = 66,
  sym_comment = 67,
  sym_bold = 68,
  sym_italic = 69,
  sym_underline = 70,
  sym__emphasis = 71,
  sym_date = 72,
  sym_daterange = 73,
  sym_time = 74,
  sym_timerange = 75,
  sym_datetime = 76,
  sym_datetimerange = 77,
  sym_heading_1 = 78,
  sym_heading_2 = 79,
  sym_heading_3 = 80,
  sym_heading_4 = 81,
  sym_heading_5 = 82,
  sym_heading_6 = 83,
  sym_section = 84,
  sym__task = 85,
  sym_task_default = 86,
  sym_task_active = 87,
  sym_task_done = 88,
  sym_task_cancelled = 89,
  sym__task_children = 90,
  sym_task_session = 91,
  sym_task_schedule = 92,
  sym_list_item = 93,
  sym__list_item_children = 94,
  sym_code_block_content = 95,
  sym_code_block_start = 96,
  sym_code_block = 97,
  sym__inline = 98,
  sym_text_to_eol = 99,
  sym_text_line = 100,
  sym__text = 101,
  sym__raw_text_line = 102,
  aux_sym_document_repeat1 = 103,
  aux_sym_document_meta_repeat1 = 104,
  aux_sym_heading_1_repeat1 = 105,
  aux_sym_heading_2_repeat1 = 106,
  aux_sym_heading_3_repeat1 = 107,
  aux_sym_heading_4_repeat1 = 108,
  aux_sym_heading_5_repeat1 = 109,
  aux_sym_heading_6_repeat1 = 110,
  aux_sym_section_repeat1 = 111,
  aux_sym__task_children_repeat1 = 112,
  aux_sym__list_item_children_repeat1 = 113,
  aux_sym_code_block_content_repeat1 = 114,
  aux_sym_text_line_repeat1 = 115,
  aux_sym__text_repeat1 = 116,
  aux_sym__raw_text_line_repeat1 = 117,
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
  [sym_section_marker] = "section_marker",
  [aux_sym_task_session_token1] = "task_session_token1",
  [aux_sym_task_schedule_token1] = "task_schedule_token1",
  [sym_inline_code] = "inline_code",
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
  [sym_section_marker] = sym_section_marker,
  [aux_sym_task_session_token1] = aux_sym_task_session_token1,
  [aux_sym_task_schedule_token1] = aux_sym_task_schedule_token1,
  [sym_inline_code] = sym_inline_code,
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
  [sym_inline_code] = {
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
  [29] = 27,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 33,
  [36] = 36,
  [37] = 36,
  [38] = 36,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 40,
  [44] = 42,
  [45] = 45,
  [46] = 39,
  [47] = 40,
  [48] = 39,
  [49] = 40,
  [50] = 40,
  [51] = 45,
  [52] = 52,
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
  [66] = 59,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 57,
  [74] = 55,
  [75] = 53,
  [76] = 54,
  [77] = 56,
  [78] = 59,
  [79] = 58,
  [80] = 70,
  [81] = 60,
  [82] = 64,
  [83] = 59,
  [84] = 84,
  [85] = 68,
  [86] = 69,
  [87] = 71,
  [88] = 72,
  [89] = 89,
  [90] = 55,
  [91] = 59,
  [92] = 68,
  [93] = 64,
  [94] = 59,
  [95] = 95,
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
  [108] = 108,
  [109] = 106,
  [110] = 102,
  [111] = 101,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 116,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 102,
  [126] = 100,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 103,
  [132] = 129,
  [133] = 133,
  [134] = 134,
  [135] = 106,
  [136] = 133,
  [137] = 101,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 58,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 113,
  [153] = 107,
  [154] = 154,
  [155] = 155,
  [156] = 102,
  [157] = 157,
  [158] = 158,
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
  [170] = 160,
  [171] = 142,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(78)
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == '`') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '*') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == '`') ADVANCE(151);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(171);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(172);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(99);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(213);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '\r') ADVANCE(155);
      if (lookahead == ',' ||
          lookahead == '.') SKIP(37)
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(173);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(35)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '@') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(89);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(37)
      if (lookahead == '\n') ADVANCE(156);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(97);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(98);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(95);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(93);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(94);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 64:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(126);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(127);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(16);
      END_STATE();
    case 75:
      if (eof) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(170);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 76:
      if (eof) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(77)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(169);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '@') ADVANCE(189);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 77:
      if (eof) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(77)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(169);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 78:
      if (eof) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(78)
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '`') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 79:
      if (eof) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(80)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '@') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(80)
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '@') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_document_meta_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_document_meta_token2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (lookahead == '-') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__comment_marker_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__comment_marker_token2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_italic_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_italic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_underline_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_underline_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__emphasis_token1);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == '`') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ticket);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ticket);
      if (lookahead == ':') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_date_token3);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(71);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(235);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(228);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_positive);
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
          lookahead != ' ') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_heading_1_marker);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_heading_2_marker);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_heading_3_marker);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_heading_4_marker);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_heading_5_marker);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_heading_6_marker);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_section_marker);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_section_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_task_session_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_task_schedule_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_inline_code);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_ATcode);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_code_block_start_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_code_block_end);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_code_block_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_external_link);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(232);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(169);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(170);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(171);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(172);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(173);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(235);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '`') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'h') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(213);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(126);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(127);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 76, .external_lex_state = 2},
  [2] = {.lex_state = 75, .external_lex_state = 2},
  [3] = {.lex_state = 75, .external_lex_state = 2},
  [4] = {.lex_state = 75, .external_lex_state = 2},
  [5] = {.lex_state = 75, .external_lex_state = 2},
  [6] = {.lex_state = 75, .external_lex_state = 2},
  [7] = {.lex_state = 75, .external_lex_state = 2},
  [8] = {.lex_state = 75, .external_lex_state = 2},
  [9] = {.lex_state = 75, .external_lex_state = 2},
  [10] = {.lex_state = 75, .external_lex_state = 2},
  [11] = {.lex_state = 75, .external_lex_state = 2},
  [12] = {.lex_state = 75, .external_lex_state = 2},
  [13] = {.lex_state = 75, .external_lex_state = 2},
  [14] = {.lex_state = 75, .external_lex_state = 2},
  [15] = {.lex_state = 75, .external_lex_state = 2},
  [16] = {.lex_state = 75, .external_lex_state = 2},
  [17] = {.lex_state = 75, .external_lex_state = 2},
  [18] = {.lex_state = 75, .external_lex_state = 2},
  [19] = {.lex_state = 75, .external_lex_state = 2},
  [20] = {.lex_state = 75, .external_lex_state = 2},
  [21] = {.lex_state = 75, .external_lex_state = 2},
  [22] = {.lex_state = 75, .external_lex_state = 2},
  [23] = {.lex_state = 75, .external_lex_state = 2},
  [24] = {.lex_state = 75, .external_lex_state = 2},
  [25] = {.lex_state = 75, .external_lex_state = 2},
  [26] = {.lex_state = 75, .external_lex_state = 2},
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
  [47] = {.lex_state = 29, .external_lex_state = 7},
  [48] = {.lex_state = 29, .external_lex_state = 6},
  [49] = {.lex_state = 29, .external_lex_state = 7},
  [50] = {.lex_state = 29, .external_lex_state = 7},
  [51] = {.lex_state = 29, .external_lex_state = 6},
  [52] = {.lex_state = 29, .external_lex_state = 7},
  [53] = {.lex_state = 75, .external_lex_state = 8},
  [54] = {.lex_state = 75, .external_lex_state = 8},
  [55] = {.lex_state = 75, .external_lex_state = 8},
  [56] = {.lex_state = 75, .external_lex_state = 8},
  [57] = {.lex_state = 75, .external_lex_state = 8},
  [58] = {.lex_state = 75, .external_lex_state = 8},
  [59] = {.lex_state = 75, .external_lex_state = 8},
  [60] = {.lex_state = 75, .external_lex_state = 2},
  [61] = {.lex_state = 75, .external_lex_state = 2},
  [62] = {.lex_state = 75, .external_lex_state = 2},
  [63] = {.lex_state = 75, .external_lex_state = 2},
  [64] = {.lex_state = 75, .external_lex_state = 2},
  [65] = {.lex_state = 75, .external_lex_state = 2},
  [66] = {.lex_state = 75, .external_lex_state = 2},
  [67] = {.lex_state = 75, .external_lex_state = 2},
  [68] = {.lex_state = 75, .external_lex_state = 2},
  [69] = {.lex_state = 75, .external_lex_state = 2},
  [70] = {.lex_state = 75, .external_lex_state = 2},
  [71] = {.lex_state = 75, .external_lex_state = 2},
  [72] = {.lex_state = 75, .external_lex_state = 2},
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
  [94] = {.lex_state = 29, .external_lex_state = 4},
  [95] = {.lex_state = 34, .external_lex_state = 7},
  [96] = {.lex_state = 30, .external_lex_state = 7},
  [97] = {.lex_state = 30, .external_lex_state = 7},
  [98] = {.lex_state = 30, .external_lex_state = 7},
  [99] = {.lex_state = 30, .external_lex_state = 7},
  [100] = {.lex_state = 29, .external_lex_state = 7},
  [101] = {.lex_state = 34, .external_lex_state = 7},
  [102] = {.lex_state = 34, .external_lex_state = 7},
  [103] = {.lex_state = 29, .external_lex_state = 7},
  [104] = {.lex_state = 34, .external_lex_state = 7},
  [105] = {.lex_state = 34, .external_lex_state = 7},
  [106] = {.lex_state = 34, .external_lex_state = 7},
  [107] = {.lex_state = 29, .external_lex_state = 7},
  [108] = {.lex_state = 29, .external_lex_state = 7},
  [109] = {.lex_state = 29, .external_lex_state = 7},
  [110] = {.lex_state = 29, .external_lex_state = 7},
  [111] = {.lex_state = 29, .external_lex_state = 7},
  [112] = {.lex_state = 29, .external_lex_state = 7},
  [113] = {.lex_state = 29, .external_lex_state = 7},
  [114] = {.lex_state = 29, .external_lex_state = 7},
  [115] = {.lex_state = 31},
  [116] = {.lex_state = 79},
  [117] = {.lex_state = 79},
  [118] = {.lex_state = 79},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 31},
  [121] = {.lex_state = 32, .external_lex_state = 11},
  [122] = {.lex_state = 79},
  [123] = {.lex_state = 79, .external_lex_state = 11},
  [124] = {.lex_state = 32, .external_lex_state = 11},
  [125] = {.lex_state = 79, .external_lex_state = 11},
  [126] = {.lex_state = 32, .external_lex_state = 11},
  [127] = {.lex_state = 35},
  [128] = {.lex_state = 35},
  [129] = {.lex_state = 79},
  [130] = {.lex_state = 35},
  [131] = {.lex_state = 32, .external_lex_state = 11},
  [132] = {.lex_state = 79},
  [133] = {.lex_state = 79},
  [134] = {.lex_state = 79, .external_lex_state = 11},
  [135] = {.lex_state = 79, .external_lex_state = 11},
  [136] = {.lex_state = 79},
  [137] = {.lex_state = 79, .external_lex_state = 11},
  [138] = {.lex_state = 79, .external_lex_state = 11},
  [139] = {.lex_state = 79},
  [140] = {.lex_state = 79, .external_lex_state = 11},
  [141] = {.lex_state = 79, .external_lex_state = 11},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 36},
  [144] = {.lex_state = 79, .external_lex_state = 11},
  [145] = {.lex_state = 31},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 79, .external_lex_state = 11},
  [148] = {.lex_state = 36},
  [149] = {.lex_state = 79, .external_lex_state = 11},
  [150] = {.lex_state = 79, .external_lex_state = 11},
  [151] = {.lex_state = 79, .external_lex_state = 11},
  [152] = {.lex_state = 79, .external_lex_state = 11},
  [153] = {.lex_state = 79, .external_lex_state = 11},
  [154] = {.lex_state = 79, .external_lex_state = 11},
  [155] = {.lex_state = 79, .external_lex_state = 11},
  [156] = {.lex_state = 79},
  [157] = {.lex_state = 36},
  [158] = {.lex_state = 35},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 36},
  [161] = {.lex_state = 79, .external_lex_state = 11},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 31},
  [164] = {.lex_state = 31},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 79, .external_lex_state = 11},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 36},
  [169] = {.lex_state = 33},
  [170] = {.lex_state = 36},
  [171] = {.lex_state = 36},
  [172] = {.lex_state = 79},
  [173] = {.lex_state = 36},
  [174] = {.lex_state = 79, .external_lex_state = 12},
  [175] = {.lex_state = 79, .external_lex_state = 13},
  [176] = {.lex_state = 79, .external_lex_state = 14},
  [177] = {.lex_state = 79, .external_lex_state = 15},
  [178] = {.lex_state = 79},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 79, .external_lex_state = 16},
  [181] = {.lex_state = 79},
  [182] = {.lex_state = 79, .external_lex_state = 13},
  [183] = {.lex_state = 79, .external_lex_state = 16},
  [184] = {.lex_state = 38},
  [185] = {.lex_state = 39},
  [186] = {.lex_state = 40},
  [187] = {.lex_state = 79},
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
  },
  [4] = {
    [ts_external_token__eof] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
  },
  [5] = {
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
  },
  [6] = {
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
  },
  [7] = {
    [ts_external_token__eof] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
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
  },
  [10] = {
    [ts_external_token__eof] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
    [ts_external_token_italic_start] = true,
    [ts_external_token_underline_start] = true,
  },
  [11] = {
    [ts_external_token__eof] = true,
    [ts_external_token__eol] = true,
  },
  [12] = {
    [ts_external_token_bold_end] = true,
  },
  [13] = {
    [ts_external_token__eol] = true,
  },
  [14] = {
    [ts_external_token_italic_end] = true,
  },
  [15] = {
    [ts_external_token_underline_end] = true,
  },
  [16] = {
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
    [sym_tag_context] = ACTIONS(1),
    [sym_tag_danger] = ACTIONS(1),
    [sym_tag_identifier] = ACTIONS(1),
    [sym_heading_1_marker] = ACTIONS(1),
    [sym_heading_2_marker] = ACTIONS(1),
    [sym_heading_3_marker] = ACTIONS(1),
    [sym_heading_4_marker] = ACTIONS(1),
    [sym_heading_5_marker] = ACTIONS(1),
    [sym_heading_6_marker] = ACTIONS(1),
    [sym_section_marker] = ACTIONS(1),
    [sym_inline_code] = ACTIONS(1),
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
  },
  [1] = {
    [sym_document] = STATE(172),
    [sym_document_title_basic] = STATE(5),
    [sym_document_meta] = STATE(5),
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(43),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
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
    [sym_inline_code] = ACTIONS(13),
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
  },
  [2] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(43),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym__comment_marker_token1] = ACTIONS(55),
    [aux_sym__comment_marker_token2] = ACTIONS(55),
    [sym_string] = ACTIONS(58),
    [sym_number] = ACTIONS(58),
    [sym_ticket] = ACTIONS(58),
    [aux_sym_date_token1] = ACTIONS(61),
    [aux_sym_date_token2] = ACTIONS(61),
    [aux_sym_date_token3] = ACTIONS(61),
    [aux_sym_time_token1] = ACTIONS(64),
    [aux_sym_time_token2] = ACTIONS(64),
    [sym_tag_positive] = ACTIONS(58),
    [sym_tag_negative] = ACTIONS(58),
    [sym_tag_hash] = ACTIONS(58),
    [sym_tag_context] = ACTIONS(58),
    [sym_tag_danger] = ACTIONS(58),
    [sym_tag_identifier] = ACTIONS(58),
    [sym_heading_1_marker] = ACTIONS(67),
    [sym_heading_2_marker] = ACTIONS(70),
    [sym_heading_3_marker] = ACTIONS(73),
    [sym_heading_4_marker] = ACTIONS(76),
    [sym_heading_5_marker] = ACTIONS(79),
    [sym_heading_6_marker] = ACTIONS(82),
    [sym_section_marker] = ACTIONS(85),
    [sym_inline_code] = ACTIONS(58),
    [anon_sym_ATcode] = ACTIONS(88),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(58),
    [aux_sym__text_token1] = ACTIONS(91),
    [sym_task_marker_default] = ACTIONS(94),
    [sym_task_marker_active] = ACTIONS(97),
    [sym_task_marker_done] = ACTIONS(100),
    [sym_task_marker_cancelled] = ACTIONS(103),
    [sym_list_item_marker] = ACTIONS(106),
    [sym_bold_start] = ACTIONS(109),
    [sym_italic_start] = ACTIONS(112),
    [sym_underline_start] = ACTIONS(115),
  },
  [3] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(43),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(118),
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
    [sym_inline_code] = ACTIONS(13),
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
  },
  [4] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(43),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(120),
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
    [sym_inline_code] = ACTIONS(13),
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
  },
  [5] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(3),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(3),
    [sym__text] = STATE(43),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(120),
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
    [sym_inline_code] = ACTIONS(13),
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
  },
  [6] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(8),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(8),
    [sym__text] = STATE(43),
    [aux_sym_heading_1_repeat1] = STATE(8),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(122),
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
    [sym_heading_1_marker] = ACTIONS(124),
    [sym_heading_2_marker] = ACTIONS(21),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [7] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(7),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(43),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(126),
    [aux_sym__comment_marker_token1] = ACTIONS(128),
    [aux_sym__comment_marker_token2] = ACTIONS(128),
    [sym_string] = ACTIONS(131),
    [sym_number] = ACTIONS(131),
    [sym_ticket] = ACTIONS(131),
    [aux_sym_date_token1] = ACTIONS(134),
    [aux_sym_date_token2] = ACTIONS(134),
    [aux_sym_date_token3] = ACTIONS(134),
    [aux_sym_time_token1] = ACTIONS(137),
    [aux_sym_time_token2] = ACTIONS(137),
    [sym_tag_positive] = ACTIONS(131),
    [sym_tag_negative] = ACTIONS(131),
    [sym_tag_hash] = ACTIONS(131),
    [sym_tag_context] = ACTIONS(131),
    [sym_tag_danger] = ACTIONS(131),
    [sym_tag_identifier] = ACTIONS(131),
    [sym_heading_1_marker] = ACTIONS(140),
    [sym_heading_2_marker] = ACTIONS(142),
    [sym_heading_3_marker] = ACTIONS(145),
    [sym_heading_4_marker] = ACTIONS(148),
    [sym_heading_5_marker] = ACTIONS(151),
    [sym_heading_6_marker] = ACTIONS(154),
    [sym_section_marker] = ACTIONS(157),
    [sym_inline_code] = ACTIONS(131),
    [anon_sym_ATcode] = ACTIONS(160),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(131),
    [aux_sym__text_token1] = ACTIONS(163),
    [sym_task_marker_default] = ACTIONS(166),
    [sym_task_marker_active] = ACTIONS(169),
    [sym_task_marker_done] = ACTIONS(172),
    [sym_task_marker_cancelled] = ACTIONS(175),
    [sym_list_item_marker] = ACTIONS(178),
    [sym_bold_start] = ACTIONS(181),
    [sym_italic_start] = ACTIONS(184),
    [sym_underline_start] = ACTIONS(187),
  },
  [8] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(7),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(43),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(190),
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
    [sym_heading_1_marker] = ACTIONS(192),
    [sym_heading_2_marker] = ACTIONS(21),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [9] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(10),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(10),
    [sym__text] = STATE(43),
    [aux_sym_heading_2_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
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
    [sym_heading_2_marker] = ACTIONS(196),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [10] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(11),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(11),
    [sym__text] = STATE(43),
    [aux_sym_heading_2_repeat1] = STATE(11),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
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
    [sym_heading_2_marker] = ACTIONS(200),
    [sym_heading_3_marker] = ACTIONS(23),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [11] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(11),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(11),
    [sym__text] = STATE(43),
    [aux_sym_heading_2_repeat1] = STATE(11),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
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
    [sym_inline_code] = ACTIONS(207),
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
  },
  [12] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(43),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym__comment_marker_token1] = ACTIONS(265),
    [aux_sym__comment_marker_token2] = ACTIONS(265),
    [sym_string] = ACTIONS(268),
    [sym_number] = ACTIONS(268),
    [sym_ticket] = ACTIONS(268),
    [aux_sym_date_token1] = ACTIONS(271),
    [aux_sym_date_token2] = ACTIONS(271),
    [aux_sym_date_token3] = ACTIONS(271),
    [aux_sym_time_token1] = ACTIONS(274),
    [aux_sym_time_token2] = ACTIONS(274),
    [sym_tag_positive] = ACTIONS(268),
    [sym_tag_negative] = ACTIONS(268),
    [sym_tag_hash] = ACTIONS(268),
    [sym_tag_context] = ACTIONS(268),
    [sym_tag_danger] = ACTIONS(268),
    [sym_tag_identifier] = ACTIONS(268),
    [sym_heading_1_marker] = ACTIONS(277),
    [sym_heading_2_marker] = ACTIONS(277),
    [sym_heading_3_marker] = ACTIONS(277),
    [sym_heading_4_marker] = ACTIONS(279),
    [sym_heading_5_marker] = ACTIONS(282),
    [sym_heading_6_marker] = ACTIONS(285),
    [sym_section_marker] = ACTIONS(288),
    [sym_inline_code] = ACTIONS(268),
    [anon_sym_ATcode] = ACTIONS(291),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(268),
    [aux_sym__text_token1] = ACTIONS(294),
    [sym_task_marker_default] = ACTIONS(297),
    [sym_task_marker_active] = ACTIONS(300),
    [sym_task_marker_done] = ACTIONS(303),
    [sym_task_marker_cancelled] = ACTIONS(306),
    [sym_list_item_marker] = ACTIONS(309),
    [sym_bold_start] = ACTIONS(312),
    [sym_italic_start] = ACTIONS(315),
    [sym_underline_start] = ACTIONS(318),
  },
  [13] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(14),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(14),
    [sym__text] = STATE(43),
    [aux_sym_heading_3_repeat1] = STATE(14),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(321),
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
    [sym_heading_1_marker] = ACTIONS(323),
    [sym_heading_2_marker] = ACTIONS(323),
    [sym_heading_3_marker] = ACTIONS(323),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [14] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(43),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(325),
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
    [sym_heading_1_marker] = ACTIONS(327),
    [sym_heading_2_marker] = ACTIONS(327),
    [sym_heading_3_marker] = ACTIONS(327),
    [sym_heading_4_marker] = ACTIONS(25),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [15] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym_heading_5] = STATE(17),
    [sym_heading_6] = STATE(17),
    [sym_section] = STATE(17),
    [sym__task] = STATE(17),
    [sym_task_default] = STATE(17),
    [sym_task_active] = STATE(17),
    [sym_task_done] = STATE(17),
    [sym_task_cancelled] = STATE(17),
    [sym_list_item] = STATE(17),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(17),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(17),
    [sym__text] = STATE(43),
    [aux_sym_heading_4_repeat1] = STATE(17),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(329),
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
    [sym_heading_1_marker] = ACTIONS(331),
    [sym_heading_2_marker] = ACTIONS(331),
    [sym_heading_3_marker] = ACTIONS(331),
    [sym_heading_4_marker] = ACTIONS(331),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [16] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym_heading_5] = STATE(16),
    [sym_heading_6] = STATE(16),
    [sym_section] = STATE(16),
    [sym__task] = STATE(16),
    [sym_task_default] = STATE(16),
    [sym_task_active] = STATE(16),
    [sym_task_done] = STATE(16),
    [sym_task_cancelled] = STATE(16),
    [sym_list_item] = STATE(16),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(16),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(16),
    [sym__text] = STATE(43),
    [aux_sym_heading_4_repeat1] = STATE(16),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(333),
    [aux_sym__comment_marker_token1] = ACTIONS(335),
    [aux_sym__comment_marker_token2] = ACTIONS(335),
    [sym_string] = ACTIONS(338),
    [sym_number] = ACTIONS(338),
    [sym_ticket] = ACTIONS(338),
    [aux_sym_date_token1] = ACTIONS(341),
    [aux_sym_date_token2] = ACTIONS(341),
    [aux_sym_date_token3] = ACTIONS(341),
    [aux_sym_time_token1] = ACTIONS(344),
    [aux_sym_time_token2] = ACTIONS(344),
    [sym_tag_positive] = ACTIONS(338),
    [sym_tag_negative] = ACTIONS(338),
    [sym_tag_hash] = ACTIONS(338),
    [sym_tag_context] = ACTIONS(338),
    [sym_tag_danger] = ACTIONS(338),
    [sym_tag_identifier] = ACTIONS(338),
    [sym_heading_1_marker] = ACTIONS(347),
    [sym_heading_2_marker] = ACTIONS(347),
    [sym_heading_3_marker] = ACTIONS(347),
    [sym_heading_4_marker] = ACTIONS(347),
    [sym_heading_5_marker] = ACTIONS(349),
    [sym_heading_6_marker] = ACTIONS(352),
    [sym_section_marker] = ACTIONS(355),
    [sym_inline_code] = ACTIONS(338),
    [anon_sym_ATcode] = ACTIONS(358),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(338),
    [aux_sym__text_token1] = ACTIONS(361),
    [sym_task_marker_default] = ACTIONS(364),
    [sym_task_marker_active] = ACTIONS(367),
    [sym_task_marker_done] = ACTIONS(370),
    [sym_task_marker_cancelled] = ACTIONS(373),
    [sym_list_item_marker] = ACTIONS(376),
    [sym_bold_start] = ACTIONS(379),
    [sym_italic_start] = ACTIONS(382),
    [sym_underline_start] = ACTIONS(385),
  },
  [17] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym_heading_5] = STATE(16),
    [sym_heading_6] = STATE(16),
    [sym_section] = STATE(16),
    [sym__task] = STATE(16),
    [sym_task_default] = STATE(16),
    [sym_task_active] = STATE(16),
    [sym_task_done] = STATE(16),
    [sym_task_cancelled] = STATE(16),
    [sym_list_item] = STATE(16),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(16),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(16),
    [sym__text] = STATE(43),
    [aux_sym_heading_4_repeat1] = STATE(16),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(388),
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
    [sym_heading_1_marker] = ACTIONS(390),
    [sym_heading_2_marker] = ACTIONS(390),
    [sym_heading_3_marker] = ACTIONS(390),
    [sym_heading_4_marker] = ACTIONS(390),
    [sym_heading_5_marker] = ACTIONS(27),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [18] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym_heading_6] = STATE(18),
    [sym_section] = STATE(18),
    [sym__task] = STATE(18),
    [sym_task_default] = STATE(18),
    [sym_task_active] = STATE(18),
    [sym_task_done] = STATE(18),
    [sym_task_cancelled] = STATE(18),
    [sym_list_item] = STATE(18),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(18),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(18),
    [sym__text] = STATE(43),
    [aux_sym_heading_5_repeat1] = STATE(18),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(392),
    [aux_sym__comment_marker_token1] = ACTIONS(394),
    [aux_sym__comment_marker_token2] = ACTIONS(394),
    [sym_string] = ACTIONS(397),
    [sym_number] = ACTIONS(397),
    [sym_ticket] = ACTIONS(397),
    [aux_sym_date_token1] = ACTIONS(400),
    [aux_sym_date_token2] = ACTIONS(400),
    [aux_sym_date_token3] = ACTIONS(400),
    [aux_sym_time_token1] = ACTIONS(403),
    [aux_sym_time_token2] = ACTIONS(403),
    [sym_tag_positive] = ACTIONS(397),
    [sym_tag_negative] = ACTIONS(397),
    [sym_tag_hash] = ACTIONS(397),
    [sym_tag_context] = ACTIONS(397),
    [sym_tag_danger] = ACTIONS(397),
    [sym_tag_identifier] = ACTIONS(397),
    [sym_heading_1_marker] = ACTIONS(406),
    [sym_heading_2_marker] = ACTIONS(406),
    [sym_heading_3_marker] = ACTIONS(406),
    [sym_heading_4_marker] = ACTIONS(406),
    [sym_heading_5_marker] = ACTIONS(406),
    [sym_heading_6_marker] = ACTIONS(408),
    [sym_section_marker] = ACTIONS(411),
    [sym_inline_code] = ACTIONS(397),
    [anon_sym_ATcode] = ACTIONS(414),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(397),
    [aux_sym__text_token1] = ACTIONS(417),
    [sym_task_marker_default] = ACTIONS(420),
    [sym_task_marker_active] = ACTIONS(423),
    [sym_task_marker_done] = ACTIONS(426),
    [sym_task_marker_cancelled] = ACTIONS(429),
    [sym_list_item_marker] = ACTIONS(432),
    [sym_bold_start] = ACTIONS(435),
    [sym_italic_start] = ACTIONS(438),
    [sym_underline_start] = ACTIONS(441),
  },
  [19] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym_heading_6] = STATE(20),
    [sym_section] = STATE(20),
    [sym__task] = STATE(20),
    [sym_task_default] = STATE(20),
    [sym_task_active] = STATE(20),
    [sym_task_done] = STATE(20),
    [sym_task_cancelled] = STATE(20),
    [sym_list_item] = STATE(20),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(20),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(20),
    [sym__text] = STATE(43),
    [aux_sym_heading_5_repeat1] = STATE(20),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(444),
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
    [sym_heading_1_marker] = ACTIONS(446),
    [sym_heading_2_marker] = ACTIONS(446),
    [sym_heading_3_marker] = ACTIONS(446),
    [sym_heading_4_marker] = ACTIONS(446),
    [sym_heading_5_marker] = ACTIONS(446),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [20] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym_heading_6] = STATE(18),
    [sym_section] = STATE(18),
    [sym__task] = STATE(18),
    [sym_task_default] = STATE(18),
    [sym_task_active] = STATE(18),
    [sym_task_done] = STATE(18),
    [sym_task_cancelled] = STATE(18),
    [sym_list_item] = STATE(18),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(18),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(18),
    [sym__text] = STATE(43),
    [aux_sym_heading_5_repeat1] = STATE(18),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(448),
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
    [sym_heading_1_marker] = ACTIONS(450),
    [sym_heading_2_marker] = ACTIONS(450),
    [sym_heading_3_marker] = ACTIONS(450),
    [sym_heading_4_marker] = ACTIONS(450),
    [sym_heading_5_marker] = ACTIONS(450),
    [sym_heading_6_marker] = ACTIONS(29),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [21] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(43),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(452),
    [aux_sym__comment_marker_token1] = ACTIONS(454),
    [aux_sym__comment_marker_token2] = ACTIONS(454),
    [sym_string] = ACTIONS(457),
    [sym_number] = ACTIONS(457),
    [sym_ticket] = ACTIONS(457),
    [aux_sym_date_token1] = ACTIONS(460),
    [aux_sym_date_token2] = ACTIONS(460),
    [aux_sym_date_token3] = ACTIONS(460),
    [aux_sym_time_token1] = ACTIONS(463),
    [aux_sym_time_token2] = ACTIONS(463),
    [sym_tag_positive] = ACTIONS(457),
    [sym_tag_negative] = ACTIONS(457),
    [sym_tag_hash] = ACTIONS(457),
    [sym_tag_context] = ACTIONS(457),
    [sym_tag_danger] = ACTIONS(457),
    [sym_tag_identifier] = ACTIONS(457),
    [sym_heading_1_marker] = ACTIONS(466),
    [sym_heading_2_marker] = ACTIONS(466),
    [sym_heading_3_marker] = ACTIONS(466),
    [sym_heading_4_marker] = ACTIONS(466),
    [sym_heading_5_marker] = ACTIONS(466),
    [sym_heading_6_marker] = ACTIONS(466),
    [sym_section_marker] = ACTIONS(468),
    [sym_inline_code] = ACTIONS(457),
    [anon_sym_ATcode] = ACTIONS(471),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(457),
    [aux_sym__text_token1] = ACTIONS(474),
    [sym_task_marker_default] = ACTIONS(477),
    [sym_task_marker_active] = ACTIONS(480),
    [sym_task_marker_done] = ACTIONS(483),
    [sym_task_marker_cancelled] = ACTIONS(486),
    [sym_list_item_marker] = ACTIONS(489),
    [sym_bold_start] = ACTIONS(492),
    [sym_italic_start] = ACTIONS(495),
    [sym_underline_start] = ACTIONS(498),
  },
  [22] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(43),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(501),
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
    [sym_heading_1_marker] = ACTIONS(503),
    [sym_heading_2_marker] = ACTIONS(503),
    [sym_heading_3_marker] = ACTIONS(503),
    [sym_heading_4_marker] = ACTIONS(503),
    [sym_heading_5_marker] = ACTIONS(503),
    [sym_heading_6_marker] = ACTIONS(503),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [23] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym_section] = STATE(22),
    [sym__task] = STATE(22),
    [sym_task_default] = STATE(22),
    [sym_task_active] = STATE(22),
    [sym_task_done] = STATE(22),
    [sym_task_cancelled] = STATE(22),
    [sym_list_item] = STATE(22),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(22),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(22),
    [sym__text] = STATE(43),
    [aux_sym_heading_6_repeat1] = STATE(22),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(505),
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
    [sym_heading_1_marker] = ACTIONS(507),
    [sym_heading_2_marker] = ACTIONS(507),
    [sym_heading_3_marker] = ACTIONS(507),
    [sym_heading_4_marker] = ACTIONS(507),
    [sym_heading_5_marker] = ACTIONS(507),
    [sym_heading_6_marker] = ACTIONS(507),
    [sym_section_marker] = ACTIONS(31),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [24] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(43),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(509),
    [aux_sym__comment_marker_token1] = ACTIONS(511),
    [aux_sym__comment_marker_token2] = ACTIONS(511),
    [sym_string] = ACTIONS(514),
    [sym_number] = ACTIONS(514),
    [sym_ticket] = ACTIONS(514),
    [aux_sym_date_token1] = ACTIONS(517),
    [aux_sym_date_token2] = ACTIONS(517),
    [aux_sym_date_token3] = ACTIONS(517),
    [aux_sym_time_token1] = ACTIONS(520),
    [aux_sym_time_token2] = ACTIONS(520),
    [sym_tag_positive] = ACTIONS(514),
    [sym_tag_negative] = ACTIONS(514),
    [sym_tag_hash] = ACTIONS(514),
    [sym_tag_context] = ACTIONS(514),
    [sym_tag_danger] = ACTIONS(514),
    [sym_tag_identifier] = ACTIONS(514),
    [sym_heading_1_marker] = ACTIONS(523),
    [sym_heading_2_marker] = ACTIONS(523),
    [sym_heading_3_marker] = ACTIONS(523),
    [sym_heading_4_marker] = ACTIONS(523),
    [sym_heading_5_marker] = ACTIONS(523),
    [sym_heading_6_marker] = ACTIONS(523),
    [sym_section_marker] = ACTIONS(523),
    [sym_inline_code] = ACTIONS(514),
    [anon_sym_ATcode] = ACTIONS(525),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(514),
    [aux_sym__text_token1] = ACTIONS(528),
    [sym_task_marker_default] = ACTIONS(531),
    [sym_task_marker_active] = ACTIONS(534),
    [sym_task_marker_done] = ACTIONS(537),
    [sym_task_marker_cancelled] = ACTIONS(540),
    [sym_list_item_marker] = ACTIONS(543),
    [sym_bold_start] = ACTIONS(546),
    [sym_italic_start] = ACTIONS(549),
    [sym_underline_start] = ACTIONS(552),
  },
  [25] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym__task] = STATE(26),
    [sym_task_default] = STATE(26),
    [sym_task_active] = STATE(26),
    [sym_task_done] = STATE(26),
    [sym_task_cancelled] = STATE(26),
    [sym_list_item] = STATE(26),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(26),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(26),
    [sym__text] = STATE(43),
    [aux_sym_section_repeat1] = STATE(26),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(555),
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
    [sym_heading_1_marker] = ACTIONS(557),
    [sym_heading_2_marker] = ACTIONS(557),
    [sym_heading_3_marker] = ACTIONS(557),
    [sym_heading_4_marker] = ACTIONS(557),
    [sym_heading_5_marker] = ACTIONS(557),
    [sym_heading_6_marker] = ACTIONS(557),
    [sym_section_marker] = ACTIONS(557),
    [sym_inline_code] = ACTIONS(13),
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
  },
  [26] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(43),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(43),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(43),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(43),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(43),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(43),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(43),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(43),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(559),
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
    [sym_heading_1_marker] = ACTIONS(561),
    [sym_heading_2_marker] = ACTIONS(561),
    [sym_heading_3_marker] = ACTIONS(561),
    [sym_heading_4_marker] = ACTIONS(561),
    [sym_heading_5_marker] = ACTIONS(561),
    [sym_heading_6_marker] = ACTIONS(561),
    [sym_section_marker] = ACTIONS(561),
    [sym_inline_code] = ACTIONS(13),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
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
    ACTIONS(565), 1,
      aux_sym_task_session_token1,
    ACTIONS(567), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(571), 1,
      sym_task_marker_default,
    ACTIONS(573), 1,
      sym_task_marker_active,
    ACTIONS(575), 1,
      sym_task_marker_done,
    ACTIONS(577), 1,
      sym_task_marker_cancelled,
    ACTIONS(579), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(569), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(49), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
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
    ACTIONS(563), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [109] = 25,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(593), 1,
      aux_sym_task_session_token1,
    ACTIONS(596), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(599), 1,
      aux_sym__text_token1,
    ACTIONS(604), 1,
      sym_task_marker_default,
    ACTIONS(607), 1,
      sym_task_marker_active,
    ACTIONS(610), 1,
      sym_task_marker_done,
    ACTIONS(613), 1,
      sym_task_marker_cancelled,
    ACTIONS(616), 1,
      sym_list_item_marker,
    ACTIONS(619), 1,
      sym_bold_start,
    ACTIONS(622), 1,
      sym_italic_start,
    ACTIONS(625), 1,
      sym_underline_start,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(581), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(590), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(602), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(587), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(49), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
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
    ACTIONS(584), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [218] = 25,
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
    ACTIONS(565), 1,
      aux_sym_task_session_token1,
    ACTIONS(567), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(571), 1,
      sym_task_marker_default,
    ACTIONS(573), 1,
      sym_task_marker_active,
    ACTIONS(575), 1,
      sym_task_marker_done,
    ACTIONS(577), 1,
      sym_task_marker_cancelled,
    ACTIONS(579), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(628), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(49), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
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
    ACTIONS(563), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [327] = 24,
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
    ACTIONS(565), 1,
      aux_sym_task_session_token1,
    ACTIONS(567), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(571), 1,
      sym_task_marker_default,
    ACTIONS(573), 1,
      sym_task_marker_active,
    ACTIONS(575), 1,
      sym_task_marker_done,
    ACTIONS(577), 1,
      sym_task_marker_cancelled,
    ACTIONS(579), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(49), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
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
    ACTIONS(563), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [432] = 24,
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
    ACTIONS(565), 1,
      aux_sym_task_session_token1,
    ACTIONS(567), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(571), 1,
      sym_task_marker_default,
    ACTIONS(573), 1,
      sym_task_marker_active,
    ACTIONS(575), 1,
      sym_task_marker_done,
    ACTIONS(577), 1,
      sym_task_marker_cancelled,
    ACTIONS(579), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(49), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
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
    ACTIONS(563), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [537] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(642), 1,
      aux_sym__text_token1,
    ACTIONS(647), 1,
      sym_list_item_marker,
    ACTIONS(650), 1,
      sym_bold_start,
    ACTIONS(653), 1,
      sym_italic_start,
    ACTIONS(656), 1,
      sym_underline_start,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(630), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(639), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(645), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(636), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(32), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(41), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(633), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [621] = 19,
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
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(32), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(41), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [705] = 19,
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
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(32), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(41), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [789] = 19,
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
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(32), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(41), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [873] = 18,
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
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(35), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(41), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [953] = 18,
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
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(41), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1033] = 18,
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
    ACTIONS(663), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(41), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1113] = 17,
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
    STATE(74), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(50), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(669), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1188] = 17,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(673), 1,
      aux_sym_code_block_token1,
    ACTIONS(675), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(52), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(671), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1263] = 17,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(677), 1,
      aux_sym_code_block_token1,
    ACTIONS(679), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(52), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(671), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1338] = 17,
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
    STATE(73), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(50), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(669), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1413] = 17,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(681), 1,
      aux_sym_code_block_token1,
    ACTIONS(683), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(52), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(671), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1488] = 17,
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
    STATE(57), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(47), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(685), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1563] = 17,
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
    STATE(77), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(50), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(669), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1638] = 17,
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
    STATE(55), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(47), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(685), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1713] = 17,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(687), 1,
      aux_sym_code_block_token1,
    ACTIONS(689), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(52), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(671), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1788] = 17,
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
    STATE(90), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(40), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(691), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1863] = 17,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(693), 1,
      aux_sym_code_block_token1,
    ACTIONS(695), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(52), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(671), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [1938] = 17,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(697), 1,
      aux_sym_code_block_token1,
    ACTIONS(699), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(52), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(671), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [2013] = 17,
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
    STATE(56), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
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
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(47), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(685), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [2088] = 17,
    ACTIONS(713), 1,
      aux_sym_code_block_token1,
    ACTIONS(715), 1,
      aux_sym__text_token1,
    ACTIONS(718), 1,
      sym__eof,
    ACTIONS(720), 1,
      sym_bold_start,
    ACTIONS(723), 1,
      sym_italic_start,
    ACTIONS(726), 1,
      sym_underline_start,
    STATE(95), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(701), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(710), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(707), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(52), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(704), 11,
      sym_string,
      sym_number,
      sym_ticket,
      sym_tag_positive,
      sym_tag_negative,
      sym_tag_hash,
      sym_tag_context,
      sym_tag_danger,
      sym_tag_identifier,
      sym_inline_code,
      sym_external_link,
  [2163] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(733), 1,
      sym__indent,
    STATE(71), 1,
      sym__task_children,
    ACTIONS(729), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(731), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2213] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(733), 1,
      sym__indent,
    STATE(72), 1,
      sym__task_children,
    ACTIONS(735), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(737), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2263] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(743), 1,
      sym__indent,
    STATE(68), 1,
      sym__list_item_children,
    ACTIONS(739), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(741), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2313] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(733), 1,
      sym__indent,
    STATE(70), 1,
      sym__task_children,
    ACTIONS(745), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(747), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2363] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(733), 1,
      sym__indent,
    STATE(69), 1,
      sym__task_children,
    ACTIONS(749), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(751), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2413] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(753), 10,
      sym__indent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(755), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2458] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(757), 10,
      sym__indent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(759), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2503] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(761), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(763), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2547] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(765), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(767), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2591] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(769), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(771), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2635] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(773), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(775), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2679] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(777), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(779), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2723] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(781), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(783), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2767] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(757), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(759), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2811] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(785), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(787), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2855] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(789), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(791), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2899] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(793), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(795), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2943] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(797), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(799), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [2987] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(801), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(803), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [3031] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(805), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(807), 27,
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
      sym_inline_code,
      anon_sym_ATcode,
      sym_external_link,
      aux_sym__text_token1,
  [3075] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(809), 1,
      sym__indent,
    STATE(86), 1,
      sym__task_children,
    ACTIONS(749), 10,
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
    ACTIONS(751), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3120] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(811), 1,
      sym__indent,
    STATE(85), 1,
      sym__list_item_children,
    ACTIONS(739), 10,
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
    ACTIONS(741), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3165] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(809), 1,
      sym__indent,
    STATE(87), 1,
      sym__task_children,
    ACTIONS(729), 10,
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
    ACTIONS(731), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3210] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(809), 1,
      sym__indent,
    STATE(88), 1,
      sym__task_children,
    ACTIONS(735), 10,
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
    ACTIONS(737), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3255] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(809), 1,
      sym__indent,
    STATE(80), 1,
      sym__task_children,
    ACTIONS(745), 10,
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
    ACTIONS(747), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3300] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(757), 11,
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
    ACTIONS(759), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3340] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(753), 11,
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
    ACTIONS(755), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3380] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(797), 10,
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
    ACTIONS(799), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3419] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(761), 10,
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
    ACTIONS(763), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3458] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(777), 10,
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
    ACTIONS(779), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3497] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(757), 10,
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
    ACTIONS(759), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3536] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(815), 10,
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
    ACTIONS(813), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3575] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(789), 10,
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
    ACTIONS(791), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3614] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(793), 10,
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
    ACTIONS(795), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3653] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(801), 10,
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
    ACTIONS(803), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3692] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(805), 10,
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
    ACTIONS(807), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3731] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(819), 10,
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
    ACTIONS(817), 21,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3770] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(821), 1,
      sym__indent,
    STATE(92), 1,
      sym__list_item_children,
    ACTIONS(739), 6,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(741), 19,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3809] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(757), 7,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(759), 19,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3843] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(789), 6,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(791), 19,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3876] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(777), 6,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(779), 19,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3909] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(757), 6,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(759), 19,
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
      sym_inline_code,
      sym_external_link,
      aux_sym__text_token1,
  [3942] = 5,
    ACTIONS(825), 1,
      aux_sym_daterange_token1,
    STATE(101), 1,
      sym_time,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(827), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(823), 18,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [3979] = 3,
    ACTIONS(831), 1,
      aux_sym__emphasis_token1,
    ACTIONS(833), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(829), 20,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4011] = 2,
    ACTIONS(837), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(835), 21,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4041] = 2,
    ACTIONS(841), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(839), 21,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4071] = 2,
    ACTIONS(845), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(843), 21,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4101] = 4,
    ACTIONS(849), 1,
      aux_sym__text_token1,
    STATE(100), 1,
      aux_sym__text_repeat1,
    ACTIONS(852), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(847), 19,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
  [4135] = 2,
    ACTIONS(856), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(854), 21,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4165] = 2,
    ACTIONS(860), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(858), 21,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4195] = 4,
    ACTIONS(864), 1,
      aux_sym__text_token1,
    STATE(100), 1,
      aux_sym__text_repeat1,
    ACTIONS(866), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(862), 19,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
  [4229] = 3,
    ACTIONS(868), 1,
      aux_sym_daterange_token1,
    ACTIONS(827), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(823), 20,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4261] = 3,
    ACTIONS(870), 1,
      aux_sym_daterange_token1,
    ACTIONS(827), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(823), 20,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4293] = 2,
    ACTIONS(874), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(872), 21,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4323] = 2,
    ACTIONS(878), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(876), 20,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4352] = 2,
    ACTIONS(882), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(880), 20,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4381] = 2,
    ACTIONS(874), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(872), 20,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4410] = 2,
    ACTIONS(860), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(858), 20,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4439] = 2,
    ACTIONS(856), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(854), 20,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4468] = 2,
    ACTIONS(886), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(884), 20,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4497] = 2,
    ACTIONS(890), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(888), 20,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4526] = 2,
    ACTIONS(894), 4,
      sym__eof,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(892), 20,
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
      sym_inline_code,
      aux_sym_code_block_token1,
      sym_external_link,
      aux_sym__text_token1,
  [4555] = 7,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(896), 1,
      sym_code_block_end,
    ACTIONS(898), 1,
      aux_sym__text_token1,
    STATE(131), 1,
      aux_sym__text_repeat1,
    STATE(187), 1,
      sym_code_block_content,
    STATE(119), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(124), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4579] = 7,
    ACTIONS(900), 1,
      aux_sym_date_token1,
    ACTIONS(904), 1,
      aux_sym_time_token1,
    ACTIONS(906), 1,
      aux_sym_time_token2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    STATE(136), 1,
      sym_date,
    ACTIONS(902), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(107), 2,
      sym_time,
      sym_datetime,
  [4603] = 7,
    ACTIONS(900), 1,
      aux_sym_date_token1,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(910), 1,
      aux_sym_time_token1,
    ACTIONS(912), 1,
      aux_sym_time_token2,
    STATE(133), 1,
      sym_date,
    ACTIONS(902), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(153), 2,
      sym_time,
      sym_datetime,
  [4627] = 6,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(914), 1,
      aux_sym_date_token1,
    STATE(123), 1,
      sym_date,
    STATE(138), 1,
      sym_datetime,
    ACTIONS(916), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(166), 2,
      sym_daterange,
      sym_datetimerange,
  [4648] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(898), 1,
      aux_sym__text_token1,
    ACTIONS(918), 1,
      sym_code_block_end,
    STATE(131), 1,
      aux_sym__text_repeat1,
    STATE(120), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(124), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4669] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(920), 1,
      sym_code_block_end,
    ACTIONS(922), 1,
      aux_sym__text_token1,
    STATE(131), 1,
      aux_sym__text_repeat1,
    STATE(120), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(124), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4690] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(925), 1,
      aux_sym__text_token1,
    STATE(131), 1,
      aux_sym__text_repeat1,
    ACTIONS(928), 2,
      sym__eof,
      sym__eol,
    STATE(121), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4708] = 6,
    ACTIONS(900), 1,
      aux_sym_date_token1,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    STATE(133), 1,
      sym_date,
    STATE(134), 1,
      sym_datetime,
    STATE(141), 1,
      sym_datetimerange,
    ACTIONS(902), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4728] = 6,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(910), 1,
      aux_sym_time_token1,
    ACTIONS(912), 1,
      aux_sym_time_token2,
    ACTIONS(930), 1,
      aux_sym_daterange_token1,
    STATE(137), 1,
      sym_time,
    ACTIONS(932), 2,
      sym__eof,
      sym__eol,
  [4748] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(934), 1,
      aux_sym__text_token1,
    STATE(131), 1,
      aux_sym__text_repeat1,
    ACTIONS(936), 2,
      sym__eof,
      sym__eol,
    STATE(121), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4766] = 3,
    ACTIONS(858), 1,
      aux_sym_time_token1,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(860), 4,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
      aux_sym_time_token2,
  [4779] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(938), 1,
      aux_sym__text_token1,
    STATE(126), 1,
      aux_sym__text_repeat1,
    ACTIONS(852), 2,
      sym__eof,
      sym__eol,
  [4793] = 4,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(941), 1,
      aux_sym_document_meta_token2,
    ACTIONS(943), 1,
      sym_document_meta_field_key,
    STATE(127), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4807] = 4,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(946), 1,
      aux_sym_document_meta_token2,
    ACTIONS(948), 1,
      sym_document_meta_field_key,
    STATE(130), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4821] = 4,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(914), 1,
      aux_sym_date_token1,
    STATE(152), 1,
      sym_date,
    ACTIONS(916), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4835] = 4,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(948), 1,
      sym_document_meta_field_key,
    ACTIONS(950), 1,
      aux_sym_document_meta_token2,
    STATE(127), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4849] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(952), 1,
      aux_sym__text_token1,
    STATE(126), 1,
      aux_sym__text_repeat1,
    ACTIONS(866), 2,
      sym__eof,
      sym__eol,
  [4863] = 4,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(954), 1,
      aux_sym_date_token1,
    STATE(113), 1,
      sym_date,
    ACTIONS(956), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4877] = 4,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(910), 1,
      aux_sym_time_token1,
    ACTIONS(912), 1,
      aux_sym_time_token2,
    STATE(137), 1,
      sym_time,
  [4890] = 3,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(958), 1,
      aux_sym_daterange_token1,
    ACTIONS(960), 2,
      sym__eof,
      sym__eol,
  [4901] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(874), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [4910] = 4,
    ACTIONS(904), 1,
      aux_sym_time_token1,
    ACTIONS(906), 1,
      aux_sym_time_token2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    STATE(111), 1,
      sym_time,
  [4923] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(856), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [4932] = 3,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(958), 1,
      aux_sym_daterange_token1,
    ACTIONS(932), 2,
      sym__eof,
      sym__eol,
  [4943] = 4,
    ACTIONS(904), 1,
      aux_sym_time_token1,
    ACTIONS(906), 1,
      aux_sym_time_token2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    STATE(114), 1,
      sym_time,
  [4956] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(962), 2,
      sym__eof,
      sym__eol,
  [4964] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(960), 2,
      sym__eof,
      sym__eol,
  [4972] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(964), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(54), 1,
      sym_text_to_eol,
  [4982] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(966), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(161), 1,
      sym_text_to_eol,
  [4992] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(753), 2,
      sym__eof,
      sym__eol,
  [5000] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(968), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [5008] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(966), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(155), 1,
      sym_text_to_eol,
  [5018] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(970), 2,
      sym__eof,
      sym__eol,
  [5026] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(966), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(154), 1,
      sym_text_to_eol,
  [5036] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(972), 2,
      sym__eof,
      sym__eol,
  [5044] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(974), 2,
      sym__eof,
      sym__eol,
  [5052] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(976), 2,
      sym__eof,
      sym__eol,
  [5060] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(890), 2,
      sym__eof,
      sym__eol,
  [5068] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(878), 2,
      sym__eof,
      sym__eol,
  [5076] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(978), 2,
      sym__eof,
      sym__eol,
  [5084] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(980), 2,
      sym__eof,
      sym__eol,
  [5092] = 3,
    ACTIONS(858), 1,
      aux_sym_time_token1,
    ACTIONS(860), 1,
      aux_sym_time_token2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
  [5102] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(966), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(151), 1,
      sym_text_to_eol,
  [5112] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(982), 2,
      aux_sym_document_meta_token2,
      sym_document_meta_field_key,
  [5120] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(966), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(150), 1,
      sym_text_to_eol,
  [5130] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(964), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(53), 1,
      sym_text_to_eol,
  [5140] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(984), 2,
      sym__eof,
      sym__eol,
  [5148] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(966), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(149), 1,
      sym_text_to_eol,
  [5158] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(986), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [5166] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(988), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [5174] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(990), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(175), 1,
      sym_document_meta_field_value,
  [5184] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(932), 2,
      sym__eof,
      sym__eol,
  [5192] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(966), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(140), 1,
      sym_text_to_eol,
  [5202] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(966), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(147), 1,
      sym_text_to_eol,
  [5212] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(992), 1,
      aux_sym_code_block_start_token1,
    ACTIONS(994), 1,
      anon_sym_LF,
  [5222] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(996), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(75), 1,
      sym_text_to_eol,
  [5232] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(996), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(76), 1,
      sym_text_to_eol,
  [5242] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(998), 1,
      ts_builtin_sym_end,
  [5249] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1000), 1,
      aux_sym_document_meta_field_value_token1,
  [5256] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(1002), 1,
      sym_bold_end,
  [5263] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(1004), 1,
      sym__eol,
  [5270] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(1006), 1,
      sym_italic_end,
  [5277] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(1008), 1,
      sym_underline_end,
  [5284] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(1010), 1,
      anon_sym_COLON,
  [5291] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1012), 1,
      anon_sym_LF,
  [5298] = 1,
    ACTIONS(1014), 2,
      sym__eof,
      aux_sym_code_block_token1,
  [5303] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(1016), 1,
      sym_code_block_language,
  [5310] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(1018), 1,
      sym__eol,
  [5317] = 1,
    ACTIONS(1020), 2,
      sym__eof,
      aux_sym_code_block_token1,
  [5322] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1022), 1,
      sym_underline_content,
  [5329] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1024), 1,
      sym_italic_content,
  [5336] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1026), 1,
      sym_bold_content,
  [5343] = 2,
    ACTIONS(908), 1,
      aux_sym_code_block_token1,
    ACTIONS(1028), 1,
      sym_code_block_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 109,
  [SMALL_STATE(29)] = 218,
  [SMALL_STATE(30)] = 327,
  [SMALL_STATE(31)] = 432,
  [SMALL_STATE(32)] = 537,
  [SMALL_STATE(33)] = 621,
  [SMALL_STATE(34)] = 705,
  [SMALL_STATE(35)] = 789,
  [SMALL_STATE(36)] = 873,
  [SMALL_STATE(37)] = 953,
  [SMALL_STATE(38)] = 1033,
  [SMALL_STATE(39)] = 1113,
  [SMALL_STATE(40)] = 1188,
  [SMALL_STATE(41)] = 1263,
  [SMALL_STATE(42)] = 1338,
  [SMALL_STATE(43)] = 1413,
  [SMALL_STATE(44)] = 1488,
  [SMALL_STATE(45)] = 1563,
  [SMALL_STATE(46)] = 1638,
  [SMALL_STATE(47)] = 1713,
  [SMALL_STATE(48)] = 1788,
  [SMALL_STATE(49)] = 1863,
  [SMALL_STATE(50)] = 1938,
  [SMALL_STATE(51)] = 2013,
  [SMALL_STATE(52)] = 2088,
  [SMALL_STATE(53)] = 2163,
  [SMALL_STATE(54)] = 2213,
  [SMALL_STATE(55)] = 2263,
  [SMALL_STATE(56)] = 2313,
  [SMALL_STATE(57)] = 2363,
  [SMALL_STATE(58)] = 2413,
  [SMALL_STATE(59)] = 2458,
  [SMALL_STATE(60)] = 2503,
  [SMALL_STATE(61)] = 2547,
  [SMALL_STATE(62)] = 2591,
  [SMALL_STATE(63)] = 2635,
  [SMALL_STATE(64)] = 2679,
  [SMALL_STATE(65)] = 2723,
  [SMALL_STATE(66)] = 2767,
  [SMALL_STATE(67)] = 2811,
  [SMALL_STATE(68)] = 2855,
  [SMALL_STATE(69)] = 2899,
  [SMALL_STATE(70)] = 2943,
  [SMALL_STATE(71)] = 2987,
  [SMALL_STATE(72)] = 3031,
  [SMALL_STATE(73)] = 3075,
  [SMALL_STATE(74)] = 3120,
  [SMALL_STATE(75)] = 3165,
  [SMALL_STATE(76)] = 3210,
  [SMALL_STATE(77)] = 3255,
  [SMALL_STATE(78)] = 3300,
  [SMALL_STATE(79)] = 3340,
  [SMALL_STATE(80)] = 3380,
  [SMALL_STATE(81)] = 3419,
  [SMALL_STATE(82)] = 3458,
  [SMALL_STATE(83)] = 3497,
  [SMALL_STATE(84)] = 3536,
  [SMALL_STATE(85)] = 3575,
  [SMALL_STATE(86)] = 3614,
  [SMALL_STATE(87)] = 3653,
  [SMALL_STATE(88)] = 3692,
  [SMALL_STATE(89)] = 3731,
  [SMALL_STATE(90)] = 3770,
  [SMALL_STATE(91)] = 3809,
  [SMALL_STATE(92)] = 3843,
  [SMALL_STATE(93)] = 3876,
  [SMALL_STATE(94)] = 3909,
  [SMALL_STATE(95)] = 3942,
  [SMALL_STATE(96)] = 3979,
  [SMALL_STATE(97)] = 4011,
  [SMALL_STATE(98)] = 4041,
  [SMALL_STATE(99)] = 4071,
  [SMALL_STATE(100)] = 4101,
  [SMALL_STATE(101)] = 4135,
  [SMALL_STATE(102)] = 4165,
  [SMALL_STATE(103)] = 4195,
  [SMALL_STATE(104)] = 4229,
  [SMALL_STATE(105)] = 4261,
  [SMALL_STATE(106)] = 4293,
  [SMALL_STATE(107)] = 4323,
  [SMALL_STATE(108)] = 4352,
  [SMALL_STATE(109)] = 4381,
  [SMALL_STATE(110)] = 4410,
  [SMALL_STATE(111)] = 4439,
  [SMALL_STATE(112)] = 4468,
  [SMALL_STATE(113)] = 4497,
  [SMALL_STATE(114)] = 4526,
  [SMALL_STATE(115)] = 4555,
  [SMALL_STATE(116)] = 4579,
  [SMALL_STATE(117)] = 4603,
  [SMALL_STATE(118)] = 4627,
  [SMALL_STATE(119)] = 4648,
  [SMALL_STATE(120)] = 4669,
  [SMALL_STATE(121)] = 4690,
  [SMALL_STATE(122)] = 4708,
  [SMALL_STATE(123)] = 4728,
  [SMALL_STATE(124)] = 4748,
  [SMALL_STATE(125)] = 4766,
  [SMALL_STATE(126)] = 4779,
  [SMALL_STATE(127)] = 4793,
  [SMALL_STATE(128)] = 4807,
  [SMALL_STATE(129)] = 4821,
  [SMALL_STATE(130)] = 4835,
  [SMALL_STATE(131)] = 4849,
  [SMALL_STATE(132)] = 4863,
  [SMALL_STATE(133)] = 4877,
  [SMALL_STATE(134)] = 4890,
  [SMALL_STATE(135)] = 4901,
  [SMALL_STATE(136)] = 4910,
  [SMALL_STATE(137)] = 4923,
  [SMALL_STATE(138)] = 4932,
  [SMALL_STATE(139)] = 4943,
  [SMALL_STATE(140)] = 4956,
  [SMALL_STATE(141)] = 4964,
  [SMALL_STATE(142)] = 4972,
  [SMALL_STATE(143)] = 4982,
  [SMALL_STATE(144)] = 4992,
  [SMALL_STATE(145)] = 5000,
  [SMALL_STATE(146)] = 5008,
  [SMALL_STATE(147)] = 5018,
  [SMALL_STATE(148)] = 5026,
  [SMALL_STATE(149)] = 5036,
  [SMALL_STATE(150)] = 5044,
  [SMALL_STATE(151)] = 5052,
  [SMALL_STATE(152)] = 5060,
  [SMALL_STATE(153)] = 5068,
  [SMALL_STATE(154)] = 5076,
  [SMALL_STATE(155)] = 5084,
  [SMALL_STATE(156)] = 5092,
  [SMALL_STATE(157)] = 5102,
  [SMALL_STATE(158)] = 5112,
  [SMALL_STATE(159)] = 5120,
  [SMALL_STATE(160)] = 5130,
  [SMALL_STATE(161)] = 5140,
  [SMALL_STATE(162)] = 5148,
  [SMALL_STATE(163)] = 5158,
  [SMALL_STATE(164)] = 5166,
  [SMALL_STATE(165)] = 5174,
  [SMALL_STATE(166)] = 5184,
  [SMALL_STATE(167)] = 5192,
  [SMALL_STATE(168)] = 5202,
  [SMALL_STATE(169)] = 5212,
  [SMALL_STATE(170)] = 5222,
  [SMALL_STATE(171)] = 5232,
  [SMALL_STATE(172)] = 5242,
  [SMALL_STATE(173)] = 5249,
  [SMALL_STATE(174)] = 5256,
  [SMALL_STATE(175)] = 5263,
  [SMALL_STATE(176)] = 5270,
  [SMALL_STATE(177)] = 5277,
  [SMALL_STATE(178)] = 5284,
  [SMALL_STATE(179)] = 5291,
  [SMALL_STATE(180)] = 5298,
  [SMALL_STATE(181)] = 5303,
  [SMALL_STATE(182)] = 5310,
  [SMALL_STATE(183)] = 5317,
  [SMALL_STATE(184)] = 5322,
  [SMALL_STATE(185)] = 5329,
  [SMALL_STATE(186)] = 5336,
  [SMALL_STATE(187)] = 5343,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(173),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(146),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(148),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(157),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(159),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(162),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(167),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(168),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(169),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(160),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(142),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(186),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(185),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(184),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 3, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 3, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(173),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(43),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(102),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(106),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(148),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(157),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(159),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(162),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(167),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(168),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(169),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(103),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(44),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(51),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(160),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(142),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(46),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(186),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(185),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(184),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 3, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 3, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(173),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(43),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(102),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(106),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(157),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(159),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(162),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(167),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(168),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(169),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(103),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(44),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(51),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(160),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(142),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(46),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(186),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(185),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(184),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(173),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(43),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(102),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(106),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(159),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(162),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(167),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(168),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(169),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(103),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(44),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(51),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(160),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(142),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(46),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(186),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(185),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(184),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 3, .production_id = 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 3, .production_id = 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 3, .production_id = 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 3, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(173),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(43),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(102),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(106),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(162),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(167),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(168),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(169),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(103),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(44),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(51),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(160),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(142),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(46),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(186),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(185),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(184),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(173),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(43),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(102),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(106),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(167),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(168),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(169),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(103),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(44),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(51),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(160),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(142),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(46),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(186),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(185),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(184),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 3, .production_id = 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 3, .production_id = 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(173),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(43),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(102),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(106),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(168),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(169),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(103),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(44),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(51),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(160),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(142),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(46),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(186),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(185),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(184),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 3, .production_id = 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 3, .production_id = 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(173),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(43),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(102),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(106),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(169),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(103),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(44),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(51),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(160),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(142),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(46),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(186),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(185),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(184),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(173),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(49),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(102),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(106),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(122),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(118),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(103),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(42),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(45),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(170),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(171),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(39),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(186),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(185),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(184),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(173),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(41),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(102),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(106),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(103),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(48),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(186),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(185),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(184),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(173),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(52),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(102),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(106),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(103),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(186),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(185),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(184),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 2),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 2),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 2),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 2),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_to_eol, 1),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_to_eol, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_children, 3),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__task_children, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 3),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_children, 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_children, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 2),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title_basic, 3),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title_basic, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 3),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 3),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_session, 3),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_session, 3),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_schedule, 3),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_schedule, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline, 1),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 1),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 1),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold, 3),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic, 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic, 3),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_underline, 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_underline, 3),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(100),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 1),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetimerange, 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetimerange, 3),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 2),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_daterange, 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daterange, 3),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timerange, 3),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timerange, 3),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_content, 1),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2), SHIFT_REPEAT(131),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2), SHIFT_REPEAT(131),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [938] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(126),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2), SHIFT_REPEAT(178),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 2),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field, 4, .production_id = 2),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 4),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_text_line, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [998] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field_value, 1),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
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
