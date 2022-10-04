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
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 2
#define TOKEN_COUNT 50
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
  aux_sym_variable_definition_token1 = 23,
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
  anon_sym_DOLLAR_LBRACE = 38,
  sym_ellipses = 39,
  sym_indented_ellipses = 40,
  anon_sym_ = 41,
  sym_text_chunk = 42,
  sym_variable_name = 43,
  anon_sym_AT_LBRACE = 44,
  anon_sym_AMP_LBRACE = 45,
  sym_comment = 46,
  sym__separator = 47,
  sym__whitespace = 48,
  sym__line_break = 49,
  sym_source_file = 50,
  sym_section = 51,
  sym_settings_section = 52,
  sym_setting_statement = 53,
  sym_variables_section = 54,
  sym_variable_definition = 55,
  sym_keywords_section = 56,
  sym_keyword_definition = 57,
  sym_keyword_definition_body = 58,
  sym_keyword_setting = 59,
  sym_test_cases_or_tasks_section = 60,
  sym_test_case_or_task_definition = 61,
  sym_test_case_or_task_definition_body = 62,
  sym_test_case_or_task_setting = 63,
  sym_statement = 64,
  sym_variable_assignment = 65,
  sym_keyword_invocation = 66,
  sym_arguments = 67,
  sym_continuation = 68,
  sym_argument = 69,
  sym_list_variable = 70,
  sym_scalar_variable = 71,
  sym_dictionary_variable = 72,
  sym__empty_line = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym_settings_section_repeat1 = 75,
  aux_sym_variables_section_repeat1 = 76,
  aux_sym_keywords_section_repeat1 = 77,
  aux_sym_keyword_definition_body_repeat1 = 78,
  aux_sym_test_cases_or_tasks_section_repeat1 = 79,
  aux_sym_test_case_or_task_definition_body_repeat1 = 80,
  aux_sym_arguments_repeat1 = 81,
  aux_sym_arguments_repeat2 = 82,
  aux_sym_argument_repeat1 = 83,
  alias_sym_keyword = 84,
  alias_sym_name = 85,
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
  [aux_sym_variable_definition_token1] = "variable_definition_token1",
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
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym_ellipses] = "ellipses",
  [sym_indented_ellipses] = "ellipses",
  [anon_sym_] = " ",
  [sym_text_chunk] = "text_chunk",
  [sym_variable_name] = "variable_name",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AMP_LBRACE] = "&{",
  [sym_comment] = "comment",
  [sym__separator] = "_separator",
  [sym__whitespace] = "_whitespace",
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
  [sym_list_variable] = "list_variable",
  [sym_scalar_variable] = "scalar_variable",
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
  [aux_sym_variable_definition_token1] = aux_sym_variable_definition_token1,
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
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym_ellipses] = sym_ellipses,
  [sym_indented_ellipses] = sym_ellipses,
  [anon_sym_] = anon_sym_,
  [sym_text_chunk] = sym_text_chunk,
  [sym_variable_name] = sym_variable_name,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [sym_comment] = sym_comment,
  [sym__separator] = sym__separator,
  [sym__whitespace] = sym__whitespace,
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
  [sym_list_variable] = sym_list_variable,
  [sym_scalar_variable] = sym_scalar_variable,
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
  [aux_sym_variable_definition_token1] = {
    .visible = false,
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
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
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
  [sym_text_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
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
  [sym_list_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_variable] = {
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
  [82] = 82,
  [83] = 16,
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
  [106] = 104,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 108,
  [113] = 113,
  [114] = 109,
  [115] = 109,
  [116] = 110,
  [117] = 110,
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
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 160,
  [165] = 160,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
};

static inline bool sym_text_chunk_character_set_1(int32_t c) {
  return (c < 'D'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '&'
        ? c == '$'
        : (c <= '&' || (c >= '@' && c <= 'A')))))
    : (c <= 'D' || (c < 'd'
      ? (c < 'T'
        ? c == 'R'
        : (c <= 'T' || c == 'a'))
      : (c <= 'd' || (c < 't'
        ? c == 'r'
        : c <= 't')))));
}

static inline bool sym_text_chunk_character_set_2(int32_t c) {
  return (c < '@'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '&'
        ? c == '$'
        : c <= '&')))
    : (c <= '@' || (c < 'k'
      ? (c < 'S'
        ? c == 'K'
        : (c <= 'T' || c == 'V'))
      : (c <= 'k' || (c < 'v'
        ? (c >= 's' && c <= 't')
        : c <= 'v')))));
}

static inline bool sym_text_chunk_character_set_3(int32_t c) {
  return (c < '&'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '$'
        ? c == ' '
        : c <= '$')))
    : (c <= '&' || (c < 'S'
      ? (c < 'D'
        ? c == '@'
        : c <= 'D')
      : (c <= 'T' || (c < 's'
        ? c == 'd'
        : c <= 't')))));
}

static inline bool sym_text_chunk_character_set_4(int32_t c) {
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

static inline bool sym_text_chunk_character_set_5(int32_t c) {
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

static inline bool sym_text_chunk_character_set_6(int32_t c) {
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

static inline bool sym_text_chunk_character_set_7(int32_t c) {
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

static inline bool sym_text_chunk_character_set_8(int32_t c) {
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
      if (eof) ADVANCE(229);
      if (lookahead == '\t') ADVANCE(235);
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '}') ADVANCE(258);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '=') ADVANCE(260);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '&') ADVANCE(310);
      if (lookahead == '@') ADVANCE(311);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '=') ADVANCE(259);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '#') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(425);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(437);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(92);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(174);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(192);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '*') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '*') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(323);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(323);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(425);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(277);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(261);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(232);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(255);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(275);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(25);
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
      if (lookahead == '*') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(284);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(286);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 52:
      if (lookahead == ']') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 58:
      if (lookahead == '{') ADVANCE(257);
      END_STATE();
    case 59:
      if (lookahead == '{') ADVANCE(323);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(130);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 114:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 115:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 116:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 117:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(92);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 125:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(9);
      END_STATE();
    case 126:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(166);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 132:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 133:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 134:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 141:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 142:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 143:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 144:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 145:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 146:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 147:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 148:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 149:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 150:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 151:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 152:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(243);
      END_STATE();
    case 153:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 154:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 155:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 156:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 157:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 158:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 163:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 164:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 165:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 166:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(11);
      END_STATE();
    case 167:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      END_STATE();
    case 168:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      END_STATE();
    case 169:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      END_STATE();
    case 170:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 171:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 172:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 173:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 174:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 175:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 176:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 177:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(14);
      END_STATE();
    case 178:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(16);
      END_STATE();
    case 179:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(17);
      END_STATE();
    case 180:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(18);
      END_STATE();
    case 181:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 182:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 183:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 184:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 185:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 187:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 188:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 189:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 190:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 191:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 192:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 195:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 196:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 197:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 198:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 199:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 200:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 201:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 202:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 203:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 204:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 205:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 206:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 207:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 208:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 209:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 210:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 211:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(137);
      END_STATE();
    case 212:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      END_STATE();
    case 213:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 214:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(210);
      END_STATE();
    case 215:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 216:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(323);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 217:
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(323);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(317);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(318);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(313);
      END_STATE();
    case 218:
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(323);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 219:
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(323);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 221:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 222:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(323);
      END_STATE();
    case 223:
      if (eof) ADVANCE(229);
      if (lookahead == '\t') ADVANCE(434);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '@') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 224:
      if (eof) ADVANCE(229);
      if (lookahead == '\t') ADVANCE(434);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 225:
      if (eof) ADVANCE(229);
      if (lookahead == '\t') ADVANCE(429);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 226:
      if (eof) ADVANCE(229);
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(433);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 227:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(437);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 228:
      if (eof) ADVANCE(229);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(323);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '#') ADVANCE(221);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(425);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(292);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (!sym_text_chunk_character_set_6(lookahead)) ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (!sym_text_chunk_character_set_7(lookahead)) ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(405);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(405);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(405);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(405);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(377);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(405);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(405);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(405);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(378);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'K' &&
          lookahead != 'k') ADVANCE(405);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(374);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(405);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(335);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(405);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(334);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(405);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(405);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(405);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(405);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(405);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(355);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(405);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(217);
      if (!sym_text_chunk_character_set_8(lookahead)) ADVANCE(405);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(332);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(218);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(360);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == ']') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(360);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == ']') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == ']') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == ']') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == ']') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '*') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '*') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(428);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      if (lookahead == '{') ADVANCE(323);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      if (lookahead == '{') ADVANCE(323);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '#') ADVANCE(221);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead == '#') ADVANCE(221);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '#') ADVANCE(221);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(436);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 228},
  [2] = {.lex_state = 223},
  [3] = {.lex_state = 223},
  [4] = {.lex_state = 223},
  [5] = {.lex_state = 223},
  [6] = {.lex_state = 223},
  [7] = {.lex_state = 223},
  [8] = {.lex_state = 223},
  [9] = {.lex_state = 223},
  [10] = {.lex_state = 223},
  [11] = {.lex_state = 223},
  [12] = {.lex_state = 223},
  [13] = {.lex_state = 223},
  [14] = {.lex_state = 223},
  [15] = {.lex_state = 223},
  [16] = {.lex_state = 223},
  [17] = {.lex_state = 223},
  [18] = {.lex_state = 225},
  [19] = {.lex_state = 226},
  [20] = {.lex_state = 226},
  [21] = {.lex_state = 225},
  [22] = {.lex_state = 225},
  [23] = {.lex_state = 225},
  [24] = {.lex_state = 226},
  [25] = {.lex_state = 225},
  [26] = {.lex_state = 226},
  [27] = {.lex_state = 224},
  [28] = {.lex_state = 224},
  [29] = {.lex_state = 224},
  [30] = {.lex_state = 224},
  [31] = {.lex_state = 224},
  [32] = {.lex_state = 227},
  [33] = {.lex_state = 223},
  [34] = {.lex_state = 225},
  [35] = {.lex_state = 225},
  [36] = {.lex_state = 223},
  [37] = {.lex_state = 228},
  [38] = {.lex_state = 223},
  [39] = {.lex_state = 227},
  [40] = {.lex_state = 227},
  [41] = {.lex_state = 228},
  [42] = {.lex_state = 227},
  [43] = {.lex_state = 223},
  [44] = {.lex_state = 227},
  [45] = {.lex_state = 228},
  [46] = {.lex_state = 223},
  [47] = {.lex_state = 223},
  [48] = {.lex_state = 223},
  [49] = {.lex_state = 227},
  [50] = {.lex_state = 228},
  [51] = {.lex_state = 227},
  [52] = {.lex_state = 227},
  [53] = {.lex_state = 227},
  [54] = {.lex_state = 227},
  [55] = {.lex_state = 227},
  [56] = {.lex_state = 227},
  [57] = {.lex_state = 227},
  [58] = {.lex_state = 227},
  [59] = {.lex_state = 224},
  [60] = {.lex_state = 224},
  [61] = {.lex_state = 226},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 226},
  [64] = {.lex_state = 226},
  [65] = {.lex_state = 226},
  [66] = {.lex_state = 226},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 226},
  [69] = {.lex_state = 226},
  [70] = {.lex_state = 226},
  [71] = {.lex_state = 226},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 227},
  [74] = {.lex_state = 223},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 227},
  [81] = {.lex_state = 223},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 227},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 226},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 226},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 228},
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
  [104] = {.lex_state = 226},
  [105] = {.lex_state = 226},
  [106] = {.lex_state = 226},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 226},
  [109] = {.lex_state = 226},
  [110] = {.lex_state = 226},
  [111] = {.lex_state = 226},
  [112] = {.lex_state = 226},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 226},
  [115] = {.lex_state = 226},
  [116] = {.lex_state = 226},
  [117] = {.lex_state = 226},
  [118] = {.lex_state = 226},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 226},
  [127] = {.lex_state = 226},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 226},
  [131] = {.lex_state = 226},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 226},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 226},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 226},
  [139] = {.lex_state = 226},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 226},
  [142] = {.lex_state = 226},
  [143] = {.lex_state = 223},
  [144] = {.lex_state = 223},
  [145] = {.lex_state = 21},
  [146] = {.lex_state = 21},
  [147] = {.lex_state = 228},
  [148] = {.lex_state = 223},
  [149] = {.lex_state = 223},
  [150] = {.lex_state = 226},
  [151] = {.lex_state = 226},
  [152] = {.lex_state = 223},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 228},
  [159] = {.lex_state = 23},
  [160] = {.lex_state = 223},
  [161] = {.lex_state = 228},
  [162] = {.lex_state = 228},
  [163] = {.lex_state = 228},
  [164] = {.lex_state = 223},
  [165] = {.lex_state = 223},
  [166] = {.lex_state = 228},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 228},
  [169] = {.lex_state = 228},
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
      sym__whitespace,
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
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [42] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__whitespace,
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
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [84] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym__whitespace,
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
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym__whitespace,
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
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym__whitespace,
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
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
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
      sym__whitespace,
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
      sym__whitespace,
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
      sym__whitespace,
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
      sym__whitespace,
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
      sym__whitespace,
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
      aux_sym_variable_definition_token1,
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
      sym__whitespace,
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
      sym__whitespace,
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
      aux_sym_variable_definition_token1,
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
      sym__whitespace,
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
      sym__whitespace,
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
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym__whitespace,
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
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_ellipses,
    ACTIONS(89), 1,
      sym_indented_ellipses,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(21), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [671] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym__separator,
    ACTIONS(98), 1,
      sym__whitespace,
    ACTIONS(101), 1,
      sym__line_break,
    STATE(19), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(93), 6,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [701] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(111), 1,
      sym__whitespace,
    ACTIONS(114), 1,
      sym__line_break,
    STATE(20), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(106), 6,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [731] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_ellipses,
    ACTIONS(89), 1,
      sym_indented_ellipses,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(18), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_ellipses,
    ACTIONS(120), 1,
      sym_indented_ellipses,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [787] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_ellipses,
    ACTIONS(89), 1,
      sym_indented_ellipses,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [815] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      sym__separator,
    ACTIONS(129), 1,
      sym__whitespace,
    ACTIONS(131), 1,
      sym__line_break,
    STATE(20), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(125), 6,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [845] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_ellipses,
    ACTIONS(89), 1,
      sym_indented_ellipses,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [873] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym__whitespace,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      sym__separator,
    ACTIONS(139), 1,
      sym__line_break,
    STATE(19), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(135), 6,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [903] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_ellipses,
    ACTIONS(143), 1,
      sym_indented_ellipses,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(28), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [930] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_ellipses,
    ACTIONS(143), 1,
      sym_indented_ellipses,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(29), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(21), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [957] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_ellipses,
    ACTIONS(148), 1,
      sym_indented_ellipses,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(29), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [984] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_ellipses,
    ACTIONS(143), 1,
      sym_indented_ellipses,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(31), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [1011] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_ellipses,
    ACTIONS(143), 1,
      sym_indented_ellipses,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(29), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [1038] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      sym_text_chunk,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym__line_break,
    STATE(57), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(153), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1066] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(163), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(165), 1,
      sym__line_break,
    STATE(48), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(60), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(75), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(163), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(165), 1,
      sym__line_break,
    STATE(48), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(167), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1158] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      aux_sym_settings_section_token1,
    ACTIONS(174), 1,
      aux_sym_variables_section_token1,
    ACTIONS(177), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(180), 2,
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
      sym__whitespace,
    ACTIONS(163), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(165), 1,
      sym__line_break,
    STATE(48), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(183), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1214] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_text_chunk,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      sym__line_break,
    STATE(51), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(187), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1242] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym_text_chunk,
    ACTIONS(197), 1,
      sym__line_break,
    STATE(42), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(193), 5,
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
    ACTIONS(199), 1,
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
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym_text_chunk,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym__line_break,
    STATE(56), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(203), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(163), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(207), 1,
      sym__line_break,
    STATE(33), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(183), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1354] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_text_chunk,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      sym__line_break,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(51), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(211), 5,
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
    ACTIONS(213), 1,
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
      sym__whitespace,
    ACTIONS(163), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(217), 1,
      sym__line_break,
    STATE(38), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(215), 6,
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
      sym__whitespace,
    ACTIONS(163), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(221), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(219), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1464] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(228), 1,
      sym__whitespace,
    ACTIONS(231), 1,
      sym__line_break,
    STATE(48), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(223), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1490] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym_text_chunk,
    ACTIONS(205), 1,
      sym__line_break,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(56), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(236), 5,
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
    ACTIONS(199), 1,
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
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      sym_text_chunk,
    ACTIONS(245), 1,
      sym__whitespace,
    ACTIONS(248), 1,
      sym__line_break,
    STATE(51), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(240), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1576] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_text_chunk,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 1,
      sym__line_break,
    STATE(39), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(253), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1604] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym_text_chunk,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 1,
      sym__line_break,
    STATE(54), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(259), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1632] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym_text_chunk,
    ACTIONS(205), 1,
      sym__line_break,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    STATE(56), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(265), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1660] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym_text_chunk,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      sym__line_break,
    STATE(49), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(265), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1688] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 1,
      sym_text_chunk,
    ACTIONS(276), 1,
      sym__whitespace,
    ACTIONS(279), 1,
      sym__line_break,
    STATE(56), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(271), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1716] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_text_chunk,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      sym__line_break,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(51), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(284), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1744] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_text_chunk,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      sym__line_break,
    STATE(44), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(284), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(75), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__whitespace,
  [1791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(60), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__whitespace,
  [1810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(290), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(296), 1,
      sym_text_chunk,
    STATE(63), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
    ACTIONS(292), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_or_task_setting_token1,
      aux_sym_test_case_or_task_setting_token2,
  [1850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(300), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(304), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(308), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1922] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(296), 1,
      sym_text_chunk,
    STATE(63), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
    ACTIONS(310), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [1944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(314), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(318), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(322), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(326), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2016] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      sym_text_chunk,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      sym_arguments,
    STATE(104), 1,
      sym_argument,
    STATE(90), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(338), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [2060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__whitespace,
    ACTIONS(340), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2077] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      sym_text_chunk,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    STATE(73), 1,
      sym_arguments,
    STATE(105), 1,
      sym_argument,
    STATE(90), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2104] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      sym_text_chunk,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    STATE(64), 1,
      sym_arguments,
    STATE(104), 1,
      sym_argument,
    STATE(90), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2131] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      sym_text_chunk,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    STATE(68), 1,
      sym_arguments,
    STATE(104), 1,
      sym_argument,
    STATE(90), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2158] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      sym_text_chunk,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    STATE(70), 1,
      sym_arguments,
    STATE(104), 1,
      sym_argument,
    STATE(90), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2185] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      sym_text_chunk,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    STATE(61), 1,
      sym_arguments,
    STATE(104), 1,
      sym_argument,
    STATE(90), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(346), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [2229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym__whitespace,
    ACTIONS(348), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2246] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      sym_text_chunk,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    STATE(81), 1,
      sym_arguments,
    STATE(106), 1,
      sym_argument,
    STATE(90), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [2290] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      sym_text_chunk,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    STATE(74), 1,
      sym_arguments,
    STATE(106), 1,
      sym_argument,
    STATE(90), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2317] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      sym_text_chunk,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    STATE(17), 1,
      sym_arguments,
    STATE(106), 1,
      sym_argument,
    STATE(90), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2344] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym__whitespace,
    ACTIONS(137), 1,
      sym__separator,
    ACTIONS(352), 1,
      sym__line_break,
    STATE(73), 1,
      sym_test_case_or_task_definition_body,
    STATE(26), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [2366] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      sym_text_chunk,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(334), 1,
      anon_sym_AMP_LBRACE,
    STATE(139), 1,
      sym_argument,
    STATE(90), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2390] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym__separator,
    ACTIONS(129), 1,
      sym__whitespace,
    ACTIONS(354), 1,
      sym__line_break,
    STATE(80), 1,
      sym_keyword_definition_body,
    STATE(24), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2412] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(356), 1,
      anon_sym_,
    ACTIONS(358), 1,
      sym_text_chunk,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(362), 1,
      sym__line_break,
    STATE(91), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2435] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(356), 1,
      anon_sym_,
    ACTIONS(364), 1,
      sym_text_chunk,
    ACTIONS(366), 1,
      sym__separator,
    ACTIONS(368), 1,
      sym__line_break,
    STATE(89), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2458] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(373), 1,
      anon_sym_,
    ACTIONS(376), 1,
      sym_text_chunk,
    ACTIONS(379), 1,
      sym__separator,
    ACTIONS(381), 1,
      sym__line_break,
    STATE(91), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(385), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [2506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(389), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [2519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(393), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [2532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(397), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(401), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [2558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(379), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [2571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(405), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [2584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(409), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(413), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [2610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(417), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [2623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    ACTIONS(421), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(429), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
  [2650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(431), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
  [2663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(433), 1,
      sym__line_break,
    STATE(116), 1,
      aux_sym_arguments_repeat1,
  [2676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym__separator,
    ACTIONS(435), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(439), 1,
      sym__line_break,
    STATE(115), 1,
      aux_sym_arguments_repeat1,
  [2700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(441), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(443), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym__separator,
    ACTIONS(448), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(450), 1,
      sym__line_break,
    STATE(114), 1,
      aux_sym_arguments_repeat1,
  [2752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(452), 1,
      sym_text_chunk,
    STATE(98), 1,
      sym_scalar_variable,
  [2765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(454), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(456), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(458), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(460), 1,
      sym__line_break,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(462), 1,
      sym__line_break,
    STATE(109), 1,
      aux_sym_arguments_repeat1,
  [2830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      aux_sym_settings_section_token3,
    ACTIONS(466), 1,
      sym__line_break,
  [2840] = 3,
    ACTIONS(468), 1,
      anon_sym_,
    ACTIONS(470), 1,
      sym_variable_name,
    ACTIONS(472), 1,
      sym_comment,
  [2850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    ACTIONS(476), 1,
      anon_sym_,
  [2860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      aux_sym_settings_section_token3,
    ACTIONS(480), 1,
      sym__line_break,
  [2870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(484), 1,
      anon_sym_,
  [2880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      anon_sym_,
  [2890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(492), 1,
      anon_sym_,
  [2900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__separator,
    ACTIONS(496), 1,
      sym__line_break,
  [2910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym__separator,
    ACTIONS(500), 1,
      sym__line_break,
  [2920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym_settings_section_token3,
    ACTIONS(504), 1,
      sym__line_break,
  [2930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(508), 1,
      anon_sym_,
  [2940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym__separator,
    ACTIONS(512), 1,
      sym__line_break,
  [2950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym__separator,
    ACTIONS(516), 1,
      sym__line_break,
  [2960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    ACTIONS(520), 1,
      anon_sym_,
  [2970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym__separator,
    ACTIONS(524), 1,
      sym__line_break,
  [2980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_settings_section_token3,
    ACTIONS(528), 1,
      sym__line_break,
  [2990] = 3,
    ACTIONS(472), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_,
    ACTIONS(532), 1,
      sym_variable_name,
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym__separator,
    ACTIONS(536), 1,
      sym__line_break,
  [3010] = 3,
    ACTIONS(472), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_,
    ACTIONS(540), 1,
      sym_variable_name,
  [3020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym__separator,
    ACTIONS(544), 1,
      sym__line_break,
  [3030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym__line_break,
    ACTIONS(546), 1,
      sym__separator,
  [3040] = 2,
    ACTIONS(472), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_variable_name,
  [3047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym__separator,
  [3054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym__separator,
  [3061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__line_break,
  [3068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym__line_break,
  [3075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_settings_section_token2,
  [3082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      aux_sym_settings_section_token2,
  [3089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
  [3096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__line_break,
  [3103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym__line_break,
  [3110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__separator,
  [3117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym__separator,
  [3124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__line_break,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
  [3138] = 2,
    ACTIONS(472), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_variable_name,
  [3145] = 2,
    ACTIONS(472), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_variable_name,
  [3152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      aux_sym_settings_section_token2,
  [3159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      aux_sym_settings_section_token2,
  [3166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
  [3173] = 2,
    ACTIONS(472), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_variable_name,
  [3180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym__line_break,
  [3187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
  [3194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
  [3208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym__line_break,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__line_break,
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_RBRACE,
  [3229] = 2,
    ACTIONS(472), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym_variable_name,
  [3236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
  [3243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
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
  [SMALL_STATE(82)] = 2246,
  [SMALL_STATE(83)] = 2273,
  [SMALL_STATE(84)] = 2290,
  [SMALL_STATE(85)] = 2317,
  [SMALL_STATE(86)] = 2344,
  [SMALL_STATE(87)] = 2366,
  [SMALL_STATE(88)] = 2390,
  [SMALL_STATE(89)] = 2412,
  [SMALL_STATE(90)] = 2435,
  [SMALL_STATE(91)] = 2458,
  [SMALL_STATE(92)] = 2481,
  [SMALL_STATE(93)] = 2493,
  [SMALL_STATE(94)] = 2506,
  [SMALL_STATE(95)] = 2519,
  [SMALL_STATE(96)] = 2532,
  [SMALL_STATE(97)] = 2545,
  [SMALL_STATE(98)] = 2558,
  [SMALL_STATE(99)] = 2571,
  [SMALL_STATE(100)] = 2584,
  [SMALL_STATE(101)] = 2597,
  [SMALL_STATE(102)] = 2610,
  [SMALL_STATE(103)] = 2623,
  [SMALL_STATE(104)] = 2637,
  [SMALL_STATE(105)] = 2650,
  [SMALL_STATE(106)] = 2663,
  [SMALL_STATE(107)] = 2676,
  [SMALL_STATE(108)] = 2687,
  [SMALL_STATE(109)] = 2700,
  [SMALL_STATE(110)] = 2713,
  [SMALL_STATE(111)] = 2726,
  [SMALL_STATE(112)] = 2739,
  [SMALL_STATE(113)] = 2752,
  [SMALL_STATE(114)] = 2765,
  [SMALL_STATE(115)] = 2778,
  [SMALL_STATE(116)] = 2791,
  [SMALL_STATE(117)] = 2804,
  [SMALL_STATE(118)] = 2817,
  [SMALL_STATE(119)] = 2830,
  [SMALL_STATE(120)] = 2840,
  [SMALL_STATE(121)] = 2850,
  [SMALL_STATE(122)] = 2860,
  [SMALL_STATE(123)] = 2870,
  [SMALL_STATE(124)] = 2880,
  [SMALL_STATE(125)] = 2890,
  [SMALL_STATE(126)] = 2900,
  [SMALL_STATE(127)] = 2910,
  [SMALL_STATE(128)] = 2920,
  [SMALL_STATE(129)] = 2930,
  [SMALL_STATE(130)] = 2940,
  [SMALL_STATE(131)] = 2950,
  [SMALL_STATE(132)] = 2960,
  [SMALL_STATE(133)] = 2970,
  [SMALL_STATE(134)] = 2980,
  [SMALL_STATE(135)] = 2990,
  [SMALL_STATE(136)] = 3000,
  [SMALL_STATE(137)] = 3010,
  [SMALL_STATE(138)] = 3020,
  [SMALL_STATE(139)] = 3030,
  [SMALL_STATE(140)] = 3040,
  [SMALL_STATE(141)] = 3047,
  [SMALL_STATE(142)] = 3054,
  [SMALL_STATE(143)] = 3061,
  [SMALL_STATE(144)] = 3068,
  [SMALL_STATE(145)] = 3075,
  [SMALL_STATE(146)] = 3082,
  [SMALL_STATE(147)] = 3089,
  [SMALL_STATE(148)] = 3096,
  [SMALL_STATE(149)] = 3103,
  [SMALL_STATE(150)] = 3110,
  [SMALL_STATE(151)] = 3117,
  [SMALL_STATE(152)] = 3124,
  [SMALL_STATE(153)] = 3131,
  [SMALL_STATE(154)] = 3138,
  [SMALL_STATE(155)] = 3145,
  [SMALL_STATE(156)] = 3152,
  [SMALL_STATE(157)] = 3159,
  [SMALL_STATE(158)] = 3166,
  [SMALL_STATE(159)] = 3173,
  [SMALL_STATE(160)] = 3180,
  [SMALL_STATE(161)] = 3187,
  [SMALL_STATE(162)] = 3194,
  [SMALL_STATE(163)] = 3201,
  [SMALL_STATE(164)] = 3208,
  [SMALL_STATE(165)] = 3215,
  [SMALL_STATE(166)] = 3222,
  [SMALL_STATE(167)] = 3229,
  [SMALL_STATE(168)] = 3236,
  [SMALL_STATE(169)] = 3243,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
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
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
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
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(142),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(164),
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
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(62),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(165),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(19),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(67),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(165),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(20),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(118),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(118),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(112),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(112),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 6),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 6),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(159),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(164),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(48),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(152),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(160),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(51),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(133),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(160),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(56),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_setting, 4),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_setting, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 3, .production_id = 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 3, .production_id = 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(137),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(113),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(91),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(87),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [574] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
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
