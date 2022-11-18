#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 9
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
  sym_bold = 9,
  sym_italic = 10,
  sym_underline = 11,
  sym_string = 12,
  sym_number = 13,
  sym_ticket = 14,
  aux_sym_date_token1 = 15,
  aux_sym_date_token2 = 16,
  aux_sym_date_token3 = 17,
  aux_sym_daterange_token1 = 18,
  aux_sym_time_token1 = 19,
  aux_sym_time_token2 = 20,
  sym_tag_positive = 21,
  sym_tag_negative = 22,
  sym_tag_hash = 23,
  sym_tag_context = 24,
  sym_tag_danger = 25,
  sym_tag_identifier = 26,
  sym_heading_1_marker = 27,
  sym_heading_2_marker = 28,
  sym_heading_3_marker = 29,
  sym_heading_4_marker = 30,
  sym_heading_5_marker = 31,
  sym_heading_6_marker = 32,
  sym_section_marker = 33,
  aux_sym_task_session_token1 = 34,
  aux_sym_task_schedule_token1 = 35,
  sym_inline_code = 36,
  sym_code_block_language = 37,
  anon_sym_ATcode = 38,
  aux_sym_code_block_start_token1 = 39,
  anon_sym_LF = 40,
  sym_code_block_end = 41,
  aux_sym_code_block_token1 = 42,
  sym_external_link = 43,
  aux_sym__text_token1 = 44,
  sym__eof = 45,
  sym__eol = 46,
  sym__indent = 47,
  sym__dedent = 48,
  sym_task_marker_default = 49,
  sym_task_marker_active = 50,
  sym_task_marker_done = 51,
  sym_task_marker_cancelled = 52,
  sym_list_item_marker = 53,
  sym_document = 54,
  sym_document_title_basic = 55,
  sym_document_meta = 56,
  sym_document_meta_field = 57,
  sym_document_meta_field_value = 58,
  sym__comment_marker = 59,
  sym_comment = 60,
  sym_date = 61,
  sym_daterange = 62,
  sym_time = 63,
  sym_timerange = 64,
  sym_datetime = 65,
  sym_datetimerange = 66,
  sym_heading_1 = 67,
  sym_heading_2 = 68,
  sym_heading_3 = 69,
  sym_heading_4 = 70,
  sym_heading_5 = 71,
  sym_heading_6 = 72,
  sym_section = 73,
  sym__task = 74,
  sym_task_default = 75,
  sym_task_active = 76,
  sym_task_done = 77,
  sym_task_cancelled = 78,
  sym__task_children = 79,
  sym_task_session = 80,
  sym_task_schedule = 81,
  sym_list_item = 82,
  sym__list_item_children = 83,
  sym_code_block_content = 84,
  sym_code_block_start = 85,
  sym_code_block = 86,
  sym__inline = 87,
  sym_text_to_eol = 88,
  sym_text_line = 89,
  sym__text = 90,
  sym__raw_text_line = 91,
  aux_sym_document_repeat1 = 92,
  aux_sym_document_meta_repeat1 = 93,
  aux_sym_heading_1_repeat1 = 94,
  aux_sym_heading_2_repeat1 = 95,
  aux_sym_heading_3_repeat1 = 96,
  aux_sym_heading_4_repeat1 = 97,
  aux_sym_heading_5_repeat1 = 98,
  aux_sym_heading_6_repeat1 = 99,
  aux_sym_section_repeat1 = 100,
  aux_sym__task_children_repeat1 = 101,
  aux_sym__list_item_children_repeat1 = 102,
  aux_sym_code_block_content_repeat1 = 103,
  aux_sym_text_line_repeat1 = 104,
  aux_sym__text_repeat1 = 105,
  aux_sym__raw_text_line_repeat1 = 106,
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
  [sym_bold] = "bold",
  [sym_italic] = "italic",
  [sym_underline] = "underline",
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
  [sym_document] = "document",
  [sym_document_title_basic] = "document_title_basic",
  [sym_document_meta] = "document_meta",
  [sym_document_meta_field] = "document_meta_field",
  [sym_document_meta_field_value] = "document_meta_field_value",
  [sym__comment_marker] = "_comment_marker",
  [sym_comment] = "comment",
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
  [sym_bold] = sym_bold,
  [sym_italic] = sym_italic,
  [sym_underline] = sym_underline,
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
  [sym_document] = sym_document,
  [sym_document_title_basic] = sym_document_title_basic,
  [sym_document_meta] = sym_document_meta,
  [sym_document_meta_field] = sym_document_meta_field,
  [sym_document_meta_field_value] = sym_document_meta_field_value,
  [sym__comment_marker] = sym__comment_marker,
  [sym_comment] = sym_comment,
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
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 42,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 57,
  [61] = 57,
  [62] = 57,
  [63] = 57,
  [64] = 64,
  [65] = 59,
  [66] = 66,
  [67] = 64,
  [68] = 57,
  [69] = 66,
  [70] = 35,
  [71] = 40,
  [72] = 41,
  [73] = 36,
  [74] = 42,
  [75] = 43,
  [76] = 45,
  [77] = 44,
  [78] = 53,
  [79] = 52,
  [80] = 80,
  [81] = 47,
  [82] = 82,
  [83] = 42,
  [84] = 39,
  [85] = 42,
  [86] = 50,
  [87] = 51,
  [88] = 42,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 96,
  [98] = 91,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 90,
  [104] = 104,
  [105] = 105,
  [106] = 104,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 90,
  [115] = 95,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 117,
  [121] = 92,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 124,
  [126] = 91,
  [127] = 96,
  [128] = 128,
  [129] = 102,
  [130] = 130,
  [131] = 43,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 101,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 90,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 146,
  [157] = 135,
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
  [170] = 170,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(72)
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == '`') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(156);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(170);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(171);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(218);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(160);
      if (lookahead == ',' ||
          lookahead == '.') SKIP(33)
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(172);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(31)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '@') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(83);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(33)
      if (lookahead == '\n') ADVANCE(161);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 61:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(125);
      END_STATE();
    case 64:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(126);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(13);
      END_STATE();
    case 69:
      if (eof) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(69)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(169);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(193);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 70:
      if (eof) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(71)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(192);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 71:
      if (eof) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(71)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(193);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(72)
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '`') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(74)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '@') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(74)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '@') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_document_meta_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_document_meta_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (lookahead == '-') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_document_meta_field_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__comment_marker_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__comment_marker_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_bold);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_bold);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_bold);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_bold);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_italic);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_italic);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_italic);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_italic);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_underline);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_underline);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_underline);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_underline);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ticket);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ticket);
      if (lookahead == ':') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_date_token3);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(64);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(240);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(233);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(56);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_negative);
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
          lookahead != ' ') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_heading_1_marker);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_heading_2_marker);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_heading_3_marker);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_heading_4_marker);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_heading_5_marker);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_heading_6_marker);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_heading_6_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_section_marker);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_section_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_task_session_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_task_schedule_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_inline_code);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_ATcode);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_code_block_start_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_code_block_end);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_code_block_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_external_link);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(193);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(169);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(193);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(170);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(171);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(172);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '$') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(238);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '*') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '+') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(239);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(240);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(242);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(241);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(242);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(241);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(241);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '_') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '`') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '`') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'h') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(218);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
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
          lookahead != ' ') ADVANCE(127);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(125);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(126);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 70, .external_lex_state = 2},
  [2] = {.lex_state = 69, .external_lex_state = 2},
  [3] = {.lex_state = 69, .external_lex_state = 2},
  [4] = {.lex_state = 69, .external_lex_state = 2},
  [5] = {.lex_state = 69, .external_lex_state = 2},
  [6] = {.lex_state = 69, .external_lex_state = 2},
  [7] = {.lex_state = 69, .external_lex_state = 2},
  [8] = {.lex_state = 69, .external_lex_state = 2},
  [9] = {.lex_state = 69, .external_lex_state = 2},
  [10] = {.lex_state = 69, .external_lex_state = 2},
  [11] = {.lex_state = 69, .external_lex_state = 2},
  [12] = {.lex_state = 69, .external_lex_state = 2},
  [13] = {.lex_state = 69, .external_lex_state = 2},
  [14] = {.lex_state = 69, .external_lex_state = 2},
  [15] = {.lex_state = 69, .external_lex_state = 2},
  [16] = {.lex_state = 69, .external_lex_state = 2},
  [17] = {.lex_state = 69, .external_lex_state = 2},
  [18] = {.lex_state = 69, .external_lex_state = 2},
  [19] = {.lex_state = 69, .external_lex_state = 2},
  [20] = {.lex_state = 69, .external_lex_state = 2},
  [21] = {.lex_state = 69, .external_lex_state = 2},
  [22] = {.lex_state = 69, .external_lex_state = 2},
  [23] = {.lex_state = 69, .external_lex_state = 2},
  [24] = {.lex_state = 69, .external_lex_state = 2},
  [25] = {.lex_state = 69, .external_lex_state = 2},
  [26] = {.lex_state = 69, .external_lex_state = 2},
  [27] = {.lex_state = 25, .external_lex_state = 3},
  [28] = {.lex_state = 25, .external_lex_state = 3},
  [29] = {.lex_state = 25, .external_lex_state = 3},
  [30] = {.lex_state = 25, .external_lex_state = 4},
  [31] = {.lex_state = 25, .external_lex_state = 4},
  [32] = {.lex_state = 26, .external_lex_state = 5},
  [33] = {.lex_state = 26, .external_lex_state = 5},
  [34] = {.lex_state = 26, .external_lex_state = 5},
  [35] = {.lex_state = 69, .external_lex_state = 6},
  [36] = {.lex_state = 69, .external_lex_state = 6},
  [37] = {.lex_state = 26, .external_lex_state = 7},
  [38] = {.lex_state = 26, .external_lex_state = 7},
  [39] = {.lex_state = 69, .external_lex_state = 6},
  [40] = {.lex_state = 69, .external_lex_state = 6},
  [41] = {.lex_state = 69, .external_lex_state = 6},
  [42] = {.lex_state = 69, .external_lex_state = 6},
  [43] = {.lex_state = 69, .external_lex_state = 6},
  [44] = {.lex_state = 69, .external_lex_state = 2},
  [45] = {.lex_state = 69, .external_lex_state = 2},
  [46] = {.lex_state = 69, .external_lex_state = 2},
  [47] = {.lex_state = 69, .external_lex_state = 2},
  [48] = {.lex_state = 69, .external_lex_state = 2},
  [49] = {.lex_state = 69, .external_lex_state = 2},
  [50] = {.lex_state = 69, .external_lex_state = 2},
  [51] = {.lex_state = 69, .external_lex_state = 2},
  [52] = {.lex_state = 69, .external_lex_state = 2},
  [53] = {.lex_state = 69, .external_lex_state = 2},
  [54] = {.lex_state = 69, .external_lex_state = 2},
  [55] = {.lex_state = 69, .external_lex_state = 2},
  [56] = {.lex_state = 69, .external_lex_state = 2},
  [57] = {.lex_state = 26, .external_lex_state = 8},
  [58] = {.lex_state = 26, .external_lex_state = 8},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 26, .external_lex_state = 8},
  [61] = {.lex_state = 26, .external_lex_state = 8},
  [62] = {.lex_state = 26, .external_lex_state = 8},
  [63] = {.lex_state = 26, .external_lex_state = 8},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 26},
  [67] = {.lex_state = 26},
  [68] = {.lex_state = 26, .external_lex_state = 8},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 25, .external_lex_state = 9},
  [71] = {.lex_state = 25, .external_lex_state = 9},
  [72] = {.lex_state = 25, .external_lex_state = 9},
  [73] = {.lex_state = 25, .external_lex_state = 9},
  [74] = {.lex_state = 25, .external_lex_state = 9},
  [75] = {.lex_state = 25, .external_lex_state = 9},
  [76] = {.lex_state = 25, .external_lex_state = 3},
  [77] = {.lex_state = 25, .external_lex_state = 3},
  [78] = {.lex_state = 25, .external_lex_state = 3},
  [79] = {.lex_state = 25, .external_lex_state = 3},
  [80] = {.lex_state = 25, .external_lex_state = 3},
  [81] = {.lex_state = 25, .external_lex_state = 3},
  [82] = {.lex_state = 25, .external_lex_state = 3},
  [83] = {.lex_state = 25, .external_lex_state = 3},
  [84] = {.lex_state = 26, .external_lex_state = 10},
  [85] = {.lex_state = 26, .external_lex_state = 10},
  [86] = {.lex_state = 26, .external_lex_state = 5},
  [87] = {.lex_state = 26, .external_lex_state = 5},
  [88] = {.lex_state = 26, .external_lex_state = 5},
  [89] = {.lex_state = 30, .external_lex_state = 8},
  [90] = {.lex_state = 30, .external_lex_state = 8},
  [91] = {.lex_state = 30, .external_lex_state = 8},
  [92] = {.lex_state = 26, .external_lex_state = 8},
  [93] = {.lex_state = 30, .external_lex_state = 8},
  [94] = {.lex_state = 30, .external_lex_state = 8},
  [95] = {.lex_state = 26, .external_lex_state = 8},
  [96] = {.lex_state = 30, .external_lex_state = 8},
  [97] = {.lex_state = 26, .external_lex_state = 8},
  [98] = {.lex_state = 26, .external_lex_state = 8},
  [99] = {.lex_state = 26, .external_lex_state = 8},
  [100] = {.lex_state = 26, .external_lex_state = 8},
  [101] = {.lex_state = 26, .external_lex_state = 8},
  [102] = {.lex_state = 26, .external_lex_state = 8},
  [103] = {.lex_state = 26, .external_lex_state = 8},
  [104] = {.lex_state = 73},
  [105] = {.lex_state = 27},
  [106] = {.lex_state = 73},
  [107] = {.lex_state = 27},
  [108] = {.lex_state = 73},
  [109] = {.lex_state = 27},
  [110] = {.lex_state = 28, .external_lex_state = 11},
  [111] = {.lex_state = 28, .external_lex_state = 11},
  [112] = {.lex_state = 73, .external_lex_state = 11},
  [113] = {.lex_state = 73},
  [114] = {.lex_state = 73, .external_lex_state = 11},
  [115] = {.lex_state = 28, .external_lex_state = 11},
  [116] = {.lex_state = 31},
  [117] = {.lex_state = 73},
  [118] = {.lex_state = 31},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 73},
  [121] = {.lex_state = 28, .external_lex_state = 11},
  [122] = {.lex_state = 73, .external_lex_state = 11},
  [123] = {.lex_state = 73, .external_lex_state = 11},
  [124] = {.lex_state = 73},
  [125] = {.lex_state = 73},
  [126] = {.lex_state = 73, .external_lex_state = 11},
  [127] = {.lex_state = 73, .external_lex_state = 11},
  [128] = {.lex_state = 73},
  [129] = {.lex_state = 73, .external_lex_state = 11},
  [130] = {.lex_state = 27},
  [131] = {.lex_state = 73, .external_lex_state = 11},
  [132] = {.lex_state = 27},
  [133] = {.lex_state = 27},
  [134] = {.lex_state = 73, .external_lex_state = 11},
  [135] = {.lex_state = 32},
  [136] = {.lex_state = 73, .external_lex_state = 11},
  [137] = {.lex_state = 73, .external_lex_state = 11},
  [138] = {.lex_state = 73, .external_lex_state = 11},
  [139] = {.lex_state = 73, .external_lex_state = 11},
  [140] = {.lex_state = 73, .external_lex_state = 11},
  [141] = {.lex_state = 73, .external_lex_state = 11},
  [142] = {.lex_state = 73, .external_lex_state = 11},
  [143] = {.lex_state = 73, .external_lex_state = 11},
  [144] = {.lex_state = 73, .external_lex_state = 11},
  [145] = {.lex_state = 73},
  [146] = {.lex_state = 32},
  [147] = {.lex_state = 32},
  [148] = {.lex_state = 32},
  [149] = {.lex_state = 32},
  [150] = {.lex_state = 32},
  [151] = {.lex_state = 73, .external_lex_state = 11},
  [152] = {.lex_state = 32},
  [153] = {.lex_state = 32},
  [154] = {.lex_state = 32},
  [155] = {.lex_state = 29},
  [156] = {.lex_state = 32},
  [157] = {.lex_state = 32},
  [158] = {.lex_state = 32},
  [159] = {.lex_state = 32},
  [160] = {.lex_state = 31},
  [161] = {.lex_state = 73, .external_lex_state = 12},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 73},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 73, .external_lex_state = 12},
  [166] = {.lex_state = 73, .external_lex_state = 8},
  [167] = {.lex_state = 73},
  [168] = {.lex_state = 73, .external_lex_state = 8},
  [169] = {.lex_state = 73},
  [170] = {.lex_state = 73},
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
};

static const bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
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
  },
  [2] = {
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
    [ts_external_token_list_item_marker] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
  },
  [4] = {
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
  },
  [5] = {
    [ts_external_token__eof] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_list_item_marker] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
    [ts_external_token_list_item_marker] = true,
  },
  [7] = {
    [ts_external_token_list_item_marker] = true,
  },
  [8] = {
    [ts_external_token__eof] = true,
  },
  [9] = {
    [ts_external_token__eof] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
  },
  [10] = {
    [ts_external_token__eof] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_list_item_marker] = true,
  },
  [11] = {
    [ts_external_token__eof] = true,
    [ts_external_token__eol] = true,
  },
  [12] = {
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
    [sym_bold] = ACTIONS(1),
    [sym_italic] = ACTIONS(1),
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
  },
  [1] = {
    [sym_document] = STATE(163),
    [sym_document_title_basic] = STATE(2),
    [sym_document_meta] = STATE(2),
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(68),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_document_title_basic_marker] = ACTIONS(7),
    [aux_sym_document_meta_token1] = ACTIONS(9),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
  },
  [2] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(5),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(5),
    [sym__text] = STATE(68),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
  },
  [3] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(3),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(3),
    [sym__text] = STATE(68),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym__comment_marker_token1] = ACTIONS(51),
    [aux_sym__comment_marker_token2] = ACTIONS(51),
    [sym_bold] = ACTIONS(54),
    [sym_italic] = ACTIONS(54),
    [sym_underline] = ACTIONS(54),
    [sym_string] = ACTIONS(54),
    [sym_number] = ACTIONS(54),
    [sym_ticket] = ACTIONS(54),
    [aux_sym_date_token1] = ACTIONS(57),
    [aux_sym_date_token2] = ACTIONS(57),
    [aux_sym_date_token3] = ACTIONS(57),
    [aux_sym_time_token1] = ACTIONS(60),
    [aux_sym_time_token2] = ACTIONS(60),
    [sym_tag_positive] = ACTIONS(54),
    [sym_tag_negative] = ACTIONS(54),
    [sym_tag_hash] = ACTIONS(54),
    [sym_tag_context] = ACTIONS(54),
    [sym_tag_danger] = ACTIONS(54),
    [sym_tag_identifier] = ACTIONS(54),
    [sym_heading_1_marker] = ACTIONS(63),
    [sym_heading_2_marker] = ACTIONS(66),
    [sym_heading_3_marker] = ACTIONS(69),
    [sym_heading_4_marker] = ACTIONS(72),
    [sym_heading_5_marker] = ACTIONS(75),
    [sym_heading_6_marker] = ACTIONS(78),
    [sym_section_marker] = ACTIONS(81),
    [sym_inline_code] = ACTIONS(54),
    [anon_sym_ATcode] = ACTIONS(84),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(54),
    [aux_sym__text_token1] = ACTIONS(87),
    [sym_task_marker_default] = ACTIONS(90),
    [sym_task_marker_active] = ACTIONS(93),
    [sym_task_marker_done] = ACTIONS(96),
    [sym_task_marker_cancelled] = ACTIONS(99),
    [sym_list_item_marker] = ACTIONS(102),
  },
  [4] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(3),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(3),
    [sym__text] = STATE(68),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
  },
  [5] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(3),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(3),
    [sym__text] = STATE(68),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(105),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
  },
  [6] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(8),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(8),
    [sym__text] = STATE(68),
    [aux_sym_heading_1_repeat1] = STATE(8),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(107),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(109),
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
  },
  [7] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(7),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(68),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(111),
    [aux_sym__comment_marker_token1] = ACTIONS(113),
    [aux_sym__comment_marker_token2] = ACTIONS(113),
    [sym_bold] = ACTIONS(116),
    [sym_italic] = ACTIONS(116),
    [sym_underline] = ACTIONS(116),
    [sym_string] = ACTIONS(116),
    [sym_number] = ACTIONS(116),
    [sym_ticket] = ACTIONS(116),
    [aux_sym_date_token1] = ACTIONS(119),
    [aux_sym_date_token2] = ACTIONS(119),
    [aux_sym_date_token3] = ACTIONS(119),
    [aux_sym_time_token1] = ACTIONS(122),
    [aux_sym_time_token2] = ACTIONS(122),
    [sym_tag_positive] = ACTIONS(116),
    [sym_tag_negative] = ACTIONS(116),
    [sym_tag_hash] = ACTIONS(116),
    [sym_tag_context] = ACTIONS(116),
    [sym_tag_danger] = ACTIONS(116),
    [sym_tag_identifier] = ACTIONS(116),
    [sym_heading_1_marker] = ACTIONS(125),
    [sym_heading_2_marker] = ACTIONS(127),
    [sym_heading_3_marker] = ACTIONS(130),
    [sym_heading_4_marker] = ACTIONS(133),
    [sym_heading_5_marker] = ACTIONS(136),
    [sym_heading_6_marker] = ACTIONS(139),
    [sym_section_marker] = ACTIONS(142),
    [sym_inline_code] = ACTIONS(116),
    [anon_sym_ATcode] = ACTIONS(145),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(116),
    [aux_sym__text_token1] = ACTIONS(148),
    [sym_task_marker_default] = ACTIONS(151),
    [sym_task_marker_active] = ACTIONS(154),
    [sym_task_marker_done] = ACTIONS(157),
    [sym_task_marker_cancelled] = ACTIONS(160),
    [sym_list_item_marker] = ACTIONS(163),
  },
  [8] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(7),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(68),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(166),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(168),
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
  },
  [9] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(9),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(9),
    [sym__text] = STATE(68),
    [aux_sym_heading_2_repeat1] = STATE(9),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym__comment_marker_token1] = ACTIONS(172),
    [aux_sym__comment_marker_token2] = ACTIONS(172),
    [sym_bold] = ACTIONS(175),
    [sym_italic] = ACTIONS(175),
    [sym_underline] = ACTIONS(175),
    [sym_string] = ACTIONS(175),
    [sym_number] = ACTIONS(175),
    [sym_ticket] = ACTIONS(175),
    [aux_sym_date_token1] = ACTIONS(178),
    [aux_sym_date_token2] = ACTIONS(178),
    [aux_sym_date_token3] = ACTIONS(178),
    [aux_sym_time_token1] = ACTIONS(181),
    [aux_sym_time_token2] = ACTIONS(181),
    [sym_tag_positive] = ACTIONS(175),
    [sym_tag_negative] = ACTIONS(175),
    [sym_tag_hash] = ACTIONS(175),
    [sym_tag_context] = ACTIONS(175),
    [sym_tag_danger] = ACTIONS(175),
    [sym_tag_identifier] = ACTIONS(175),
    [sym_heading_1_marker] = ACTIONS(184),
    [sym_heading_2_marker] = ACTIONS(184),
    [sym_heading_3_marker] = ACTIONS(186),
    [sym_heading_4_marker] = ACTIONS(189),
    [sym_heading_5_marker] = ACTIONS(192),
    [sym_heading_6_marker] = ACTIONS(195),
    [sym_section_marker] = ACTIONS(198),
    [sym_inline_code] = ACTIONS(175),
    [anon_sym_ATcode] = ACTIONS(201),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(175),
    [aux_sym__text_token1] = ACTIONS(204),
    [sym_task_marker_default] = ACTIONS(207),
    [sym_task_marker_active] = ACTIONS(210),
    [sym_task_marker_done] = ACTIONS(213),
    [sym_task_marker_cancelled] = ACTIONS(216),
    [sym_list_item_marker] = ACTIONS(219),
  },
  [10] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(11),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(11),
    [sym__text] = STATE(68),
    [aux_sym_heading_2_repeat1] = STATE(11),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(222),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(224),
    [sym_heading_2_marker] = ACTIONS(224),
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
  },
  [11] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(9),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(9),
    [sym__text] = STATE(68),
    [aux_sym_heading_2_repeat1] = STATE(9),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(226),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(228),
    [sym_heading_2_marker] = ACTIONS(228),
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
  },
  [12] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(68),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(230),
    [aux_sym__comment_marker_token1] = ACTIONS(232),
    [aux_sym__comment_marker_token2] = ACTIONS(232),
    [sym_bold] = ACTIONS(235),
    [sym_italic] = ACTIONS(235),
    [sym_underline] = ACTIONS(235),
    [sym_string] = ACTIONS(235),
    [sym_number] = ACTIONS(235),
    [sym_ticket] = ACTIONS(235),
    [aux_sym_date_token1] = ACTIONS(238),
    [aux_sym_date_token2] = ACTIONS(238),
    [aux_sym_date_token3] = ACTIONS(238),
    [aux_sym_time_token1] = ACTIONS(241),
    [aux_sym_time_token2] = ACTIONS(241),
    [sym_tag_positive] = ACTIONS(235),
    [sym_tag_negative] = ACTIONS(235),
    [sym_tag_hash] = ACTIONS(235),
    [sym_tag_context] = ACTIONS(235),
    [sym_tag_danger] = ACTIONS(235),
    [sym_tag_identifier] = ACTIONS(235),
    [sym_heading_1_marker] = ACTIONS(244),
    [sym_heading_2_marker] = ACTIONS(244),
    [sym_heading_3_marker] = ACTIONS(244),
    [sym_heading_4_marker] = ACTIONS(246),
    [sym_heading_5_marker] = ACTIONS(249),
    [sym_heading_6_marker] = ACTIONS(252),
    [sym_section_marker] = ACTIONS(255),
    [sym_inline_code] = ACTIONS(235),
    [anon_sym_ATcode] = ACTIONS(258),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(235),
    [aux_sym__text_token1] = ACTIONS(261),
    [sym_task_marker_default] = ACTIONS(264),
    [sym_task_marker_active] = ACTIONS(267),
    [sym_task_marker_done] = ACTIONS(270),
    [sym_task_marker_cancelled] = ACTIONS(273),
    [sym_list_item_marker] = ACTIONS(276),
  },
  [13] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(14),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(14),
    [sym__text] = STATE(68),
    [aux_sym_heading_3_repeat1] = STATE(14),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(281),
    [sym_heading_2_marker] = ACTIONS(281),
    [sym_heading_3_marker] = ACTIONS(281),
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
  },
  [14] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
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
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(68),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(283),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(285),
    [sym_heading_2_marker] = ACTIONS(285),
    [sym_heading_3_marker] = ACTIONS(285),
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
  },
  [15] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym_heading_5] = STATE(15),
    [sym_heading_6] = STATE(15),
    [sym_section] = STATE(15),
    [sym__task] = STATE(15),
    [sym_task_default] = STATE(15),
    [sym_task_active] = STATE(15),
    [sym_task_done] = STATE(15),
    [sym_task_cancelled] = STATE(15),
    [sym_list_item] = STATE(15),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(15),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(15),
    [sym__text] = STATE(68),
    [aux_sym_heading_4_repeat1] = STATE(15),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym__comment_marker_token1] = ACTIONS(289),
    [aux_sym__comment_marker_token2] = ACTIONS(289),
    [sym_bold] = ACTIONS(292),
    [sym_italic] = ACTIONS(292),
    [sym_underline] = ACTIONS(292),
    [sym_string] = ACTIONS(292),
    [sym_number] = ACTIONS(292),
    [sym_ticket] = ACTIONS(292),
    [aux_sym_date_token1] = ACTIONS(295),
    [aux_sym_date_token2] = ACTIONS(295),
    [aux_sym_date_token3] = ACTIONS(295),
    [aux_sym_time_token1] = ACTIONS(298),
    [aux_sym_time_token2] = ACTIONS(298),
    [sym_tag_positive] = ACTIONS(292),
    [sym_tag_negative] = ACTIONS(292),
    [sym_tag_hash] = ACTIONS(292),
    [sym_tag_context] = ACTIONS(292),
    [sym_tag_danger] = ACTIONS(292),
    [sym_tag_identifier] = ACTIONS(292),
    [sym_heading_1_marker] = ACTIONS(301),
    [sym_heading_2_marker] = ACTIONS(301),
    [sym_heading_3_marker] = ACTIONS(301),
    [sym_heading_4_marker] = ACTIONS(301),
    [sym_heading_5_marker] = ACTIONS(303),
    [sym_heading_6_marker] = ACTIONS(306),
    [sym_section_marker] = ACTIONS(309),
    [sym_inline_code] = ACTIONS(292),
    [anon_sym_ATcode] = ACTIONS(312),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(292),
    [aux_sym__text_token1] = ACTIONS(315),
    [sym_task_marker_default] = ACTIONS(318),
    [sym_task_marker_active] = ACTIONS(321),
    [sym_task_marker_done] = ACTIONS(324),
    [sym_task_marker_cancelled] = ACTIONS(327),
    [sym_list_item_marker] = ACTIONS(330),
  },
  [16] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym_heading_5] = STATE(17),
    [sym_heading_6] = STATE(17),
    [sym_section] = STATE(17),
    [sym__task] = STATE(17),
    [sym_task_default] = STATE(17),
    [sym_task_active] = STATE(17),
    [sym_task_done] = STATE(17),
    [sym_task_cancelled] = STATE(17),
    [sym_list_item] = STATE(17),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(17),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(17),
    [sym__text] = STATE(68),
    [aux_sym_heading_4_repeat1] = STATE(17),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(333),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(335),
    [sym_heading_2_marker] = ACTIONS(335),
    [sym_heading_3_marker] = ACTIONS(335),
    [sym_heading_4_marker] = ACTIONS(335),
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
  },
  [17] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym_heading_5] = STATE(15),
    [sym_heading_6] = STATE(15),
    [sym_section] = STATE(15),
    [sym__task] = STATE(15),
    [sym_task_default] = STATE(15),
    [sym_task_active] = STATE(15),
    [sym_task_done] = STATE(15),
    [sym_task_cancelled] = STATE(15),
    [sym_list_item] = STATE(15),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(15),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(15),
    [sym__text] = STATE(68),
    [aux_sym_heading_4_repeat1] = STATE(15),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(337),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(339),
    [sym_heading_2_marker] = ACTIONS(339),
    [sym_heading_3_marker] = ACTIONS(339),
    [sym_heading_4_marker] = ACTIONS(339),
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
  },
  [18] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym_heading_6] = STATE(19),
    [sym_section] = STATE(19),
    [sym__task] = STATE(19),
    [sym_task_default] = STATE(19),
    [sym_task_active] = STATE(19),
    [sym_task_done] = STATE(19),
    [sym_task_cancelled] = STATE(19),
    [sym_list_item] = STATE(19),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(19),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(19),
    [sym__text] = STATE(68),
    [aux_sym_heading_5_repeat1] = STATE(19),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(343),
    [sym_heading_2_marker] = ACTIONS(343),
    [sym_heading_3_marker] = ACTIONS(343),
    [sym_heading_4_marker] = ACTIONS(343),
    [sym_heading_5_marker] = ACTIONS(343),
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
  },
  [19] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym_heading_6] = STATE(20),
    [sym_section] = STATE(20),
    [sym__task] = STATE(20),
    [sym_task_default] = STATE(20),
    [sym_task_active] = STATE(20),
    [sym_task_done] = STATE(20),
    [sym_task_cancelled] = STATE(20),
    [sym_list_item] = STATE(20),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(20),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(20),
    [sym__text] = STATE(68),
    [aux_sym_heading_5_repeat1] = STATE(20),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(347),
    [sym_heading_2_marker] = ACTIONS(347),
    [sym_heading_3_marker] = ACTIONS(347),
    [sym_heading_4_marker] = ACTIONS(347),
    [sym_heading_5_marker] = ACTIONS(347),
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
  },
  [20] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym_heading_6] = STATE(20),
    [sym_section] = STATE(20),
    [sym__task] = STATE(20),
    [sym_task_default] = STATE(20),
    [sym_task_active] = STATE(20),
    [sym_task_done] = STATE(20),
    [sym_task_cancelled] = STATE(20),
    [sym_list_item] = STATE(20),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(20),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(20),
    [sym__text] = STATE(68),
    [aux_sym_heading_5_repeat1] = STATE(20),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(349),
    [aux_sym__comment_marker_token1] = ACTIONS(351),
    [aux_sym__comment_marker_token2] = ACTIONS(351),
    [sym_bold] = ACTIONS(354),
    [sym_italic] = ACTIONS(354),
    [sym_underline] = ACTIONS(354),
    [sym_string] = ACTIONS(354),
    [sym_number] = ACTIONS(354),
    [sym_ticket] = ACTIONS(354),
    [aux_sym_date_token1] = ACTIONS(357),
    [aux_sym_date_token2] = ACTIONS(357),
    [aux_sym_date_token3] = ACTIONS(357),
    [aux_sym_time_token1] = ACTIONS(360),
    [aux_sym_time_token2] = ACTIONS(360),
    [sym_tag_positive] = ACTIONS(354),
    [sym_tag_negative] = ACTIONS(354),
    [sym_tag_hash] = ACTIONS(354),
    [sym_tag_context] = ACTIONS(354),
    [sym_tag_danger] = ACTIONS(354),
    [sym_tag_identifier] = ACTIONS(354),
    [sym_heading_1_marker] = ACTIONS(363),
    [sym_heading_2_marker] = ACTIONS(363),
    [sym_heading_3_marker] = ACTIONS(363),
    [sym_heading_4_marker] = ACTIONS(363),
    [sym_heading_5_marker] = ACTIONS(363),
    [sym_heading_6_marker] = ACTIONS(365),
    [sym_section_marker] = ACTIONS(368),
    [sym_inline_code] = ACTIONS(354),
    [anon_sym_ATcode] = ACTIONS(371),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(354),
    [aux_sym__text_token1] = ACTIONS(374),
    [sym_task_marker_default] = ACTIONS(377),
    [sym_task_marker_active] = ACTIONS(380),
    [sym_task_marker_done] = ACTIONS(383),
    [sym_task_marker_cancelled] = ACTIONS(386),
    [sym_list_item_marker] = ACTIONS(389),
  },
  [21] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(68),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(392),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(394),
    [sym_heading_2_marker] = ACTIONS(394),
    [sym_heading_3_marker] = ACTIONS(394),
    [sym_heading_4_marker] = ACTIONS(394),
    [sym_heading_5_marker] = ACTIONS(394),
    [sym_heading_6_marker] = ACTIONS(394),
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
  },
  [22] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(68),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(396),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(398),
    [sym_heading_2_marker] = ACTIONS(398),
    [sym_heading_3_marker] = ACTIONS(398),
    [sym_heading_4_marker] = ACTIONS(398),
    [sym_heading_5_marker] = ACTIONS(398),
    [sym_heading_6_marker] = ACTIONS(398),
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
  },
  [23] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(68),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym__comment_marker_token1] = ACTIONS(402),
    [aux_sym__comment_marker_token2] = ACTIONS(402),
    [sym_bold] = ACTIONS(405),
    [sym_italic] = ACTIONS(405),
    [sym_underline] = ACTIONS(405),
    [sym_string] = ACTIONS(405),
    [sym_number] = ACTIONS(405),
    [sym_ticket] = ACTIONS(405),
    [aux_sym_date_token1] = ACTIONS(408),
    [aux_sym_date_token2] = ACTIONS(408),
    [aux_sym_date_token3] = ACTIONS(408),
    [aux_sym_time_token1] = ACTIONS(411),
    [aux_sym_time_token2] = ACTIONS(411),
    [sym_tag_positive] = ACTIONS(405),
    [sym_tag_negative] = ACTIONS(405),
    [sym_tag_hash] = ACTIONS(405),
    [sym_tag_context] = ACTIONS(405),
    [sym_tag_danger] = ACTIONS(405),
    [sym_tag_identifier] = ACTIONS(405),
    [sym_heading_1_marker] = ACTIONS(414),
    [sym_heading_2_marker] = ACTIONS(414),
    [sym_heading_3_marker] = ACTIONS(414),
    [sym_heading_4_marker] = ACTIONS(414),
    [sym_heading_5_marker] = ACTIONS(414),
    [sym_heading_6_marker] = ACTIONS(414),
    [sym_section_marker] = ACTIONS(416),
    [sym_inline_code] = ACTIONS(405),
    [anon_sym_ATcode] = ACTIONS(419),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(405),
    [aux_sym__text_token1] = ACTIONS(422),
    [sym_task_marker_default] = ACTIONS(425),
    [sym_task_marker_active] = ACTIONS(428),
    [sym_task_marker_done] = ACTIONS(431),
    [sym_task_marker_cancelled] = ACTIONS(434),
    [sym_list_item_marker] = ACTIONS(437),
  },
  [24] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym__task] = STATE(26),
    [sym_task_default] = STATE(26),
    [sym_task_active] = STATE(26),
    [sym_task_done] = STATE(26),
    [sym_task_cancelled] = STATE(26),
    [sym_list_item] = STATE(26),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(26),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(26),
    [sym__text] = STATE(68),
    [aux_sym_section_repeat1] = STATE(26),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(440),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_1_marker] = ACTIONS(442),
    [sym_heading_2_marker] = ACTIONS(442),
    [sym_heading_3_marker] = ACTIONS(442),
    [sym_heading_4_marker] = ACTIONS(442),
    [sym_heading_5_marker] = ACTIONS(442),
    [sym_heading_6_marker] = ACTIONS(442),
    [sym_section_marker] = ACTIONS(442),
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
  },
  [25] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(68),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(444),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(13),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
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
    [sym_heading_6_marker] = ACTIONS(446),
    [sym_section_marker] = ACTIONS(446),
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
  },
  [26] = {
    [sym__comment_marker] = STATE(164),
    [sym_comment] = STATE(68),
    [sym_date] = STATE(89),
    [sym_daterange] = STATE(68),
    [sym_time] = STATE(94),
    [sym_timerange] = STATE(68),
    [sym_datetime] = STATE(93),
    [sym_datetimerange] = STATE(68),
    [sym__task] = STATE(26),
    [sym_task_default] = STATE(26),
    [sym_task_active] = STATE(26),
    [sym_task_done] = STATE(26),
    [sym_task_cancelled] = STATE(26),
    [sym_list_item] = STATE(26),
    [sym_code_block_start] = STATE(105),
    [sym_code_block] = STATE(26),
    [sym__inline] = STATE(68),
    [sym_text_line] = STATE(26),
    [sym__text] = STATE(68),
    [aux_sym_section_repeat1] = STATE(26),
    [aux_sym_text_line_repeat1] = STATE(68),
    [aux_sym__text_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(448),
    [aux_sym__comment_marker_token1] = ACTIONS(450),
    [aux_sym__comment_marker_token2] = ACTIONS(450),
    [sym_bold] = ACTIONS(453),
    [sym_italic] = ACTIONS(453),
    [sym_underline] = ACTIONS(453),
    [sym_string] = ACTIONS(453),
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
    [sym_heading_6_marker] = ACTIONS(462),
    [sym_section_marker] = ACTIONS(462),
    [sym_inline_code] = ACTIONS(453),
    [anon_sym_ATcode] = ACTIONS(464),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(453),
    [aux_sym__text_token1] = ACTIONS(467),
    [sym_task_marker_default] = ACTIONS(470),
    [sym_task_marker_active] = ACTIONS(473),
    [sym_task_marker_done] = ACTIONS(476),
    [sym_task_marker_cancelled] = ACTIONS(479),
    [sym_list_item_marker] = ACTIONS(482),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(487), 1,
      aux_sym_task_session_token1,
    ACTIONS(489), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(493), 1,
      sym_task_marker_default,
    ACTIONS(495), 1,
      sym_task_marker_active,
    ACTIONS(497), 1,
      sym_task_marker_done,
    ACTIONS(499), 1,
      sym_task_marker_cancelled,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(491), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(62), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    STATE(29), 9,
      sym__task,
      sym_task_default,
      sym_task_active,
      sym_task_done,
      sym_task_cancelled,
      sym_task_session,
      sym_task_schedule,
      sym_text_line,
      aux_sym__task_children_repeat1,
    ACTIONS(485), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [93] = 20,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(487), 1,
      aux_sym_task_session_token1,
    ACTIONS(489), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(493), 1,
      sym_task_marker_default,
    ACTIONS(495), 1,
      sym_task_marker_active,
    ACTIONS(497), 1,
      sym_task_marker_done,
    ACTIONS(499), 1,
      sym_task_marker_cancelled,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(501), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(62), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    STATE(29), 9,
      sym__task,
      sym_task_default,
      sym_task_active,
      sym_task_done,
      sym_task_cancelled,
      sym_task_session,
      sym_task_schedule,
      sym_text_line,
      aux_sym__task_children_repeat1,
    ACTIONS(485), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [186] = 20,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(515), 1,
      aux_sym_task_session_token1,
    ACTIONS(518), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(521), 1,
      aux_sym__text_token1,
    ACTIONS(526), 1,
      sym_task_marker_default,
    ACTIONS(529), 1,
      sym_task_marker_active,
    ACTIONS(532), 1,
      sym_task_marker_done,
    ACTIONS(535), 1,
      sym_task_marker_cancelled,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
      sym__comment_marker,
    ACTIONS(503), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(512), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(524), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(509), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(62), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    STATE(29), 9,
      sym__task,
      sym_task_default,
      sym_task_active,
      sym_task_done,
      sym_task_cancelled,
      sym_task_session,
      sym_task_schedule,
      sym_text_line,
      aux_sym__task_children_repeat1,
    ACTIONS(506), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [279] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(487), 1,
      aux_sym_task_session_token1,
    ACTIONS(489), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(493), 1,
      sym_task_marker_default,
    ACTIONS(495), 1,
      sym_task_marker_active,
    ACTIONS(497), 1,
      sym_task_marker_done,
    ACTIONS(499), 1,
      sym_task_marker_cancelled,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(62), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    STATE(28), 9,
      sym__task,
      sym_task_default,
      sym_task_active,
      sym_task_done,
      sym_task_cancelled,
      sym_task_session,
      sym_task_schedule,
      sym_text_line,
      aux_sym__task_children_repeat1,
    ACTIONS(485), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [368] = 19,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(487), 1,
      aux_sym_task_session_token1,
    ACTIONS(489), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(493), 1,
      sym_task_marker_default,
    ACTIONS(495), 1,
      sym_task_marker_active,
    ACTIONS(497), 1,
      sym_task_marker_done,
    ACTIONS(499), 1,
      sym_task_marker_cancelled,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(62), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    STATE(27), 9,
      sym__task,
      sym_task_default,
      sym_task_active,
      sym_task_done,
      sym_task_cancelled,
      sym_task_session,
      sym_task_schedule,
      sym_text_line,
      aux_sym__task_children_repeat1,
    ACTIONS(485), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [457] = 15,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(542), 1,
      sym_list_item_marker,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(540), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(34), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(61), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(538), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [529] = 15,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(542), 1,
      sym_list_item_marker,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(544), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(34), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(61), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(538), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [601] = 15,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(558), 1,
      aux_sym__text_token1,
    ACTIONS(563), 1,
      sym_list_item_marker,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
      sym__comment_marker,
    ACTIONS(546), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(555), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(561), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(552), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(34), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(61), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(549), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [673] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(570), 1,
      sym__indent,
    STATE(45), 1,
      sym__task_children,
    ACTIONS(566), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(568), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [723] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(570), 1,
      sym__indent,
    STATE(44), 1,
      sym__task_children,
    ACTIONS(572), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(574), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [773] = 14,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(542), 1,
      sym_list_item_marker,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(61), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(538), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [841] = 14,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(542), 1,
      sym_list_item_marker,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(61), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(538), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [909] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(580), 1,
      sym__indent,
    STATE(50), 1,
      sym__list_item_children,
    ACTIONS(576), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(578), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [959] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(570), 1,
      sym__indent,
    STATE(52), 1,
      sym__task_children,
    ACTIONS(582), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(584), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1009] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(570), 1,
      sym__indent,
    STATE(53), 1,
      sym__task_children,
    ACTIONS(586), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(588), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1059] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(590), 7,
      sym__indent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(592), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1104] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(594), 7,
      sym__indent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(596), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1149] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(598), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(600), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1193] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(602), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(604), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1237] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(606), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(608), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1281] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(610), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(612), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1325] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(614), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(616), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1369] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(618), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(620), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1413] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(622), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(624), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1457] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(626), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(628), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1501] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(630), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(632), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1545] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(634), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(636), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1589] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(638), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(640), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1633] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(642), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(644), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1677] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(590), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(592), 30,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1721] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(648), 1,
      aux_sym_code_block_token1,
    ACTIONS(650), 1,
      sym__eof,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(58), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(646), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1784] = 13,
    ACTIONS(664), 1,
      aux_sym_code_block_token1,
    ACTIONS(666), 1,
      aux_sym__text_token1,
    ACTIONS(669), 1,
      sym__eof,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
      sym__comment_marker,
    ACTIONS(652), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(661), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(658), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(58), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(655), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1847] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(39), 1,
      sym_text_line,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(63), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(671), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1910] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(673), 1,
      aux_sym_code_block_token1,
    ACTIONS(675), 1,
      sym__eof,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(58), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(646), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [1973] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(677), 1,
      aux_sym_code_block_token1,
    ACTIONS(679), 1,
      sym__eof,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(58), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(646), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2036] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(681), 1,
      aux_sym_code_block_token1,
    ACTIONS(683), 1,
      sym__eof,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(58), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(646), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2099] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(685), 1,
      aux_sym_code_block_token1,
    ACTIONS(687), 1,
      sym__eof,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(58), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(646), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2162] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(36), 1,
      sym_text_line,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(63), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(671), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2225] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(84), 1,
      sym_text_line,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(57), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(689), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2288] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(72), 1,
      sym_text_line,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(60), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(691), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2351] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(73), 1,
      sym_text_line,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(60), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(691), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2414] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(693), 1,
      aux_sym_code_block_token1,
    ACTIONS(695), 1,
      sym__eof,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(58), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(646), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2477] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(41), 1,
      sym_text_line,
    STATE(89), 1,
      sym_date,
    STATE(92), 1,
      aux_sym__text_repeat1,
    STATE(93), 1,
      sym_datetime,
    STATE(94), 1,
      sym_time,
    STATE(164), 1,
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
    STATE(63), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(671), 14,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2540] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(697), 1,
      sym__indent,
    STATE(76), 1,
      sym__task_children,
    ACTIONS(566), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(568), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2584] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(697), 1,
      sym__indent,
    STATE(79), 1,
      sym__task_children,
    ACTIONS(582), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(584), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2628] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(697), 1,
      sym__indent,
    STATE(78), 1,
      sym__task_children,
    ACTIONS(586), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(588), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2672] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(697), 1,
      sym__indent,
    STATE(77), 1,
      sym__task_children,
    ACTIONS(572), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(574), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2716] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(590), 7,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(592), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2755] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(594), 7,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(596), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2794] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(602), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(604), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2832] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(598), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(600), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2870] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(634), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(636), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2908] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(630), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(632), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2946] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(701), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(699), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [2984] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(610), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(612), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3022] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(705), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(703), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3060] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(590), 6,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
    ACTIONS(592), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3098] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(707), 1,
      sym__indent,
    STATE(86), 1,
      sym__list_item_children,
    ACTIONS(576), 3,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
    ACTIONS(578), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3137] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(590), 4,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
    ACTIONS(592), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3171] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(622), 3,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
    ACTIONS(624), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3204] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(626), 3,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
    ACTIONS(628), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3237] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(590), 3,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
    ACTIONS(592), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3270] = 5,
    ACTIONS(711), 1,
      aux_sym_daterange_token1,
    ACTIONS(713), 1,
      sym__eof,
    STATE(91), 1,
      sym_time,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(709), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3307] = 2,
    ACTIONS(717), 1,
      sym__eof,
    ACTIONS(715), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3337] = 2,
    ACTIONS(721), 1,
      sym__eof,
    ACTIONS(719), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3367] = 4,
    ACTIONS(725), 1,
      aux_sym__text_token1,
    ACTIONS(727), 1,
      sym__eof,
    STATE(95), 1,
      aux_sym__text_repeat1,
    ACTIONS(723), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3401] = 3,
    ACTIONS(713), 1,
      sym__eof,
    ACTIONS(729), 1,
      aux_sym_daterange_token1,
    ACTIONS(709), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3433] = 3,
    ACTIONS(713), 1,
      sym__eof,
    ACTIONS(731), 1,
      aux_sym_daterange_token1,
    ACTIONS(709), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3465] = 4,
    ACTIONS(735), 1,
      aux_sym__text_token1,
    ACTIONS(738), 1,
      sym__eof,
    STATE(95), 1,
      aux_sym__text_repeat1,
    ACTIONS(733), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3499] = 2,
    ACTIONS(742), 1,
      sym__eof,
    ACTIONS(740), 24,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3529] = 2,
    ACTIONS(742), 1,
      sym__eof,
    ACTIONS(740), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3558] = 2,
    ACTIONS(721), 1,
      sym__eof,
    ACTIONS(719), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3587] = 2,
    ACTIONS(746), 1,
      sym__eof,
    ACTIONS(744), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3616] = 2,
    ACTIONS(750), 1,
      sym__eof,
    ACTIONS(748), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3645] = 2,
    ACTIONS(754), 1,
      sym__eof,
    ACTIONS(752), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3674] = 2,
    ACTIONS(758), 1,
      sym__eof,
    ACTIONS(756), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3703] = 2,
    ACTIONS(717), 1,
      sym__eof,
    ACTIONS(715), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_bold,
      sym_italic,
      sym_underline,
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
  [3732] = 7,
    ACTIONS(760), 1,
      aux_sym_date_token1,
    ACTIONS(764), 1,
      aux_sym_time_token1,
    ACTIONS(766), 1,
      aux_sym_time_token2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    STATE(124), 1,
      sym_date,
    ACTIONS(762), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(129), 2,
      sym_time,
      sym_datetime,
  [3756] = 7,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(770), 1,
      sym_code_block_end,
    ACTIONS(772), 1,
      aux_sym__text_token1,
    STATE(121), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
      sym_code_block_content,
    STATE(109), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(110), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [3780] = 7,
    ACTIONS(760), 1,
      aux_sym_date_token1,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(774), 1,
      aux_sym_time_token1,
    ACTIONS(776), 1,
      aux_sym_time_token2,
    STATE(125), 1,
      sym_date,
    ACTIONS(762), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(102), 2,
      sym_time,
      sym_datetime,
  [3804] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(778), 1,
      sym_code_block_end,
    ACTIONS(780), 1,
      aux_sym__text_token1,
    STATE(121), 1,
      aux_sym__text_repeat1,
    STATE(107), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(110), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [3825] = 6,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(783), 1,
      aux_sym_date_token1,
    STATE(112), 1,
      sym_date,
    STATE(123), 1,
      sym_datetime,
    ACTIONS(785), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(142), 2,
      sym_daterange,
      sym_datetimerange,
  [3846] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(772), 1,
      aux_sym__text_token1,
    ACTIONS(787), 1,
      sym_code_block_end,
    STATE(121), 1,
      aux_sym__text_repeat1,
    STATE(107), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(110), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [3867] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(789), 1,
      aux_sym__text_token1,
    STATE(121), 1,
      aux_sym__text_repeat1,
    ACTIONS(791), 2,
      sym__eof,
      sym__eol,
    STATE(111), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [3885] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(793), 1,
      aux_sym__text_token1,
    STATE(121), 1,
      aux_sym__text_repeat1,
    ACTIONS(796), 2,
      sym__eof,
      sym__eol,
    STATE(111), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [3903] = 6,
    ACTIONS(764), 1,
      aux_sym_time_token1,
    ACTIONS(766), 1,
      aux_sym_time_token2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(798), 1,
      aux_sym_daterange_token1,
    STATE(126), 1,
      sym_time,
    ACTIONS(800), 2,
      sym__eof,
      sym__eol,
  [3923] = 6,
    ACTIONS(760), 1,
      aux_sym_date_token1,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    STATE(122), 1,
      sym_datetime,
    STATE(124), 1,
      sym_date,
    STATE(134), 1,
      sym_datetimerange,
    ACTIONS(762), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [3943] = 3,
    ACTIONS(715), 1,
      aux_sym_time_token1,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(717), 4,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
      aux_sym_time_token2,
  [3956] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(802), 1,
      aux_sym__text_token1,
    STATE(115), 1,
      aux_sym__text_repeat1,
    ACTIONS(738), 2,
      sym__eof,
      sym__eol,
  [3970] = 4,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(805), 1,
      aux_sym_document_meta_token2,
    ACTIONS(807), 1,
      sym_document_meta_field_key,
    STATE(119), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [3984] = 4,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(783), 1,
      aux_sym_date_token1,
    STATE(141), 1,
      sym_date,
    ACTIONS(785), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [3998] = 4,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(809), 1,
      aux_sym_document_meta_token2,
    ACTIONS(811), 1,
      sym_document_meta_field_key,
    STATE(118), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4012] = 4,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(807), 1,
      sym_document_meta_field_key,
    ACTIONS(814), 1,
      aux_sym_document_meta_token2,
    STATE(118), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4026] = 4,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(816), 1,
      aux_sym_date_token1,
    STATE(101), 1,
      sym_date,
    ACTIONS(818), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4040] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(820), 1,
      aux_sym__text_token1,
    STATE(115), 1,
      aux_sym__text_repeat1,
    ACTIONS(727), 2,
      sym__eof,
      sym__eol,
  [4054] = 3,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(822), 1,
      aux_sym_daterange_token1,
    ACTIONS(824), 2,
      sym__eof,
      sym__eol,
  [4065] = 3,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(822), 1,
      aux_sym_daterange_token1,
    ACTIONS(800), 2,
      sym__eof,
      sym__eol,
  [4076] = 4,
    ACTIONS(764), 1,
      aux_sym_time_token1,
    ACTIONS(766), 1,
      aux_sym_time_token2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    STATE(126), 1,
      sym_time,
  [4089] = 4,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(774), 1,
      aux_sym_time_token1,
    ACTIONS(776), 1,
      aux_sym_time_token2,
    STATE(98), 1,
      sym_time,
  [4102] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(721), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [4111] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(742), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [4120] = 4,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(774), 1,
      aux_sym_time_token1,
    ACTIONS(776), 1,
      aux_sym_time_token2,
    STATE(100), 1,
      sym_time,
  [4133] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(758), 2,
      sym__eof,
      sym__eol,
  [4141] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(826), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [4149] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(594), 2,
      sym__eof,
      sym__eol,
  [4157] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(828), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [4165] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(830), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [4173] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(824), 2,
      sym__eof,
      sym__eol,
  [4181] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(832), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(35), 1,
      sym_text_to_eol,
  [4191] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(834), 2,
      sym__eof,
      sym__eol,
  [4199] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(836), 2,
      sym__eof,
      sym__eol,
  [4207] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(838), 2,
      sym__eof,
      sym__eol,
  [4215] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(840), 2,
      sym__eof,
      sym__eol,
  [4223] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(842), 2,
      sym__eof,
      sym__eol,
  [4231] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(754), 2,
      sym__eof,
      sym__eol,
  [4239] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(800), 2,
      sym__eof,
      sym__eol,
  [4247] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(844), 2,
      sym__eof,
      sym__eol,
  [4255] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(846), 2,
      sym__eof,
      sym__eol,
  [4263] = 3,
    ACTIONS(715), 1,
      aux_sym_time_token1,
    ACTIONS(717), 1,
      aux_sym_time_token2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
  [4273] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(832), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(40), 1,
      sym_text_to_eol,
  [4283] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(848), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(151), 1,
      sym_text_to_eol,
  [4293] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(850), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(165), 1,
      sym_document_meta_field_value,
  [4303] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(848), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(144), 1,
      sym_text_to_eol,
  [4313] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(848), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(143), 1,
      sym_text_to_eol,
  [4323] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(852), 2,
      sym__eof,
      sym__eol,
  [4331] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(848), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(140), 1,
      sym_text_to_eol,
  [4341] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(848), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(139), 1,
      sym_text_to_eol,
  [4351] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(848), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(138), 1,
      sym_text_to_eol,
  [4361] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(854), 1,
      aux_sym_code_block_start_token1,
    ACTIONS(856), 1,
      anon_sym_LF,
  [4371] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(858), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(71), 1,
      sym_text_to_eol,
  [4381] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(858), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(70), 1,
      sym_text_to_eol,
  [4391] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(848), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(136), 1,
      sym_text_to_eol,
  [4401] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(848), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(137), 1,
      sym_text_to_eol,
  [4411] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(860), 2,
      aux_sym_document_meta_token2,
      sym_document_meta_field_key,
  [4419] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(862), 1,
      sym__eol,
  [4426] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(864), 1,
      anon_sym_LF,
  [4433] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(866), 1,
      ts_builtin_sym_end,
  [4440] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(868), 1,
      aux_sym_document_meta_field_value_token1,
  [4447] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(870), 1,
      sym__eol,
  [4454] = 1,
    ACTIONS(872), 2,
      sym__eof,
      aux_sym_code_block_token1,
  [4459] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(874), 1,
      anon_sym_COLON,
  [4466] = 1,
    ACTIONS(876), 2,
      sym__eof,
      aux_sym_code_block_token1,
  [4471] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(878), 1,
      sym_code_block_end,
  [4478] = 2,
    ACTIONS(768), 1,
      aux_sym_code_block_token1,
    ACTIONS(880), 1,
      sym_code_block_language,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 93,
  [SMALL_STATE(29)] = 186,
  [SMALL_STATE(30)] = 279,
  [SMALL_STATE(31)] = 368,
  [SMALL_STATE(32)] = 457,
  [SMALL_STATE(33)] = 529,
  [SMALL_STATE(34)] = 601,
  [SMALL_STATE(35)] = 673,
  [SMALL_STATE(36)] = 723,
  [SMALL_STATE(37)] = 773,
  [SMALL_STATE(38)] = 841,
  [SMALL_STATE(39)] = 909,
  [SMALL_STATE(40)] = 959,
  [SMALL_STATE(41)] = 1009,
  [SMALL_STATE(42)] = 1059,
  [SMALL_STATE(43)] = 1104,
  [SMALL_STATE(44)] = 1149,
  [SMALL_STATE(45)] = 1193,
  [SMALL_STATE(46)] = 1237,
  [SMALL_STATE(47)] = 1281,
  [SMALL_STATE(48)] = 1325,
  [SMALL_STATE(49)] = 1369,
  [SMALL_STATE(50)] = 1413,
  [SMALL_STATE(51)] = 1457,
  [SMALL_STATE(52)] = 1501,
  [SMALL_STATE(53)] = 1545,
  [SMALL_STATE(54)] = 1589,
  [SMALL_STATE(55)] = 1633,
  [SMALL_STATE(56)] = 1677,
  [SMALL_STATE(57)] = 1721,
  [SMALL_STATE(58)] = 1784,
  [SMALL_STATE(59)] = 1847,
  [SMALL_STATE(60)] = 1910,
  [SMALL_STATE(61)] = 1973,
  [SMALL_STATE(62)] = 2036,
  [SMALL_STATE(63)] = 2099,
  [SMALL_STATE(64)] = 2162,
  [SMALL_STATE(65)] = 2225,
  [SMALL_STATE(66)] = 2288,
  [SMALL_STATE(67)] = 2351,
  [SMALL_STATE(68)] = 2414,
  [SMALL_STATE(69)] = 2477,
  [SMALL_STATE(70)] = 2540,
  [SMALL_STATE(71)] = 2584,
  [SMALL_STATE(72)] = 2628,
  [SMALL_STATE(73)] = 2672,
  [SMALL_STATE(74)] = 2716,
  [SMALL_STATE(75)] = 2755,
  [SMALL_STATE(76)] = 2794,
  [SMALL_STATE(77)] = 2832,
  [SMALL_STATE(78)] = 2870,
  [SMALL_STATE(79)] = 2908,
  [SMALL_STATE(80)] = 2946,
  [SMALL_STATE(81)] = 2984,
  [SMALL_STATE(82)] = 3022,
  [SMALL_STATE(83)] = 3060,
  [SMALL_STATE(84)] = 3098,
  [SMALL_STATE(85)] = 3137,
  [SMALL_STATE(86)] = 3171,
  [SMALL_STATE(87)] = 3204,
  [SMALL_STATE(88)] = 3237,
  [SMALL_STATE(89)] = 3270,
  [SMALL_STATE(90)] = 3307,
  [SMALL_STATE(91)] = 3337,
  [SMALL_STATE(92)] = 3367,
  [SMALL_STATE(93)] = 3401,
  [SMALL_STATE(94)] = 3433,
  [SMALL_STATE(95)] = 3465,
  [SMALL_STATE(96)] = 3499,
  [SMALL_STATE(97)] = 3529,
  [SMALL_STATE(98)] = 3558,
  [SMALL_STATE(99)] = 3587,
  [SMALL_STATE(100)] = 3616,
  [SMALL_STATE(101)] = 3645,
  [SMALL_STATE(102)] = 3674,
  [SMALL_STATE(103)] = 3703,
  [SMALL_STATE(104)] = 3732,
  [SMALL_STATE(105)] = 3756,
  [SMALL_STATE(106)] = 3780,
  [SMALL_STATE(107)] = 3804,
  [SMALL_STATE(108)] = 3825,
  [SMALL_STATE(109)] = 3846,
  [SMALL_STATE(110)] = 3867,
  [SMALL_STATE(111)] = 3885,
  [SMALL_STATE(112)] = 3903,
  [SMALL_STATE(113)] = 3923,
  [SMALL_STATE(114)] = 3943,
  [SMALL_STATE(115)] = 3956,
  [SMALL_STATE(116)] = 3970,
  [SMALL_STATE(117)] = 3984,
  [SMALL_STATE(118)] = 3998,
  [SMALL_STATE(119)] = 4012,
  [SMALL_STATE(120)] = 4026,
  [SMALL_STATE(121)] = 4040,
  [SMALL_STATE(122)] = 4054,
  [SMALL_STATE(123)] = 4065,
  [SMALL_STATE(124)] = 4076,
  [SMALL_STATE(125)] = 4089,
  [SMALL_STATE(126)] = 4102,
  [SMALL_STATE(127)] = 4111,
  [SMALL_STATE(128)] = 4120,
  [SMALL_STATE(129)] = 4133,
  [SMALL_STATE(130)] = 4141,
  [SMALL_STATE(131)] = 4149,
  [SMALL_STATE(132)] = 4157,
  [SMALL_STATE(133)] = 4165,
  [SMALL_STATE(134)] = 4173,
  [SMALL_STATE(135)] = 4181,
  [SMALL_STATE(136)] = 4191,
  [SMALL_STATE(137)] = 4199,
  [SMALL_STATE(138)] = 4207,
  [SMALL_STATE(139)] = 4215,
  [SMALL_STATE(140)] = 4223,
  [SMALL_STATE(141)] = 4231,
  [SMALL_STATE(142)] = 4239,
  [SMALL_STATE(143)] = 4247,
  [SMALL_STATE(144)] = 4255,
  [SMALL_STATE(145)] = 4263,
  [SMALL_STATE(146)] = 4273,
  [SMALL_STATE(147)] = 4283,
  [SMALL_STATE(148)] = 4293,
  [SMALL_STATE(149)] = 4303,
  [SMALL_STATE(150)] = 4313,
  [SMALL_STATE(151)] = 4323,
  [SMALL_STATE(152)] = 4331,
  [SMALL_STATE(153)] = 4341,
  [SMALL_STATE(154)] = 4351,
  [SMALL_STATE(155)] = 4361,
  [SMALL_STATE(156)] = 4371,
  [SMALL_STATE(157)] = 4381,
  [SMALL_STATE(158)] = 4391,
  [SMALL_STATE(159)] = 4401,
  [SMALL_STATE(160)] = 4411,
  [SMALL_STATE(161)] = 4419,
  [SMALL_STATE(162)] = 4426,
  [SMALL_STATE(163)] = 4433,
  [SMALL_STATE(164)] = 4440,
  [SMALL_STATE(165)] = 4447,
  [SMALL_STATE(166)] = 4454,
  [SMALL_STATE(167)] = 4459,
  [SMALL_STATE(168)] = 4466,
  [SMALL_STATE(169)] = 4471,
  [SMALL_STATE(170)] = 4478,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(164),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(149),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(150),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(152),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(153),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(154),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(159),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(158),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(155),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(146),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(135),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 3, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 3, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(164),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(68),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(90),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(96),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(150),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(152),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(153),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(154),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(159),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(158),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(155),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(92),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(64),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(69),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(146),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(135),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(59),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(164),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(68),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(90),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(96),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(152),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(153),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(154),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(159),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(158),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(155),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(92),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(64),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(69),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(146),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(135),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(59),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 3, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 3, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(164),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(68),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(90),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(96),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(153),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(154),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(159),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(158),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(155),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(92),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(64),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(69),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(146),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(135),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(59),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 3, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 3, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(164),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(68),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(90),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(96),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(154),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(159),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(158),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(155),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(92),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(64),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(69),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(146),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(135),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(59),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 3, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 3, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 3, .production_id = 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 3, .production_id = 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(164),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(68),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(90),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(96),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(159),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(158),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(155),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(92),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(64),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(69),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(146),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(135),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(59),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 3, .production_id = 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 3, .production_id = 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(164),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(68),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(90),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(96),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(158),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(155),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(92),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(64),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(69),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(146),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(135),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(59),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(164),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(68),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(90),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(96),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(155),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(92),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(64),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(69),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(146),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(135),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(59),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(164),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(62),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(90),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(96),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(113),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(108),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(92),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(67),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(66),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(156),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(157),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(164),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(61),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(90),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(96),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(92),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(65),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 2),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 2),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_to_eol, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_to_eol, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 3),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 3),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_children, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__task_children, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title_basic, 3),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title_basic, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_children, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_children, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 3),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 2),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 2),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(164),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(58),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(90),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(96),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(92),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_session, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_session, 3),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_schedule, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_schedule, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline, 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 1),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(95),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timerange, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timerange, 3),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_daterange, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daterange, 3),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetimerange, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetimerange, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2), SHIFT_REPEAT(121),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_content, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2), SHIFT_REPEAT(121),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(115),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2), SHIFT_REPEAT(167),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 4),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_text_line, 2),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field, 4, .production_id = 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field_value, 1),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [866] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
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
