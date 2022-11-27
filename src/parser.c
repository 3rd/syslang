#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 194
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 15
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
  sym_inline_code = 38,
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
  sym_document = 62,
  sym_document_title_basic = 63,
  sym_document_meta = 64,
  sym_document_meta_field = 65,
  sym_document_meta_field_value = 66,
  sym__comment_marker = 67,
  sym_comment = 68,
  sym_bold = 69,
  sym_italic = 70,
  sym_underline = 71,
  sym__emphasis = 72,
  sym_date = 73,
  sym_daterange = 74,
  sym_time = 75,
  sym_timerange = 76,
  sym_datetime = 77,
  sym_datetimerange = 78,
  sym_heading_1 = 79,
  sym_heading_2 = 80,
  sym_heading_3 = 81,
  sym_heading_4 = 82,
  sym_heading_5 = 83,
  sym_heading_6 = 84,
  sym_section = 85,
  sym__task = 86,
  sym_task_default = 87,
  sym_task_active = 88,
  sym_task_done = 89,
  sym_task_cancelled = 90,
  sym__task_children = 91,
  sym_task_session = 92,
  sym_task_schedule = 93,
  sym_list_item = 94,
  sym__list_item_children = 95,
  sym_code_block_content = 96,
  sym_code_block_start = 97,
  sym_code_block = 98,
  sym__inline = 99,
  sym_text_to_eol = 100,
  sym_text_line = 101,
  sym__text = 102,
  sym__raw_text_line = 103,
  aux_sym_document_repeat1 = 104,
  aux_sym_document_meta_repeat1 = 105,
  aux_sym_heading_1_repeat1 = 106,
  aux_sym_heading_2_repeat1 = 107,
  aux_sym_heading_3_repeat1 = 108,
  aux_sym_heading_4_repeat1 = 109,
  aux_sym_heading_5_repeat1 = 110,
  aux_sym_heading_6_repeat1 = 111,
  aux_sym_section_repeat1 = 112,
  aux_sym__task_children_repeat1 = 113,
  aux_sym__list_item_children_repeat1 = 114,
  aux_sym_code_block_content_repeat1 = 115,
  aux_sym_text_line_repeat1 = 116,
  aux_sym__text_repeat1 = 117,
  aux_sym__raw_text_line_repeat1 = 118,
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
  [anon_sym_] = anon_sym_,
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
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 42,
  [45] = 41,
  [46] = 42,
  [47] = 42,
  [48] = 41,
  [49] = 40,
  [50] = 39,
  [51] = 42,
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
  [62] = 58,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 57,
  [74] = 53,
  [75] = 54,
  [76] = 55,
  [77] = 56,
  [78] = 59,
  [79] = 58,
  [80] = 63,
  [81] = 67,
  [82] = 65,
  [83] = 60,
  [84] = 72,
  [85] = 69,
  [86] = 86,
  [87] = 87,
  [88] = 66,
  [89] = 58,
  [90] = 57,
  [91] = 58,
  [92] = 69,
  [93] = 58,
  [94] = 94,
  [95] = 72,
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
  [108] = 101,
  [109] = 109,
  [110] = 110,
  [111] = 106,
  [112] = 102,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 115,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 102,
  [126] = 103,
  [127] = 100,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 131,
  [133] = 106,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 101,
  [138] = 138,
  [139] = 134,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 59,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 114,
  [159] = 107,
  [160] = 160,
  [161] = 161,
  [162] = 102,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 146,
  [167] = 167,
  [168] = 163,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') SKIP(76)
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == '`') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(98);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(162);
      if (lookahead != 0) ADVANCE(10);
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
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(165);
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
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(176);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(184);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':') ADVANCE(177);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(97);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(177);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(217);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') SKIP(40)
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(178);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.') SKIP(44)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') SKIP(44)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') SKIP(38)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '@') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') SKIP(40)
      if (lookahead == '\n') ADVANCE(167);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(92);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(96);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(94);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') SKIP(44)
      if (lookahead == '\n') ADVANCE(170);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
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
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(144);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+') ADVANCE(125);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(142);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(10);
      END_STATE();
    case 73:
      if (eof) ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(175);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 74:
      if (eof) ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(174);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 75:
      if (eof) ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(174);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 76:
      if (eof) ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') SKIP(76)
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(12);
      if (lookahead == '`') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 77:
      if (eof) ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') SKIP(77)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '@') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') SKIP(77)
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '@') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_document_title_basic_marker);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_document_meta_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_document_meta_token2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_document_meta_field_key);
      if (lookahead == '-') ADVANCE(45);
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
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(87);
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
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
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
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
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
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
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
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '`') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
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
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_daterange_token1);
      if (lookahead == '-') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ':') ADVANCE(231);
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
      if (lookahead == 'e') ADVANCE(165);
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
      if (lookahead == 't') ADVANCE(82);
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
      ACCEPT_TOKEN(sym_inline_code);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(86);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_code_block_language);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ATcode);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_code_block_start_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_code_block_end);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_code_block_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_external_link);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(174);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(175);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(176);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(184);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(177);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(178);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(141);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '$') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '+') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(124);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(126);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(188);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '`') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'h') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(217);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
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
          lookahead != ' ') ADVANCE(171);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 74, .external_lex_state = 2},
  [2] = {.lex_state = 73, .external_lex_state = 2},
  [3] = {.lex_state = 73, .external_lex_state = 2},
  [4] = {.lex_state = 73, .external_lex_state = 2},
  [5] = {.lex_state = 73, .external_lex_state = 2},
  [6] = {.lex_state = 73, .external_lex_state = 2},
  [7] = {.lex_state = 73, .external_lex_state = 2},
  [8] = {.lex_state = 73, .external_lex_state = 2},
  [9] = {.lex_state = 73, .external_lex_state = 2},
  [10] = {.lex_state = 73, .external_lex_state = 2},
  [11] = {.lex_state = 73, .external_lex_state = 2},
  [12] = {.lex_state = 73, .external_lex_state = 2},
  [13] = {.lex_state = 73, .external_lex_state = 2},
  [14] = {.lex_state = 73, .external_lex_state = 2},
  [15] = {.lex_state = 73, .external_lex_state = 2},
  [16] = {.lex_state = 73, .external_lex_state = 2},
  [17] = {.lex_state = 73, .external_lex_state = 2},
  [18] = {.lex_state = 73, .external_lex_state = 2},
  [19] = {.lex_state = 73, .external_lex_state = 2},
  [20] = {.lex_state = 73, .external_lex_state = 2},
  [21] = {.lex_state = 73, .external_lex_state = 2},
  [22] = {.lex_state = 73, .external_lex_state = 2},
  [23] = {.lex_state = 73, .external_lex_state = 2},
  [24] = {.lex_state = 73, .external_lex_state = 2},
  [25] = {.lex_state = 73, .external_lex_state = 2},
  [26] = {.lex_state = 73, .external_lex_state = 2},
  [27] = {.lex_state = 29, .external_lex_state = 3},
  [28] = {.lex_state = 29, .external_lex_state = 3},
  [29] = {.lex_state = 29, .external_lex_state = 3},
  [30] = {.lex_state = 29, .external_lex_state = 2},
  [31] = {.lex_state = 29, .external_lex_state = 2},
  [32] = {.lex_state = 31, .external_lex_state = 4},
  [33] = {.lex_state = 31, .external_lex_state = 4},
  [34] = {.lex_state = 31, .external_lex_state = 4},
  [35] = {.lex_state = 31, .external_lex_state = 4},
  [36] = {.lex_state = 31, .external_lex_state = 5},
  [37] = {.lex_state = 31, .external_lex_state = 5},
  [38] = {.lex_state = 31, .external_lex_state = 5},
  [39] = {.lex_state = 31, .external_lex_state = 6},
  [40] = {.lex_state = 31, .external_lex_state = 6},
  [41] = {.lex_state = 31, .external_lex_state = 6},
  [42] = {.lex_state = 31, .external_lex_state = 7},
  [43] = {.lex_state = 31, .external_lex_state = 7},
  [44] = {.lex_state = 31, .external_lex_state = 7},
  [45] = {.lex_state = 31, .external_lex_state = 6},
  [46] = {.lex_state = 31, .external_lex_state = 7},
  [47] = {.lex_state = 31, .external_lex_state = 7},
  [48] = {.lex_state = 31, .external_lex_state = 6},
  [49] = {.lex_state = 31, .external_lex_state = 6},
  [50] = {.lex_state = 31, .external_lex_state = 6},
  [51] = {.lex_state = 31, .external_lex_state = 7},
  [52] = {.lex_state = 31, .external_lex_state = 7},
  [53] = {.lex_state = 73, .external_lex_state = 8},
  [54] = {.lex_state = 73, .external_lex_state = 8},
  [55] = {.lex_state = 73, .external_lex_state = 8},
  [56] = {.lex_state = 73, .external_lex_state = 8},
  [57] = {.lex_state = 73, .external_lex_state = 8},
  [58] = {.lex_state = 73, .external_lex_state = 8},
  [59] = {.lex_state = 73, .external_lex_state = 8},
  [60] = {.lex_state = 73, .external_lex_state = 2},
  [61] = {.lex_state = 73, .external_lex_state = 2},
  [62] = {.lex_state = 73, .external_lex_state = 2},
  [63] = {.lex_state = 73, .external_lex_state = 2},
  [64] = {.lex_state = 73, .external_lex_state = 2},
  [65] = {.lex_state = 73, .external_lex_state = 2},
  [66] = {.lex_state = 73, .external_lex_state = 2},
  [67] = {.lex_state = 73, .external_lex_state = 2},
  [68] = {.lex_state = 73, .external_lex_state = 2},
  [69] = {.lex_state = 73, .external_lex_state = 2},
  [70] = {.lex_state = 73, .external_lex_state = 2},
  [71] = {.lex_state = 73, .external_lex_state = 2},
  [72] = {.lex_state = 73, .external_lex_state = 2},
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
  [90] = {.lex_state = 31, .external_lex_state = 10},
  [91] = {.lex_state = 31, .external_lex_state = 10},
  [92] = {.lex_state = 31, .external_lex_state = 4},
  [93] = {.lex_state = 31, .external_lex_state = 4},
  [94] = {.lex_state = 35, .external_lex_state = 7},
  [95] = {.lex_state = 31, .external_lex_state = 4},
  [96] = {.lex_state = 30, .external_lex_state = 7},
  [97] = {.lex_state = 30, .external_lex_state = 7},
  [98] = {.lex_state = 30, .external_lex_state = 7},
  [99] = {.lex_state = 30, .external_lex_state = 7},
  [100] = {.lex_state = 31, .external_lex_state = 7},
  [101] = {.lex_state = 35, .external_lex_state = 7},
  [102] = {.lex_state = 35, .external_lex_state = 7},
  [103] = {.lex_state = 31, .external_lex_state = 7},
  [104] = {.lex_state = 35, .external_lex_state = 7},
  [105] = {.lex_state = 35, .external_lex_state = 7},
  [106] = {.lex_state = 35, .external_lex_state = 7},
  [107] = {.lex_state = 31, .external_lex_state = 7},
  [108] = {.lex_state = 31, .external_lex_state = 7},
  [109] = {.lex_state = 31, .external_lex_state = 7},
  [110] = {.lex_state = 31, .external_lex_state = 7},
  [111] = {.lex_state = 31, .external_lex_state = 7},
  [112] = {.lex_state = 31, .external_lex_state = 7},
  [113] = {.lex_state = 31, .external_lex_state = 7},
  [114] = {.lex_state = 31, .external_lex_state = 7},
  [115] = {.lex_state = 78},
  [116] = {.lex_state = 32},
  [117] = {.lex_state = 78},
  [118] = {.lex_state = 32},
  [119] = {.lex_state = 32},
  [120] = {.lex_state = 78},
  [121] = {.lex_state = 33, .external_lex_state = 11},
  [122] = {.lex_state = 78},
  [123] = {.lex_state = 33, .external_lex_state = 11},
  [124] = {.lex_state = 78, .external_lex_state = 11},
  [125] = {.lex_state = 78, .external_lex_state = 11},
  [126] = {.lex_state = 33, .external_lex_state = 11},
  [127] = {.lex_state = 33, .external_lex_state = 11},
  [128] = {.lex_state = 38},
  [129] = {.lex_state = 38},
  [130] = {.lex_state = 38},
  [131] = {.lex_state = 78},
  [132] = {.lex_state = 78},
  [133] = {.lex_state = 78, .external_lex_state = 11},
  [134] = {.lex_state = 78},
  [135] = {.lex_state = 78, .external_lex_state = 11},
  [136] = {.lex_state = 78},
  [137] = {.lex_state = 78, .external_lex_state = 11},
  [138] = {.lex_state = 78, .external_lex_state = 11},
  [139] = {.lex_state = 78},
  [140] = {.lex_state = 78, .external_lex_state = 11},
  [141] = {.lex_state = 32},
  [142] = {.lex_state = 78, .external_lex_state = 11},
  [143] = {.lex_state = 78, .external_lex_state = 11},
  [144] = {.lex_state = 78, .external_lex_state = 11},
  [145] = {.lex_state = 39},
  [146] = {.lex_state = 39},
  [147] = {.lex_state = 39},
  [148] = {.lex_state = 78, .external_lex_state = 11},
  [149] = {.lex_state = 32},
  [150] = {.lex_state = 32},
  [151] = {.lex_state = 78, .external_lex_state = 11},
  [152] = {.lex_state = 78, .external_lex_state = 11},
  [153] = {.lex_state = 78, .external_lex_state = 11},
  [154] = {.lex_state = 39},
  [155] = {.lex_state = 39},
  [156] = {.lex_state = 39},
  [157] = {.lex_state = 39},
  [158] = {.lex_state = 78, .external_lex_state = 11},
  [159] = {.lex_state = 78, .external_lex_state = 11},
  [160] = {.lex_state = 39},
  [161] = {.lex_state = 39},
  [162] = {.lex_state = 78},
  [163] = {.lex_state = 39},
  [164] = {.lex_state = 38},
  [165] = {.lex_state = 39},
  [166] = {.lex_state = 39},
  [167] = {.lex_state = 78, .external_lex_state = 11},
  [168] = {.lex_state = 39},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 78, .external_lex_state = 11},
  [171] = {.lex_state = 78, .external_lex_state = 11},
  [172] = {.lex_state = 78, .external_lex_state = 12},
  [173] = {.lex_state = 78, .external_lex_state = 13},
  [174] = {.lex_state = 78, .external_lex_state = 14},
  [175] = {.lex_state = 78, .external_lex_state = 15},
  [176] = {.lex_state = 78, .external_lex_state = 16},
  [177] = {.lex_state = 37},
  [178] = {.lex_state = 36},
  [179] = {.lex_state = 37},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 78},
  [182] = {.lex_state = 78},
  [183] = {.lex_state = 39},
  [184] = {.lex_state = 41},
  [185] = {.lex_state = 37},
  [186] = {.lex_state = 37},
  [187] = {.lex_state = 37},
  [188] = {.lex_state = 78, .external_lex_state = 12},
  [189] = {.lex_state = 78, .external_lex_state = 13},
  [190] = {.lex_state = 42},
  [191] = {.lex_state = 43},
  [192] = {.lex_state = 37},
  [193] = {.lex_state = 78},
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
    [ts_external_token__eol] = true,
  },
  [13] = {
    [ts_external_token__eof] = true,
  },
  [14] = {
    [ts_external_token_bold_end] = true,
  },
  [15] = {
    [ts_external_token_italic_end] = true,
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
    [sym_document] = STATE(182),
    [sym_document_title_basic] = STATE(5),
    [sym_document_meta] = STATE(5),
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(3),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(3),
    [sym__text] = STATE(51),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(51),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(53),
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
  [3] = {
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(51),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(4),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(4),
    [sym__text] = STATE(51),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
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
    [sym_inline_code] = ACTIONS(62),
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
  },
  [5] = {
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(2),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(2),
    [sym__text] = STATE(51),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(6),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(6),
    [sym__text] = STATE(51),
    [aux_sym_heading_1_repeat1] = STATE(6),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(122),
    [aux_sym__comment_marker_token1] = ACTIONS(124),
    [aux_sym__comment_marker_token2] = ACTIONS(124),
    [sym_string] = ACTIONS(127),
    [sym_number] = ACTIONS(127),
    [sym_ticket] = ACTIONS(127),
    [aux_sym_date_token1] = ACTIONS(130),
    [aux_sym_date_token2] = ACTIONS(130),
    [aux_sym_date_token3] = ACTIONS(130),
    [aux_sym_time_token1] = ACTIONS(133),
    [aux_sym_time_token2] = ACTIONS(133),
    [sym_tag_positive] = ACTIONS(127),
    [sym_tag_negative] = ACTIONS(127),
    [sym_tag_hash] = ACTIONS(127),
    [sym_tag_context] = ACTIONS(127),
    [sym_tag_danger] = ACTIONS(127),
    [sym_tag_identifier] = ACTIONS(127),
    [sym_heading_1_marker] = ACTIONS(136),
    [sym_heading_2_marker] = ACTIONS(138),
    [sym_heading_3_marker] = ACTIONS(141),
    [sym_heading_4_marker] = ACTIONS(144),
    [sym_heading_5_marker] = ACTIONS(147),
    [sym_heading_6_marker] = ACTIONS(150),
    [sym_section_marker] = ACTIONS(153),
    [sym_inline_code] = ACTIONS(127),
    [anon_sym_ATcode] = ACTIONS(156),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(127),
    [aux_sym__text_token1] = ACTIONS(159),
    [sym_task_marker_default] = ACTIONS(162),
    [sym_task_marker_active] = ACTIONS(165),
    [sym_task_marker_done] = ACTIONS(168),
    [sym_task_marker_cancelled] = ACTIONS(171),
    [sym_list_item_marker] = ACTIONS(174),
    [sym_bold_start] = ACTIONS(177),
    [sym_italic_start] = ACTIONS(180),
    [sym_underline_start] = ACTIONS(183),
  },
  [7] = {
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(6),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(6),
    [sym__text] = STATE(51),
    [aux_sym_heading_1_repeat1] = STATE(6),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(186),
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
    [sym_heading_1_marker] = ACTIONS(188),
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
  [8] = {
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(7),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(7),
    [sym__text] = STATE(51),
    [aux_sym_heading_1_repeat1] = STATE(7),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(10),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(10),
    [sym__text] = STATE(51),
    [aux_sym_heading_2_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(10),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(10),
    [sym__text] = STATE(51),
    [aux_sym_heading_2_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(198),
    [aux_sym__comment_marker_token1] = ACTIONS(200),
    [aux_sym__comment_marker_token2] = ACTIONS(200),
    [sym_string] = ACTIONS(203),
    [sym_number] = ACTIONS(203),
    [sym_ticket] = ACTIONS(203),
    [aux_sym_date_token1] = ACTIONS(206),
    [aux_sym_date_token2] = ACTIONS(206),
    [aux_sym_date_token3] = ACTIONS(206),
    [aux_sym_time_token1] = ACTIONS(209),
    [aux_sym_time_token2] = ACTIONS(209),
    [sym_tag_positive] = ACTIONS(203),
    [sym_tag_negative] = ACTIONS(203),
    [sym_tag_hash] = ACTIONS(203),
    [sym_tag_context] = ACTIONS(203),
    [sym_tag_danger] = ACTIONS(203),
    [sym_tag_identifier] = ACTIONS(203),
    [sym_heading_1_marker] = ACTIONS(212),
    [sym_heading_2_marker] = ACTIONS(212),
    [sym_heading_3_marker] = ACTIONS(214),
    [sym_heading_4_marker] = ACTIONS(217),
    [sym_heading_5_marker] = ACTIONS(220),
    [sym_heading_6_marker] = ACTIONS(223),
    [sym_section_marker] = ACTIONS(226),
    [sym_inline_code] = ACTIONS(203),
    [anon_sym_ATcode] = ACTIONS(229),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(203),
    [aux_sym__text_token1] = ACTIONS(232),
    [sym_task_marker_default] = ACTIONS(235),
    [sym_task_marker_active] = ACTIONS(238),
    [sym_task_marker_done] = ACTIONS(241),
    [sym_task_marker_cancelled] = ACTIONS(244),
    [sym_list_item_marker] = ACTIONS(247),
    [sym_bold_start] = ACTIONS(250),
    [sym_italic_start] = ACTIONS(253),
    [sym_underline_start] = ACTIONS(256),
  },
  [11] = {
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(9),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(9),
    [sym__text] = STATE(51),
    [aux_sym_heading_2_repeat1] = STATE(9),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(259),
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
    [sym_heading_1_marker] = ACTIONS(261),
    [sym_heading_2_marker] = ACTIONS(261),
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
  [12] = {
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(51),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(14),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(14),
    [sym__text] = STATE(51),
    [aux_sym_heading_3_repeat1] = STATE(14),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
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
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(12),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(12),
    [sym__text] = STATE(51),
    [aux_sym_heading_3_repeat1] = STATE(12),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym_heading_5] = STATE(16),
    [sym_heading_6] = STATE(16),
    [sym_section] = STATE(16),
    [sym__task] = STATE(16),
    [sym_task_default] = STATE(16),
    [sym_task_active] = STATE(16),
    [sym_task_done] = STATE(16),
    [sym_task_cancelled] = STATE(16),
    [sym_list_item] = STATE(16),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(16),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(16),
    [sym__text] = STATE(51),
    [aux_sym_heading_4_repeat1] = STATE(16),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym_heading_5] = STATE(17),
    [sym_heading_6] = STATE(17),
    [sym_section] = STATE(17),
    [sym__task] = STATE(17),
    [sym_task_default] = STATE(17),
    [sym_task_active] = STATE(17),
    [sym_task_done] = STATE(17),
    [sym_task_cancelled] = STATE(17),
    [sym_list_item] = STATE(17),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(17),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(17),
    [sym__text] = STATE(51),
    [aux_sym_heading_4_repeat1] = STATE(17),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(333),
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
    [sym_bold_start] = ACTIONS(47),
    [sym_italic_start] = ACTIONS(49),
    [sym_underline_start] = ACTIONS(51),
  },
  [17] = {
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym_heading_5] = STATE(17),
    [sym_heading_6] = STATE(17),
    [sym_section] = STATE(17),
    [sym__task] = STATE(17),
    [sym_task_default] = STATE(17),
    [sym_task_active] = STATE(17),
    [sym_task_done] = STATE(17),
    [sym_task_cancelled] = STATE(17),
    [sym_list_item] = STATE(17),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(17),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(17),
    [sym__text] = STATE(51),
    [aux_sym_heading_4_repeat1] = STATE(17),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(337),
    [aux_sym__comment_marker_token1] = ACTIONS(339),
    [aux_sym__comment_marker_token2] = ACTIONS(339),
    [sym_string] = ACTIONS(342),
    [sym_number] = ACTIONS(342),
    [sym_ticket] = ACTIONS(342),
    [aux_sym_date_token1] = ACTIONS(345),
    [aux_sym_date_token2] = ACTIONS(345),
    [aux_sym_date_token3] = ACTIONS(345),
    [aux_sym_time_token1] = ACTIONS(348),
    [aux_sym_time_token2] = ACTIONS(348),
    [sym_tag_positive] = ACTIONS(342),
    [sym_tag_negative] = ACTIONS(342),
    [sym_tag_hash] = ACTIONS(342),
    [sym_tag_context] = ACTIONS(342),
    [sym_tag_danger] = ACTIONS(342),
    [sym_tag_identifier] = ACTIONS(342),
    [sym_heading_1_marker] = ACTIONS(351),
    [sym_heading_2_marker] = ACTIONS(351),
    [sym_heading_3_marker] = ACTIONS(351),
    [sym_heading_4_marker] = ACTIONS(351),
    [sym_heading_5_marker] = ACTIONS(353),
    [sym_heading_6_marker] = ACTIONS(356),
    [sym_section_marker] = ACTIONS(359),
    [sym_inline_code] = ACTIONS(342),
    [anon_sym_ATcode] = ACTIONS(362),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(342),
    [aux_sym__text_token1] = ACTIONS(365),
    [sym_task_marker_default] = ACTIONS(368),
    [sym_task_marker_active] = ACTIONS(371),
    [sym_task_marker_done] = ACTIONS(374),
    [sym_task_marker_cancelled] = ACTIONS(377),
    [sym_list_item_marker] = ACTIONS(380),
    [sym_bold_start] = ACTIONS(383),
    [sym_italic_start] = ACTIONS(386),
    [sym_underline_start] = ACTIONS(389),
  },
  [18] = {
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym_heading_6] = STATE(20),
    [sym_section] = STATE(20),
    [sym__task] = STATE(20),
    [sym_task_default] = STATE(20),
    [sym_task_active] = STATE(20),
    [sym_task_done] = STATE(20),
    [sym_task_cancelled] = STATE(20),
    [sym_list_item] = STATE(20),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(20),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(20),
    [sym__text] = STATE(51),
    [aux_sym_heading_5_repeat1] = STATE(20),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(392),
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
    [sym_heading_1_marker] = ACTIONS(394),
    [sym_heading_2_marker] = ACTIONS(394),
    [sym_heading_3_marker] = ACTIONS(394),
    [sym_heading_4_marker] = ACTIONS(394),
    [sym_heading_5_marker] = ACTIONS(394),
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
  [19] = {
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym_heading_6] = STATE(19),
    [sym_section] = STATE(19),
    [sym__task] = STATE(19),
    [sym_task_default] = STATE(19),
    [sym_task_active] = STATE(19),
    [sym_task_done] = STATE(19),
    [sym_task_cancelled] = STATE(19),
    [sym_list_item] = STATE(19),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(19),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(19),
    [sym__text] = STATE(51),
    [aux_sym_heading_5_repeat1] = STATE(19),
    [aux_sym_text_line_repeat1] = STATE(51),
    [aux_sym__text_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(396),
    [aux_sym__comment_marker_token1] = ACTIONS(398),
    [aux_sym__comment_marker_token2] = ACTIONS(398),
    [sym_string] = ACTIONS(401),
    [sym_number] = ACTIONS(401),
    [sym_ticket] = ACTIONS(401),
    [aux_sym_date_token1] = ACTIONS(404),
    [aux_sym_date_token2] = ACTIONS(404),
    [aux_sym_date_token3] = ACTIONS(404),
    [aux_sym_time_token1] = ACTIONS(407),
    [aux_sym_time_token2] = ACTIONS(407),
    [sym_tag_positive] = ACTIONS(401),
    [sym_tag_negative] = ACTIONS(401),
    [sym_tag_hash] = ACTIONS(401),
    [sym_tag_context] = ACTIONS(401),
    [sym_tag_danger] = ACTIONS(401),
    [sym_tag_identifier] = ACTIONS(401),
    [sym_heading_1_marker] = ACTIONS(410),
    [sym_heading_2_marker] = ACTIONS(410),
    [sym_heading_3_marker] = ACTIONS(410),
    [sym_heading_4_marker] = ACTIONS(410),
    [sym_heading_5_marker] = ACTIONS(410),
    [sym_heading_6_marker] = ACTIONS(412),
    [sym_section_marker] = ACTIONS(415),
    [sym_inline_code] = ACTIONS(401),
    [anon_sym_ATcode] = ACTIONS(418),
    [aux_sym_code_block_token1] = ACTIONS(3),
    [sym_external_link] = ACTIONS(401),
    [aux_sym__text_token1] = ACTIONS(421),
    [sym_task_marker_default] = ACTIONS(424),
    [sym_task_marker_active] = ACTIONS(427),
    [sym_task_marker_done] = ACTIONS(430),
    [sym_task_marker_cancelled] = ACTIONS(433),
    [sym_list_item_marker] = ACTIONS(436),
    [sym_bold_start] = ACTIONS(439),
    [sym_italic_start] = ACTIONS(442),
    [sym_underline_start] = ACTIONS(445),
  },
  [20] = {
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym_heading_6] = STATE(19),
    [sym_section] = STATE(19),
    [sym__task] = STATE(19),
    [sym_task_default] = STATE(19),
    [sym_task_active] = STATE(19),
    [sym_task_done] = STATE(19),
    [sym_task_cancelled] = STATE(19),
    [sym_list_item] = STATE(19),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(19),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(19),
    [sym__text] = STATE(51),
    [aux_sym_heading_5_repeat1] = STATE(19),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(51),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym_section] = STATE(21),
    [sym__task] = STATE(21),
    [sym_task_default] = STATE(21),
    [sym_task_active] = STATE(21),
    [sym_task_done] = STATE(21),
    [sym_task_cancelled] = STATE(21),
    [sym_list_item] = STATE(21),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(21),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(21),
    [sym__text] = STATE(51),
    [aux_sym_heading_6_repeat1] = STATE(21),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym_section] = STATE(22),
    [sym__task] = STATE(22),
    [sym_task_default] = STATE(22),
    [sym_task_active] = STATE(22),
    [sym_task_done] = STATE(22),
    [sym_task_cancelled] = STATE(22),
    [sym_list_item] = STATE(22),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(22),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(22),
    [sym__text] = STATE(51),
    [aux_sym_heading_6_repeat1] = STATE(22),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(51),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym__task] = STATE(26),
    [sym_task_default] = STATE(26),
    [sym_task_active] = STATE(26),
    [sym_task_done] = STATE(26),
    [sym_task_cancelled] = STATE(26),
    [sym_list_item] = STATE(26),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(26),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(26),
    [sym__text] = STATE(51),
    [aux_sym_section_repeat1] = STATE(26),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    [sym__comment_marker] = STATE(183),
    [sym_comment] = STATE(51),
    [sym_bold] = STATE(96),
    [sym_italic] = STATE(96),
    [sym_underline] = STATE(96),
    [sym__emphasis] = STATE(51),
    [sym_date] = STATE(94),
    [sym_daterange] = STATE(51),
    [sym_time] = STATE(105),
    [sym_timerange] = STATE(51),
    [sym_datetime] = STATE(104),
    [sym_datetimerange] = STATE(51),
    [sym__task] = STATE(24),
    [sym_task_default] = STATE(24),
    [sym_task_active] = STATE(24),
    [sym_task_done] = STATE(24),
    [sym_task_cancelled] = STATE(24),
    [sym_list_item] = STATE(24),
    [sym_code_block_start] = STATE(116),
    [sym_code_block] = STATE(24),
    [sym__inline] = STATE(51),
    [sym_text_line] = STATE(24),
    [sym__text] = STATE(51),
    [aux_sym_section_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(51),
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
    ACTIONS(575), 1,
      aux_sym_task_session_token1,
    ACTIONS(578), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(581), 1,
      aux_sym__text_token1,
    ACTIONS(586), 1,
      sym_task_marker_default,
    ACTIONS(589), 1,
      sym_task_marker_active,
    ACTIONS(592), 1,
      sym_task_marker_done,
    ACTIONS(595), 1,
      sym_task_marker_cancelled,
    ACTIONS(598), 1,
      sym_list_item_marker,
    ACTIONS(601), 1,
      sym_bold_start,
    ACTIONS(604), 1,
      sym_italic_start,
    ACTIONS(607), 1,
      sym_underline_start,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
      sym__comment_marker,
    ACTIONS(563), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(572), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(584), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(569), 3,
      aux_sym_date_token1,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(96), 3,
      sym_bold,
      sym_italic,
      sym_underline,
    STATE(44), 8,
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
    ACTIONS(566), 11,
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
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(612), 1,
      aux_sym_task_session_token1,
    ACTIONS(614), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(618), 1,
      sym_task_marker_default,
    ACTIONS(620), 1,
      sym_task_marker_active,
    ACTIONS(622), 1,
      sym_task_marker_done,
    ACTIONS(624), 1,
      sym_task_marker_cancelled,
    ACTIONS(626), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(616), 2,
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
    STATE(44), 8,
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
    ACTIONS(610), 11,
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
    ACTIONS(612), 1,
      aux_sym_task_session_token1,
    ACTIONS(614), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(618), 1,
      sym_task_marker_default,
    ACTIONS(620), 1,
      sym_task_marker_active,
    ACTIONS(622), 1,
      sym_task_marker_done,
    ACTIONS(624), 1,
      sym_task_marker_cancelled,
    ACTIONS(626), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(44), 8,
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
    ACTIONS(610), 11,
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
    ACTIONS(612), 1,
      aux_sym_task_session_token1,
    ACTIONS(614), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(618), 1,
      sym_task_marker_default,
    ACTIONS(620), 1,
      sym_task_marker_active,
    ACTIONS(622), 1,
      sym_task_marker_done,
    ACTIONS(624), 1,
      sym_task_marker_cancelled,
    ACTIONS(626), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(44), 8,
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
    ACTIONS(610), 11,
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
    ACTIONS(612), 1,
      aux_sym_task_session_token1,
    ACTIONS(614), 1,
      aux_sym_task_schedule_token1,
    ACTIONS(618), 1,
      sym_task_marker_default,
    ACTIONS(620), 1,
      sym_task_marker_active,
    ACTIONS(622), 1,
      sym_task_marker_done,
    ACTIONS(624), 1,
      sym_task_marker_cancelled,
    ACTIONS(626), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(44), 8,
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
    ACTIONS(610), 11,
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
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(634), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(632), 2,
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
    ACTIONS(630), 11,
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
    ACTIONS(634), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
      sym__comment_marker,
    ACTIONS(11), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(17), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(636), 2,
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
    ACTIONS(630), 11,
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
    ACTIONS(650), 1,
      aux_sym__text_token1,
    ACTIONS(655), 1,
      sym_list_item_marker,
    ACTIONS(658), 1,
      sym_bold_start,
    ACTIONS(661), 1,
      sym_italic_start,
    ACTIONS(664), 1,
      sym_underline_start,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
      sym__comment_marker,
    ACTIONS(638), 2,
      aux_sym__comment_marker_token1,
      aux_sym__comment_marker_token2,
    ACTIONS(647), 2,
      aux_sym_time_token1,
      aux_sym_time_token2,
    ACTIONS(653), 2,
      sym__eof,
      sym__dedent,
    ACTIONS(644), 3,
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
    STATE(47), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(641), 11,
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
    ACTIONS(634), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(34), 3,
      sym_list_item,
      sym_text_line,
      aux_sym__list_item_children_repeat1,
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
    ACTIONS(630), 11,
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
    ACTIONS(634), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    ACTIONS(630), 11,
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
    ACTIONS(634), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(47), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(630), 11,
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
    ACTIONS(634), 1,
      sym_list_item_marker,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(47), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(630), 11,
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
    STATE(77), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(43), 8,
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
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(46), 8,
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
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(46), 8,
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
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(675), 1,
      aux_sym_code_block_token1,
    ACTIONS(677), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    ACTIONS(673), 11,
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
    ACTIONS(679), 1,
      aux_sym_code_block_token1,
    ACTIONS(681), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    ACTIONS(673), 11,
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
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(683), 1,
      aux_sym_code_block_token1,
    ACTIONS(685), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    ACTIONS(673), 11,
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
    STATE(90), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(42), 8,
      sym_comment,
      sym__emphasis,
      sym_daterange,
      sym_timerange,
      sym_datetimerange,
      sym__inline,
      sym__text,
      aux_sym_text_line_repeat1,
    ACTIONS(687), 11,
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
    ACTIONS(35), 1,
      aux_sym__text_token1,
    ACTIONS(47), 1,
      sym_bold_start,
    ACTIONS(49), 1,
      sym_italic_start,
    ACTIONS(51), 1,
      sym_underline_start,
    ACTIONS(689), 1,
      aux_sym_code_block_token1,
    ACTIONS(691), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    ACTIONS(673), 11,
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
    ACTIONS(693), 1,
      aux_sym_code_block_token1,
    ACTIONS(695), 1,
      sym__eof,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    ACTIONS(673), 11,
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
    STATE(73), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(43), 8,
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
  [1863] = 17,
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
    STATE(76), 1,
      sym_text_line,
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(43), 8,
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
  [1938] = 17,
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
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(46), 8,
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
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    ACTIONS(673), 11,
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
    STATE(94), 1,
      sym_date,
    STATE(103), 1,
      aux_sym__text_repeat1,
    STATE(104), 1,
      sym_datetime,
    STATE(105), 1,
      sym_time,
    STATE(183), 1,
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
    STATE(67), 1,
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
    STATE(66), 1,
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
    ACTIONS(733), 1,
      sym__indent,
    STATE(65), 1,
      sym__task_children,
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
    STATE(60), 1,
      sym__task_children,
    ACTIONS(743), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(745), 27,
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
    ACTIONS(751), 1,
      sym__indent,
    STATE(69), 1,
      sym__list_item_children,
    ACTIONS(747), 9,
      sym_task_marker_default,
      sym_task_marker_active,
      sym_task_marker_done,
      sym_task_marker_cancelled,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
      ts_builtin_sym_end,
    ACTIONS(749), 27,
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
    ACTIONS(753), 9,
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
  [2635] = 3,
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
  [2679] = 3,
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
  [2723] = 3,
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
  [2767] = 3,
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
    STATE(85), 1,
      sym__list_item_children,
    ACTIONS(747), 10,
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
    ACTIONS(749), 21,
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
    STATE(81), 1,
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
  [3165] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(811), 1,
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
  [3210] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(811), 1,
      sym__indent,
    STATE(82), 1,
      sym__task_children,
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
  [3255] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(811), 1,
      sym__indent,
    STATE(83), 1,
      sym__task_children,
    ACTIONS(743), 10,
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
    ACTIONS(745), 21,
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
    ACTIONS(769), 10,
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
    ACTIONS(771), 21,
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
    ACTIONS(785), 10,
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
    ACTIONS(787), 21,
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
  [3536] = 3,
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
  [3575] = 3,
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
  [3614] = 3,
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
  [3653] = 3,
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
  [3692] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(781), 10,
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
    ACTIONS(783), 21,
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
    ACTIONS(753), 10,
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
  [3770] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(821), 1,
      sym__indent,
    STATE(92), 1,
      sym__list_item_children,
    ACTIONS(747), 6,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(749), 19,
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
    ACTIONS(753), 7,
      sym__eof,
      sym__indent,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(755), 19,
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
    ACTIONS(793), 6,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(795), 19,
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
    ACTIONS(753), 6,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(755), 19,
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
  [3909] = 5,
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
  [3946] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(805), 6,
      sym__eof,
      sym__dedent,
      sym_list_item_marker,
      sym_bold_start,
      sym_italic_start,
      sym_underline_start,
    ACTIONS(807), 19,
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
  [4381] = 2,
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
  [4410] = 2,
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
  [4439] = 2,
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
  [4468] = 2,
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
    ACTIONS(896), 1,
      aux_sym_date_token1,
    ACTIONS(900), 1,
      aux_sym_time_token1,
    ACTIONS(902), 1,
      aux_sym_time_token2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    STATE(139), 1,
      sym_date,
    ACTIONS(898), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(159), 2,
      sym_time,
      sym_datetime,
  [4579] = 7,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(906), 1,
      sym_code_block_end,
    ACTIONS(908), 1,
      aux_sym__text_token1,
    STATE(126), 1,
      aux_sym__text_repeat1,
    STATE(193), 1,
      sym_code_block_content,
    STATE(118), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(123), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4603] = 7,
    ACTIONS(896), 1,
      aux_sym_date_token1,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(910), 1,
      aux_sym_time_token1,
    ACTIONS(912), 1,
      aux_sym_time_token2,
    STATE(134), 1,
      sym_date,
    ACTIONS(898), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(107), 2,
      sym_time,
      sym_datetime,
  [4627] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(908), 1,
      aux_sym__text_token1,
    ACTIONS(914), 1,
      sym_code_block_end,
    STATE(126), 1,
      aux_sym__text_repeat1,
    STATE(119), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(123), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4648] = 6,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(916), 1,
      sym_code_block_end,
    ACTIONS(918), 1,
      aux_sym__text_token1,
    STATE(126), 1,
      aux_sym__text_repeat1,
    STATE(119), 2,
      sym__raw_text_line,
      aux_sym_code_block_content_repeat1,
    STATE(123), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4669] = 6,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(921), 1,
      aux_sym_date_token1,
    STATE(124), 1,
      sym_date,
    STATE(135), 1,
      sym_datetime,
    ACTIONS(923), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
    STATE(170), 2,
      sym_daterange,
      sym_datetimerange,
  [4690] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(925), 1,
      aux_sym__text_token1,
    STATE(126), 1,
      aux_sym__text_repeat1,
    ACTIONS(928), 2,
      sym__eof,
      sym__eol,
    STATE(121), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4708] = 6,
    ACTIONS(896), 1,
      aux_sym_date_token1,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    STATE(138), 1,
      sym_datetime,
    STATE(139), 1,
      sym_date,
    STATE(171), 1,
      sym_datetimerange,
    ACTIONS(898), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4728] = 5,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(930), 1,
      aux_sym__text_token1,
    STATE(126), 1,
      aux_sym__text_repeat1,
    ACTIONS(932), 2,
      sym__eof,
      sym__eol,
    STATE(121), 2,
      sym__text,
      aux_sym__raw_text_line_repeat1,
  [4746] = 6,
    ACTIONS(900), 1,
      aux_sym_time_token1,
    ACTIONS(902), 1,
      aux_sym_time_token2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(934), 1,
      aux_sym_daterange_token1,
    STATE(137), 1,
      sym_time,
    ACTIONS(936), 2,
      sym__eof,
      sym__eol,
  [4766] = 3,
    ACTIONS(858), 1,
      aux_sym_time_token1,
    ACTIONS(904), 1,
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
    STATE(127), 1,
      aux_sym__text_repeat1,
    ACTIONS(866), 2,
      sym__eof,
      sym__eol,
  [4793] = 4,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(940), 1,
      aux_sym__text_token1,
    STATE(127), 1,
      aux_sym__text_repeat1,
    ACTIONS(852), 2,
      sym__eof,
      sym__eol,
  [4807] = 4,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(943), 1,
      aux_sym_document_meta_token2,
    ACTIONS(945), 1,
      sym_document_meta_field_key,
    STATE(129), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4821] = 4,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(945), 1,
      sym_document_meta_field_key,
    ACTIONS(947), 1,
      aux_sym_document_meta_token2,
    STATE(130), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4835] = 4,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(949), 1,
      aux_sym_document_meta_token2,
    ACTIONS(951), 1,
      sym_document_meta_field_key,
    STATE(130), 2,
      sym_document_meta_field,
      aux_sym_document_meta_repeat1,
  [4849] = 4,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(954), 1,
      aux_sym_date_token1,
    STATE(114), 1,
      sym_date,
    ACTIONS(956), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4863] = 4,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(921), 1,
      aux_sym_date_token1,
    STATE(158), 1,
      sym_date,
    ACTIONS(923), 2,
      aux_sym_date_token2,
      aux_sym_date_token3,
  [4877] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(874), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [4886] = 4,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(910), 1,
      aux_sym_time_token1,
    ACTIONS(912), 1,
      aux_sym_time_token2,
    STATE(108), 1,
      sym_time,
  [4899] = 3,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(958), 1,
      aux_sym_daterange_token1,
    ACTIONS(936), 2,
      sym__eof,
      sym__eol,
  [4910] = 4,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(910), 1,
      aux_sym_time_token1,
    ACTIONS(912), 1,
      aux_sym_time_token2,
    STATE(113), 1,
      sym_time,
  [4923] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(856), 3,
      sym__eof,
      sym__eol,
      aux_sym_daterange_token1,
  [4932] = 3,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(958), 1,
      aux_sym_daterange_token1,
    ACTIONS(960), 2,
      sym__eof,
      sym__eol,
  [4943] = 4,
    ACTIONS(900), 1,
      aux_sym_time_token1,
    ACTIONS(902), 1,
      aux_sym_time_token2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    STATE(137), 1,
      sym_time,
  [4956] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(962), 2,
      sym__eof,
      sym__eol,
  [4964] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(964), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [4972] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(966), 2,
      sym__eof,
      sym__eol,
  [4980] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(968), 2,
      sym__eof,
      sym__eol,
  [4988] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(970), 2,
      sym__eof,
      sym__eol,
  [4996] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(972), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(172), 1,
      sym_document_meta_field_value,
  [5006] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(974), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(53), 1,
      sym_text_to_eol,
  [5016] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(976), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(167), 1,
      sym_text_to_eol,
  [5026] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(757), 2,
      sym__eof,
      sym__eol,
  [5034] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(978), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [5042] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(980), 2,
      sym_code_block_end,
      aux_sym__text_token1,
  [5050] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(982), 2,
      sym__eof,
      sym__eol,
  [5058] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(984), 2,
      sym__eof,
      sym__eol,
  [5066] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(986), 2,
      sym__eof,
      sym__eol,
  [5074] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(976), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(152), 1,
      sym_text_to_eol,
  [5084] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(976), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(140), 1,
      sym_text_to_eol,
  [5094] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(976), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(151), 1,
      sym_text_to_eol,
  [5104] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(976), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(142), 1,
      sym_text_to_eol,
  [5114] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(894), 2,
      sym__eof,
      sym__eol,
  [5122] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(878), 2,
      sym__eof,
      sym__eol,
  [5130] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(976), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(143), 1,
      sym_text_to_eol,
  [5140] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(976), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(144), 1,
      sym_text_to_eol,
  [5150] = 3,
    ACTIONS(858), 1,
      aux_sym_time_token1,
    ACTIONS(860), 1,
      aux_sym_time_token2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
  [5160] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(974), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(54), 1,
      sym_text_to_eol,
  [5170] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(988), 2,
      aux_sym_document_meta_token2,
      sym_document_meta_field_key,
  [5178] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(976), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(153), 1,
      sym_text_to_eol,
  [5188] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(990), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(74), 1,
      sym_text_to_eol,
  [5198] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(992), 2,
      sym__eof,
      sym__eol,
  [5206] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(990), 1,
      aux_sym_document_meta_field_value_token1,
    STATE(75), 1,
      sym_text_to_eol,
  [5216] = 3,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(994), 1,
      aux_sym_code_block_start_token1,
    ACTIONS(996), 1,
      anon_sym_LF,
  [5226] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(936), 2,
      sym__eof,
      sym__eol,
  [5234] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(960), 2,
      sym__eof,
      sym__eol,
  [5242] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(998), 1,
      sym__eol,
  [5249] = 1,
    ACTIONS(1000), 2,
      sym__eof,
      aux_sym_code_block_token1,
  [5254] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(1002), 1,
      sym_bold_end,
  [5261] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(1004), 1,
      sym_italic_end,
  [5268] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(1006), 1,
      sym_underline_end,
  [5275] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1008), 1,
      anon_sym_,
  [5282] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1010), 1,
      anon_sym_COLON,
  [5289] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1012), 1,
      anon_sym_,
  [5296] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1014), 1,
      anon_sym_LF,
  [5303] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(1016), 1,
      sym_code_block_language,
  [5310] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(1018), 1,
      ts_builtin_sym_end,
  [5317] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1020), 1,
      aux_sym_document_meta_field_value_token1,
  [5324] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1022), 1,
      sym_bold_content,
  [5331] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1024), 1,
      anon_sym_,
  [5338] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1026), 1,
      anon_sym_,
  [5345] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1028), 1,
      anon_sym_,
  [5352] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(1030), 1,
      sym__eol,
  [5359] = 1,
    ACTIONS(1032), 2,
      sym__eof,
      aux_sym_code_block_token1,
  [5364] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1034), 1,
      sym_underline_content,
  [5371] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1036), 1,
      sym_italic_content,
  [5378] = 2,
    ACTIONS(3), 1,
      aux_sym_code_block_token1,
    ACTIONS(1038), 1,
      anon_sym_,
  [5385] = 2,
    ACTIONS(904), 1,
      aux_sym_code_block_token1,
    ACTIONS(1040), 1,
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
  [SMALL_STATE(95)] = 3946,
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
  [SMALL_STATE(124)] = 4746,
  [SMALL_STATE(125)] = 4766,
  [SMALL_STATE(126)] = 4779,
  [SMALL_STATE(127)] = 4793,
  [SMALL_STATE(128)] = 4807,
  [SMALL_STATE(129)] = 4821,
  [SMALL_STATE(130)] = 4835,
  [SMALL_STATE(131)] = 4849,
  [SMALL_STATE(132)] = 4863,
  [SMALL_STATE(133)] = 4877,
  [SMALL_STATE(134)] = 4886,
  [SMALL_STATE(135)] = 4899,
  [SMALL_STATE(136)] = 4910,
  [SMALL_STATE(137)] = 4923,
  [SMALL_STATE(138)] = 4932,
  [SMALL_STATE(139)] = 4943,
  [SMALL_STATE(140)] = 4956,
  [SMALL_STATE(141)] = 4964,
  [SMALL_STATE(142)] = 4972,
  [SMALL_STATE(143)] = 4980,
  [SMALL_STATE(144)] = 4988,
  [SMALL_STATE(145)] = 4996,
  [SMALL_STATE(146)] = 5006,
  [SMALL_STATE(147)] = 5016,
  [SMALL_STATE(148)] = 5026,
  [SMALL_STATE(149)] = 5034,
  [SMALL_STATE(150)] = 5042,
  [SMALL_STATE(151)] = 5050,
  [SMALL_STATE(152)] = 5058,
  [SMALL_STATE(153)] = 5066,
  [SMALL_STATE(154)] = 5074,
  [SMALL_STATE(155)] = 5084,
  [SMALL_STATE(156)] = 5094,
  [SMALL_STATE(157)] = 5104,
  [SMALL_STATE(158)] = 5114,
  [SMALL_STATE(159)] = 5122,
  [SMALL_STATE(160)] = 5130,
  [SMALL_STATE(161)] = 5140,
  [SMALL_STATE(162)] = 5150,
  [SMALL_STATE(163)] = 5160,
  [SMALL_STATE(164)] = 5170,
  [SMALL_STATE(165)] = 5178,
  [SMALL_STATE(166)] = 5188,
  [SMALL_STATE(167)] = 5198,
  [SMALL_STATE(168)] = 5206,
  [SMALL_STATE(169)] = 5216,
  [SMALL_STATE(170)] = 5226,
  [SMALL_STATE(171)] = 5234,
  [SMALL_STATE(172)] = 5242,
  [SMALL_STATE(173)] = 5249,
  [SMALL_STATE(174)] = 5254,
  [SMALL_STATE(175)] = 5261,
  [SMALL_STATE(176)] = 5268,
  [SMALL_STATE(177)] = 5275,
  [SMALL_STATE(178)] = 5282,
  [SMALL_STATE(179)] = 5289,
  [SMALL_STATE(180)] = 5296,
  [SMALL_STATE(181)] = 5303,
  [SMALL_STATE(182)] = 5310,
  [SMALL_STATE(183)] = 5317,
  [SMALL_STATE(184)] = 5324,
  [SMALL_STATE(185)] = 5331,
  [SMALL_STATE(186)] = 5338,
  [SMALL_STATE(187)] = 5345,
  [SMALL_STATE(188)] = 5352,
  [SMALL_STATE(189)] = 5359,
  [SMALL_STATE(190)] = 5364,
  [SMALL_STATE(191)] = 5371,
  [SMALL_STATE(192)] = 5378,
  [SMALL_STATE(193)] = 5385,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(183),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(187),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(186),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(185),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(192),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(177),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(165),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(169),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(163),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(146),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(184),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(191),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(190),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(183),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(51),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(102),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(106),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(186),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(185),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(192),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(177),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(179),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(165),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(169),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(103),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(50),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(40),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(163),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(146),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(41),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(184),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(191),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_1_repeat1, 2), SHIFT_REPEAT(190),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 5, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_1, 4, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 5, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(183),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(51),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(102),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(106),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(185),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(192),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(177),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(179),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(165),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(169),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(103),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(50),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(40),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(163),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(146),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(41),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(184),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(191),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_2_repeat1, 2), SHIFT_REPEAT(190),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_2, 4, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(183),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(51),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(102),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(106),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(192),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(177),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(179),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(165),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(169),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(103),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(50),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(40),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(163),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(146),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(41),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(184),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(191),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_3_repeat1, 2), SHIFT_REPEAT(190),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 4, .production_id = 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_3, 5, .production_id = 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 4, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_4, 5, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(183),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(51),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(102),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(106),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(177),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(179),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(165),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(169),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(103),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(50),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(40),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(163),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(146),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(41),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(184),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(191),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_4_repeat1, 2), SHIFT_REPEAT(190),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 4, .production_id = 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(183),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(51),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(102),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(106),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(179),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(165),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(169),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(103),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(50),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(40),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(163),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(146),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(41),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(184),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(191),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_5_repeat1, 2), SHIFT_REPEAT(190),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_5, 5, .production_id = 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(183),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(51),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(102),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(106),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(165),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(169),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(103),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(50),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(40),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(163),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(146),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(41),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(184),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(191),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_6_repeat1, 2), SHIFT_REPEAT(190),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 5, .production_id = 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading_6, 4, .production_id = 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(183),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(51),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(102),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(106),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(169),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(103),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(50),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(40),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(163),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(146),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(41),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(184),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(191),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(190),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(183),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(44),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(102),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(106),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(122),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(120),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(103),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(39),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(49),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(168),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(166),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(48),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(184),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(191),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_children_repeat1, 2), SHIFT_REPEAT(190),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(183),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(47),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(102),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(106),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(103),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(45),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(184),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(191),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_item_children_repeat1, 2), SHIFT_REPEAT(190),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(183),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(52),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(102),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(106),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(103),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(184),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(191),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(190),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 2),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 2),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 2),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 2),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_to_eol, 1),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_to_eol, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_default, 3),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_default, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_children, 3),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__task_children, 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_active, 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_active, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_done, 3),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_done, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_cancelled, 3),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_cancelled, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 2),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title_basic, 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title_basic, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta, 3),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_meta, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_children, 3),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_children, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_session, 3),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_session, 3),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_schedule, 3),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_schedule, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline, 1),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 1),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
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
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetimerange, 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetimerange, 3),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emphasis, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emphasis, 2),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timerange, 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timerange, 3),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_daterange, 3),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daterange, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_content, 1),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2),
  [918] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_content_repeat1, 2), SHIFT_REPEAT(126),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2), SHIFT_REPEAT(126),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_text_line_repeat1, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(127),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_meta_repeat1, 2), SHIFT_REPEAT(178),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 4),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_start, 2),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_text_line, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field, 4, .production_id = 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1018] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_meta_field_value, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
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
