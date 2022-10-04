#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 170
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 2
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_source_file_token1 = 1,
  aux_sym_settings_section_token1 = 2,
  aux_sym_settings_section_token2 = 3,
  aux_sym_settings_section_token3 = 4,
  aux_sym_setting_statement_token1 = 5,
  aux_sym_setting_statement_token2 = 6,
  aux_sym_setting_statement_token3 = 7,
  aux_sym_setting_statement_token4 = 8,
  aux_sym_setting_statement_token5 = 9,
  aux_sym_setting_statement_token6 = 10,
  aux_sym_setting_statement_token7 = 11,
  aux_sym_setting_statement_token8 = 12,
  aux_sym_setting_statement_token9 = 13,
  aux_sym_setting_statement_token10 = 14,
  aux_sym_setting_statement_token11 = 15,
  aux_sym_setting_statement_token12 = 16,
  aux_sym_setting_statement_token13 = 17,
  aux_sym_setting_statement_token14 = 18,
  aux_sym_setting_statement_token15 = 19,
  aux_sym_setting_statement_token16 = 20,
  aux_sym_setting_statement_token17 = 21,
  aux_sym_variables_section_token1 = 22,
  anon_sym_DOLLAR_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_EQ = 25,
  anon_sym_EQ2 = 26,
  aux_sym_keywords_section_token1 = 27,
  aux_sym_keyword_setting_token1 = 28,
  aux_sym_keyword_setting_token2 = 29,
  aux_sym_keyword_setting_token3 = 30,
  aux_sym_keyword_setting_token4 = 31,
  aux_sym_keyword_setting_token5 = 32,
  aux_sym_keyword_setting_token6 = 33,
  aux_sym_test_cases_or_tasks_section_token1 = 34,
  aux_sym_test_cases_or_tasks_section_token2 = 35,
  aux_sym_test_case_or_task_setting_token1 = 36,
  aux_sym_test_case_or_task_setting_token2 = 37,
  sym_ellipses = 38,
  sym_indented_ellipses = 39,
  anon_sym_ = 40,
  anon_sym_AT_LBRACE = 41,
  anon_sym_AMP_LBRACE = 42,
  sym_variable_name = 43,
  sym_text_chunk = 44,
  sym_comment = 45,
  sym__separator = 46,
  aux_sym__whitespace_token1 = 47,
  sym__line_break = 48,
  sym_source_file = 49,
  sym_section = 50,
  sym_settings_section = 51,
  sym_setting_statement = 52,
  sym_variables_section = 53,
  sym_variable_definition = 54,
  sym_keywords_section = 55,
  sym_keyword_definition = 56,
  sym_keyword_definition_body = 57,
  sym_keyword_setting = 58,
  sym_test_cases_or_tasks_section = 59,
  sym_test_case_or_task_definition = 60,
  sym_test_case_or_task_definition_body = 61,
  sym_test_case_or_task_setting = 62,
  sym_statement = 63,
  sym_variable_assignment = 64,
  sym_keyword_invocation = 65,
  sym_arguments = 66,
  sym_continuation = 67,
  sym_argument = 68,
  sym_scalar_variable = 69,
  sym_list_variable = 70,
  sym_dictionary_variable = 71,
  sym__empty_line = 72,
  aux_sym_source_file_repeat1 = 73,
  aux_sym_settings_section_repeat1 = 74,
  aux_sym_variables_section_repeat1 = 75,
  aux_sym_keywords_section_repeat1 = 76,
  aux_sym_keyword_definition_body_repeat1 = 77,
  aux_sym_test_cases_or_tasks_section_repeat1 = 78,
  aux_sym_test_case_or_task_definition_body_repeat1 = 79,
  aux_sym_arguments_repeat1 = 80,
  aux_sym_arguments_repeat2 = 81,
  aux_sym_argument_repeat1 = 82,
  alias_sym_keyword = 83,
  alias_sym_name = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_settings_section_token1] = "section_header",
  [aux_sym_settings_section_token2] = "extra_text",
  [aux_sym_settings_section_token3] = "extra_text",
  [aux_sym_setting_statement_token1] = "setting_statement_token1",
  [aux_sym_setting_statement_token2] = "setting_statement_token2",
  [aux_sym_setting_statement_token3] = "setting_statement_token3",
  [aux_sym_setting_statement_token4] = "setting_statement_token4",
  [aux_sym_setting_statement_token5] = "setting_statement_token5",
  [aux_sym_setting_statement_token6] = "setting_statement_token6",
  [aux_sym_setting_statement_token7] = "setting_statement_token7",
  [aux_sym_setting_statement_token8] = "setting_statement_token8",
  [aux_sym_setting_statement_token9] = "setting_statement_token9",
  [aux_sym_setting_statement_token10] = "setting_statement_token10",
  [aux_sym_setting_statement_token11] = "setting_statement_token11",
  [aux_sym_setting_statement_token12] = "setting_statement_token12",
  [aux_sym_setting_statement_token13] = "setting_statement_token13",
  [aux_sym_setting_statement_token14] = "setting_statement_token14",
  [aux_sym_setting_statement_token15] = "setting_statement_token15",
  [aux_sym_setting_statement_token16] = "setting_statement_token16",
  [aux_sym_setting_statement_token17] = "setting_statement_token17",
  [aux_sym_variables_section_token1] = "section_header",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ2] = " =",
  [aux_sym_keywords_section_token1] = "section_header",
  [aux_sym_keyword_setting_token1] = "keyword_setting_token1",
  [aux_sym_keyword_setting_token2] = "keyword_setting_token2",
  [aux_sym_keyword_setting_token3] = "keyword_setting_token3",
  [aux_sym_keyword_setting_token4] = "keyword_setting_token4",
  [aux_sym_keyword_setting_token5] = "keyword_setting_token5",
  [aux_sym_keyword_setting_token6] = "keyword_setting_token6",
  [aux_sym_test_cases_or_tasks_section_token1] = "section_header",
  [aux_sym_test_cases_or_tasks_section_token2] = "section_header",
  [aux_sym_test_case_or_task_setting_token1] = "test_case_or_task_setting_token1",
  [aux_sym_test_case_or_task_setting_token2] = "test_case_or_task_setting_token2",
  [sym_ellipses] = "ellipses",
  [sym_indented_ellipses] = "ellipses",
  [anon_sym_] = " ",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AMP_LBRACE] = "&{",
  [sym_variable_name] = "variable_name",
  [sym_text_chunk] = "text_chunk",
  [sym_comment] = "comment",
  [sym__separator] = "_separator",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__line_break] = "_line_break",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_settings_section] = "settings_section",
  [sym_setting_statement] = "setting_statement",
  [sym_variables_section] = "variables_section",
  [sym_variable_definition] = "variable_definition",
  [sym_keywords_section] = "keywords_section",
  [sym_keyword_definition] = "keyword_definition",
  [sym_keyword_definition_body] = "body",
  [sym_keyword_setting] = "keyword_setting",
  [sym_test_cases_or_tasks_section] = "test_cases_or_tasks_section",
  [sym_test_case_or_task_definition] = "test_case_or_task_definition",
  [sym_test_case_or_task_definition_body] = "body",
  [sym_test_case_or_task_setting] = "test_case_or_task_setting",
  [sym_statement] = "statement",
  [sym_variable_assignment] = "variable_assignment",
  [sym_keyword_invocation] = "keyword_invocation",
  [sym_arguments] = "arguments",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym_scalar_variable] = "scalar_variable",
  [sym_list_variable] = "list_variable",
  [sym_dictionary_variable] = "dictionary_variable",
  [sym__empty_line] = "_empty_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_settings_section_repeat1] = "settings_section_repeat1",
  [aux_sym_variables_section_repeat1] = "variables_section_repeat1",
  [aux_sym_keywords_section_repeat1] = "keywords_section_repeat1",
  [aux_sym_keyword_definition_body_repeat1] = "keyword_definition_body_repeat1",
  [aux_sym_test_cases_or_tasks_section_repeat1] = "test_cases_or_tasks_section_repeat1",
  [aux_sym_test_case_or_task_definition_body_repeat1] = "test_case_or_task_definition_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [alias_sym_keyword] = "keyword",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_settings_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_settings_section_token2] = aux_sym_settings_section_token2,
  [aux_sym_settings_section_token3] = aux_sym_settings_section_token2,
  [aux_sym_setting_statement_token1] = aux_sym_setting_statement_token1,
  [aux_sym_setting_statement_token2] = aux_sym_setting_statement_token2,
  [aux_sym_setting_statement_token3] = aux_sym_setting_statement_token3,
  [aux_sym_setting_statement_token4] = aux_sym_setting_statement_token4,
  [aux_sym_setting_statement_token5] = aux_sym_setting_statement_token5,
  [aux_sym_setting_statement_token6] = aux_sym_setting_statement_token6,
  [aux_sym_setting_statement_token7] = aux_sym_setting_statement_token7,
  [aux_sym_setting_statement_token8] = aux_sym_setting_statement_token8,
  [aux_sym_setting_statement_token9] = aux_sym_setting_statement_token9,
  [aux_sym_setting_statement_token10] = aux_sym_setting_statement_token10,
  [aux_sym_setting_statement_token11] = aux_sym_setting_statement_token11,
  [aux_sym_setting_statement_token12] = aux_sym_setting_statement_token12,
  [aux_sym_setting_statement_token13] = aux_sym_setting_statement_token13,
  [aux_sym_setting_statement_token14] = aux_sym_setting_statement_token14,
  [aux_sym_setting_statement_token15] = aux_sym_setting_statement_token15,
  [aux_sym_setting_statement_token16] = aux_sym_setting_statement_token16,
  [aux_sym_setting_statement_token17] = aux_sym_setting_statement_token17,
  [aux_sym_variables_section_token1] = aux_sym_settings_section_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [aux_sym_keywords_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_keyword_setting_token1] = aux_sym_keyword_setting_token1,
  [aux_sym_keyword_setting_token2] = aux_sym_keyword_setting_token2,
  [aux_sym_keyword_setting_token3] = aux_sym_keyword_setting_token3,
  [aux_sym_keyword_setting_token4] = aux_sym_keyword_setting_token4,
  [aux_sym_keyword_setting_token5] = aux_sym_keyword_setting_token5,
  [aux_sym_keyword_setting_token6] = aux_sym_keyword_setting_token6,
  [aux_sym_test_cases_or_tasks_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_test_cases_or_tasks_section_token2] = aux_sym_settings_section_token1,
  [aux_sym_test_case_or_task_setting_token1] = aux_sym_test_case_or_task_setting_token1,
  [aux_sym_test_case_or_task_setting_token2] = aux_sym_test_case_or_task_setting_token2,
  [sym_ellipses] = sym_ellipses,
  [sym_indented_ellipses] = sym_ellipses,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [sym_variable_name] = sym_variable_name,
  [sym_text_chunk] = sym_text_chunk,
  [sym_comment] = sym_comment,
  [sym__separator] = sym__separator,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__line_break] = sym__line_break,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_settings_section] = sym_settings_section,
  [sym_setting_statement] = sym_setting_statement,
  [sym_variables_section] = sym_variables_section,
  [sym_variable_definition] = sym_variable_definition,
  [sym_keywords_section] = sym_keywords_section,
  [sym_keyword_definition] = sym_keyword_definition,
  [sym_keyword_definition_body] = sym_keyword_definition_body,
  [sym_keyword_setting] = sym_keyword_setting,
  [sym_test_cases_or_tasks_section] = sym_test_cases_or_tasks_section,
  [sym_test_case_or_task_definition] = sym_test_case_or_task_definition,
  [sym_test_case_or_task_definition_body] = sym_keyword_definition_body,
  [sym_test_case_or_task_setting] = sym_test_case_or_task_setting,
  [sym_statement] = sym_statement,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_keyword_invocation] = sym_keyword_invocation,
  [sym_arguments] = sym_arguments,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym_scalar_variable] = sym_scalar_variable,
  [sym_list_variable] = sym_list_variable,
  [sym_dictionary_variable] = sym_dictionary_variable,
  [sym__empty_line] = sym__empty_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_settings_section_repeat1] = aux_sym_settings_section_repeat1,
  [aux_sym_variables_section_repeat1] = aux_sym_variables_section_repeat1,
  [aux_sym_keywords_section_repeat1] = aux_sym_keywords_section_repeat1,
  [aux_sym_keyword_definition_body_repeat1] = aux_sym_keyword_definition_body_repeat1,
  [aux_sym_test_cases_or_tasks_section_repeat1] = aux_sym_test_cases_or_tasks_section_repeat1,
  [aux_sym_test_case_or_task_definition_body_repeat1] = aux_sym_test_case_or_task_definition_body_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [alias_sym_keyword] = alias_sym_keyword,
  [alias_sym_name] = alias_sym_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settings_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_settings_section_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_settings_section_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_setting_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_section_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keywords_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keyword_setting_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_cases_or_tasks_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_cases_or_tasks_section_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_case_or_task_setting_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_or_task_setting_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_ellipses] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_ellipses] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_section] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variables_section] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_keywords_section] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_definition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_test_cases_or_tasks_section] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_or_task_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_or_task_definition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_or_task_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_invocation] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_list_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settings_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keywords_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_definition_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_cases_or_tasks_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_or_task_definition_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_name,
  },
  [2] = {
    [0] = alias_sym_keyword,
  },
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
  [18] = 2,
  [19] = 19,
  [20] = 20,
  [21] = 5,
  [22] = 6,
  [23] = 4,
  [24] = 24,
  [25] = 3,
  [26] = 26,
  [27] = 5,
  [28] = 2,
  [29] = 6,
  [30] = 3,
  [31] = 4,
  [32] = 32,
  [33] = 33,
  [34] = 12,
  [35] = 14,
  [36] = 36,
  [37] = 37,
  [38] = 38,
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
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 14,
  [60] = 12,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 16,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
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
  [82] = 16,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
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
  [105] = 104,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 106,
  [110] = 110,
  [111] = 111,
  [112] = 110,
  [113] = 108,
  [114] = 104,
  [115] = 106,
  [116] = 110,
  [117] = 117,
  [118] = 108,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
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
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 141,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 141,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
};

static inline bool sym_text_chunk_character_set_1(int32_t c) {
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '$' || (c < 'C'
      ? (c < '@'
        ? c == '&'
        : c <= '@')
      : (c <= 'C' || c == 'c'))));
}

static inline bool sym_text_chunk_character_set_2(int32_t c) {
  return (c < '@'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '&'
        ? c == '$'
        : c <= '&')))
    : (c <= 'A' || (c < 'a'
      ? (c < 'I'
        ? c == 'E'
        : c <= 'I')
      : (c <= 'a' || (c < 'i'
        ? c == 'e'
        : c <= 'i')))));
}

static inline bool sym_text_chunk_character_set_3(int32_t c) {
  return (c < '&'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == '$'))
    : (c <= '&' || (c < 'a'
      ? (c < 'E'
        ? (c >= '@' && c <= 'A')
        : c <= 'E')
      : (c <= 'a' || c == 'e'))));
}

static inline bool sym_text_chunk_character_set_4(int32_t c) {
  return (c < '&'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == '$'))
    : (c <= '&' || (c < 'a'
      ? (c < 'M'
        ? (c >= '@' && c <= 'A')
        : c <= 'M')
      : (c <= 'a' || c == 'm'))));
}

static inline bool sym_text_chunk_character_set_5(int32_t c) {
  return (c < 'K'
    ? (c < '$'
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '$' || (c < '@'
        ? c == '&'
        : c <= '@')))
    : (c <= 'K' || (c < 'k'
      ? (c < 'V'
        ? (c >= 'S' && c <= 'T')
        : c <= 'V')
      : (c <= 'k' || (c < 'v'
        ? (c >= 's' && c <= 't')
        : c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(251);
      if (lookahead == '\t') ADVANCE(258);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '=') ADVANCE(283);
      if (lookahead == '}') ADVANCE(282);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '}') ADVANCE(282);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '=') ADVANCE(284);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(554);
      if (lookahead == '\n') ADVANCE(568);
      if (lookahead == '\r') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(555);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '\r') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '=') ADVANCE(283);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(555);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '\r') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(559);
      if (lookahead == '#') ADVANCE(242);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(318);
      if (lookahead == ' ') ADVANCE(314);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '\r') ADVANCE(566);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(223);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '{') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '[') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(74);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '[') ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(74);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(302);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(285);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(254);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(278);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(300);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(425);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(426);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(427);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(309);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(311);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(291);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(306);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(297);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(308);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 67:
      if (lookahead == ']') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 71:
      if (lookahead == ']') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == '{') ADVANCE(281);
      END_STATE();
    case 73:
      if (lookahead == '{') ADVANCE(281);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 74:
      if (lookahead == '{') ADVANCE(340);
      END_STATE();
    case 75:
      if (lookahead == '{') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(551);
      END_STATE();
    case 76:
      if (lookahead == '{') ADVANCE(316);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 77:
      if (lookahead == '{') ADVANCE(315);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 78:
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(478);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(468);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 79:
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 80:
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(468);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(444);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 81:
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(440);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(441);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 82:
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 83:
      if (lookahead == '{') ADVANCE(431);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 104:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 105:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 106:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 138:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 139:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 140:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 141:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 148:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 149:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 150:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(190);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 156:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 157:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 158:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 165:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 166:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 167:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 174:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 175:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 176:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 177:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 178:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(263);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(268);
      END_STATE();
    case 193:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      END_STATE();
    case 194:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 195:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 196:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 197:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      END_STATE();
    case 198:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 199:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 200:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 201:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 202:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(17);
      END_STATE();
    case 203:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(18);
      END_STATE();
    case 204:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 205:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(9);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 225:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 226:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 227:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 228:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 229:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 230:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 231:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 232:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 233:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 234:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(165);
      END_STATE();
    case 235:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(161);
      END_STATE();
    case 236:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(162);
      END_STATE();
    case 237:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(163);
      END_STATE();
    case 238:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(234);
      END_STATE();
    case 239:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(261);
      END_STATE();
    case 240:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(514);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 241:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 242:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(551);
      END_STATE();
    case 243:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(340);
      END_STATE();
    case 244:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(431);
      END_STATE();
    case 245:
      if (eof) ADVANCE(251);
      if (lookahead == '\t') ADVANCE(562);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '\r') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(556);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(167);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(103);
      END_STATE();
    case 246:
      if (eof) ADVANCE(251);
      if (lookahead == '\t') ADVANCE(552);
      if (lookahead == '\n') ADVANCE(568);
      if (lookahead == '\r') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(558);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 247:
      if (eof) ADVANCE(251);
      if (lookahead == '\t') ADVANCE(554);
      if (lookahead == '\n') ADVANCE(568);
      if (lookahead == '\r') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(560);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 248:
      if (eof) ADVANCE(251);
      if (lookahead == '\t') ADVANCE(561);
      if (lookahead == '\n') ADVANCE(568);
      if (lookahead == '\r') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(557);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 249:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') ADVANCE(568);
      if (lookahead == '\r') ADVANCE(567);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 250:
      if (eof) ADVANCE(251);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '}') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '{') ADVANCE(340);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(551);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(547);
      if (lookahead == '{') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(545);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(545);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(545);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '{') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(546);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(546);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(546);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead == '{') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '*') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '*') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '*') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '*') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '*') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '*') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '{') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '{') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '{') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(74);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(419);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(419);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(419);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(378);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(419);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(419);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(419);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(419);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(419);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(419);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(419);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'K' &&
          lookahead != 'k') ADVANCE(419);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(419);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(419);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(419);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(419);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(419);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(419);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(419);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(419);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(419);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(419);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(419);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(419);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(419);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(419);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(419);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(419);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(419);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(419);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(419);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(419);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(419);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(419);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(419);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(419);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(419);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(419);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(419);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(419);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(419);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(419);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(419);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(419);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(382);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(419);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(419);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(419);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(419);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(419);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(377);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(419);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(419);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '*') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '*') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '*') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(83);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(480);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(514);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(514);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(514);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(514);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(514);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(514);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(514);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(514);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(514);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(514);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(514);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(514);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(514);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(514);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(514);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(514);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(514);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(514);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(514);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(514);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'K' &&
          lookahead != 'k') ADVANCE(514);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(514);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(514);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(514);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(514);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(514);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(514);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(514);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(514);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(514);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(514);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(514);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(514);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(514);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(514);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(514);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(514);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(514);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(514);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(514);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(514);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(514);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(514);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(514);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(514);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(514);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(514);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(514);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(514);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(514);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(514);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(514);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(514);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(514);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(514);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(514);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(514);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(514);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(514);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(514);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(514);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(514);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(81);
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(419);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(349);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '*') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '*') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '{') ADVANCE(419);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(376);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == ']') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '{') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(376);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(355);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == ']') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == ']') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == ']') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ']') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == ']') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == ']') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == ']') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '*') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '*') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead == '{') ADVANCE(551);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '{') ADVANCE(551);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '{') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(546);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(546);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(551);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(551);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '{') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '{') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(562);
      if (lookahead == '#') ADVANCE(242);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(562);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '{') ADVANCE(340);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '{') ADVANCE(340);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '#') ADVANCE(242);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '{') ADVANCE(340);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '{') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '{') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(564);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(565);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '{') ADVANCE(340);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '{') ADVANCE(340);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 250},
  [2] = {.lex_state = 245},
  [3] = {.lex_state = 245},
  [4] = {.lex_state = 245},
  [5] = {.lex_state = 245},
  [6] = {.lex_state = 245},
  [7] = {.lex_state = 245},
  [8] = {.lex_state = 245},
  [9] = {.lex_state = 245},
  [10] = {.lex_state = 245},
  [11] = {.lex_state = 245},
  [12] = {.lex_state = 245},
  [13] = {.lex_state = 245},
  [14] = {.lex_state = 245},
  [15] = {.lex_state = 245},
  [16] = {.lex_state = 245},
  [17] = {.lex_state = 245},
  [18] = {.lex_state = 246},
  [19] = {.lex_state = 247},
  [20] = {.lex_state = 247},
  [21] = {.lex_state = 246},
  [22] = {.lex_state = 246},
  [23] = {.lex_state = 246},
  [24] = {.lex_state = 247},
  [25] = {.lex_state = 246},
  [26] = {.lex_state = 247},
  [27] = {.lex_state = 248},
  [28] = {.lex_state = 248},
  [29] = {.lex_state = 248},
  [30] = {.lex_state = 248},
  [31] = {.lex_state = 248},
  [32] = {.lex_state = 249},
  [33] = {.lex_state = 245},
  [34] = {.lex_state = 246},
  [35] = {.lex_state = 246},
  [36] = {.lex_state = 245},
  [37] = {.lex_state = 250},
  [38] = {.lex_state = 245},
  [39] = {.lex_state = 249},
  [40] = {.lex_state = 249},
  [41] = {.lex_state = 250},
  [42] = {.lex_state = 249},
  [43] = {.lex_state = 245},
  [44] = {.lex_state = 249},
  [45] = {.lex_state = 250},
  [46] = {.lex_state = 245},
  [47] = {.lex_state = 245},
  [48] = {.lex_state = 245},
  [49] = {.lex_state = 249},
  [50] = {.lex_state = 250},
  [51] = {.lex_state = 249},
  [52] = {.lex_state = 249},
  [53] = {.lex_state = 249},
  [54] = {.lex_state = 249},
  [55] = {.lex_state = 249},
  [56] = {.lex_state = 249},
  [57] = {.lex_state = 249},
  [58] = {.lex_state = 249},
  [59] = {.lex_state = 248},
  [60] = {.lex_state = 248},
  [61] = {.lex_state = 247},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 247},
  [64] = {.lex_state = 247},
  [65] = {.lex_state = 247},
  [66] = {.lex_state = 247},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 247},
  [69] = {.lex_state = 247},
  [70] = {.lex_state = 247},
  [71] = {.lex_state = 247},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 249},
  [74] = {.lex_state = 245},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 245},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 249},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 249},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 250},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 25},
  [141] = {.lex_state = 245},
  [142] = {.lex_state = 250},
  [143] = {.lex_state = 245},
  [144] = {.lex_state = 245},
  [145] = {.lex_state = 21},
  [146] = {.lex_state = 21},
  [147] = {.lex_state = 250},
  [148] = {.lex_state = 245},
  [149] = {.lex_state = 245},
  [150] = {.lex_state = 25},
  [151] = {.lex_state = 25},
  [152] = {.lex_state = 245},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 21},
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 250},
  [158] = {.lex_state = 250},
  [159] = {.lex_state = 25},
  [160] = {.lex_state = 245},
  [161] = {.lex_state = 250},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 250},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 245},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 250},
  [169] = {.lex_state = 250},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_settings_section_token2] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(153),
    [sym_section] = STATE(41),
    [sym_settings_section] = STATE(92),
    [sym_variables_section] = STATE(92),
    [sym_keywords_section] = STATE(92),
    [sym_test_cases_or_tasks_section] = STATE(92),
    [aux_sym_source_file_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [aux_sym_settings_section_token1] = ACTIONS(9),
    [aux_sym_variables_section_token1] = ACTIONS(11),
    [aux_sym_keywords_section_token1] = ACTIONS(13),
    [aux_sym_test_cases_or_tasks_section_token1] = ACTIONS(15),
    [aux_sym_test_cases_or_tasks_section_token2] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(19), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(17), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [42] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__whitespace_token1,
    ACTIONS(19), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(4), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [84] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(19), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(19), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(2), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym__whitespace_token1,
    ACTIONS(33), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(31), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(44), 1,
      sym__line_break,
    STATE(9), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(40), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [252] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(48), 1,
      sym__line_break,
    STATE(13), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(40), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [294] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(48), 1,
      sym__line_break,
    STATE(13), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(40), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(52), 1,
      sym__line_break,
    STATE(15), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(40), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [378] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(56), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(40), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      aux_sym__whitespace_token1,
    ACTIONS(58), 27,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym__whitespace_token1,
    ACTIONS(70), 1,
      sym__line_break,
    STATE(13), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(64), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym__whitespace_token1,
    ACTIONS(73), 27,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [534] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(48), 1,
      sym__line_break,
    STATE(13), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(40), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym__whitespace_token1,
    ACTIONS(79), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym__whitespace_token1,
    ACTIONS(83), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [643] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym_ellipses,
    ACTIONS(89), 1,
      sym_indented_ellipses,
    ACTIONS(91), 1,
      sym_comment,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(21), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [671] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      sym__separator,
    ACTIONS(100), 1,
      aux_sym__whitespace_token1,
    ACTIONS(103), 1,
      sym__line_break,
    STATE(19), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(95), 6,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [701] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      sym__separator,
    ACTIONS(113), 1,
      aux_sym__whitespace_token1,
    ACTIONS(116), 1,
      sym__line_break,
    STATE(20), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(108), 6,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [731] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym_ellipses,
    ACTIONS(89), 1,
      sym_indented_ellipses,
    ACTIONS(91), 1,
      sym_comment,
    STATE(18), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [759] = 6,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym_ellipses,
    ACTIONS(122), 1,
      sym_indented_ellipses,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [787] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym_ellipses,
    ACTIONS(89), 1,
      sym_indented_ellipses,
    ACTIONS(91), 1,
      sym_comment,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [815] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      sym__separator,
    ACTIONS(131), 1,
      aux_sym__whitespace_token1,
    ACTIONS(133), 1,
      sym__line_break,
    STATE(20), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(127), 6,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [845] = 6,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym_ellipses,
    ACTIONS(89), 1,
      sym_indented_ellipses,
    ACTIONS(91), 1,
      sym_comment,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [873] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym__whitespace_token1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym__separator,
    ACTIONS(141), 1,
      sym__line_break,
    STATE(19), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(137), 6,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [903] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_ellipses,
    ACTIONS(145), 1,
      sym_indented_ellipses,
    STATE(28), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [930] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_ellipses,
    ACTIONS(145), 1,
      sym_indented_ellipses,
    STATE(29), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(21), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [957] = 6,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_ellipses,
    ACTIONS(150), 1,
      sym_indented_ellipses,
    STATE(29), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [984] = 6,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_ellipses,
    ACTIONS(145), 1,
      sym_indented_ellipses,
    STATE(31), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1011] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_ellipses,
    ACTIONS(145), 1,
      sym_indented_ellipses,
    STATE(29), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1038] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym_text_chunk,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 1,
      sym__line_break,
    STATE(57), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(155), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1066] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(167), 1,
      sym__line_break,
    STATE(48), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1092] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(60), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1112] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(75), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(167), 1,
      sym__line_break,
    STATE(48), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(169), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1158] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 1,
      aux_sym_settings_section_token1,
    ACTIONS(176), 1,
      aux_sym_variables_section_token1,
    ACTIONS(179), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(182), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(37), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(92), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(167), 1,
      sym__line_break,
    STATE(48), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1214] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_text_chunk,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym__line_break,
    STATE(51), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(189), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1242] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      sym_text_chunk,
    ACTIONS(199), 1,
      sym__line_break,
    STATE(42), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(195), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1270] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(37), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(92), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1300] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(197), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      sym__line_break,
    STATE(56), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(205), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(209), 1,
      sym__line_break,
    STATE(33), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1354] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_text_chunk,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(191), 1,
      sym__line_break,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(51), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(213), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1382] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(37), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(92), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1412] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(219), 1,
      sym__line_break,
    STATE(38), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(217), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1464] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(230), 1,
      aux_sym__whitespace_token1,
    ACTIONS(233), 1,
      sym__line_break,
    STATE(48), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(225), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1490] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(197), 1,
      sym_text_chunk,
    ACTIONS(207), 1,
      sym__line_break,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    STATE(56), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(238), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1518] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(45), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(92), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1548] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      sym_text_chunk,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    STATE(51), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(242), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1576] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_text_chunk,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      sym__line_break,
    STATE(39), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(255), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1604] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(197), 1,
      sym_text_chunk,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 1,
      sym__line_break,
    STATE(54), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(261), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1632] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(197), 1,
      sym_text_chunk,
    ACTIONS(207), 1,
      sym__line_break,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(56), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(267), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1660] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(197), 1,
      sym_text_chunk,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      sym__line_break,
    STATE(49), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(267), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1688] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      sym_text_chunk,
    ACTIONS(278), 1,
      aux_sym__whitespace_token1,
    ACTIONS(281), 1,
      sym__line_break,
    STATE(56), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(273), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1716] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_text_chunk,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(191), 1,
      sym__line_break,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    STATE(51), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(286), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1744] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_text_chunk,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      sym__line_break,
    STATE(44), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(286), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1772] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(75), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1791] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(60), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1810] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1828] = 5,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(298), 1,
      sym_text_chunk,
    STATE(63), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
    ACTIONS(296), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_or_task_setting_token1,
      aux_sym_test_case_or_task_setting_token2,
  [1850] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1868] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1886] = 3,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(81), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1904] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1922] = 5,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(298), 1,
      sym_text_chunk,
    STATE(63), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
    ACTIONS(312), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [1944] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1962] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1980] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1998] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2016] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(336), 1,
      sym_text_chunk,
    STATE(73), 1,
      sym_arguments,
    STATE(115), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2043] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym__whitespace_token1,
    ACTIONS(342), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2077] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(336), 1,
      sym_text_chunk,
    STATE(68), 1,
      sym_arguments,
    STATE(109), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2104] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(336), 1,
      sym_text_chunk,
    STATE(64), 1,
      sym_arguments,
    STATE(109), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2131] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(336), 1,
      sym_text_chunk,
    STATE(70), 1,
      sym_arguments,
    STATE(109), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2158] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(336), 1,
      sym_text_chunk,
    STATE(61), 1,
      sym_arguments,
    STATE(109), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2185] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(336), 1,
      sym_text_chunk,
    STATE(71), 1,
      sym_arguments,
    STATE(109), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym__whitespace_token1,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2229] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(336), 1,
      sym_text_chunk,
    STATE(80), 1,
      sym_arguments,
    STATE(106), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2256] = 3,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(81), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2273] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(336), 1,
      sym_text_chunk,
    STATE(74), 1,
      sym_arguments,
    STATE(106), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2300] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(336), 1,
      sym_text_chunk,
    STATE(17), 1,
      sym_arguments,
    STATE(106), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2327] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2344] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym__whitespace_token1,
    ACTIONS(139), 1,
      sym__separator,
    ACTIONS(354), 1,
      sym__line_break,
    STATE(73), 1,
      sym_test_case_or_task_definition_body,
    STATE(26), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [2366] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(336), 1,
      sym_text_chunk,
    STATE(138), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2390] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym__separator,
    ACTIONS(131), 1,
      aux_sym__whitespace_token1,
    ACTIONS(356), 1,
      sym__line_break,
    STATE(85), 1,
      sym_keyword_definition_body,
    STATE(24), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2412] = 6,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(358), 1,
      anon_sym_,
    ACTIONS(360), 1,
      sym_text_chunk,
    ACTIONS(362), 2,
      sym__separator,
      sym__line_break,
    STATE(90), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2433] = 6,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(358), 1,
      anon_sym_,
    ACTIONS(364), 1,
      sym_text_chunk,
    ACTIONS(366), 2,
      sym__separator,
      sym__line_break,
    STATE(91), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2454] = 6,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(371), 1,
      anon_sym_,
    ACTIONS(374), 1,
      sym_text_chunk,
    ACTIONS(377), 2,
      sym__separator,
      sym__line_break,
    STATE(91), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2487] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(383), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2500] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(377), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2513] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(389), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2526] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(393), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2539] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(397), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2552] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(401), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2565] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(405), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2578] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(409), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2591] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(413), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2604] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(417), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym__separator,
    ACTIONS(423), 1,
      sym__line_break,
    ACTIONS(419), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(427), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(429), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(431), 1,
      sym__line_break,
    STATE(104), 1,
      aux_sym_arguments_repeat1,
  [2670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym__separator,
    ACTIONS(433), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(437), 1,
      sym__line_break,
    STATE(116), 1,
      aux_sym_arguments_repeat1,
  [2694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(439), 1,
      sym__line_break,
    STATE(105), 1,
      aux_sym_arguments_repeat1,
  [2707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(441), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__separator,
    ACTIONS(446), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(448), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(450), 1,
      sym__line_break,
    STATE(112), 1,
      aux_sym_arguments_repeat1,
  [2759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(452), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(454), 1,
      sym__line_break,
    STATE(114), 1,
      aux_sym_arguments_repeat1,
  [2785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(456), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2798] = 4,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(458), 1,
      sym_text_chunk,
    STATE(94), 1,
      sym_scalar_variable,
  [2811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(460), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
  [2824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    ACTIONS(464), 1,
      anon_sym_,
  [2834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym_settings_section_token3,
    ACTIONS(468), 1,
      sym__line_break,
  [2844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym__separator,
    ACTIONS(472), 1,
      sym__line_break,
  [2854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__separator,
    ACTIONS(476), 1,
      sym__line_break,
  [2864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      aux_sym_settings_section_token3,
    ACTIONS(480), 1,
      sym__line_break,
  [2874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_settings_section_token3,
    ACTIONS(484), 1,
      sym__line_break,
  [2884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym__separator,
    ACTIONS(488), 1,
      sym__line_break,
  [2894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(492), 1,
      anon_sym_,
  [2904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__separator,
    ACTIONS(496), 1,
      sym__line_break,
  [2914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_settings_section_token3,
    ACTIONS(500), 1,
      sym__line_break,
  [2924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(504), 1,
      anon_sym_,
  [2934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(508), 1,
      anon_sym_,
  [2944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym__separator,
    ACTIONS(512), 1,
      sym__line_break,
  [2954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    ACTIONS(516), 1,
      anon_sym_,
  [2964] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_,
    ACTIONS(520), 1,
      sym_variable_name,
  [2974] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_,
    ACTIONS(524), 1,
      sym_variable_name,
  [2984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(528), 1,
      anon_sym_,
  [2994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym__separator,
    ACTIONS(532), 1,
      sym__line_break,
  [3004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym__separator,
    ACTIONS(536), 1,
      sym__line_break,
  [3014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym__line_break,
    ACTIONS(538), 1,
      sym__separator,
  [3024] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_,
    ACTIONS(542), 1,
      sym_variable_name,
  [3034] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_variable_name,
  [3041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym__line_break,
  [3048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym__line_break,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym__line_break,
  [3069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      aux_sym_settings_section_token2,
  [3076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      aux_sym_settings_section_token2,
  [3083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym__line_break,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym__line_break,
  [3104] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_variable_name,
  [3111] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_variable_name,
  [3118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym__line_break,
  [3125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      aux_sym_settings_section_token2,
  [3139] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_variable_name,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      aux_sym_settings_section_token2,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
  [3167] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_variable_name,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__line_break,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [3202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym__separator,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym__line_break,
  [3216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__separator,
  [3223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym__separator,
  [3230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 294,
  [SMALL_STATE(10)] = 336,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 498,
  [SMALL_STATE(15)] = 534,
  [SMALL_STATE(16)] = 576,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 671,
  [SMALL_STATE(20)] = 701,
  [SMALL_STATE(21)] = 731,
  [SMALL_STATE(22)] = 759,
  [SMALL_STATE(23)] = 787,
  [SMALL_STATE(24)] = 815,
  [SMALL_STATE(25)] = 845,
  [SMALL_STATE(26)] = 873,
  [SMALL_STATE(27)] = 903,
  [SMALL_STATE(28)] = 930,
  [SMALL_STATE(29)] = 957,
  [SMALL_STATE(30)] = 984,
  [SMALL_STATE(31)] = 1011,
  [SMALL_STATE(32)] = 1038,
  [SMALL_STATE(33)] = 1066,
  [SMALL_STATE(34)] = 1092,
  [SMALL_STATE(35)] = 1112,
  [SMALL_STATE(36)] = 1132,
  [SMALL_STATE(37)] = 1158,
  [SMALL_STATE(38)] = 1188,
  [SMALL_STATE(39)] = 1214,
  [SMALL_STATE(40)] = 1242,
  [SMALL_STATE(41)] = 1270,
  [SMALL_STATE(42)] = 1300,
  [SMALL_STATE(43)] = 1328,
  [SMALL_STATE(44)] = 1354,
  [SMALL_STATE(45)] = 1382,
  [SMALL_STATE(46)] = 1412,
  [SMALL_STATE(47)] = 1438,
  [SMALL_STATE(48)] = 1464,
  [SMALL_STATE(49)] = 1490,
  [SMALL_STATE(50)] = 1518,
  [SMALL_STATE(51)] = 1548,
  [SMALL_STATE(52)] = 1576,
  [SMALL_STATE(53)] = 1604,
  [SMALL_STATE(54)] = 1632,
  [SMALL_STATE(55)] = 1660,
  [SMALL_STATE(56)] = 1688,
  [SMALL_STATE(57)] = 1716,
  [SMALL_STATE(58)] = 1744,
  [SMALL_STATE(59)] = 1772,
  [SMALL_STATE(60)] = 1791,
  [SMALL_STATE(61)] = 1810,
  [SMALL_STATE(62)] = 1828,
  [SMALL_STATE(63)] = 1850,
  [SMALL_STATE(64)] = 1868,
  [SMALL_STATE(65)] = 1886,
  [SMALL_STATE(66)] = 1904,
  [SMALL_STATE(67)] = 1922,
  [SMALL_STATE(68)] = 1944,
  [SMALL_STATE(69)] = 1962,
  [SMALL_STATE(70)] = 1980,
  [SMALL_STATE(71)] = 1998,
  [SMALL_STATE(72)] = 2016,
  [SMALL_STATE(73)] = 2043,
  [SMALL_STATE(74)] = 2060,
  [SMALL_STATE(75)] = 2077,
  [SMALL_STATE(76)] = 2104,
  [SMALL_STATE(77)] = 2131,
  [SMALL_STATE(78)] = 2158,
  [SMALL_STATE(79)] = 2185,
  [SMALL_STATE(80)] = 2212,
  [SMALL_STATE(81)] = 2229,
  [SMALL_STATE(82)] = 2256,
  [SMALL_STATE(83)] = 2273,
  [SMALL_STATE(84)] = 2300,
  [SMALL_STATE(85)] = 2327,
  [SMALL_STATE(86)] = 2344,
  [SMALL_STATE(87)] = 2366,
  [SMALL_STATE(88)] = 2390,
  [SMALL_STATE(89)] = 2412,
  [SMALL_STATE(90)] = 2433,
  [SMALL_STATE(91)] = 2454,
  [SMALL_STATE(92)] = 2475,
  [SMALL_STATE(93)] = 2487,
  [SMALL_STATE(94)] = 2500,
  [SMALL_STATE(95)] = 2513,
  [SMALL_STATE(96)] = 2526,
  [SMALL_STATE(97)] = 2539,
  [SMALL_STATE(98)] = 2552,
  [SMALL_STATE(99)] = 2565,
  [SMALL_STATE(100)] = 2578,
  [SMALL_STATE(101)] = 2591,
  [SMALL_STATE(102)] = 2604,
  [SMALL_STATE(103)] = 2617,
  [SMALL_STATE(104)] = 2631,
  [SMALL_STATE(105)] = 2644,
  [SMALL_STATE(106)] = 2657,
  [SMALL_STATE(107)] = 2670,
  [SMALL_STATE(108)] = 2681,
  [SMALL_STATE(109)] = 2694,
  [SMALL_STATE(110)] = 2707,
  [SMALL_STATE(111)] = 2720,
  [SMALL_STATE(112)] = 2733,
  [SMALL_STATE(113)] = 2746,
  [SMALL_STATE(114)] = 2759,
  [SMALL_STATE(115)] = 2772,
  [SMALL_STATE(116)] = 2785,
  [SMALL_STATE(117)] = 2798,
  [SMALL_STATE(118)] = 2811,
  [SMALL_STATE(119)] = 2824,
  [SMALL_STATE(120)] = 2834,
  [SMALL_STATE(121)] = 2844,
  [SMALL_STATE(122)] = 2854,
  [SMALL_STATE(123)] = 2864,
  [SMALL_STATE(124)] = 2874,
  [SMALL_STATE(125)] = 2884,
  [SMALL_STATE(126)] = 2894,
  [SMALL_STATE(127)] = 2904,
  [SMALL_STATE(128)] = 2914,
  [SMALL_STATE(129)] = 2924,
  [SMALL_STATE(130)] = 2934,
  [SMALL_STATE(131)] = 2944,
  [SMALL_STATE(132)] = 2954,
  [SMALL_STATE(133)] = 2964,
  [SMALL_STATE(134)] = 2974,
  [SMALL_STATE(135)] = 2984,
  [SMALL_STATE(136)] = 2994,
  [SMALL_STATE(137)] = 3004,
  [SMALL_STATE(138)] = 3014,
  [SMALL_STATE(139)] = 3024,
  [SMALL_STATE(140)] = 3034,
  [SMALL_STATE(141)] = 3041,
  [SMALL_STATE(142)] = 3048,
  [SMALL_STATE(143)] = 3055,
  [SMALL_STATE(144)] = 3062,
  [SMALL_STATE(145)] = 3069,
  [SMALL_STATE(146)] = 3076,
  [SMALL_STATE(147)] = 3083,
  [SMALL_STATE(148)] = 3090,
  [SMALL_STATE(149)] = 3097,
  [SMALL_STATE(150)] = 3104,
  [SMALL_STATE(151)] = 3111,
  [SMALL_STATE(152)] = 3118,
  [SMALL_STATE(153)] = 3125,
  [SMALL_STATE(154)] = 3132,
  [SMALL_STATE(155)] = 3139,
  [SMALL_STATE(156)] = 3146,
  [SMALL_STATE(157)] = 3153,
  [SMALL_STATE(158)] = 3160,
  [SMALL_STATE(159)] = 3167,
  [SMALL_STATE(160)] = 3174,
  [SMALL_STATE(161)] = 3181,
  [SMALL_STATE(162)] = 3188,
  [SMALL_STATE(163)] = 3195,
  [SMALL_STATE(164)] = 3202,
  [SMALL_STATE(165)] = 3209,
  [SMALL_STATE(166)] = 3216,
  [SMALL_STATE(167)] = 3223,
  [SMALL_STATE(168)] = 3230,
  [SMALL_STATE(169)] = 3237,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(108),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(167),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(141),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(62),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(165),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(67),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(165),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(20),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(118),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(118),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(113),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(113),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 6),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(159),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(141),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(48),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(152),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(160),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(51),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(131),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(160),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(56),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 5),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_setting, 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_setting, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 3, .production_id = 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 3, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(133),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(117),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(91),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(87),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [568] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_robot(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
