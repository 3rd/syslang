#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 182
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 11
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
  sym_italic = 9,
  sym_underline = 10,
  sym_bold_content = 11,
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
  sym_document = 57,
  sym_document_title_basic = 58,
  sym_document_meta = 59,
  sym_document_meta_field = 60,
  sym_document_meta_field_value = 61,
  sym__comment_marker = 62,
  sym_comment = 63,
  sym_bold = 64,
  sym__emphasis = 65,
  sym_date = 66,
  sym_daterange = 67,
  sym_time = 68,
  sym_timerange = 69,
  sym_datetime = 70,
  sym_datetimerange = 71,
  sym_heading_1 = 72,
  sym_heading_2 = 73,
  sym_heading_3 = 74,
  sym_heading_4 = 75,
  sym_heading_5 = 76,
  sym_heading_6 = 77,
  sym_section = 78,
  sym__task = 79,
  sym_task_default = 80,
  sym_task_active = 81,
  sym_task_done = 82,
  sym_task_cancelled = 83,
  sym__task_children = 84,
  sym_task_session = 85,
  sym_task_schedule = 86,
  sym_list_item = 87,
  sym__list_item_children = 88,
  sym_code_block_content = 89,
  sym_code_block_start = 90,
  sym_code_block = 91,
  sym__inline = 92,
  sym_text_to_eol = 93,
  sym_text_line = 94,
  sym__text = 95,
  sym__raw_text_line = 96,
  aux_sym_document_repeat1 = 97,
  aux_sym_document_meta_repeat1 = 98,
  aux_sym_heading_1_repeat1 = 99,
  aux_sym_heading_2_repeat1 = 100,
  aux_sym_heading_3_repeat1 = 101,
  aux_sym_heading_4_repeat1 = 102,
  aux_sym_heading_5_repeat1 = 103,
  aux_sym_heading_6_repeat1 = 104,
  aux_sym_section_repeat1 = 105,
  aux_sym__task_children_repeat1 = 106,
  aux_sym__list_item_children_repeat1 = 107,
  aux_sym_code_block_content_repeat1 = 108,
  aux_sym_text_line_repeat1 = 109,
  aux_sym__text_repeat1 = 110,
  aux_sym__raw_text_line_repeat1 = 111,
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
  [sym_italic] = "italic",
  [sym_underline] = "underline",
  [sym_bold_content] = "bold_content",
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
  [sym_document] = "document",
  [sym_document_title_basic] = "document_title_basic",
  [sym_document_meta] = "document_meta",
  [sym_document_meta_field] = "document_meta_field",
  [sym_document_meta_field_value] = "document_meta_field_value",
  [sym__comment_marker] = "_comment_marker",
  [sym_comment] = "comment",
  [sym_bold] = "bold",
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
  [sym_italic] = sym_italic,
  [sym_underline] = sym_underline,
  [sym_bold_content] = sym_bold_content,
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
  [sym_document] = sym_document,
  [sym_document_title_basic] = sym_document_title_basic,
  [sym_document_meta] = sym_document_meta,
  [sym_document_meta_field] = sym_document_meta_field,
  [sym_document_meta_field_value] = sym_document_meta_field_value,
  [sym__comment_marker] = sym__comment_marker,
  [sym_comment] = sym_comment,
  [sym_bold] = sym_bold,
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
  [sym_italic] = {
    .visible = true,
    .named = true,
  },
  [sym_underline] = {
    .visible = true,
    .named = true,
  },
  [sym_bold_content] = {
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
  [34] = 32,
  [35] = 32,
  [36] = 36,
  [37] = 36,
  [38] = 36,
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
  [49] = 48,
  [50] = 48,
  [51] = 48,
  [52] = 47,
  [53] = 48,
  [54] = 47,
  [55] = 46,
  [56] = 45,
  [57] = 48,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 44,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 40,
  [74] = 43,
  [75] = 42,
  [76] = 41,
  [77] = 39,
  [78] = 44,
  [79] = 58,
  [80] = 65,
  [81] = 81,
  [82] = 44,
  [83] = 62,
  [84] = 84,
  [85] = 72,
  [86] = 70,
  [87] = 69,
  [88] = 68,
  [89] = 67,
  [90] = 43,
  [91] = 44,
  [92] = 72,
  [93] = 44,
  [94] = 65,
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
  [106] = 98,
  [107] = 107,
  [108] = 99,
  [109] = 96,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 113,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 99,
  [124] = 124,
  [125] = 103,
  [126] = 126,
  [127] = 127,
  [128] = 127,
  [129] = 97,
  [130] = 130,
  [131] = 131,
  [132] = 96,
  [133] = 98,
  [134] = 134,
  [135] = 135,
  [136] = 135,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 58,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 110,
  [147] = 105,
  [148] = 148,
  [149] = 149,
  [150] = 99,
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
  [162] = 162,
  [163] = 163,
  [164] = 162,
  [165] = 141,
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
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(79)
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '`') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '*') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(150);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(105);
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
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '`') ADVANCE(156);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(176);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == 'S') ADVANCE(184);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(177);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(104);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(222);
      if (lookahead == '@') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(160);
      if (lookahead == ',' ||
          lookahead == '.') SKIP(39)
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(178);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(37)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '@') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(90);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(39)
      if (lookahead == '\n') ADVANCE(161);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(102);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(103);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
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
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(131);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(13);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(18);
      END_STATE();
    case 76:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(175);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 77:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(174);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 78:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(174);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 79:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(79)
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '`') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 80:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(81)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '@') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(81)
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '@') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
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
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_document_meta_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_document_meta_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (lookahead == '-') ADVANCE(41);
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
      ACCEPT_TOKEN(sym_italic);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_italic);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_italic);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_italic);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_underline);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_underline);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_underline);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_underline);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(102);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__emphasis_token1);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '`') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
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
      if (lookahead == '-') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(71);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(237);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_positive);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_negative);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_hash);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_context);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_danger);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_heading_1_marker);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_heading_2_marker);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_heading_3_marker);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_heading_4_marker);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_heading_5_marker);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_heading_6_marker);
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
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_task_session_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_task_schedule_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_inline_code);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(89);
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
          lookahead != ' ') ADVANCE(143);
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
          lookahead != ' ') ADVANCE(246);
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
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(241);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(150);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(246);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(174);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(175);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(176);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == 'S') ADVANCE(184);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(177);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(178);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(240);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '$') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(243);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(245);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(245);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(245);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '_') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '`') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(222);
      if (lookahead == '@') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(131);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 247:
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
  [1] = {.lex_state = 77, .external_lex_state = 2},
  [2] = {.lex_state = 76, .external_lex_state = 2},
  [3] = {.lex_state = 76, .external_lex_state = 2},
  [4] = {.lex_state = 76, .external_lex_state = 2},
  [5] = {.lex_state = 76, .external_lex_state = 2},
  [6] = {.lex_state = 76, .external_lex_state = 2},
  [7] = {.lex_state = 76, .external_lex_state = 2},
  [8] = {.lex_state = 76, .external_lex_state = 2},
  [9] = {.lex_state = 76, .external_lex_state = 2},
  [10] = {.lex_state = 76, .external_lex_state = 2},
  [11] = {.lex_state = 76, .external_lex_state = 2},
  [12] = {.lex_state = 76, .external_lex_state = 2},
  [13] = {.lex_state = 76, .external_lex_state = 2},
  [14] = {.lex_state = 76, .external_lex_state = 2},
  [15] = {.lex_state = 76, .external_lex_state = 2},
  [16] = {.lex_state = 76, .external_lex_state = 2},
  [17] = {.lex_state = 76, .external_lex_state = 2},
  [18] = {.lex_state = 76, .external_lex_state = 2},
  [19] = {.lex_state = 76, .external_lex_state = 2},
  [20] = {.lex_state = 76, .external_lex_state = 2},
  [21] = {.lex_state = 76, .external_lex_state = 2},
  [22] = {.lex_state = 76, .external_lex_state = 2},
  [23] = {.lex_state = 76, .external_lex_state = 2},
  [24] = {.lex_state = 76, .external_lex_state = 2},
  [25] = {.lex_state = 76, .external_lex_state = 2},
  [26] = {.lex_state = 76, .external_lex_state = 2},
  [27] = {.lex_state = 30, .external_lex_state = 3},
  [28] = {.lex_state = 30, .external_lex_state = 3},
  [29] = {.lex_state = 30, .external_lex_state = 3},
  [30] = {.lex_state = 30, .external_lex_state = 2},
  [31] = {.lex_state = 30, .external_lex_state = 2},
  [32] = {.lex_state = 31, .external_lex_state = 4},
  [33] = {.lex_state = 31, .external_lex_state = 4},
  [34] = {.lex_state = 31, .external_lex_state = 4},
  [35] = {.lex_state = 31, .external_lex_state = 4},
  [36] = {.lex_state = 31, .external_lex_state = 5},
  [37] = {.lex_state = 31, .external_lex_state = 5},
  [38] = {.lex_state = 31, .external_lex_state = 5},
  [39] = {.lex_state = 76, .external_lex_state = 6},
  [40] = {.lex_state = 76, .external_lex_state = 6},
  [41] = {.lex_state = 76, .external_lex_state = 6},
  [42] = {.lex_state = 76, .external_lex_state = 6},
  [43] = {.lex_state = 76, .external_lex_state = 6},
  [44] = {.lex_state = 76, .external_lex_state = 6},
  [45] = {.lex_state = 31, .external_lex_state = 7},
  [46] = {.lex_state = 31, .external_lex_state = 7},
  [47] = {.lex_state = 31, .external_lex_state = 7},
  [48] = {.lex_state = 31, .external_lex_state = 8},
  [49] = {.lex_state = 31, .external_lex_state = 8},
  [50] = {.lex_state = 31, .external_lex_state = 8},
  [51] = {.lex_state = 31, .external_lex_state = 8},
  [52] = {.lex_state = 31, .external_lex_state = 7},
  [53] = {.lex_state = 31, .external_lex_state = 8},
  [54] = {.lex_state = 31, .external_lex_state = 7},
  [55] = {.lex_state = 31, .external_lex_state = 7},
  [56] = {.lex_state = 31, .external_lex_state = 7},
  [57] = {.lex_state = 31, .external_lex_state = 8},
  [58] = {.lex_state = 76, .external_lex_state = 6},
  [59] = {.lex_state = 31, .external_lex_state = 8},
  [60] = {.lex_state = 76, .external_lex_state = 2},
  [61] = {.lex_state = 76, .external_lex_state = 2},
  [62] = {.lex_state = 76, .external_lex_state = 2},
  [63] = {.lex_state = 76, .external_lex_state = 2},
  [64] = {.lex_state = 76, .external_lex_state = 2},
  [65] = {.lex_state = 76, .external_lex_state = 2},
  [66] = {.lex_state = 76, .external_lex_state = 2},
  [67] = {.lex_state = 76, .external_lex_state = 2},
  [68] = {.lex_state = 76, .external_lex_state = 2},
  [69] = {.lex_state = 76, .external_lex_state = 2},
  [70] = {.lex_state = 76, .external_lex_state = 2},
  [71] = {.lex_state = 76, .external_lex_state = 2},
  [72] = {.lex_state = 76, .external_lex_state = 2},
  [73] = {.lex_state = 30, .external_lex_state = 9},
  [74] = {.lex_state = 30, .external_lex_state = 9},
  [75] = {.lex_state = 30, .external_lex_state = 9},
  [76] = {.lex_state = 30, .external_lex_state = 9},
  [77] = {.lex_state = 30, .external_lex_state = 9},
  [78] = {.lex_state = 30, .external_lex_state = 9},
  [79] = {.lex_state = 30, .external_lex_state = 9},
  [80] = {.lex_state = 30, .external_lex_state = 3},
  [81] = {.lex_state = 30, .external_lex_state = 3},
  [82] = {.lex_state = 30, .external_lex_state = 3},
  [83] = {.lex_state = 30, .external_lex_state = 3},
  [84] = {.lex_state = 30, .external_lex_state = 3},
  [85] = {.lex_state = 30, .external_lex_state = 3},
  [86] = {.lex_state = 30, .external_lex_state = 3},
  [87] = {.lex_state = 30, .external_lex_state = 3},
  [88] = {.lex_state = 30, .external_lex_state = 3},
  [89] = {.lex_state = 30, .external_lex_state = 3},
  [90] = {.lex_state = 31, .external_lex_state = 10},
  [91] = {.lex_state = 31, .external_lex_state = 10},
  [92] = {.lex_state = 31, .external_lex_state = 4},
  [93] = {.lex_state = 31, .external_lex_state = 4},
  [94] = {.lex_state = 31, .external_lex_state = 4},
  [95] = {.lex_state = 36, .external_lex_state = 8},
  [96] = {.lex_state = 36, .external_lex_state = 8},
  [97] = {.lex_state = 31, .external_lex_state = 8},
  [98] = {.lex_state = 36, .external_lex_state = 8},
  [99] = {.lex_state = 36, .external_lex_state = 8},
  [100] = {.lex_state = 32, .external_lex_state = 8},
  [101] = {.lex_state = 32, .external_lex_state = 8},
  [102] = {.lex_state = 36, .external_lex_state = 8},
  [103] = {.lex_state = 31, .external_lex_state = 8},
  [104] = {.lex_state = 36, .external_lex_state = 8},
  [105] = {.lex_state = 31, .external_lex_state = 8},
  [106] = {.lex_state = 31, .external_lex_state = 8},
  [107] = {.lex_state = 31, .external_lex_state = 8},
  [108] = {.lex_state = 31, .external_lex_state = 8},
  [109] = {.lex_state = 31, .external_lex_state = 8},
  [110] = {.lex_state = 31, .external_lex_state = 8},
  [111] = {.lex_state = 31, .external_lex_state = 8},
  [112] = {.lex_state = 31, .external_lex_state = 8},
  [113] = {.lex_state = 80},
  [114] = {.lex_state = 80},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 33},
  [117] = {.lex_state = 33},
  [118] = {.lex_state = 80},
  [119] = {.lex_state = 80, .external_lex_state = 11},
  [120] = {.lex_state = 80},
  [121] = {.lex_state = 34, .external_lex_state = 11},
  [122] = {.lex_state = 34, .external_lex_state = 11},
  [123] = {.lex_state = 80, .external_lex_state = 11},
  [124] = {.lex_state = 37},
  [125] = {.lex_state = 34, .external_lex_state = 11},
  [126] = {.lex_state = 37},
  [127] = {.lex_state = 80},
  [128] = {.lex_state = 80},
  [129] = {.lex_state = 34, .external_lex_state = 11},
  [130] = {.lex_state = 37},
  [131] = {.lex_state = 80, .external_lex_state = 11},
  [132] = {.lex_state = 80, .external_lex_state = 11},
  [133] = {.lex_state = 80, .external_lex_state = 11},
  [134] = {.lex_state = 80, .external_lex_state = 11},
  [135] = {.lex_state = 80},
  [136] = {.lex_state = 80},
  [137] = {.lex_state = 80},
  [138] = {.lex_state = 80, .external_lex_state = 11},
  [139] = {.lex_state = 33},
  [140] = {.lex_state = 80, .external_lex_state = 11},
  [141] = {.lex_state = 38},
  [142] = {.lex_state = 33},
  [143] = {.lex_state = 38},
  [144] = {.lex_state = 80, .external_lex_state = 11},
  [145] = {.lex_state = 80, .external_lex_state = 11},
  [146] = {.lex_state = 80, .external_lex_state = 11},
  [147] = {.lex_state = 80, .external_lex_state = 11},
  [148] = {.lex_state = 80, .external_lex_state = 11},
  [149] = {.lex_state = 80, .external_lex_state = 11},
  [150] = {.lex_state = 80},
  [151] = {.lex_state = 33},
  [152] = {.lex_state = 80, .external_lex_state = 11},
  [153] = {.lex_state = 80, .external_lex_state = 11},
  [154] = {.lex_state = 38},
  [155] = {.lex_state = 80, .external_lex_state = 11},
  [156] = {.lex_state = 38},
  [157] = {.lex_state = 38},
  [158] = {.lex_state = 37},
  [159] = {.lex_state = 38},
  [160] = {.lex_state = 80, .external_lex_state = 11},
  [161] = {.lex_state = 38},
  [162] = {.lex_state = 38},
  [163] = {.lex_state = 38},
  [164] = {.lex_state = 38},
  [165] = {.lex_state = 38},
  [166] = {.lex_state = 38},
  [167] = {.lex_state = 35},
  [168] = {.lex_state = 38},
  [169] = {.lex_state = 80, .external_lex_state = 11},
  [170] = {.lex_state = 80},
  [171] = {.lex_state = 80, .external_lex_state = 12},
  [172] = {.lex_state = 80},
  [173] = {.lex_state = 38},
  [174] = {.lex_state = 80, .external_lex_state = 13},
  [175] = {.lex_state = 80},
  [176] = {.lex_state = 80, .external_lex_state = 14},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 80, .external_lex_state = 12},
  [179] = {.lex_state = 80},
  [180] = {.lex_state = 40},
  [181] = {.lex_state = 80, .external_lex_state = 14},
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
};

static const bool ts_external_scanner_states[15][EXTERNAL_TOKEN_COUNT] = {
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
  },
  [2] = {
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
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
  },
  [4] = {
    [ts_external_token__eof] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
  },
  [5] = {
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
    [ts_external_token_task_marker_default] = true,
    [ts_external_token_task_marker_active] = true,
    [ts_external_token_task_marker_done] = true,
    [ts_external_token_task_marker_cancelled] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
  },
  [7] = {
    [ts_external_token_bold_start] = true,
  },
  [8] = {
    [ts_external_token__eof] = true,
    [ts_external_token_bold_start] = true,
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
  },
  [10] = {
    [ts_external_token__eof] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_list_item_marker] = true,
    [ts_external_token_bold_start] = true,
  },
  [11] = {
    [ts_external_token__eof] = true,
    [ts_external_token__eol] = true,
  },
  [12] = {
    [ts_external_token__eol] = true,
  },
  [13] = {
    [ts_external_token_bold_end] = true,
  },
  [14] = {
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
    [sym_bold_start] = ACTIONS(1),
    [sym_bold_end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(172),
    [sym_document_title_basic] = STATE(4),
    [sym_document_meta] = STATE(4),
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(3),
    [sym__text] = STATE(57),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_document_title_basic_marker] = ACTIONS(7),
    [aux_sym_document_meta_token1] = ACTIONS(9),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_inline_code] = ACTIONS(15),
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
  },
  [2] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(57),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym__comment_marker_token1] = ACTIONS(53),
    [aux_sym__comment_marker_token2] = ACTIONS(53),
    [sym_italic] = ACTIONS(56),
    [sym_underline] = ACTIONS(56),
    [sym_string] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [sym_ticket] = ACTIONS(59),
    [aux_sym_date_token1] = ACTIONS(62),
    [aux_sym_date_token2] = ACTIONS(62),
    [aux_sym_date_token3] = ACTIONS(62),
    [aux_sym_time_token1] = ACTIONS(65),
    [aux_sym_time_token2] = ACTIONS(65),
    [sym_tag_positive] = ACTIONS(59),
    [sym_tag_negative] = ACTIONS(59),
    [sym_tag_hash] = ACTIONS(59),
    [sym_tag_context] = ACTIONS(59),
    [sym_tag_danger] = ACTIONS(59),
    [sym_tag_identifier] = ACTIONS(59),
    [sym_heading_1_marker] = ACTIONS(68),
    [sym_heading_2_marker] = ACTIONS(71),
    [sym_heading_3_marker] = ACTIONS(74),
    [sym_heading_4_marker] = ACTIONS(77),
    [sym_heading_5_marker] = ACTIONS(80),
    [sym_heading_6_marker] = ACTIONS(83),
    [sym_section_marker] = ACTIONS(86),
    [sym_inline_code] = ACTIONS(59),
    [anon_sym_ATcode] = ACTIONS(89),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(59),
    [aux_sym__text_token1] = ACTIONS(92),
    [sym_task_marker_default] = ACTIONS(95),
    [sym_task_marker_active] = ACTIONS(98),
    [sym_task_marker_done] = ACTIONS(101),
    [sym_task_marker_cancelled] = ACTIONS(104),
    [sym_list_item_marker] = ACTIONS(107),
    [sym_bold_start] = ACTIONS(110),
  },
  [3] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(57),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(113),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_inline_code] = ACTIONS(15),
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
  },
  [4] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(5),
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(5),
    [sym__text] = STATE(57),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(113),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_inline_code] = ACTIONS(15),
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
  },
  [5] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(57),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(115),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_inline_code] = ACTIONS(15),
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
  },
  [6] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(57),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(117),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(119),
    [sym_heading_2_marker] = ACTIONS(23),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [7] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(8),
    [sym__text] = STATE(57),
    [aux_sym_heading_1_repeat1] = STATE(8),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(121),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(123),
    [sym_heading_2_marker] = ACTIONS(23),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [8] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(8),
    [sym__text] = STATE(57),
    [aux_sym_heading_1_repeat1] = STATE(8),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym__comment_marker_token1] = ACTIONS(127),
    [aux_sym__comment_marker_token2] = ACTIONS(127),
    [sym_italic] = ACTIONS(130),
    [sym_underline] = ACTIONS(130),
    [sym_string] = ACTIONS(133),
    [sym_number] = ACTIONS(133),
    [sym_ticket] = ACTIONS(133),
    [aux_sym_date_token1] = ACTIONS(136),
    [aux_sym_date_token2] = ACTIONS(136),
    [aux_sym_date_token3] = ACTIONS(136),
    [aux_sym_time_token1] = ACTIONS(139),
    [aux_sym_time_token2] = ACTIONS(139),
    [sym_tag_positive] = ACTIONS(133),
    [sym_tag_negative] = ACTIONS(133),
    [sym_tag_hash] = ACTIONS(133),
    [sym_tag_context] = ACTIONS(133),
    [sym_tag_danger] = ACTIONS(133),
    [sym_tag_identifier] = ACTIONS(133),
    [sym_heading_1_marker] = ACTIONS(142),
    [sym_heading_2_marker] = ACTIONS(144),
    [sym_heading_3_marker] = ACTIONS(147),
    [sym_heading_4_marker] = ACTIONS(150),
    [sym_heading_5_marker] = ACTIONS(153),
    [sym_heading_6_marker] = ACTIONS(156),
    [sym_section_marker] = ACTIONS(159),
    [sym_inline_code] = ACTIONS(133),
    [anon_sym_ATcode] = ACTIONS(162),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(133),
    [aux_sym__text_token1] = ACTIONS(165),
    [sym_task_marker_default] = ACTIONS(168),
    [sym_task_marker_active] = ACTIONS(171),
    [sym_task_marker_done] = ACTIONS(174),
    [sym_task_marker_cancelled] = ACTIONS(177),
    [sym_list_item_marker] = ACTIONS(180),
    [sym_bold_start] = ACTIONS(183),
  },
  [9] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(11),
    [sym__text] = STATE(57),
    [aux_sym_heading_2_repeat1] = STATE(11),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(188),
    [sym_heading_2_marker] = ACTIONS(188),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [10] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(9),
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(9),
    [sym__text] = STATE(57),
    [aux_sym_heading_2_repeat1] = STATE(9),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(190),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(192),
    [sym_heading_2_marker] = ACTIONS(192),
    [sym_heading_3_marker] = ACTIONS(25),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [11] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(11),
    [sym__text] = STATE(57),
    [aux_sym_heading_2_repeat1] = STATE(11),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym__comment_marker_token1] = ACTIONS(196),
    [aux_sym__comment_marker_token2] = ACTIONS(196),
    [sym_italic] = ACTIONS(199),
    [sym_underline] = ACTIONS(199),
    [sym_string] = ACTIONS(202),
    [sym_number] = ACTIONS(202),
    [sym_ticket] = ACTIONS(202),
    [aux_sym_date_token1] = ACTIONS(205),
    [aux_sym_date_token2] = ACTIONS(205),
    [aux_sym_date_token3] = ACTIONS(205),
    [aux_sym_time_token1] = ACTIONS(208),
    [aux_sym_time_token2] = ACTIONS(208),
    [sym_tag_positive] = ACTIONS(202),
    [sym_tag_negative] = ACTIONS(202),
    [sym_tag_hash] = ACTIONS(202),
    [sym_tag_context] = ACTIONS(202),
    [sym_tag_danger] = ACTIONS(202),
    [sym_tag_identifier] = ACTIONS(202),
    [sym_heading_1_marker] = ACTIONS(211),
    [sym_heading_2_marker] = ACTIONS(211),
    [sym_heading_3_marker] = ACTIONS(213),
    [sym_heading_4_marker] = ACTIONS(216),
    [sym_heading_5_marker] = ACTIONS(219),
    [sym_heading_6_marker] = ACTIONS(222),
    [sym_section_marker] = ACTIONS(225),
    [sym_inline_code] = ACTIONS(202),
    [anon_sym_ATcode] = ACTIONS(228),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(202),
    [aux_sym__text_token1] = ACTIONS(231),
    [sym_task_marker_default] = ACTIONS(234),
    [sym_task_marker_active] = ACTIONS(237),
    [sym_task_marker_done] = ACTIONS(240),
    [sym_task_marker_cancelled] = ACTIONS(243),
    [sym_list_item_marker] = ACTIONS(246),
    [sym_bold_start] = ACTIONS(249),
  },
  [12] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(14),
    [sym__text] = STATE(57),
    [aux_sym_heading_3_repeat1] = STATE(14),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(252),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(254),
    [sym_heading_2_marker] = ACTIONS(254),
    [sym_heading_3_marker] = ACTIONS(254),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [13] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(57),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(256),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(258),
    [sym_heading_2_marker] = ACTIONS(258),
    [sym_heading_3_marker] = ACTIONS(258),
    [sym_heading_4_marker] = ACTIONS(27),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [14] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(14),
    [sym__text] = STATE(57),
    [aux_sym_heading_3_repeat1] = STATE(14),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(260),
    [aux_sym__comment_marker_token1] = ACTIONS(262),
    [aux_sym__comment_marker_token2] = ACTIONS(262),
    [sym_italic] = ACTIONS(265),
    [sym_underline] = ACTIONS(265),
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
  },
  [15] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(17),
    [sym__text] = STATE(57),
    [aux_sym_heading_4_repeat1] = STATE(17),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(315),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(317),
    [sym_heading_2_marker] = ACTIONS(317),
    [sym_heading_3_marker] = ACTIONS(317),
    [sym_heading_4_marker] = ACTIONS(317),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [16] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
    [sym_heading_5] = STATE(15),
    [sym_heading_6] = STATE(15),
    [sym_section] = STATE(15),
    [sym__task] = STATE(15),
    [sym_task_default] = STATE(15),
    [sym_task_active] = STATE(15),
    [sym_task_done] = STATE(15),
    [sym_task_cancelled] = STATE(15),
    [sym_list_item] = STATE(15),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(15),
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(15),
    [sym__text] = STATE(57),
    [aux_sym_heading_4_repeat1] = STATE(15),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(321),
    [sym_heading_2_marker] = ACTIONS(321),
    [sym_heading_3_marker] = ACTIONS(321),
    [sym_heading_4_marker] = ACTIONS(321),
    [sym_heading_5_marker] = ACTIONS(29),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [17] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(17),
    [sym__text] = STATE(57),
    [aux_sym_heading_4_repeat1] = STATE(17),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(323),
    [aux_sym__comment_marker_token1] = ACTIONS(325),
    [aux_sym__comment_marker_token2] = ACTIONS(325),
    [sym_italic] = ACTIONS(328),
    [sym_underline] = ACTIONS(328),
    [sym_string] = ACTIONS(331),
    [sym_number] = ACTIONS(331),
    [sym_ticket] = ACTIONS(331),
    [aux_sym_date_token1] = ACTIONS(334),
    [aux_sym_date_token2] = ACTIONS(334),
    [aux_sym_date_token3] = ACTIONS(334),
    [aux_sym_time_token1] = ACTIONS(337),
    [aux_sym_time_token2] = ACTIONS(337),
    [sym_tag_positive] = ACTIONS(331),
    [sym_tag_negative] = ACTIONS(331),
    [sym_tag_hash] = ACTIONS(331),
    [sym_tag_context] = ACTIONS(331),
    [sym_tag_danger] = ACTIONS(331),
    [sym_tag_identifier] = ACTIONS(331),
    [sym_heading_1_marker] = ACTIONS(340),
    [sym_heading_2_marker] = ACTIONS(340),
    [sym_heading_3_marker] = ACTIONS(340),
    [sym_heading_4_marker] = ACTIONS(340),
    [sym_heading_5_marker] = ACTIONS(342),
    [sym_heading_6_marker] = ACTIONS(345),
    [sym_section_marker] = ACTIONS(348),
    [sym_inline_code] = ACTIONS(331),
    [anon_sym_ATcode] = ACTIONS(351),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(331),
    [aux_sym__text_token1] = ACTIONS(354),
    [sym_task_marker_default] = ACTIONS(357),
    [sym_task_marker_active] = ACTIONS(360),
    [sym_task_marker_done] = ACTIONS(363),
    [sym_task_marker_cancelled] = ACTIONS(366),
    [sym_list_item_marker] = ACTIONS(369),
    [sym_bold_start] = ACTIONS(372),
  },
  [18] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(20),
    [sym__text] = STATE(57),
    [aux_sym_heading_5_repeat1] = STATE(20),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(375),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(377),
    [sym_heading_2_marker] = ACTIONS(377),
    [sym_heading_3_marker] = ACTIONS(377),
    [sym_heading_4_marker] = ACTIONS(377),
    [sym_heading_5_marker] = ACTIONS(377),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [19] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(18),
    [sym__text] = STATE(57),
    [aux_sym_heading_5_repeat1] = STATE(18),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(381),
    [sym_heading_2_marker] = ACTIONS(381),
    [sym_heading_3_marker] = ACTIONS(381),
    [sym_heading_4_marker] = ACTIONS(381),
    [sym_heading_5_marker] = ACTIONS(381),
    [sym_heading_6_marker] = ACTIONS(31),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [20] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
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
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(20),
    [sym__text] = STATE(57),
    [aux_sym_heading_5_repeat1] = STATE(20),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(383),
    [aux_sym__comment_marker_token1] = ACTIONS(385),
    [aux_sym__comment_marker_token2] = ACTIONS(385),
    [sym_italic] = ACTIONS(388),
    [sym_underline] = ACTIONS(388),
    [sym_string] = ACTIONS(391),
    [sym_number] = ACTIONS(391),
    [sym_ticket] = ACTIONS(391),
    [aux_sym_date_token1] = ACTIONS(394),
    [aux_sym_date_token2] = ACTIONS(394),
    [aux_sym_date_token3] = ACTIONS(394),
    [aux_sym_time_token1] = ACTIONS(397),
    [aux_sym_time_token2] = ACTIONS(397),
    [sym_tag_positive] = ACTIONS(391),
    [sym_tag_negative] = ACTIONS(391),
    [sym_tag_hash] = ACTIONS(391),
    [sym_tag_context] = ACTIONS(391),
    [sym_tag_danger] = ACTIONS(391),
    [sym_tag_identifier] = ACTIONS(391),
    [sym_heading_1_marker] = ACTIONS(400),
    [sym_heading_2_marker] = ACTIONS(400),
    [sym_heading_3_marker] = ACTIONS(400),
    [sym_heading_4_marker] = ACTIONS(400),
    [sym_heading_5_marker] = ACTIONS(400),
    [sym_heading_6_marker] = ACTIONS(402),
    [sym_section_marker] = ACTIONS(405),
    [sym_inline_code] = ACTIONS(391),
    [anon_sym_ATcode] = ACTIONS(408),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(391),
    [aux_sym__text_token1] = ACTIONS(411),
    [sym_task_marker_default] = ACTIONS(414),
    [sym_task_marker_active] = ACTIONS(417),
    [sym_task_marker_done] = ACTIONS(420),
    [sym_task_marker_cancelled] = ACTIONS(423),
    [sym_list_item_marker] = ACTIONS(426),
    [sym_bold_start] = ACTIONS(429),
  },
  [21] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
    [sym_section] = STATE(22),
    [sym__task] = STATE(22),
    [sym_task_default] = STATE(22),
    [sym_task_active] = STATE(22),
    [sym_task_done] = STATE(22),
    [sym_task_cancelled] = STATE(22),
    [sym_list_item] = STATE(22),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(22),
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(22),
    [sym__text] = STATE(57),
    [aux_sym_heading_6_repeat1] = STATE(22),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(432),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(434),
    [sym_heading_2_marker] = ACTIONS(434),
    [sym_heading_3_marker] = ACTIONS(434),
    [sym_heading_4_marker] = ACTIONS(434),
    [sym_heading_5_marker] = ACTIONS(434),
    [sym_heading_6_marker] = ACTIONS(434),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [22] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(57),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(436),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(438),
    [sym_heading_2_marker] = ACTIONS(438),
    [sym_heading_3_marker] = ACTIONS(438),
    [sym_heading_4_marker] = ACTIONS(438),
    [sym_heading_5_marker] = ACTIONS(438),
    [sym_heading_6_marker] = ACTIONS(438),
    [sym_section_marker] = ACTIONS(33),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [23] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
    [sym_section] = STATE(23),
    [sym__task] = STATE(23),
    [sym_task_default] = STATE(23),
    [sym_task_active] = STATE(23),
    [sym_task_done] = STATE(23),
    [sym_task_cancelled] = STATE(23),
    [sym_list_item] = STATE(23),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(23),
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(23),
    [sym__text] = STATE(57),
    [aux_sym_heading_6_repeat1] = STATE(23),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(440),
    [aux_sym__comment_marker_token1] = ACTIONS(442),
    [aux_sym__comment_marker_token2] = ACTIONS(442),
    [sym_italic] = ACTIONS(445),
    [sym_underline] = ACTIONS(445),
    [sym_string] = ACTIONS(448),
    [sym_number] = ACTIONS(448),
    [sym_ticket] = ACTIONS(448),
    [aux_sym_date_token1] = ACTIONS(451),
    [aux_sym_date_token2] = ACTIONS(451),
    [aux_sym_date_token3] = ACTIONS(451),
    [aux_sym_time_token1] = ACTIONS(454),
    [aux_sym_time_token2] = ACTIONS(454),
    [sym_tag_positive] = ACTIONS(448),
    [sym_tag_negative] = ACTIONS(448),
    [sym_tag_hash] = ACTIONS(448),
    [sym_tag_context] = ACTIONS(448),
    [sym_tag_danger] = ACTIONS(448),
    [sym_tag_identifier] = ACTIONS(448),
    [sym_heading_1_marker] = ACTIONS(457),
    [sym_heading_2_marker] = ACTIONS(457),
    [sym_heading_3_marker] = ACTIONS(457),
    [sym_heading_4_marker] = ACTIONS(457),
    [sym_heading_5_marker] = ACTIONS(457),
    [sym_heading_6_marker] = ACTIONS(457),
    [sym_section_marker] = ACTIONS(459),
    [sym_inline_code] = ACTIONS(448),
    [anon_sym_ATcode] = ACTIONS(462),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(448),
    [aux_sym__text_token1] = ACTIONS(465),
    [sym_task_marker_default] = ACTIONS(468),
    [sym_task_marker_active] = ACTIONS(471),
    [sym_task_marker_done] = ACTIONS(474),
    [sym_task_marker_cancelled] = ACTIONS(477),
    [sym_list_item_marker] = ACTIONS(480),
    [sym_bold_start] = ACTIONS(483),
  },
  [24] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
    [sym__task] = STATE(25),
    [sym_task_default] = STATE(25),
    [sym_task_active] = STATE(25),
    [sym_task_done] = STATE(25),
    [sym_task_cancelled] = STATE(25),
    [sym_list_item] = STATE(25),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(25),
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(25),
    [sym__text] = STATE(57),
    [aux_sym_section_repeat1] = STATE(25),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(486),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_6_marker] = ACTIONS(488),
    [sym_section_marker] = ACTIONS(488),
    [sym_inline_code] = ACTIONS(15),
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
  },
  [25] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
    [sym__task] = STATE(25),
    [sym_task_default] = STATE(25),
    [sym_task_active] = STATE(25),
    [sym_task_done] = STATE(25),
    [sym_task_cancelled] = STATE(25),
    [sym_list_item] = STATE(25),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(25),
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(25),
    [sym__text] = STATE(57),
    [aux_sym_section_repeat1] = STATE(25),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(490),
    [aux_sym__comment_marker_token1] = ACTIONS(492),
    [aux_sym__comment_marker_token2] = ACTIONS(492),
    [sym_italic] = ACTIONS(495),
    [sym_underline] = ACTIONS(495),
    [sym_string] = ACTIONS(498),
    [sym_number] = ACTIONS(498),
    [sym_ticket] = ACTIONS(498),
    [aux_sym_date_token1] = ACTIONS(501),
    [aux_sym_date_token2] = ACTIONS(501),
    [aux_sym_date_token3] = ACTIONS(501),
    [aux_sym_time_token1] = ACTIONS(504),
    [aux_sym_time_token2] = ACTIONS(504),
    [sym_tag_positive] = ACTIONS(498),
    [sym_tag_negative] = ACTIONS(498),
    [sym_tag_hash] = ACTIONS(498),
    [sym_tag_context] = ACTIONS(498),
    [sym_tag_danger] = ACTIONS(498),
    [sym_tag_identifier] = ACTIONS(498),
    [sym_heading_1_marker] = ACTIONS(507),
    [sym_heading_2_marker] = ACTIONS(507),
    [sym_heading_3_marker] = ACTIONS(507),
    [sym_heading_4_marker] = ACTIONS(507),
    [sym_heading_5_marker] = ACTIONS(507),
    [sym_heading_6_marker] = ACTIONS(507),
    [sym_section_marker] = ACTIONS(507),
    [sym_inline_code] = ACTIONS(498),
    [anon_sym_ATcode] = ACTIONS(509),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(498),
    [aux_sym__text_token1] = ACTIONS(512),
    [sym_task_marker_default] = ACTIONS(515),
    [sym_task_marker_active] = ACTIONS(518),
    [sym_task_marker_done] = ACTIONS(521),
    [sym_task_marker_cancelled] = ACTIONS(524),
    [sym_list_item_marker] = ACTIONS(527),
    [sym_bold_start] = ACTIONS(530),
  },
  [26] = {
    [sym__comment_marker] = STATE(173),
    [sym_comment] = STATE(57),
    [sym_bold] = STATE(100),
    [sym__emphasis] = STATE(57),
    [sym_date] = STATE(95),
    [sym_daterange] = STATE(57),
    [sym_time] = STATE(102),
    [sym_timerange] = STATE(57),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(57),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_code_block_start] = STATE(115),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(57),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(57),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(57),
    [aux_sym__text_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(533),
    [aux_sym__comment_marker_token1] = ACTIONS(11),
    [aux_sym__comment_marker_token2] = ACTIONS(11),
    [sym_italic] = ACTIONS(13),
    [sym_underline] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
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
    [sym_heading_1_marker] = ACTIONS(535),
    [sym_heading_2_marker] = ACTIONS(535),
    [sym_heading_3_marker] = ACTIONS(535),
    [sym_heading_4_marker] = ACTIONS(535),
    [sym_heading_5_marker] = ACTIONS(535),
    [sym_heading_6_marker] = ACTIONS(535),
    [sym_section_marker] = ACTIONS(535),
    [sym_inline_code] = ACTIONS(15),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(539), 1,
      aux_sym_task_session_token1,
    ACTIONS(541), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(545), 1,
      sym_task_marker_default,
    ACTIONS(547), 1,
      sym_task_marker_active,
    ACTIONS(549), 1,
      sym_task_marker_done,
    ACTIONS(551), 1,
      sym_task_marker_cancelled,
    ACTIONS(553), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(543), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(51), 8,
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
    ACTIONS(537), 11,
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
  [105] = 24,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(570), 1,
      aux_sym_task_session_token1,
    ACTIONS(573), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(576), 1,
      aux_sym__text_token1,
    ACTIONS(581), 1,
      sym_task_marker_default,
    ACTIONS(584), 1,
      sym_task_marker_active,
    ACTIONS(587), 1,
      sym_task_marker_done,
    ACTIONS(590), 1,
      sym_task_marker_cancelled,
    ACTIONS(593), 1,
      sym_list_item_marker,
    ACTIONS(596), 1,
      sym_bold_start,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(555), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(558), 2,
      sym_italic,
      sym_underline,
    ACTIONS(567), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(579), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(564), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(51), 8,
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
    ACTIONS(561), 11,
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
  [210] = 24,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(539), 1,
      aux_sym_task_session_token1,
    ACTIONS(541), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(545), 1,
      sym_task_marker_default,
    ACTIONS(547), 1,
      sym_task_marker_active,
    ACTIONS(549), 1,
      sym_task_marker_done,
    ACTIONS(551), 1,
      sym_task_marker_cancelled,
    ACTIONS(553), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(599), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(51), 8,
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
    ACTIONS(537), 11,
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
  [315] = 23,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(539), 1,
      aux_sym_task_session_token1,
    ACTIONS(541), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(545), 1,
      sym_task_marker_default,
    ACTIONS(547), 1,
      sym_task_marker_active,
    ACTIONS(549), 1,
      sym_task_marker_done,
    ACTIONS(551), 1,
      sym_task_marker_cancelled,
    ACTIONS(553), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(51), 8,
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
    ACTIONS(537), 11,
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
  [416] = 23,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(539), 1,
      aux_sym_task_session_token1,
    ACTIONS(541), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(545), 1,
      sym_task_marker_default,
    ACTIONS(547), 1,
      sym_task_marker_active,
    ACTIONS(549), 1,
      sym_task_marker_done,
    ACTIONS(551), 1,
      sym_task_marker_cancelled,
    ACTIONS(553), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(51), 8,
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
    ACTIONS(537), 11,
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
  [517] = 18,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(605), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(603), 2,
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
    STATE(50), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(601), 11,
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
  [597] = 18,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(622), 1,
      aux_sym__text_token1,
    ACTIONS(627), 1,
      sym_list_item_marker,
    ACTIONS(630), 1,
      sym_bold_start,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(607), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(610), 2,
      sym_italic,
      sym_underline,
    ACTIONS(619), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(625), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(616), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(50), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(613), 11,
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
  [677] = 18,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(605), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
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
    STATE(33), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
    STATE(50), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(601), 11,
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
  [757] = 18,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(605), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(635), 2,
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
    STATE(50), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(601), 11,
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
  [837] = 17,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(605), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
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
    STATE(50), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(601), 11,
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
  [913] = 17,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(605), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
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
    STATE(50), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(601), 11,
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
  [989] = 17,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(605), 1,
      sym_list_item_marker,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
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
    STATE(50), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(601), 11,
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
  [1065] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(641), 1,
      sym__indent,
    STATE(67), 1,
      sym__task_children,
    ACTIONS(637), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(639), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [1115] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(641), 1,
      sym__indent,
    STATE(68), 1,
      sym__task_children,
    ACTIONS(643), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(645), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [1165] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(641), 1,
      sym__indent,
    STATE(69), 1,
      sym__task_children,
    ACTIONS(647), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(649), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [1215] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(641), 1,
      sym__indent,
    STATE(70), 1,
      sym__task_children,
    ACTIONS(651), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(653), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [1265] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(659), 1,
      sym__indent,
    STATE(72), 1,
      sym__list_item_children,
    ACTIONS(655), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(657), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [1315] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(661), 8,
      sym__indent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(663), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [1360] = 16,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    STATE(39), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(53), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(665), 11,
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
  [1431] = 16,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    STATE(40), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(53), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(665), 11,
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
  [1502] = 16,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    STATE(43), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(53), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(665), 11,
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
  [1573] = 16,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(669), 1,
      aux_sym_code_block_token1,
    ACTIONS(671), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(59), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(667), 11,
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
  [1644] = 16,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(673), 1,
      aux_sym_code_block_token1,
    ACTIONS(675), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(59), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(667), 11,
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
  [1715] = 16,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(677), 1,
      aux_sym_code_block_token1,
    ACTIONS(679), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(59), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(667), 11,
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
  [1786] = 16,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(681), 1,
      aux_sym_code_block_token1,
    ACTIONS(683), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(59), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(667), 11,
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
  [1857] = 16,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    STATE(90), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(48), 8,
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
  [1928] = 16,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(687), 1,
      aux_sym_code_block_token1,
    ACTIONS(689), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(59), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(667), 11,
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
  [1999] = 16,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    STATE(74), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(49), 8,
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
  [2070] = 16,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    STATE(73), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(49), 8,
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
  [2141] = 16,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    STATE(77), 1,
      sym_text_line,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(49), 8,
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
  [2212] = 16,
    ACTIONS(37), 1,
      aux_sym__text_token1,
    ACTIONS(49), 1,
      sym_bold_start,
    ACTIONS(693), 1,
      aux_sym_code_block_token1,
    ACTIONS(695), 1,
      sym__eof,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(13), 2,
      sym_italic,
      sym_underline,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(17), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(59), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(667), 11,
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
  [2283] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(697), 8,
      sym__indent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(699), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2328] = 16,
    ACTIONS(716), 1,
      aux_sym_code_block_token1,
    ACTIONS(718), 1,
      aux_sym__text_token1,
    ACTIONS(721), 1,
      sym__eof,
    ACTIONS(723), 1,
      sym_bold_start,
    STATE(95), 1,
      sym_date,
    STATE(97), 1,
      aux_sym__text_repeat1,
    STATE(100), 1,
      sym_bold,
    STATE(102), 1,
      sym_time,
    STATE(104), 1,
      sym_datetime,
    STATE(173), 1,
      sym__comment_marker,
    ACTIONS(701), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(704), 2,
      sym_italic,
      sym_underline,
    ACTIONS(713), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(710), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(59), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(707), 11,
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
  [2399] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(726), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(728), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2443] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(730), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(732), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2487] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(734), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(736), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2531] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(738), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(740), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2575] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(661), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(663), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2619] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(742), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(744), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2663] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(746), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(748), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2707] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(750), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(752), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2751] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(754), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(756), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2795] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(758), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(760), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2839] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(762), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(764), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2883] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(766), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(768), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2927] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(770), 7,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      ts_builtin_sym_end,
    ACTIONS(772), 29,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [2971] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(774), 1,
      sym__indent,
    STATE(88), 1,
      sym__task_children,
    ACTIONS(643), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(645), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3016] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(776), 1,
      sym__indent,
    STATE(85), 1,
      sym__list_item_children,
    ACTIONS(655), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(657), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3061] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(774), 1,
      sym__indent,
    STATE(86), 1,
      sym__task_children,
    ACTIONS(651), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(653), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3106] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(774), 1,
      sym__indent,
    STATE(87), 1,
      sym__task_children,
    ACTIONS(647), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(649), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3151] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(774), 1,
      sym__indent,
    STATE(89), 1,
      sym__task_children,
    ACTIONS(637), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(639), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3196] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(661), 9,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(663), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3236] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(697), 9,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(699), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3276] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(742), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(744), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3315] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(780), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(778), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3354] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(661), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(663), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3393] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(734), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(736), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3432] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(784), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(782), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3471] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(770), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(772), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3510] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(762), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(764), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3549] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(758), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(760), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3588] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(754), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(756), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3627] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(750), 8,
      sym__eof,
      sym__dedent,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(752), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3666] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(786), 1,
      sym__indent,
    STATE(92), 1,
      sym__list_item_children,
    ACTIONS(655), 4,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(657), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3705] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(661), 5,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(663), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3739] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(770), 4,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(772), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3772] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(661), 4,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(663), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3805] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(742), 4,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
    ACTIONS(744), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3838] = 5,
    ACTIONS(790), 1,
      aux_sym_daterange_token1,
    STATE(96), 1,
      sym_time,
    ACTIONS(19), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(792), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(788), 20,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3875] = 2,
    ACTIONS(796), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(794), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3905] = 4,
    ACTIONS(800), 1,
      aux_sym__text_token1,
    STATE(103), 1,
      aux_sym__text_repeat1,
    ACTIONS(802), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(798), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3939] = 2,
    ACTIONS(806), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(804), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3969] = 2,
    ACTIONS(810), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(808), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [3999] = 3,
    ACTIONS(814), 1,
      aux_sym__emphasis_token1,
    ACTIONS(816), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(812), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4031] = 2,
    ACTIONS(820), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(818), 23,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
      sym_italic,
      sym_underline,
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
  [4061] = 3,
    ACTIONS(822), 1,
      aux_sym_daterange_token1,
    ACTIONS(792), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(788), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4093] = 4,
    ACTIONS(826), 1,
      aux_sym__text_token1,
    STATE(103), 1,
      aux_sym__text_repeat1,
    ACTIONS(829), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(824), 21,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4127] = 3,
    ACTIONS(831), 1,
      aux_sym_daterange_token1,
    ACTIONS(792), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(788), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4159] = 2,
    ACTIONS(835), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(833), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4188] = 2,
    ACTIONS(806), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(804), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4217] = 2,
    ACTIONS(839), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(837), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4246] = 2,
    ACTIONS(810), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(808), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4275] = 2,
    ACTIONS(796), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(794), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4304] = 2,
    ACTIONS(843), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(841), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4333] = 2,
    ACTIONS(847), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(845), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4362] = 2,
    ACTIONS(851), 2,
      sym__eof,
      sym_bold_start,
    ACTIONS(849), 22,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
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
  [4391] = 7,
    ACTIONS(853), 1,
      aux_sym_date_token1,
    ACTIONS(857), 1,
      aux_sym_time_token1,
    ACTIONS(859), 1,
      aux_sym_time_token2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    STATE(135), 1,
      sym_date,
    ACTIONS(855), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(105), 2,
      sym_time,
      sym_datetime,
  [4415] = 7,
    ACTIONS(853), 1,
      aux_sym_date_token1,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(863), 1,
      aux_sym_time_token1,
    ACTIONS(865), 1,
      aux_sym_time_token2,
    STATE(136), 1,
      sym_date,
    ACTIONS(855), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(147), 2,
      sym_time,
      sym_datetime,
  [4439] = 7,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(867), 1,
      sym_code_block_end,
    ACTIONS(869), 1,
      aux_sym__text_token1,
    STATE(129), 1,
      aux_sym__text_repeat1,
    STATE(170), 1,
      sym_code_block_content,
    STATE(117), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(122), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4463] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(871), 1,
      sym_code_block_end,
    ACTIONS(873), 1,
      aux_sym__text_token1,
    STATE(129), 1,
      aux_sym__text_repeat1,
    STATE(116), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(122), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4484] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(869), 1,
      aux_sym__text_token1,
    ACTIONS(876), 1,
      sym_code_block_end,
    STATE(129), 1,
      aux_sym__text_repeat1,
    STATE(116), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(122), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4505] = 6,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(878), 1,
      aux_sym_date_token1,
    STATE(119), 1,
      sym_date,
    STATE(131), 1,
      sym_datetime,
    ACTIONS(880), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(169), 2,
      sym_daterange,
      sym_datetimerange,
  [4526] = 6,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(863), 1,
      aux_sym_time_token1,
    ACTIONS(865), 1,
      aux_sym_time_token2,
    ACTIONS(882), 1,
      aux_sym_daterange_token1,
    STATE(132), 1,
      sym_time,
    ACTIONS(884), 2,
      sym__eof,
      sym__eol,
  [4546] = 6,
    ACTIONS(853), 1,
      aux_sym_date_token1,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    STATE(134), 1,
      sym_datetime,
    STATE(136), 1,
      sym_date,
    STATE(145), 1,
      sym_datetimerange,
    ACTIONS(855), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4566] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(886), 1,
      aux_sym__text_token1,
    STATE(129), 1,
      aux_sym__text_repeat1,
    ACTIONS(889), 2,
      sym__eof,
      sym__eol,
    STATE(121), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4584] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(891), 1,
      aux_sym__text_token1,
    STATE(129), 1,
      aux_sym__text_repeat1,
    ACTIONS(893), 2,
      sym__eof,
      sym__eol,
    STATE(121), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4602] = 3,
    ACTIONS(808), 1,
      aux_sym_time_token1,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(810), 4,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
      aux_sym_time_token2,
  [4615] = 4,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(895), 1,
      aux_sym_document_meta_token2,
    ACTIONS(897), 1,
      sym_document_meta_field_key,
    STATE(126), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4629] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(899), 1,
      aux_sym__text_token1,
    STATE(125), 1,
      aux_sym__text_repeat1,
    ACTIONS(829), 2,
      sym__eof,
      sym__eol,
  [4643] = 4,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(902), 1,
      aux_sym_document_meta_token2,
    ACTIONS(904), 1,
      sym_document_meta_field_key,
    STATE(126), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4657] = 4,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(878), 1,
      aux_sym_date_token1,
    STATE(146), 1,
      sym_date,
    ACTIONS(880), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4671] = 4,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(907), 1,
      aux_sym_date_token1,
    STATE(110), 1,
      sym_date,
    ACTIONS(909), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4685] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(911), 1,
      aux_sym__text_token1,
    STATE(125), 1,
      aux_sym__text_repeat1,
    ACTIONS(802), 2,
      sym__eof,
      sym__eol,
  [4699] = 4,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(897), 1,
      sym_document_meta_field_key,
    ACTIONS(913), 1,
      aux_sym_document_meta_token2,
    STATE(124), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4713] = 3,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(915), 1,
      aux_sym_daterange_token1,
    ACTIONS(884), 2,
      sym__eof,
      sym__eol,
  [4724] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(796), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [4733] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(806), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [4742] = 3,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(915), 1,
      aux_sym_daterange_token1,
    ACTIONS(917), 2,
      sym__eof,
      sym__eol,
  [4753] = 4,
    ACTIONS(857), 1,
      aux_sym_time_token1,
    ACTIONS(859), 1,
      aux_sym_time_token2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    STATE(109), 1,
      sym_time,
  [4766] = 4,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(863), 1,
      aux_sym_time_token1,
    ACTIONS(865), 1,
      aux_sym_time_token2,
    STATE(132), 1,
      sym_time,
  [4779] = 4,
    ACTIONS(857), 1,
      aux_sym_time_token1,
    ACTIONS(859), 1,
      aux_sym_time_token2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    STATE(111), 1,
      sym_time,
  [4792] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(919), 2,
      sym__eof,
      sym__eol,
  [4800] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(921), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [4808] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(697), 2,
      sym__eof,
      sym__eol,
  [4816] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(923), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(42), 1,
      sym_text_to_eol,
  [4826] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(925), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [4834] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(927), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(160), 1,
      sym_text_to_eol,
  [4844] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(929), 2,
      sym__eof,
      sym__eol,
  [4852] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(917), 2,
      sym__eof,
      sym__eol,
  [4860] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(843), 2,
      sym__eof,
      sym__eol,
  [4868] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(835), 2,
      sym__eof,
      sym__eol,
  [4876] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(931), 2,
      sym__eof,
      sym__eol,
  [4884] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(933), 2,
      sym__eof,
      sym__eol,
  [4892] = 3,
    ACTIONS(808), 1,
      aux_sym_time_token1,
    ACTIONS(810), 1,
      aux_sym_time_token2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
  [4902] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(935), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [4910] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(937), 2,
      sym__eof,
      sym__eol,
  [4918] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(939), 2,
      sym__eof,
      sym__eol,
  [4926] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(941), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(178), 1,
      sym_document_meta_field_value,
  [4936] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(943), 2,
      sym__eof,
      sym__eol,
  [4944] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(927), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(155), 1,
      sym_text_to_eol,
  [4954] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(927), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(153), 1,
      sym_text_to_eol,
  [4964] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(945), 2,
      aux_sym_document_meta_token2,
      sym_document_meta_field_key,
  [4972] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(927), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(152), 1,
      sym_text_to_eol,
  [4982] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(947), 2,
      sym__eof,
      sym__eol,
  [4990] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(927), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(149), 1,
      sym_text_to_eol,
  [5000] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(923), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(41), 1,
      sym_text_to_eol,
  [5010] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(927), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(148), 1,
      sym_text_to_eol,
  [5020] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(949), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(76), 1,
      sym_text_to_eol,
  [5030] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(949), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(75), 1,
      sym_text_to_eol,
  [5040] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(927), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(138), 1,
      sym_text_to_eol,
  [5050] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(951), 1,
      aux_sym_code_block_start_token1,
    ACTIONS(953), 1,
      anon_sym_LF,
  [5060] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(927), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(144), 1,
      sym_text_to_eol,
  [5070] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(884), 2,
      sym__eof,
      sym__eol,
  [5078] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(955), 1,
      sym_code_block_end,
  [5085] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(957), 1,
      sym__eol,
  [5092] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(959), 1,
      ts_builtin_sym_end,
  [5099] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(961), 1,
      aux_sym_document_meta_field_value_token1,
  [5106] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(963), 1,
      sym_bold_end,
  [5113] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(965), 1,
      anon_sym_COLON,
  [5120] = 1,
    ACTIONS(967), 2,
      sym__eof,
      aux_sym_code_block_token1,
  [5125] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(969), 1,
      anon_sym_LF,
  [5132] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(971), 1,
      sym__eol,
  [5139] = 2,
    ACTIONS(861), 1,
      aux_sym_code_block_token1,
    ACTIONS(973), 1,
      sym_code_block_language,
  [5146] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(975), 1,
      sym_bold_content,
  [5153] = 1,
    ACTIONS(977), 2,
      sym__eof,
      aux_sym_code_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 105,
  [SMALL_STATE(29)] = 210,
  [SMALL_STATE(30)] = 315,
  [SMALL_STATE(31)] = 416,
  [SMALL_STATE(32)] = 517,
  [SMALL_STATE(33)] = 597,
  [SMALL_STATE(34)] = 677,
  [SMALL_STATE(35)] = 757,
  [SMALL_STATE(36)] = 837,
  [SMALL_STATE(37)] = 913,
  [SMALL_STATE(38)] = 989,
  [SMALL_STATE(39)] = 1065,
  [SMALL_STATE(40)] = 1115,
  [SMALL_STATE(41)] = 1165,
  [SMALL_STATE(42)] = 1215,
  [SMALL_STATE(43)] = 1265,
  [SMALL_STATE(44)] = 1315,
  [SMALL_STATE(45)] = 1360,
  [SMALL_STATE(46)] = 1431,
  [SMALL_STATE(47)] = 1502,
  [SMALL_STATE(48)] = 1573,
  [SMALL_STATE(49)] = 1644,
  [SMALL_STATE(50)] = 1715,
  [SMALL_STATE(51)] = 1786,
  [SMALL_STATE(52)] = 1857,
  [SMALL_STATE(53)] = 1928,
  [SMALL_STATE(54)] = 1999,
  [SMALL_STATE(55)] = 2070,
  [SMALL_STATE(56)] = 2141,
  [SMALL_STATE(57)] = 2212,
  [SMALL_STATE(58)] = 2283,
  [SMALL_STATE(59)] = 2328,
  [SMALL_STATE(60)] = 2399,
  [SMALL_STATE(61)] = 2443,
  [SMALL_STATE(62)] = 2487,
  [SMALL_STATE(63)] = 2531,
  [SMALL_STATE(64)] = 2575,
  [SMALL_STATE(65)] = 2619,
  [SMALL_STATE(66)] = 2663,
  [SMALL_STATE(67)] = 2707,
  [SMALL_STATE(68)] = 2751,
  [SMALL_STATE(69)] = 2795,
  [SMALL_STATE(70)] = 2839,
  [SMALL_STATE(71)] = 2883,
  [SMALL_STATE(72)] = 2927,
  [SMALL_STATE(73)] = 2971,
  [SMALL_STATE(74)] = 3016,
  [SMALL_STATE(75)] = 3061,
  [SMALL_STATE(76)] = 3106,
  [SMALL_STATE(77)] = 3151,
  [SMALL_STATE(78)] = 3196,
  [SMALL_STATE(79)] = 3236,
  [SMALL_STATE(80)] = 3276,
  [SMALL_STATE(81)] = 3315,
  [SMALL_STATE(82)] = 3354,
  [SMALL_STATE(83)] = 3393,
  [SMALL_STATE(84)] = 3432,
  [SMALL_STATE(85)] = 3471,
  [SMALL_STATE(86)] = 3510,
  [SMALL_STATE(87)] = 3549,
  [SMALL_STATE(88)] = 3588,
  [SMALL_STATE(89)] = 3627,
  [SMALL_STATE(90)] = 3666,
  [SMALL_STATE(91)] = 3705,
  [SMALL_STATE(92)] = 3739,
  [SMALL_STATE(93)] = 3772,
  [SMALL_STATE(94)] = 3805,
  [SMALL_STATE(95)] = 3838,
  [SMALL_STATE(96)] = 3875,
  [SMALL_STATE(97)] = 3905,
  [SMALL_STATE(98)] = 3939,
  [SMALL_STATE(99)] = 3969,
  [SMALL_STATE(100)] = 3999,
  [SMALL_STATE(101)] = 4031,
  [SMALL_STATE(102)] = 4061,
  [SMALL_STATE(103)] = 4093,
  [SMALL_STATE(104)] = 4127,
  [SMALL_STATE(105)] = 4159,
  [SMALL_STATE(106)] = 4188,
  [SMALL_STATE(107)] = 4217,
  [SMALL_STATE(108)] = 4246,
  [SMALL_STATE(109)] = 4275,
  [SMALL_STATE(110)] = 4304,
  [SMALL_STATE(111)] = 4333,
  [SMALL_STATE(112)] = 4362,
  [SMALL_STATE(113)] = 4391,
  [SMALL_STATE(114)] = 4415,
  [SMALL_STATE(115)] = 4439,
  [SMALL_STATE(116)] = 4463,
  [SMALL_STATE(117)] = 4484,
  [SMALL_STATE(118)] = 4505,
  [SMALL_STATE(119)] = 4526,
  [SMALL_STATE(120)] = 4546,
  [SMALL_STATE(121)] = 4566,
  [SMALL_STATE(122)] = 4584,
  [SMALL_STATE(123)] = 4602,
  [SMALL_STATE(124)] = 4615,
  [SMALL_STATE(125)] = 4629,
  [SMALL_STATE(126)] = 4643,
  [SMALL_STATE(127)] = 4657,
  [SMALL_STATE(128)] = 4671,
  [SMALL_STATE(129)] = 4685,
  [SMALL_STATE(130)] = 4699,
  [SMALL_STATE(131)] = 4713,
  [SMALL_STATE(132)] = 4724,
  [SMALL_STATE(133)] = 4733,
  [SMALL_STATE(134)] = 4742,
  [SMALL_STATE(135)] = 4753,
  [SMALL_STATE(136)] = 4766,
  [SMALL_STATE(137)] = 4779,
  [SMALL_STATE(138)] = 4792,
  [SMALL_STATE(139)] = 4800,
  [SMALL_STATE(140)] = 4808,
  [SMALL_STATE(141)] = 4816,
  [SMALL_STATE(142)] = 4826,
  [SMALL_STATE(143)] = 4834,
  [SMALL_STATE(144)] = 4844,
  [SMALL_STATE(145)] = 4852,
  [SMALL_STATE(146)] = 4860,
  [SMALL_STATE(147)] = 4868,
  [SMALL_STATE(148)] = 4876,
  [SMALL_STATE(149)] = 4884,
  [SMALL_STATE(150)] = 4892,
  [SMALL_STATE(151)] = 4902,
  [SMALL_STATE(152)] = 4910,
  [SMALL_STATE(153)] = 4918,
  [SMALL_STATE(154)] = 4926,
  [SMALL_STATE(155)] = 4936,
  [SMALL_STATE(156)] = 4944,
  [SMALL_STATE(157)] = 4954,
  [SMALL_STATE(158)] = 4964,
  [SMALL_STATE(159)] = 4972,
  [SMALL_STATE(160)] = 4982,
  [SMALL_STATE(161)] = 4990,
  [SMALL_STATE(162)] = 5000,
  [SMALL_STATE(163)] = 5010,
  [SMALL_STATE(164)] = 5020,
  [SMALL_STATE(165)] = 5030,
  [SMALL_STATE(166)] = 5040,
  [SMALL_STATE(167)] = 5050,
  [SMALL_STATE(168)] = 5060,
  [SMALL_STATE(169)] = 5070,
  [SMALL_STATE(170)] = 5078,
  [SMALL_STATE(171)] = 5085,
  [SMALL_STATE(172)] = 5092,
  [SMALL_STATE(173)] = 5099,
  [SMALL_STATE(174)] = 5106,
  [SMALL_STATE(175)] = 5113,
  [SMALL_STATE(176)] = 5120,
  [SMALL_STATE(177)] = 5125,
  [SMALL_STATE(178)] = 5132,
  [SMALL_STATE(179)] = 5139,
  [SMALL_STATE(180)] = 5146,
  [SMALL_STATE(181)] = 5153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(173),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(156),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(157),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(159),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(161),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(163),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(166),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(168),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(167),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(162),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(141),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(180),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 3, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 3, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(173),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(100),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(57),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(99),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(98),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(157),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(159),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(161),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(163),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(166),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(168),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(167),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(97),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(45),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(46),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(162),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(141),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(47),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(180),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 3, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 3, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(173),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(100),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(57),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(99),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(98),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(159),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(161),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(163),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(166),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(168),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(167),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(97),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(45),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(46),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(162),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(141),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(47),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(180),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 3, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 3, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(173),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(100),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(57),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(99),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(98),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(161),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(163),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(166),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(168),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(167),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(97),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(45),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(46),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(162),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(141),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(47),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(180),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 3, .production_id = 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 3, .production_id = 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(173),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(100),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(57),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(99),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(98),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(163),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(166),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(168),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(167),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(97),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(45),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(46),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(162),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(141),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(47),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(180),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 3, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 3, .production_id = 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(173),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(100),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(57),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(99),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(98),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(166),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(168),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(167),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(97),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(45),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(46),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(162),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(141),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(47),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(180),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 3, .production_id = 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 3, .production_id = 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(173),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(100),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(57),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(99),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(98),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(168),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(167),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(97),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(45),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(46),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(162),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(141),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(47),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(180),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(173),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(100),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(57),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(99),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(98),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(167),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(97),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(45),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(46),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(162),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(141),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(47),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(180),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(173),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(100),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(51),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(99),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(98),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(120),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(118),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(97),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(56),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(55),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(164),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(165),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(54),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(180),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(173),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(100),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(50),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(99),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(98),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(97),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(52),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(180),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 2),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_to_eol, 1),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_to_eol, 1),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(173),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(100),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(59),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(99),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(98),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [718] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(97),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(180),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 3),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 2),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_children, 3),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__task_children, 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_children, 3),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_children, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 3),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 3),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 3),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 3),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title_basic, 3),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title_basic, 3),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_schedule, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_schedule, 3),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_session, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_session, 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline, 1),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 1),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 1),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 1),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold, 3),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(103),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetimerange, 3),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetimerange, 3),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_daterange, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daterange, 3),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timerange, 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timerange, 3),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2), SHIFT_REPEAT(129),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_content, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2), SHIFT_REPEAT(129),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(125),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2), SHIFT_REPEAT(175),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_text_line, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 4),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field, 4, .production_id = 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field_value, 1),
  [959] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
