#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 177
#define LARGE_STATE_COUNT 30
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
  [33] = 33,
  [34] = 32,
  [35] = 32,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 40,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
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
  [62] = 59,
  [63] = 59,
  [64] = 64,
  [65] = 65,
  [66] = 59,
  [67] = 59,
  [68] = 61,
  [69] = 61,
  [70] = 59,
  [71] = 60,
  [72] = 64,
  [73] = 36,
  [74] = 37,
  [75] = 43,
  [76] = 39,
  [77] = 38,
  [78] = 45,
  [79] = 44,
  [80] = 54,
  [81] = 48,
  [82] = 82,
  [83] = 83,
  [84] = 57,
  [85] = 47,
  [86] = 58,
  [87] = 56,
  [88] = 49,
  [89] = 44,
  [90] = 36,
  [91] = 44,
  [92] = 44,
  [93] = 48,
  [94] = 94,
  [95] = 54,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 100,
  [106] = 106,
  [107] = 107,
  [108] = 98,
  [109] = 99,
  [110] = 110,
  [111] = 111,
  [112] = 111,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 98,
  [121] = 101,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 102,
  [126] = 123,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 100,
  [132] = 99,
  [133] = 129,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 103,
  [143] = 106,
  [144] = 144,
  [145] = 98,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 45,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 153,
  [160] = 137,
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
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
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
  [30] = {.lex_state = 25, .external_lex_state = 2},
  [31] = {.lex_state = 25, .external_lex_state = 2},
  [32] = {.lex_state = 26, .external_lex_state = 4},
  [33] = {.lex_state = 26, .external_lex_state = 4},
  [34] = {.lex_state = 26, .external_lex_state = 4},
  [35] = {.lex_state = 26, .external_lex_state = 4},
  [36] = {.lex_state = 69, .external_lex_state = 5},
  [37] = {.lex_state = 69, .external_lex_state = 5},
  [38] = {.lex_state = 69, .external_lex_state = 5},
  [39] = {.lex_state = 69, .external_lex_state = 5},
  [40] = {.lex_state = 26, .external_lex_state = 6},
  [41] = {.lex_state = 26, .external_lex_state = 6},
  [42] = {.lex_state = 26, .external_lex_state = 6},
  [43] = {.lex_state = 69, .external_lex_state = 5},
  [44] = {.lex_state = 69, .external_lex_state = 5},
  [45] = {.lex_state = 69, .external_lex_state = 5},
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
  [57] = {.lex_state = 69, .external_lex_state = 2},
  [58] = {.lex_state = 69, .external_lex_state = 2},
  [59] = {.lex_state = 26, .external_lex_state = 7},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 26, .external_lex_state = 7},
  [63] = {.lex_state = 26, .external_lex_state = 7},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 26, .external_lex_state = 7},
  [66] = {.lex_state = 26, .external_lex_state = 7},
  [67] = {.lex_state = 26, .external_lex_state = 7},
  [68] = {.lex_state = 26},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 26, .external_lex_state = 7},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 26},
  [73] = {.lex_state = 25, .external_lex_state = 8},
  [74] = {.lex_state = 25, .external_lex_state = 8},
  [75] = {.lex_state = 25, .external_lex_state = 8},
  [76] = {.lex_state = 25, .external_lex_state = 8},
  [77] = {.lex_state = 25, .external_lex_state = 8},
  [78] = {.lex_state = 25, .external_lex_state = 8},
  [79] = {.lex_state = 25, .external_lex_state = 8},
  [80] = {.lex_state = 25, .external_lex_state = 3},
  [81] = {.lex_state = 25, .external_lex_state = 3},
  [82] = {.lex_state = 25, .external_lex_state = 3},
  [83] = {.lex_state = 25, .external_lex_state = 3},
  [84] = {.lex_state = 25, .external_lex_state = 3},
  [85] = {.lex_state = 25, .external_lex_state = 3},
  [86] = {.lex_state = 25, .external_lex_state = 3},
  [87] = {.lex_state = 25, .external_lex_state = 3},
  [88] = {.lex_state = 25, .external_lex_state = 3},
  [89] = {.lex_state = 25, .external_lex_state = 3},
  [90] = {.lex_state = 26, .external_lex_state = 9},
  [91] = {.lex_state = 26, .external_lex_state = 9},
  [92] = {.lex_state = 26, .external_lex_state = 4},
  [93] = {.lex_state = 26, .external_lex_state = 4},
  [94] = {.lex_state = 30, .external_lex_state = 7},
  [95] = {.lex_state = 26, .external_lex_state = 4},
  [96] = {.lex_state = 30, .external_lex_state = 7},
  [97] = {.lex_state = 30, .external_lex_state = 7},
  [98] = {.lex_state = 30, .external_lex_state = 7},
  [99] = {.lex_state = 30, .external_lex_state = 7},
  [100] = {.lex_state = 30, .external_lex_state = 7},
  [101] = {.lex_state = 26, .external_lex_state = 7},
  [102] = {.lex_state = 26, .external_lex_state = 7},
  [103] = {.lex_state = 26, .external_lex_state = 7},
  [104] = {.lex_state = 26, .external_lex_state = 7},
  [105] = {.lex_state = 26, .external_lex_state = 7},
  [106] = {.lex_state = 26, .external_lex_state = 7},
  [107] = {.lex_state = 26, .external_lex_state = 7},
  [108] = {.lex_state = 26, .external_lex_state = 7},
  [109] = {.lex_state = 26, .external_lex_state = 7},
  [110] = {.lex_state = 27},
  [111] = {.lex_state = 73},
  [112] = {.lex_state = 73},
  [113] = {.lex_state = 73},
  [114] = {.lex_state = 27},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 28, .external_lex_state = 10},
  [117] = {.lex_state = 73},
  [118] = {.lex_state = 73, .external_lex_state = 10},
  [119] = {.lex_state = 28, .external_lex_state = 10},
  [120] = {.lex_state = 73, .external_lex_state = 10},
  [121] = {.lex_state = 28, .external_lex_state = 10},
  [122] = {.lex_state = 31},
  [123] = {.lex_state = 73},
  [124] = {.lex_state = 31},
  [125] = {.lex_state = 28, .external_lex_state = 10},
  [126] = {.lex_state = 73},
  [127] = {.lex_state = 31},
  [128] = {.lex_state = 73, .external_lex_state = 10},
  [129] = {.lex_state = 73},
  [130] = {.lex_state = 73, .external_lex_state = 10},
  [131] = {.lex_state = 73, .external_lex_state = 10},
  [132] = {.lex_state = 73, .external_lex_state = 10},
  [133] = {.lex_state = 73},
  [134] = {.lex_state = 73},
  [135] = {.lex_state = 73, .external_lex_state = 10},
  [136] = {.lex_state = 73, .external_lex_state = 10},
  [137] = {.lex_state = 32},
  [138] = {.lex_state = 32},
  [139] = {.lex_state = 32},
  [140] = {.lex_state = 32},
  [141] = {.lex_state = 32},
  [142] = {.lex_state = 73, .external_lex_state = 10},
  [143] = {.lex_state = 73, .external_lex_state = 10},
  [144] = {.lex_state = 27},
  [145] = {.lex_state = 73},
  [146] = {.lex_state = 73, .external_lex_state = 10},
  [147] = {.lex_state = 32},
  [148] = {.lex_state = 73, .external_lex_state = 10},
  [149] = {.lex_state = 73, .external_lex_state = 10},
  [150] = {.lex_state = 73, .external_lex_state = 10},
  [151] = {.lex_state = 73, .external_lex_state = 10},
  [152] = {.lex_state = 73, .external_lex_state = 10},
  [153] = {.lex_state = 32},
  [154] = {.lex_state = 73, .external_lex_state = 10},
  [155] = {.lex_state = 73, .external_lex_state = 10},
  [156] = {.lex_state = 27},
  [157] = {.lex_state = 73, .external_lex_state = 10},
  [158] = {.lex_state = 32},
  [159] = {.lex_state = 32},
  [160] = {.lex_state = 32},
  [161] = {.lex_state = 31},
  [162] = {.lex_state = 32},
  [163] = {.lex_state = 32},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 27},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 73},
  [168] = {.lex_state = 73, .external_lex_state = 11},
  [169] = {.lex_state = 32},
  [170] = {.lex_state = 73},
  [171] = {.lex_state = 73},
  [172] = {.lex_state = 73, .external_lex_state = 7},
  [173] = {.lex_state = 73},
  [174] = {.lex_state = 73, .external_lex_state = 11},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 73, .external_lex_state = 7},
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

static const bool ts_external_scanner_states[12][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token_list_item_marker] = true,
  },
  [4] = {
    [ts_external_token__eof] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_list_item_marker] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
    [ts_external_token_list_item_marker] = true,
  },
  [6] = {
    [ts_external_token_list_item_marker] = true,
  },
  [7] = {
    [ts_external_token__eof] = true,
  },
  [8] = {
    [ts_external_token__eof] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
    [ts_external_token_list_item_marker] = true,
  },
  [9] = {
    [ts_external_token__eof] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_list_item_marker] = true,
  },
  [10] = {
    [ts_external_token__eof] = true,
    [ts_external_token__eol] = true,
  },
  [11] = {
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
    [sym_document] = STATE(167),
    [sym_document_title_basic] = STATE(5),
    [sym_document_meta] = STATE(5),
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(3),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(3),
    [sym__text] = STATE(70),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(70),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym__comment_marker_token1] = ACTIONS(49),
    [aux_sym__comment_marker_token2] = ACTIONS(49),
    [sym_bold] = ACTIONS(52),
    [sym_italic] = ACTIONS(52),
    [sym_underline] = ACTIONS(52),
    [sym_string] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_ticket] = ACTIONS(52),
    [aux_sym_date_token1] = ACTIONS(55),
    [aux_sym_date_token2] = ACTIONS(55),
    [aux_sym_date_token3] = ACTIONS(55),
    [aux_sym_time_token1] = ACTIONS(58),
    [aux_sym_time_token2] = ACTIONS(58),
    [sym_tag_positive] = ACTIONS(52),
    [sym_tag_negative] = ACTIONS(52),
    [sym_tag_hash] = ACTIONS(52),
    [sym_tag_context] = ACTIONS(52),
    [sym_tag_danger] = ACTIONS(52),
    [sym_tag_identifier] = ACTIONS(52),
    [sym_heading_1_marker] = ACTIONS(61),
    [sym_heading_2_marker] = ACTIONS(64),
    [sym_heading_3_marker] = ACTIONS(67),
    [sym_heading_4_marker] = ACTIONS(70),
    [sym_heading_5_marker] = ACTIONS(73),
    [sym_heading_6_marker] = ACTIONS(76),
    [sym_section_marker] = ACTIONS(79),
    [sym_inline_code] = ACTIONS(52),
    [anon_sym_ATcode] = ACTIONS(82),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(52),
    [aux_sym__text_token1] = ACTIONS(85),
    [sym_task_marker_default] = ACTIONS(88),
    [sym_task_marker_active] = ACTIONS(91),
    [sym_task_marker_done] = ACTIONS(94),
    [sym_task_marker_cancelled] = ACTIONS(97),
    [sym_list_item_marker] = ACTIONS(100),
  },
  [3] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(70),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(103),
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
  [4] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(70),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
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
  [5] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(70),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(103),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(7),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(70),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(8),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(8),
    [sym__text] = STATE(70),
    [aux_sym_heading_1_repeat1] = STATE(8),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(111),
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
    [sym_heading_1_marker] = ACTIONS(113),
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
  [8] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(8),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(8),
    [sym__text] = STATE(70),
    [aux_sym_heading_1_repeat1] = STATE(8),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(115),
    [aux_sym__comment_marker_token1] = ACTIONS(117),
    [aux_sym__comment_marker_token2] = ACTIONS(117),
    [sym_bold] = ACTIONS(120),
    [sym_italic] = ACTIONS(120),
    [sym_underline] = ACTIONS(120),
    [sym_string] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [sym_ticket] = ACTIONS(120),
    [aux_sym_date_token1] = ACTIONS(123),
    [aux_sym_date_token2] = ACTIONS(123),
    [aux_sym_date_token3] = ACTIONS(123),
    [aux_sym_time_token1] = ACTIONS(126),
    [aux_sym_time_token2] = ACTIONS(126),
    [sym_tag_positive] = ACTIONS(120),
    [sym_tag_negative] = ACTIONS(120),
    [sym_tag_hash] = ACTIONS(120),
    [sym_tag_context] = ACTIONS(120),
    [sym_tag_danger] = ACTIONS(120),
    [sym_tag_identifier] = ACTIONS(120),
    [sym_heading_1_marker] = ACTIONS(129),
    [sym_heading_2_marker] = ACTIONS(131),
    [sym_heading_3_marker] = ACTIONS(134),
    [sym_heading_4_marker] = ACTIONS(137),
    [sym_heading_5_marker] = ACTIONS(140),
    [sym_heading_6_marker] = ACTIONS(143),
    [sym_section_marker] = ACTIONS(146),
    [sym_inline_code] = ACTIONS(120),
    [anon_sym_ATcode] = ACTIONS(149),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(120),
    [aux_sym__text_token1] = ACTIONS(152),
    [sym_task_marker_default] = ACTIONS(155),
    [sym_task_marker_active] = ACTIONS(158),
    [sym_task_marker_done] = ACTIONS(161),
    [sym_task_marker_cancelled] = ACTIONS(164),
    [sym_list_item_marker] = ACTIONS(167),
  },
  [9] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(11),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(11),
    [sym__text] = STATE(70),
    [aux_sym_heading_2_repeat1] = STATE(11),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(170),
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
    [sym_heading_1_marker] = ACTIONS(172),
    [sym_heading_2_marker] = ACTIONS(172),
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
  [10] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(9),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(9),
    [sym__text] = STATE(70),
    [aux_sym_heading_2_repeat1] = STATE(9),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(174),
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
    [sym_heading_1_marker] = ACTIONS(176),
    [sym_heading_2_marker] = ACTIONS(176),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(11),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(11),
    [sym__text] = STATE(70),
    [aux_sym_heading_2_repeat1] = STATE(11),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(178),
    [aux_sym__comment_marker_token1] = ACTIONS(180),
    [aux_sym__comment_marker_token2] = ACTIONS(180),
    [sym_bold] = ACTIONS(183),
    [sym_italic] = ACTIONS(183),
    [sym_underline] = ACTIONS(183),
    [sym_string] = ACTIONS(183),
    [sym_number] = ACTIONS(183),
    [sym_ticket] = ACTIONS(183),
    [aux_sym_date_token1] = ACTIONS(186),
    [aux_sym_date_token2] = ACTIONS(186),
    [aux_sym_date_token3] = ACTIONS(186),
    [aux_sym_time_token1] = ACTIONS(189),
    [aux_sym_time_token2] = ACTIONS(189),
    [sym_tag_positive] = ACTIONS(183),
    [sym_tag_negative] = ACTIONS(183),
    [sym_tag_hash] = ACTIONS(183),
    [sym_tag_context] = ACTIONS(183),
    [sym_tag_danger] = ACTIONS(183),
    [sym_tag_identifier] = ACTIONS(183),
    [sym_heading_1_marker] = ACTIONS(192),
    [sym_heading_2_marker] = ACTIONS(192),
    [sym_heading_3_marker] = ACTIONS(194),
    [sym_heading_4_marker] = ACTIONS(197),
    [sym_heading_5_marker] = ACTIONS(200),
    [sym_heading_6_marker] = ACTIONS(203),
    [sym_section_marker] = ACTIONS(206),
    [sym_inline_code] = ACTIONS(183),
    [anon_sym_ATcode] = ACTIONS(209),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(183),
    [aux_sym__text_token1] = ACTIONS(212),
    [sym_task_marker_default] = ACTIONS(215),
    [sym_task_marker_active] = ACTIONS(218),
    [sym_task_marker_done] = ACTIONS(221),
    [sym_task_marker_cancelled] = ACTIONS(224),
    [sym_list_item_marker] = ACTIONS(227),
  },
  [12] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(13),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(13),
    [sym__text] = STATE(70),
    [aux_sym_heading_3_repeat1] = STATE(13),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(230),
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
    [sym_heading_1_marker] = ACTIONS(232),
    [sym_heading_2_marker] = ACTIONS(232),
    [sym_heading_3_marker] = ACTIONS(232),
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
  [13] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(13),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(13),
    [sym__text] = STATE(70),
    [aux_sym_heading_3_repeat1] = STATE(13),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(234),
    [aux_sym__comment_marker_token1] = ACTIONS(236),
    [aux_sym__comment_marker_token2] = ACTIONS(236),
    [sym_bold] = ACTIONS(239),
    [sym_italic] = ACTIONS(239),
    [sym_underline] = ACTIONS(239),
    [sym_string] = ACTIONS(239),
    [sym_number] = ACTIONS(239),
    [sym_ticket] = ACTIONS(239),
    [aux_sym_date_token1] = ACTIONS(242),
    [aux_sym_date_token2] = ACTIONS(242),
    [aux_sym_date_token3] = ACTIONS(242),
    [aux_sym_time_token1] = ACTIONS(245),
    [aux_sym_time_token2] = ACTIONS(245),
    [sym_tag_positive] = ACTIONS(239),
    [sym_tag_negative] = ACTIONS(239),
    [sym_tag_hash] = ACTIONS(239),
    [sym_tag_context] = ACTIONS(239),
    [sym_tag_danger] = ACTIONS(239),
    [sym_tag_identifier] = ACTIONS(239),
    [sym_heading_1_marker] = ACTIONS(248),
    [sym_heading_2_marker] = ACTIONS(248),
    [sym_heading_3_marker] = ACTIONS(248),
    [sym_heading_4_marker] = ACTIONS(250),
    [sym_heading_5_marker] = ACTIONS(253),
    [sym_heading_6_marker] = ACTIONS(256),
    [sym_section_marker] = ACTIONS(259),
    [sym_inline_code] = ACTIONS(239),
    [anon_sym_ATcode] = ACTIONS(262),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(239),
    [aux_sym__text_token1] = ACTIONS(265),
    [sym_task_marker_default] = ACTIONS(268),
    [sym_task_marker_active] = ACTIONS(271),
    [sym_task_marker_done] = ACTIONS(274),
    [sym_task_marker_cancelled] = ACTIONS(277),
    [sym_list_item_marker] = ACTIONS(280),
  },
  [14] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
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
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(70),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym_heading_5] = STATE(15),
    [sym_heading_6] = STATE(15),
    [sym_section] = STATE(15),
    [sym__task] = STATE(15),
    [sym_task_default] = STATE(15),
    [sym_task_active] = STATE(15),
    [sym_task_done] = STATE(15),
    [sym_task_cancelled] = STATE(15),
    [sym_list_item] = STATE(15),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(15),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(15),
    [sym__text] = STATE(70),
    [aux_sym_heading_4_repeat1] = STATE(15),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym_heading_5] = STATE(17),
    [sym_heading_6] = STATE(17),
    [sym_section] = STATE(17),
    [sym__task] = STATE(17),
    [sym_task_default] = STATE(17),
    [sym_task_active] = STATE(17),
    [sym_task_done] = STATE(17),
    [sym_task_cancelled] = STATE(17),
    [sym_list_item] = STATE(17),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(17),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(17),
    [sym__text] = STATE(70),
    [aux_sym_heading_4_repeat1] = STATE(17),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym_heading_5] = STATE(15),
    [sym_heading_6] = STATE(15),
    [sym_section] = STATE(15),
    [sym__task] = STATE(15),
    [sym_task_default] = STATE(15),
    [sym_task_active] = STATE(15),
    [sym_task_done] = STATE(15),
    [sym_task_cancelled] = STATE(15),
    [sym_list_item] = STATE(15),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(15),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(15),
    [sym__text] = STATE(70),
    [aux_sym_heading_4_repeat1] = STATE(15),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym_heading_6] = STATE(20),
    [sym_section] = STATE(20),
    [sym__task] = STATE(20),
    [sym_task_default] = STATE(20),
    [sym_task_active] = STATE(20),
    [sym_task_done] = STATE(20),
    [sym_task_cancelled] = STATE(20),
    [sym_list_item] = STATE(20),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(20),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(20),
    [sym__text] = STATE(70),
    [aux_sym_heading_5_repeat1] = STATE(20),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym_heading_6] = STATE(19),
    [sym_section] = STATE(19),
    [sym__task] = STATE(19),
    [sym_task_default] = STATE(19),
    [sym_task_active] = STATE(19),
    [sym_task_done] = STATE(19),
    [sym_task_cancelled] = STATE(19),
    [sym_list_item] = STATE(19),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(19),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(19),
    [sym__text] = STATE(70),
    [aux_sym_heading_5_repeat1] = STATE(19),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym__comment_marker_token1] = ACTIONS(347),
    [aux_sym__comment_marker_token2] = ACTIONS(347),
    [sym_bold] = ACTIONS(350),
    [sym_italic] = ACTIONS(350),
    [sym_underline] = ACTIONS(350),
    [sym_string] = ACTIONS(350),
    [sym_number] = ACTIONS(350),
    [sym_ticket] = ACTIONS(350),
    [aux_sym_date_token1] = ACTIONS(353),
    [aux_sym_date_token2] = ACTIONS(353),
    [aux_sym_date_token3] = ACTIONS(353),
    [aux_sym_time_token1] = ACTIONS(356),
    [aux_sym_time_token2] = ACTIONS(356),
    [sym_tag_positive] = ACTIONS(350),
    [sym_tag_negative] = ACTIONS(350),
    [sym_tag_hash] = ACTIONS(350),
    [sym_tag_context] = ACTIONS(350),
    [sym_tag_danger] = ACTIONS(350),
    [sym_tag_identifier] = ACTIONS(350),
    [sym_heading_1_marker] = ACTIONS(359),
    [sym_heading_2_marker] = ACTIONS(359),
    [sym_heading_3_marker] = ACTIONS(359),
    [sym_heading_4_marker] = ACTIONS(359),
    [sym_heading_5_marker] = ACTIONS(359),
    [sym_heading_6_marker] = ACTIONS(361),
    [sym_section_marker] = ACTIONS(364),
    [sym_inline_code] = ACTIONS(350),
    [anon_sym_ATcode] = ACTIONS(367),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(350),
    [aux_sym__text_token1] = ACTIONS(370),
    [sym_task_marker_default] = ACTIONS(373),
    [sym_task_marker_active] = ACTIONS(376),
    [sym_task_marker_done] = ACTIONS(379),
    [sym_task_marker_cancelled] = ACTIONS(382),
    [sym_list_item_marker] = ACTIONS(385),
  },
  [20] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym_heading_6] = STATE(19),
    [sym_section] = STATE(19),
    [sym__task] = STATE(19),
    [sym_task_default] = STATE(19),
    [sym_task_active] = STATE(19),
    [sym_task_done] = STATE(19),
    [sym_task_cancelled] = STATE(19),
    [sym_list_item] = STATE(19),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(19),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(19),
    [sym__text] = STATE(70),
    [aux_sym_heading_5_repeat1] = STATE(19),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(388),
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
    [sym_heading_1_marker] = ACTIONS(390),
    [sym_heading_2_marker] = ACTIONS(390),
    [sym_heading_3_marker] = ACTIONS(390),
    [sym_heading_4_marker] = ACTIONS(390),
    [sym_heading_5_marker] = ACTIONS(390),
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
  [21] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(70),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(70),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(70),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(70),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(440),
    [aux_sym__comment_marker_token1] = ACTIONS(442),
    [aux_sym__comment_marker_token2] = ACTIONS(442),
    [sym_bold] = ACTIONS(445),
    [sym_italic] = ACTIONS(445),
    [sym_underline] = ACTIONS(445),
    [sym_string] = ACTIONS(445),
    [sym_number] = ACTIONS(445),
    [sym_ticket] = ACTIONS(445),
    [aux_sym_date_token1] = ACTIONS(448),
    [aux_sym_date_token2] = ACTIONS(448),
    [aux_sym_date_token3] = ACTIONS(448),
    [aux_sym_time_token1] = ACTIONS(451),
    [aux_sym_time_token2] = ACTIONS(451),
    [sym_tag_positive] = ACTIONS(445),
    [sym_tag_negative] = ACTIONS(445),
    [sym_tag_hash] = ACTIONS(445),
    [sym_tag_context] = ACTIONS(445),
    [sym_tag_danger] = ACTIONS(445),
    [sym_tag_identifier] = ACTIONS(445),
    [sym_heading_1_marker] = ACTIONS(454),
    [sym_heading_2_marker] = ACTIONS(454),
    [sym_heading_3_marker] = ACTIONS(454),
    [sym_heading_4_marker] = ACTIONS(454),
    [sym_heading_5_marker] = ACTIONS(454),
    [sym_heading_6_marker] = ACTIONS(454),
    [sym_section_marker] = ACTIONS(454),
    [sym_inline_code] = ACTIONS(445),
    [anon_sym_ATcode] = ACTIONS(456),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(445),
    [aux_sym__text_token1] = ACTIONS(459),
    [sym_task_marker_default] = ACTIONS(462),
    [sym_task_marker_active] = ACTIONS(465),
    [sym_task_marker_done] = ACTIONS(468),
    [sym_task_marker_cancelled] = ACTIONS(471),
    [sym_list_item_marker] = ACTIONS(474),
  },
  [25] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(70),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(477),
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
    [sym_heading_1_marker] = ACTIONS(479),
    [sym_heading_2_marker] = ACTIONS(479),
    [sym_heading_3_marker] = ACTIONS(479),
    [sym_heading_4_marker] = ACTIONS(479),
    [sym_heading_5_marker] = ACTIONS(479),
    [sym_heading_6_marker] = ACTIONS(479),
    [sym_section_marker] = ACTIONS(479),
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
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(70),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(70),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(70),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(70),
    [sym__task] = STATE(25),
    [sym_task_default] = STATE(25),
    [sym_task_active] = STATE(25),
    [sym_task_done] = STATE(25),
    [sym_task_cancelled] = STATE(25),
    [sym_list_item] = STATE(25),
    [sym_code_block_start] = STATE(110),
    [sym_code_block] = STATE(25),
    [sym__inline] = STATE(70),
    [sym_text_line] = STATE(25),
    [sym__text] = STATE(70),
    [aux_sym_section_repeat1] = STATE(25),
    [aux_sym_text_line_repeat1] = STATE(70),
    [aux_sym__text_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(481),
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
    [sym_heading_1_marker] = ACTIONS(483),
    [sym_heading_2_marker] = ACTIONS(483),
    [sym_heading_3_marker] = ACTIONS(483),
    [sym_heading_4_marker] = ACTIONS(483),
    [sym_heading_5_marker] = ACTIONS(483),
    [sym_heading_6_marker] = ACTIONS(483),
    [sym_section_marker] = ACTIONS(483),
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
  [27] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(67),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(67),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(67),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(67),
    [sym__task] = STATE(29),
    [sym_task_default] = STATE(29),
    [sym_task_active] = STATE(29),
    [sym_task_done] = STATE(29),
    [sym_task_cancelled] = STATE(29),
    [sym_task_session] = STATE(29),
    [sym_task_schedule] = STATE(29),
    [sym_list_item] = STATE(29),
    [sym__inline] = STATE(67),
    [sym_text_line] = STATE(29),
    [sym__text] = STATE(67),
    [aux_sym__task_children_repeat1] = STATE(29),
    [aux_sym_text_line_repeat1] = STATE(67),
    [aux_sym__text_repeat1] = STATE(102),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(485),
    [sym_italic] = ACTIONS(485),
    [sym_underline] = ACTIONS(485),
    [sym_string] = ACTIONS(485),
    [sym_number] = ACTIONS(485),
    [sym_ticket] = ACTIONS(485),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(485),
    [sym_tag_negative] = ACTIONS(485),
    [sym_tag_hash] = ACTIONS(485),
    [sym_tag_context] = ACTIONS(485),
    [sym_tag_danger] = ACTIONS(485),
    [sym_tag_identifier] = ACTIONS(485),
    [aux_sym_task_session_token1] = ACTIONS(487),
    [aux_sym_task_schedule_token1] = ACTIONS(489),
    [sym_inline_code] = ACTIONS(485),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(485),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym__eof] = ACTIONS(491),
    [sym__dedent] = ACTIONS(491),
    [sym_task_marker_default] = ACTIONS(493),
    [sym_task_marker_active] = ACTIONS(495),
    [sym_task_marker_done] = ACTIONS(497),
    [sym_task_marker_cancelled] = ACTIONS(499),
    [sym_list_item_marker] = ACTIONS(501),
  },
  [28] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(67),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(67),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(67),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(67),
    [sym__task] = STATE(29),
    [sym_task_default] = STATE(29),
    [sym_task_active] = STATE(29),
    [sym_task_done] = STATE(29),
    [sym_task_cancelled] = STATE(29),
    [sym_task_session] = STATE(29),
    [sym_task_schedule] = STATE(29),
    [sym_list_item] = STATE(29),
    [sym__inline] = STATE(67),
    [sym_text_line] = STATE(29),
    [sym__text] = STATE(67),
    [aux_sym__task_children_repeat1] = STATE(29),
    [aux_sym_text_line_repeat1] = STATE(67),
    [aux_sym__text_repeat1] = STATE(102),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_bold] = ACTIONS(485),
    [sym_italic] = ACTIONS(485),
    [sym_underline] = ACTIONS(485),
    [sym_string] = ACTIONS(485),
    [sym_number] = ACTIONS(485),
    [sym_ticket] = ACTIONS(485),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_date_token2] = ACTIONS(15),
    [aux_sym_date_token3] = ACTIONS(15),
    [aux_sym_time_token1] = ACTIONS(17),
    [aux_sym_time_token2] = ACTIONS(17),
    [sym_tag_positive] = ACTIONS(485),
    [sym_tag_negative] = ACTIONS(485),
    [sym_tag_hash] = ACTIONS(485),
    [sym_tag_context] = ACTIONS(485),
    [sym_tag_danger] = ACTIONS(485),
    [sym_tag_identifier] = ACTIONS(485),
    [aux_sym_task_session_token1] = ACTIONS(487),
    [aux_sym_task_schedule_token1] = ACTIONS(489),
    [sym_inline_code] = ACTIONS(485),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(485),
    [aux_sym__text_token1] = ACTIONS(35),
    [sym__eof] = ACTIONS(503),
    [sym__dedent] = ACTIONS(503),
    [sym_task_marker_default] = ACTIONS(493),
    [sym_task_marker_active] = ACTIONS(495),
    [sym_task_marker_done] = ACTIONS(497),
    [sym_task_marker_cancelled] = ACTIONS(499),
    [sym_list_item_marker] = ACTIONS(501),
  },
  [29] = {
    [sym__comment_marker] = STATE(169),
    [sym_comment] = STATE(67),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(67),
    [sym_time] = STATE(97),
    [sym_timerange] = STATE(67),
    [sym_datetime] = STATE(96),
    [sym_datetimerange] = STATE(67),
    [sym__task] = STATE(29),
    [sym_task_default] = STATE(29),
    [sym_task_active] = STATE(29),
    [sym_task_done] = STATE(29),
    [sym_task_cancelled] = STATE(29),
    [sym_task_session] = STATE(29),
    [sym_task_schedule] = STATE(29),
    [sym_list_item] = STATE(29),
    [sym__inline] = STATE(67),
    [sym_text_line] = STATE(29),
    [sym__text] = STATE(67),
    [aux_sym__task_children_repeat1] = STATE(29),
    [aux_sym_text_line_repeat1] = STATE(67),
    [aux_sym__text_repeat1] = STATE(102),
    [aux_sym__comment_marker_token1] = ACTIONS(505),
    [aux_sym__comment_marker_token2] = ACTIONS(505),
    [sym_bold] = ACTIONS(508),
    [sym_italic] = ACTIONS(508),
    [sym_underline] = ACTIONS(508),
    [sym_string] = ACTIONS(508),
    [sym_number] = ACTIONS(508),
    [sym_ticket] = ACTIONS(508),
    [aux_sym_date_token1] = ACTIONS(511),
    [aux_sym_date_token2] = ACTIONS(511),
    [aux_sym_date_token3] = ACTIONS(511),
    [aux_sym_time_token1] = ACTIONS(514),
    [aux_sym_time_token2] = ACTIONS(514),
    [sym_tag_positive] = ACTIONS(508),
    [sym_tag_negative] = ACTIONS(508),
    [sym_tag_hash] = ACTIONS(508),
    [sym_tag_context] = ACTIONS(508),
    [sym_tag_danger] = ACTIONS(508),
    [sym_tag_identifier] = ACTIONS(508),
    [aux_sym_task_session_token1] = ACTIONS(517),
    [aux_sym_task_schedule_token1] = ACTIONS(520),
    [sym_inline_code] = ACTIONS(508),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(508),
    [aux_sym__text_token1] = ACTIONS(523),
    [sym__eof] = ACTIONS(526),
    [sym__dedent] = ACTIONS(526),
    [sym_task_marker_default] = ACTIONS(528),
    [sym_task_marker_active] = ACTIONS(531),
    [sym_task_marker_done] = ACTIONS(534),
    [sym_task_marker_cancelled] = ACTIONS(537),
    [sym_list_item_marker] = ACTIONS(540),
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
    ACTIONS(501), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(67), 7,
      sym_comment,
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
    ACTIONS(501), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(67), 7,
      sym_comment,
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
  [186] = 15,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(547), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(545), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(66), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(543), 14,
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
  [258] = 15,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(561), 1,
      aux_sym__text_token1,
    ACTIONS(566), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
      sym__comment_marker,
    ACTIONS(549), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(558), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(564), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(555), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(66), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(552), 14,
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
  [330] = 15,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(547), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(66), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(543), 14,
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
  [402] = 15,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(547), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(571), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(15), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(66), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(543), 14,
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
  [474] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(577), 1,
      sym__indent,
    STATE(54), 1,
      sym__list_item_children,
    ACTIONS(573), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(575), 30,
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
  [524] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(583), 1,
      sym__indent,
    STATE(56), 1,
      sym__task_children,
    ACTIONS(579), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(581), 30,
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
  [574] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(583), 1,
      sym__indent,
    STATE(47), 1,
      sym__task_children,
    ACTIONS(585), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(587), 30,
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
  [624] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(583), 1,
      sym__indent,
    STATE(58), 1,
      sym__task_children,
    ACTIONS(589), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(591), 30,
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
  [674] = 14,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(547), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(66), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(543), 14,
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
  [742] = 14,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(547), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(66), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(543), 14,
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
  [810] = 14,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(547), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(66), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(543), 14,
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
  [878] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(583), 1,
      sym__indent,
    STATE(57), 1,
      sym__task_children,
    ACTIONS(593), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(595), 30,
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
  [928] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(597), 7,
      sym__indent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(599), 30,
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
  [973] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(601), 7,
      sym__indent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(603), 30,
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
  [1018] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(597), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(599), 30,
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
  [1062] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(605), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(607), 30,
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
  [1106] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(609), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(611), 30,
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
  [1150] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(613), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(615), 30,
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
  [1194] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(617), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(619), 30,
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
  [1238] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(621), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(623), 30,
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
  [1282] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(625), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(627), 30,
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
  [1326] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(629), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(631), 30,
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
  [1370] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(633), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(635), 30,
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
  [1414] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(637), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(639), 30,
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
  [1458] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(641), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(643), 30,
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
  [1502] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(645), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(647), 30,
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
  [1546] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(649), 6,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      ts_builtin_sym_end,
    ACTIONS(651), 30,
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
  [1590] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(655), 1,
      aux_sym_code_block_token1,
    ACTIONS(657), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(65), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(653), 14,
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
  [1653] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(43), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(59), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 14,
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
  [1716] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(36), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(59), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 14,
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
  [1779] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(661), 1,
      aux_sym_code_block_token1,
    ACTIONS(663), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(65), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(653), 14,
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
  [1842] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(665), 1,
      aux_sym_code_block_token1,
    ACTIONS(667), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(65), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(653), 14,
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
  [1905] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(37), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(59), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(659), 14,
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
  [1968] = 13,
    ACTIONS(681), 1,
      aux_sym_code_block_token1,
    ACTIONS(683), 1,
      aux_sym__text_token1,
    ACTIONS(686), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
      sym__comment_marker,
    ACTIONS(669), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(678), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(675), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(65), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(672), 14,
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
  [2031] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(688), 1,
      aux_sym_code_block_token1,
    ACTIONS(690), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(65), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(653), 14,
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
  [2094] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(692), 1,
      aux_sym_code_block_token1,
    ACTIONS(694), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(65), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(653), 14,
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
  [2157] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(90), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    ACTIONS(696), 14,
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
  [2220] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(73), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    ACTIONS(698), 14,
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
  [2283] = 13,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(700), 1,
      aux_sym_code_block_token1,
    ACTIONS(702), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    STATE(65), 7,
      sym_comment,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(653), 14,
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
  [2346] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(75), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    ACTIONS(698), 14,
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
  [2409] = 13,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(35), 1,
      aux_sym__text_token1,
    STATE(74), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(96), 1,
      sym_datetime,
    STATE(97), 1,
      sym_time,
    STATE(102), 1,
      aux_sym__text_repeat1,
    STATE(169), 1,
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
    ACTIONS(698), 14,
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
  [2472] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(704), 1,
      sym__indent,
    STATE(80), 1,
      sym__list_item_children,
    ACTIONS(573), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(575), 24,
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
  [2517] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(706), 1,
      sym__indent,
    STATE(87), 1,
      sym__task_children,
    ACTIONS(579), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(581), 24,
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
  [2562] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(706), 1,
      sym__indent,
    STATE(84), 1,
      sym__task_children,
    ACTIONS(593), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(595), 24,
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
  [2607] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(706), 1,
      sym__indent,
    STATE(86), 1,
      sym__task_children,
    ACTIONS(589), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(591), 24,
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
  [2652] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(706), 1,
      sym__indent,
    STATE(85), 1,
      sym__task_children,
    ACTIONS(585), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(587), 24,
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
  [2697] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(601), 8,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(603), 24,
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
  [2737] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(597), 8,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(599), 24,
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
  [2777] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(633), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(635), 24,
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
  [2816] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(609), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(611), 24,
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
  [2855] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(710), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(708), 24,
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
  [2894] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(714), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(712), 24,
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
  [2933] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(645), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(647), 24,
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
  [2972] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(605), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(607), 24,
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
  [3011] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(649), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(651), 24,
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
  [3050] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(641), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(643), 24,
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
  [3089] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(613), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(615), 24,
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
  [3128] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(597), 7,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
    ACTIONS(599), 24,
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
  [3167] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(716), 1,
      sym__indent,
    STATE(95), 1,
      sym__list_item_children,
    ACTIONS(573), 3,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
    ACTIONS(575), 22,
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
  [3206] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(597), 4,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
    ACTIONS(599), 22,
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
  [3240] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(597), 3,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
    ACTIONS(599), 22,
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
  [3273] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(609), 3,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
    ACTIONS(611), 22,
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
  [3306] = 5,
    ACTIONS(720), 1,
      aux_sym_daterange_token1,
    ACTIONS(722), 1,
      sym__eof,
    STATE(100), 1,
      sym_time,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(718), 21,
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
  [3343] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(633), 3,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
    ACTIONS(635), 22,
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
  [3376] = 3,
    ACTIONS(722), 1,
      sym__eof,
    ACTIONS(724), 1,
      aux_sym_daterange_token1,
    ACTIONS(718), 23,
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
  [3408] = 3,
    ACTIONS(722), 1,
      sym__eof,
    ACTIONS(726), 1,
      aux_sym_daterange_token1,
    ACTIONS(718), 23,
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
  [3440] = 2,
    ACTIONS(730), 1,
      sym__eof,
    ACTIONS(728), 24,
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
  [3470] = 2,
    ACTIONS(734), 1,
      sym__eof,
    ACTIONS(732), 24,
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
  [3500] = 2,
    ACTIONS(738), 1,
      sym__eof,
    ACTIONS(736), 24,
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
  [3530] = 4,
    ACTIONS(742), 1,
      aux_sym__text_token1,
    ACTIONS(745), 1,
      sym__eof,
    STATE(101), 1,
      aux_sym__text_repeat1,
    ACTIONS(740), 22,
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
  [3564] = 4,
    ACTIONS(749), 1,
      aux_sym__text_token1,
    ACTIONS(751), 1,
      sym__eof,
    STATE(101), 1,
      aux_sym__text_repeat1,
    ACTIONS(747), 22,
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
  [3598] = 2,
    ACTIONS(755), 1,
      sym__eof,
    ACTIONS(753), 23,
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
  [3627] = 2,
    ACTIONS(759), 1,
      sym__eof,
    ACTIONS(757), 23,
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
  [3656] = 2,
    ACTIONS(738), 1,
      sym__eof,
    ACTIONS(736), 23,
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
  [3685] = 2,
    ACTIONS(763), 1,
      sym__eof,
    ACTIONS(761), 23,
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
  [3714] = 2,
    ACTIONS(767), 1,
      sym__eof,
    ACTIONS(765), 23,
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
  [3743] = 2,
    ACTIONS(730), 1,
      sym__eof,
    ACTIONS(728), 23,
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
  [3772] = 2,
    ACTIONS(734), 1,
      sym__eof,
    ACTIONS(732), 23,
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
  [3801] = 7,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(769), 1,
      sym_code_block_end,
    ACTIONS(771), 1,
      aux_sym__text_token1,
    STATE(125), 1,
      aux_sym__text_repeat1,
    STATE(173), 1,
      sym_code_block_content,
    STATE(114), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(119), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [3825] = 7,
    ACTIONS(773), 1,
      aux_sym_date_token1,
    ACTIONS(777), 1,
      aux_sym_time_token1,
    ACTIONS(779), 1,
      aux_sym_time_token2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    STATE(133), 1,
      sym_date,
    ACTIONS(775), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(106), 2,
      sym_time,
      sym_datetime,
  [3849] = 7,
    ACTIONS(773), 1,
      aux_sym_date_token1,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(783), 1,
      aux_sym_time_token1,
    ACTIONS(785), 1,
      aux_sym_time_token2,
    STATE(129), 1,
      sym_date,
    ACTIONS(775), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(143), 2,
      sym_time,
      sym_datetime,
  [3873] = 6,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(787), 1,
      aux_sym_date_token1,
    STATE(118), 1,
      sym_date,
    STATE(128), 1,
      sym_datetime,
    ACTIONS(789), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(146), 2,
      sym_daterange,
      sym_datetimerange,
  [3894] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(771), 1,
      aux_sym__text_token1,
    ACTIONS(791), 1,
      sym_code_block_end,
    STATE(125), 1,
      aux_sym__text_repeat1,
    STATE(115), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(119), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [3915] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(793), 1,
      sym_code_block_end,
    ACTIONS(795), 1,
      aux_sym__text_token1,
    STATE(125), 1,
      aux_sym__text_repeat1,
    STATE(115), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(119), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [3936] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(798), 1,
      aux_sym__text_token1,
    STATE(125), 1,
      aux_sym__text_repeat1,
    ACTIONS(801), 2,
      sym__eof,
      sym__eol,
    STATE(116), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [3954] = 6,
    ACTIONS(773), 1,
      aux_sym_date_token1,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    STATE(129), 1,
      sym_date,
    STATE(130), 1,
      sym_datetime,
    STATE(157), 1,
      sym_datetimerange,
    ACTIONS(775), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [3974] = 6,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(783), 1,
      aux_sym_time_token1,
    ACTIONS(785), 1,
      aux_sym_time_token2,
    ACTIONS(803), 1,
      aux_sym_daterange_token1,
    STATE(131), 1,
      sym_time,
    ACTIONS(805), 2,
      sym__eof,
      sym__eol,
  [3994] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(807), 1,
      aux_sym__text_token1,
    STATE(125), 1,
      aux_sym__text_repeat1,
    ACTIONS(809), 2,
      sym__eof,
      sym__eol,
    STATE(116), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4012] = 3,
    ACTIONS(728), 1,
      aux_sym_time_token1,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(730), 4,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
      aux_sym_time_token2,
  [4025] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(811), 1,
      aux_sym__text_token1,
    STATE(121), 1,
      aux_sym__text_repeat1,
    ACTIONS(745), 2,
      sym__eof,
      sym__eol,
  [4039] = 4,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(814), 1,
      aux_sym_document_meta_token2,
    ACTIONS(816), 1,
      sym_document_meta_field_key,
    STATE(124), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4053] = 4,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(787), 1,
      aux_sym_date_token1,
    STATE(142), 1,
      sym_date,
    ACTIONS(789), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4067] = 4,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(816), 1,
      sym_document_meta_field_key,
    ACTIONS(818), 1,
      aux_sym_document_meta_token2,
    STATE(127), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4081] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(820), 1,
      aux_sym__text_token1,
    STATE(121), 1,
      aux_sym__text_repeat1,
    ACTIONS(751), 2,
      sym__eof,
      sym__eol,
  [4095] = 4,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(822), 1,
      aux_sym_date_token1,
    STATE(103), 1,
      sym_date,
    ACTIONS(824), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4109] = 4,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(826), 1,
      aux_sym_document_meta_token2,
    ACTIONS(828), 1,
      sym_document_meta_field_key,
    STATE(127), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4123] = 3,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(831), 1,
      aux_sym_daterange_token1,
    ACTIONS(805), 2,
      sym__eof,
      sym__eol,
  [4134] = 4,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(783), 1,
      aux_sym_time_token1,
    ACTIONS(785), 1,
      aux_sym_time_token2,
    STATE(131), 1,
      sym_time,
  [4147] = 3,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(831), 1,
      aux_sym_daterange_token1,
    ACTIONS(833), 2,
      sym__eof,
      sym__eol,
  [4158] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(738), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [4167] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(734), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [4176] = 4,
    ACTIONS(777), 1,
      aux_sym_time_token1,
    ACTIONS(779), 1,
      aux_sym_time_token2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    STATE(105), 1,
      sym_time,
  [4189] = 4,
    ACTIONS(777), 1,
      aux_sym_time_token1,
    ACTIONS(779), 1,
      aux_sym_time_token2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    STATE(107), 1,
      sym_time,
  [4202] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(835), 2,
      sym__eof,
      sym__eol,
  [4210] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(837), 2,
      sym__eof,
      sym__eol,
  [4218] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(839), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(38), 1,
      sym_text_to_eol,
  [4228] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(841), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(135), 1,
      sym_text_to_eol,
  [4238] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(843), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(174), 1,
      sym_document_meta_field_value,
  [4248] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(841), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(136), 1,
      sym_text_to_eol,
  [4258] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(841), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(155), 1,
      sym_text_to_eol,
  [4268] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(755), 2,
      sym__eof,
      sym__eol,
  [4276] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(763), 2,
      sym__eof,
      sym__eol,
  [4284] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(845), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [4292] = 3,
    ACTIONS(728), 1,
      aux_sym_time_token1,
    ACTIONS(730), 1,
      aux_sym_time_token2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
  [4302] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(805), 2,
      sym__eof,
      sym__eol,
  [4310] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(841), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(154), 1,
      sym_text_to_eol,
  [4320] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(847), 2,
      sym__eof,
      sym__eol,
  [4328] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(601), 2,
      sym__eof,
      sym__eol,
  [4336] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(849), 2,
      sym__eof,
      sym__eol,
  [4344] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(851), 2,
      sym__eof,
      sym__eol,
  [4352] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(853), 2,
      sym__eof,
      sym__eol,
  [4360] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(839), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(39), 1,
      sym_text_to_eol,
  [4370] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(855), 2,
      sym__eof,
      sym__eol,
  [4378] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(857), 2,
      sym__eof,
      sym__eol,
  [4386] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(859), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [4394] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(833), 2,
      sym__eof,
      sym__eol,
  [4402] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(841), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(152), 1,
      sym_text_to_eol,
  [4412] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(861), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(76), 1,
      sym_text_to_eol,
  [4422] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(861), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(77), 1,
      sym_text_to_eol,
  [4432] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(863), 2,
      aux_sym_document_meta_token2,
      sym_document_meta_field_key,
  [4440] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(841), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(151), 1,
      sym_text_to_eol,
  [4450] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(841), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(150), 1,
      sym_text_to_eol,
  [4460] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(841), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(148), 1,
      sym_text_to_eol,
  [4470] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(865), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [4478] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(867), 1,
      aux_sym_code_block_start_token1,
    ACTIONS(869), 1,
      anon_sym_LF,
  [4488] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(871), 1,
      ts_builtin_sym_end,
  [4495] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(873), 1,
      sym__eol,
  [4502] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(875), 1,
      aux_sym_document_meta_field_value_token1,
  [4509] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(877), 1,
      anon_sym_COLON,
  [4516] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(879), 1,
      sym_code_block_language,
  [4523] = 1,
    ACTIONS(881), 2,
      sym__eof,
      aux_sym_code_block_token1,
  [4528] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(883), 1,
      sym_code_block_end,
  [4535] = 2,
    ACTIONS(781), 1,
      aux_sym_code_block_token1,
    ACTIONS(885), 1,
      sym__eol,
  [4542] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(887), 1,
      anon_sym_LF,
  [4549] = 1,
    ACTIONS(889), 2,
      sym__eof,
      aux_sym_code_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(30)] = 0,
  [SMALL_STATE(31)] = 93,
  [SMALL_STATE(32)] = 186,
  [SMALL_STATE(33)] = 258,
  [SMALL_STATE(34)] = 330,
  [SMALL_STATE(35)] = 402,
  [SMALL_STATE(36)] = 474,
  [SMALL_STATE(37)] = 524,
  [SMALL_STATE(38)] = 574,
  [SMALL_STATE(39)] = 624,
  [SMALL_STATE(40)] = 674,
  [SMALL_STATE(41)] = 742,
  [SMALL_STATE(42)] = 810,
  [SMALL_STATE(43)] = 878,
  [SMALL_STATE(44)] = 928,
  [SMALL_STATE(45)] = 973,
  [SMALL_STATE(46)] = 1018,
  [SMALL_STATE(47)] = 1062,
  [SMALL_STATE(48)] = 1106,
  [SMALL_STATE(49)] = 1150,
  [SMALL_STATE(50)] = 1194,
  [SMALL_STATE(51)] = 1238,
  [SMALL_STATE(52)] = 1282,
  [SMALL_STATE(53)] = 1326,
  [SMALL_STATE(54)] = 1370,
  [SMALL_STATE(55)] = 1414,
  [SMALL_STATE(56)] = 1458,
  [SMALL_STATE(57)] = 1502,
  [SMALL_STATE(58)] = 1546,
  [SMALL_STATE(59)] = 1590,
  [SMALL_STATE(60)] = 1653,
  [SMALL_STATE(61)] = 1716,
  [SMALL_STATE(62)] = 1779,
  [SMALL_STATE(63)] = 1842,
  [SMALL_STATE(64)] = 1905,
  [SMALL_STATE(65)] = 1968,
  [SMALL_STATE(66)] = 2031,
  [SMALL_STATE(67)] = 2094,
  [SMALL_STATE(68)] = 2157,
  [SMALL_STATE(69)] = 2220,
  [SMALL_STATE(70)] = 2283,
  [SMALL_STATE(71)] = 2346,
  [SMALL_STATE(72)] = 2409,
  [SMALL_STATE(73)] = 2472,
  [SMALL_STATE(74)] = 2517,
  [SMALL_STATE(75)] = 2562,
  [SMALL_STATE(76)] = 2607,
  [SMALL_STATE(77)] = 2652,
  [SMALL_STATE(78)] = 2697,
  [SMALL_STATE(79)] = 2737,
  [SMALL_STATE(80)] = 2777,
  [SMALL_STATE(81)] = 2816,
  [SMALL_STATE(82)] = 2855,
  [SMALL_STATE(83)] = 2894,
  [SMALL_STATE(84)] = 2933,
  [SMALL_STATE(85)] = 2972,
  [SMALL_STATE(86)] = 3011,
  [SMALL_STATE(87)] = 3050,
  [SMALL_STATE(88)] = 3089,
  [SMALL_STATE(89)] = 3128,
  [SMALL_STATE(90)] = 3167,
  [SMALL_STATE(91)] = 3206,
  [SMALL_STATE(92)] = 3240,
  [SMALL_STATE(93)] = 3273,
  [SMALL_STATE(94)] = 3306,
  [SMALL_STATE(95)] = 3343,
  [SMALL_STATE(96)] = 3376,
  [SMALL_STATE(97)] = 3408,
  [SMALL_STATE(98)] = 3440,
  [SMALL_STATE(99)] = 3470,
  [SMALL_STATE(100)] = 3500,
  [SMALL_STATE(101)] = 3530,
  [SMALL_STATE(102)] = 3564,
  [SMALL_STATE(103)] = 3598,
  [SMALL_STATE(104)] = 3627,
  [SMALL_STATE(105)] = 3656,
  [SMALL_STATE(106)] = 3685,
  [SMALL_STATE(107)] = 3714,
  [SMALL_STATE(108)] = 3743,
  [SMALL_STATE(109)] = 3772,
  [SMALL_STATE(110)] = 3801,
  [SMALL_STATE(111)] = 3825,
  [SMALL_STATE(112)] = 3849,
  [SMALL_STATE(113)] = 3873,
  [SMALL_STATE(114)] = 3894,
  [SMALL_STATE(115)] = 3915,
  [SMALL_STATE(116)] = 3936,
  [SMALL_STATE(117)] = 3954,
  [SMALL_STATE(118)] = 3974,
  [SMALL_STATE(119)] = 3994,
  [SMALL_STATE(120)] = 4012,
  [SMALL_STATE(121)] = 4025,
  [SMALL_STATE(122)] = 4039,
  [SMALL_STATE(123)] = 4053,
  [SMALL_STATE(124)] = 4067,
  [SMALL_STATE(125)] = 4081,
  [SMALL_STATE(126)] = 4095,
  [SMALL_STATE(127)] = 4109,
  [SMALL_STATE(128)] = 4123,
  [SMALL_STATE(129)] = 4134,
  [SMALL_STATE(130)] = 4147,
  [SMALL_STATE(131)] = 4158,
  [SMALL_STATE(132)] = 4167,
  [SMALL_STATE(133)] = 4176,
  [SMALL_STATE(134)] = 4189,
  [SMALL_STATE(135)] = 4202,
  [SMALL_STATE(136)] = 4210,
  [SMALL_STATE(137)] = 4218,
  [SMALL_STATE(138)] = 4228,
  [SMALL_STATE(139)] = 4238,
  [SMALL_STATE(140)] = 4248,
  [SMALL_STATE(141)] = 4258,
  [SMALL_STATE(142)] = 4268,
  [SMALL_STATE(143)] = 4276,
  [SMALL_STATE(144)] = 4284,
  [SMALL_STATE(145)] = 4292,
  [SMALL_STATE(146)] = 4302,
  [SMALL_STATE(147)] = 4310,
  [SMALL_STATE(148)] = 4320,
  [SMALL_STATE(149)] = 4328,
  [SMALL_STATE(150)] = 4336,
  [SMALL_STATE(151)] = 4344,
  [SMALL_STATE(152)] = 4352,
  [SMALL_STATE(153)] = 4360,
  [SMALL_STATE(154)] = 4370,
  [SMALL_STATE(155)] = 4378,
  [SMALL_STATE(156)] = 4386,
  [SMALL_STATE(157)] = 4394,
  [SMALL_STATE(158)] = 4402,
  [SMALL_STATE(159)] = 4412,
  [SMALL_STATE(160)] = 4422,
  [SMALL_STATE(161)] = 4432,
  [SMALL_STATE(162)] = 4440,
  [SMALL_STATE(163)] = 4450,
  [SMALL_STATE(164)] = 4460,
  [SMALL_STATE(165)] = 4470,
  [SMALL_STATE(166)] = 4478,
  [SMALL_STATE(167)] = 4488,
  [SMALL_STATE(168)] = 4495,
  [SMALL_STATE(169)] = 4502,
  [SMALL_STATE(170)] = 4509,
  [SMALL_STATE(171)] = 4516,
  [SMALL_STATE(172)] = 4523,
  [SMALL_STATE(173)] = 4528,
  [SMALL_STATE(174)] = 4535,
  [SMALL_STATE(175)] = 4542,
  [SMALL_STATE(176)] = 4549,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(169),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(140),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(141),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(158),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(162),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(163),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(164),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(166),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(153),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(137),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 3, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 3, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(169),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(70),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(98),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(99),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(141),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(147),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(158),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(162),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(163),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(164),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(166),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(102),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(64),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(60),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(153),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(137),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(61),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 3, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 3, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(169),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(70),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(98),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(99),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(147),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(158),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(162),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(163),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(164),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(166),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(102),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(64),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(60),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(153),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(137),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(61),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(169),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(70),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(98),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(99),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(158),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(162),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(163),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(164),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(166),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(102),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(64),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(60),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(153),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(137),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(61),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 3, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 3, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(169),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(70),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(98),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(99),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(162),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(163),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(164),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(166),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(102),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(64),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(60),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(153),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(137),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(61),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 3, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 3, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 3, .production_id = 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 3, .production_id = 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(169),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(70),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(98),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(99),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(163),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(164),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(166),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(102),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(64),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(60),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(153),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(137),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(61),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 3, .production_id = 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 3, .production_id = 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(169),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(70),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(98),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(99),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(164),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(166),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(102),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(64),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(60),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(153),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(137),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(61),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(169),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(70),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(98),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(99),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(166),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(102),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(64),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(60),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(153),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(137),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(61),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(169),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(67),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(98),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(99),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(117),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(113),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(102),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(72),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(71),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(159),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(160),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(69),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(169),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(66),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(98),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(99),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(102),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(68),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 2),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_to_eol, 1),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_to_eol, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 3),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_children, 3),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_children, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_children, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__task_children, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title_basic, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title_basic, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 3),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 3),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 3),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(169),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(65),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(98),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(99),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(102),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_schedule, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_schedule, 3),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_session, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_session, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline, 1),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(101),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 1),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_daterange, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daterange, 3),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetimerange, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetimerange, 3),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timerange, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timerange, 3),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_content, 1),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2), SHIFT_REPEAT(125),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2), SHIFT_REPEAT(125),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(121),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2), SHIFT_REPEAT(170),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 2),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_text_line, 2),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field, 4, .production_id = 2),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 4),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [871] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field_value, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
