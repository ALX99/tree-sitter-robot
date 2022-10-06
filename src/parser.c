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
#define STATE_COUNT 206
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 1
#define TOKEN_COUNT 51
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
  anon_sym_ = 36,
  aux_sym_test_case_or_task_setting_token1 = 37,
  aux_sym_test_case_or_task_setting_token2 = 38,
  anon_sym_DOLLAR_LBRACE = 39,
  sym_ellipses = 40,
  sym_indented_ellipses = 41,
  sym_test_case_or_task = 42,
  sym_text_chunk = 43,
  sym_variable_name = 44,
  anon_sym_AT_LBRACE = 45,
  anon_sym_AMP_LBRACE = 46,
  sym_comment = 47,
  sym__separator = 48,
  sym__whitespace = 49,
  sym__line_break = 50,
  sym_source_file = 51,
  sym_section = 52,
  sym_settings_section = 53,
  sym_setting_statement = 54,
  sym_variables_section = 55,
  sym_variable_definition = 56,
  sym_keywords_section = 57,
  sym_keyword_definition = 58,
  sym_keyword_definition_body = 59,
  sym_keyword_setting = 60,
  sym_test_cases_or_tasks_section = 61,
  sym_test_case_or_task_definition = 62,
  sym_test_case_or_task_definition_body = 63,
  sym_test_case_or_task_setting = 64,
  sym_statement = 65,
  sym_variable_assignment = 66,
  sym_keyword_invocation = 67,
  sym_arguments = 68,
  sym_continuation = 69,
  sym_argument = 70,
  sym_list_variable = 71,
  sym_scalar_variable = 72,
  sym_dictionary_variable = 73,
  sym__empty_line = 74,
  aux_sym_source_file_repeat1 = 75,
  aux_sym_settings_section_repeat1 = 76,
  aux_sym_variables_section_repeat1 = 77,
  aux_sym_keywords_section_repeat1 = 78,
  aux_sym_keyword_definition_body_repeat1 = 79,
  aux_sym_test_cases_or_tasks_section_repeat1 = 80,
  aux_sym_test_case_or_task_definition_body_repeat1 = 81,
  aux_sym_arguments_repeat1 = 82,
  aux_sym_arguments_repeat2 = 83,
  aux_sym_argument_repeat1 = 84,
  alias_sym_keyword = 85,
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
  [anon_sym_] = " ",
  [aux_sym_test_case_or_task_setting_token1] = "test_case_or_task_setting_token1",
  [aux_sym_test_case_or_task_setting_token2] = "test_case_or_task_setting_token2",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym_ellipses] = "ellipses",
  [sym_indented_ellipses] = "ellipses",
  [sym_test_case_or_task] = "name",
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
  [anon_sym_] = anon_sym_,
  [aux_sym_test_case_or_task_setting_token1] = aux_sym_test_case_or_task_setting_token1,
  [aux_sym_test_case_or_task_setting_token2] = aux_sym_test_case_or_task_setting_token2,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym_ellipses] = sym_ellipses,
  [sym_indented_ellipses] = sym_ellipses,
  [sym_test_case_or_task] = sym_test_case_or_task,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
  [sym_test_case_or_task] = {
    .visible = true,
    .named = true,
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_test_case_or_task,
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
  [18] = 18,
  [19] = 6,
  [20] = 4,
  [21] = 21,
  [22] = 5,
  [23] = 3,
  [24] = 2,
  [25] = 6,
  [26] = 5,
  [27] = 2,
  [28] = 28,
  [29] = 29,
  [30] = 3,
  [31] = 2,
  [32] = 3,
  [33] = 4,
  [34] = 4,
  [35] = 6,
  [36] = 5,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 15,
  [41] = 41,
  [42] = 12,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 12,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 15,
  [53] = 53,
  [54] = 54,
  [55] = 15,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 12,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 16,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 68,
  [77] = 77,
  [78] = 16,
  [79] = 75,
  [80] = 80,
  [81] = 69,
  [82] = 82,
  [83] = 83,
  [84] = 73,
  [85] = 16,
  [86] = 86,
  [87] = 74,
  [88] = 71,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 16,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 93,
  [100] = 100,
  [101] = 101,
  [102] = 94,
  [103] = 101,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
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
  [126] = 126,
  [127] = 126,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 130,
  [133] = 130,
  [134] = 134,
  [135] = 135,
  [136] = 16,
  [137] = 129,
  [138] = 130,
  [139] = 139,
  [140] = 134,
  [141] = 128,
  [142] = 142,
  [143] = 128,
  [144] = 134,
  [145] = 134,
  [146] = 128,
  [147] = 129,
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
  [158] = 153,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 152,
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
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 180,
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
  [192] = 180,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 180,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 180,
  [203] = 180,
  [204] = 182,
  [205] = 201,
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
      if (eof) ADVANCE(246);
      if (lookahead == '\t') ADVANCE(253);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '}') ADVANCE(277);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(516);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '=') ADVANCE(279);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(516);
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(529);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '=') ADVANCE(278);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(516);
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(529);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(392);
      if (lookahead == '&') ADVANCE(393);
      if (lookahead == '@') ADVANCE(394);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '#') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(508);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(529);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(104);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(187);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(392);
      if (lookahead == '[') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(406);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(392);
      if (lookahead == '[') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(406);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(508);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(298);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(280);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(249);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(273);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(295);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(364);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(364);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(364);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(364);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(364);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(313);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(316);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
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
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 68:
      if (lookahead == ']') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 69:
      if (lookahead == '{') ADVANCE(276);
      END_STATE();
    case 70:
      if (lookahead == '{') ADVANCE(406);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(140);
      END_STATE();
    case 92:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 93:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(364);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 126:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 127:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 128:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 129:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 136:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(104);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 137:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(338);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(364);
      END_STATE();
    case 138:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 139:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(179);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 146:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 147:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 154:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 155:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 156:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 158:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 159:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 160:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 161:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 162:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 163:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 164:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 165:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 166:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 167:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 168:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 169:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 170:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 171:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 172:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 173:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 174:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 178:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      END_STATE();
    case 179:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(16);
      END_STATE();
    case 180:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      END_STATE();
    case 181:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(263);
      END_STATE();
    case 182:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(264);
      END_STATE();
    case 183:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 184:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      END_STATE();
    case 186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      END_STATE();
    case 193:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 194:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 195:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      END_STATE();
    case 196:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      END_STATE();
    case 197:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 198:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 200:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 201:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 202:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 214:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 215:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 216:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 217:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 218:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 219:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 220:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 221:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 222:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 223:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(154);
      END_STATE();
    case 224:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(150);
      END_STATE();
    case 225:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(151);
      END_STATE();
    case 226:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 227:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 228:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(256);
      END_STATE();
    case 229:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(406);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(404);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      END_STATE();
    case 230:
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(406);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(400);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(396);
      END_STATE();
    case 231:
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(406);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(404);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(402);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      END_STATE();
    case 232:
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(406);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 233:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      END_STATE();
    case 234:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(364);
      END_STATE();
    case 235:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(512);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(406);
      END_STATE();
    case 237:
      if (eof) ADVANCE(246);
      if (lookahead == '\t') ADVANCE(524);
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(529);
      if (lookahead == ' ') ADVANCE(520);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '@') ADVANCE(69);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(156);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 238:
      if (eof) ADVANCE(246);
      if (lookahead == '\t') ADVANCE(513);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead == '\r') ADVANCE(530);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 239:
      if (eof) ADVANCE(246);
      if (lookahead == '\t') ADVANCE(516);
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(529);
      if (lookahead == ' ') ADVANCE(521);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 240:
      if (eof) ADVANCE(246);
      if (lookahead == '\t') ADVANCE(514);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead == '\r') ADVANCE(530);
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 241:
      if (eof) ADVANCE(246);
      if (lookahead == '\t') ADVANCE(515);
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(529);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 242:
      if (eof) ADVANCE(246);
      if (lookahead == '\t') ADVANCE(519);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead == '\r') ADVANCE(530);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 243:
      if (eof) ADVANCE(246);
      if (lookahead == '\t') ADVANCE(523);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead == '\r') ADVANCE(530);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 244:
      if (eof) ADVANCE(246);
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(529);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(525);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 245:
      if (eof) ADVANCE(246);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(516);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(525);
      if (lookahead == ' ') ADVANCE(524);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(525);
      if (lookahead == ' ') ADVANCE(516);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(525);
      if (lookahead == ' ') ADVANCE(515);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(525);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(508);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(406);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_indented_ellipses);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '.') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(338);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '*') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(374);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '{') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '{') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(488);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(488);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (!sym_text_chunk_character_set_6(lookahead)) ADVANCE(488);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (!sym_text_chunk_character_set_7(lookahead)) ADVANCE(488);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(488);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(488);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(488);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(488);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(488);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(488);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(488);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(488);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(437);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(488);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(488);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'K' &&
          lookahead != 'k') ADVANCE(488);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(488);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(488);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(488);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(488);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(488);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(488);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(488);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(488);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(488);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(488);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(488);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(488);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(488);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(488);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(488);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(488);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(488);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(488);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(488);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(488);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(488);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(488);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(488);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(488);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(488);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(488);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(488);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(488);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(488);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(488);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(488);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(488);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(488);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(488);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(488);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(488);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(488);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(488);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(488);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(488);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(488);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(488);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(488);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(488);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(488);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(488);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(488);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(488);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(488);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(488);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(488);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(230);
      if (!sym_text_chunk_character_set_8(lookahead)) ADVANCE(488);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(415);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(416);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(409);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(443);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(443);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ']') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ']') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(512);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      if (lookahead == '{') ADVANCE(406);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      if (lookahead == '{') ADVANCE(406);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(365);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(518);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t') ADVANCE(515);
      if (lookahead == ' ') ADVANCE(517);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(524);
      if (lookahead == ' ') ADVANCE(526);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(525);
      if (lookahead == ' ') ADVANCE(524);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(525);
      if (lookahead == ' ') ADVANCE(516);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(525);
      if (lookahead == ' ') ADVANCE(515);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(525);
      if (lookahead == ' ') ADVANCE(527);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(528);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(364);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 245},
  [2] = {.lex_state = 237},
  [3] = {.lex_state = 237},
  [4] = {.lex_state = 237},
  [5] = {.lex_state = 237},
  [6] = {.lex_state = 237},
  [7] = {.lex_state = 237},
  [8] = {.lex_state = 237},
  [9] = {.lex_state = 237},
  [10] = {.lex_state = 237},
  [11] = {.lex_state = 237},
  [12] = {.lex_state = 237},
  [13] = {.lex_state = 237},
  [14] = {.lex_state = 237},
  [15] = {.lex_state = 237},
  [16] = {.lex_state = 237},
  [17] = {.lex_state = 237},
  [18] = {.lex_state = 238},
  [19] = {.lex_state = 240},
  [20] = {.lex_state = 240},
  [21] = {.lex_state = 238},
  [22] = {.lex_state = 240},
  [23] = {.lex_state = 240},
  [24] = {.lex_state = 240},
  [25] = {.lex_state = 241},
  [26] = {.lex_state = 241},
  [27] = {.lex_state = 241},
  [28] = {.lex_state = 239},
  [29] = {.lex_state = 239},
  [30] = {.lex_state = 242},
  [31] = {.lex_state = 242},
  [32] = {.lex_state = 241},
  [33] = {.lex_state = 241},
  [34] = {.lex_state = 242},
  [35] = {.lex_state = 242},
  [36] = {.lex_state = 242},
  [37] = {.lex_state = 243},
  [38] = {.lex_state = 243},
  [39] = {.lex_state = 243},
  [40] = {.lex_state = 240},
  [41] = {.lex_state = 243},
  [42] = {.lex_state = 240},
  [43] = {.lex_state = 243},
  [44] = {.lex_state = 243},
  [45] = {.lex_state = 243},
  [46] = {.lex_state = 244},
  [47] = {.lex_state = 237},
  [48] = {.lex_state = 241},
  [49] = {.lex_state = 244},
  [50] = {.lex_state = 245},
  [51] = {.lex_state = 245},
  [52] = {.lex_state = 242},
  [53] = {.lex_state = 237},
  [54] = {.lex_state = 237},
  [55] = {.lex_state = 241},
  [56] = {.lex_state = 237},
  [57] = {.lex_state = 244},
  [58] = {.lex_state = 237},
  [59] = {.lex_state = 242},
  [60] = {.lex_state = 237},
  [61] = {.lex_state = 244},
  [62] = {.lex_state = 237},
  [63] = {.lex_state = 244},
  [64] = {.lex_state = 244},
  [65] = {.lex_state = 244},
  [66] = {.lex_state = 245},
  [67] = {.lex_state = 245},
  [68] = {.lex_state = 238},
  [69] = {.lex_state = 238},
  [70] = {.lex_state = 238},
  [71] = {.lex_state = 238},
  [72] = {.lex_state = 238},
  [73] = {.lex_state = 238},
  [74] = {.lex_state = 238},
  [75] = {.lex_state = 238},
  [76] = {.lex_state = 239},
  [77] = {.lex_state = 24},
  [78] = {.lex_state = 243},
  [79] = {.lex_state = 239},
  [80] = {.lex_state = 243},
  [81] = {.lex_state = 239},
  [82] = {.lex_state = 239},
  [83] = {.lex_state = 243},
  [84] = {.lex_state = 239},
  [85] = {.lex_state = 239},
  [86] = {.lex_state = 25},
  [87] = {.lex_state = 239},
  [88] = {.lex_state = 239},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 244},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 244},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 237},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 237},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 239},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 239},
  [109] = {.lex_state = 239},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 245},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 239},
  [125] = {.lex_state = 239},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 239},
  [129] = {.lex_state = 239},
  [130] = {.lex_state = 239},
  [131] = {.lex_state = 239},
  [132] = {.lex_state = 239},
  [133] = {.lex_state = 239},
  [134] = {.lex_state = 239},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 239},
  [137] = {.lex_state = 239},
  [138] = {.lex_state = 239},
  [139] = {.lex_state = 239},
  [140] = {.lex_state = 239},
  [141] = {.lex_state = 239},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 239},
  [144] = {.lex_state = 239},
  [145] = {.lex_state = 239},
  [146] = {.lex_state = 239},
  [147] = {.lex_state = 239},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 239},
  [153] = {.lex_state = 239},
  [154] = {.lex_state = 239},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 239},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 239},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 239},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 239},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 239},
  [169] = {.lex_state = 239},
  [170] = {.lex_state = 245},
  [171] = {.lex_state = 245},
  [172] = {.lex_state = 26},
  [173] = {.lex_state = 26},
  [174] = {.lex_state = 26},
  [175] = {.lex_state = 26},
  [176] = {.lex_state = 239},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 239},
  [179] = {.lex_state = 239},
  [180] = {.lex_state = 237},
  [181] = {.lex_state = 237},
  [182] = {.lex_state = 245},
  [183] = {.lex_state = 29},
  [184] = {.lex_state = 29},
  [185] = {.lex_state = 237},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 245},
  [188] = {.lex_state = 245},
  [189] = {.lex_state = 237},
  [190] = {.lex_state = 245},
  [191] = {.lex_state = 237},
  [192] = {.lex_state = 237},
  [193] = {.lex_state = 245},
  [194] = {.lex_state = 245},
  [195] = {.lex_state = 29},
  [196] = {.lex_state = 239},
  [197] = {.lex_state = 237},
  [198] = {.lex_state = 237},
  [199] = {.lex_state = 29},
  [200] = {.lex_state = 237},
  [201] = {.lex_state = 29},
  [202] = {.lex_state = 237},
  [203] = {.lex_state = 237},
  [204] = {.lex_state = 245},
  [205] = {.lex_state = 29},
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
    [sym_source_file] = STATE(177),
    [sym_section] = STATE(66),
    [sym_settings_section] = STATE(113),
    [sym_variables_section] = STATE(113),
    [sym_keywords_section] = STATE(113),
    [sym_test_cases_or_tasks_section] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(66),
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
    STATE(3), 2,
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
    STATE(6), 2,
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
    STATE(7), 3,
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
    ACTIONS(55), 1,
      sym__whitespace,
    ACTIONS(58), 1,
      sym__line_break,
    STATE(9), 3,
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
    ACTIONS(52), 17,
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
    ACTIONS(44), 1,
      sym__line_break,
    STATE(9), 3,
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
  [378] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__line_break,
    STATE(10), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(61), 6,
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
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(65), 27,
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
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__line_break,
    STATE(14), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(69), 6,
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
  [498] = 6,
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
    ACTIONS(73), 6,
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
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym__whitespace,
    ACTIONS(75), 27,
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
  [643] = 7,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym__separator,
    ACTIONS(95), 1,
      sym__whitespace,
    ACTIONS(97), 1,
      sym__line_break,
    STATE(21), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(89), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
  [674] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(99), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(19), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [701] = 5,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(19), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [728] = 7,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(111), 1,
      sym__whitespace,
    ACTIONS(114), 1,
      sym__line_break,
    STATE(21), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(106), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
  [759] = 5,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(20), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [786] = 5,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(19), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [813] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(21), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [840] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_ellipses,
    ACTIONS(120), 1,
      sym_indented_ellipses,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(25), 2,
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
  [868] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_ellipses,
    ACTIONS(125), 1,
      sym_indented_ellipses,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(33), 2,
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
  [896] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_ellipses,
    ACTIONS(125), 1,
      sym_indented_ellipses,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(32), 2,
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
  [924] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      sym__separator,
    ACTIONS(133), 1,
      sym__whitespace,
    ACTIONS(135), 1,
      sym__line_break,
    STATE(29), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(129), 6,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [954] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym__separator,
    ACTIONS(144), 1,
      sym__whitespace,
    ACTIONS(147), 1,
      sym__line_break,
    STATE(29), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(139), 6,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [984] = 5,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(150), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(35), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__whitespace,
      sym__line_break,
  [1010] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(150), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(30), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(21), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__whitespace,
      sym__line_break,
  [1036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_ellipses,
    ACTIONS(125), 1,
      sym_indented_ellipses,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(25), 2,
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
  [1064] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_ellipses,
    ACTIONS(125), 1,
      sym_indented_ellipses,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(25), 2,
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
  [1092] = 5,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(150), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(35), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__whitespace,
      sym__line_break,
  [1118] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(152), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(35), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__whitespace,
      sym__line_break,
  [1144] = 5,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(150), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(34), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__whitespace,
      sym__line_break,
  [1170] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      anon_sym_,
    ACTIONS(161), 1,
      sym_test_case_or_task,
    ACTIONS(163), 1,
      sym__whitespace,
    ACTIONS(165), 1,
      sym__line_break,
    STATE(43), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(157), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1201] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      anon_sym_,
    ACTIONS(161), 1,
      sym_test_case_or_task,
    ACTIONS(163), 1,
      sym__whitespace,
    ACTIONS(167), 1,
      sym__line_break,
    STATE(44), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(157), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1232] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_,
    ACTIONS(161), 1,
      sym_test_case_or_task,
    ACTIONS(163), 1,
      sym__whitespace,
    ACTIONS(165), 1,
      sym__line_break,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(171), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1263] = 3,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(77), 12,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_ellipses,
      sym_indented_ellipses,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [1284] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_,
    ACTIONS(161), 1,
      sym_test_case_or_task,
    ACTIONS(163), 1,
      sym__whitespace,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
      sym__line_break,
    STATE(39), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(175), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1315] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(67), 12,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_ellipses,
      sym_indented_ellipses,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [1336] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(186), 1,
      sym_test_case_or_task,
    ACTIONS(189), 1,
      sym__whitespace,
    ACTIONS(192), 1,
      sym__line_break,
    STATE(43), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(181), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1367] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_,
    ACTIONS(161), 1,
      sym_test_case_or_task,
    ACTIONS(163), 1,
      sym__whitespace,
    ACTIONS(165), 1,
      sym__line_break,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(197), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1398] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_,
    ACTIONS(161), 1,
      sym_test_case_or_task,
    ACTIONS(163), 1,
      sym__whitespace,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      sym__line_break,
    STATE(37), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(201), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1429] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym_text_chunk,
    ACTIONS(211), 1,
      sym__whitespace,
    ACTIONS(213), 1,
      sym__line_break,
    STATE(65), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(207), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1457] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(217), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(219), 1,
      sym__line_break,
    STATE(56), 3,
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
  [1483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(67), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1503] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      sym_text_chunk,
    ACTIONS(228), 1,
      sym__whitespace,
    ACTIONS(231), 1,
      sym__line_break,
    STATE(49), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(223), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1531] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(67), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(113), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1561] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      aux_sym_settings_section_token1,
    ACTIONS(241), 1,
      aux_sym_variables_section_token1,
    ACTIONS(244), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(247), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(51), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(113), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1591] = 3,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(77), 11,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_ellipses,
      sym_indented_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
      sym__line_break,
  [1611] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(255), 1,
      sym__whitespace,
    ACTIONS(258), 1,
      sym__line_break,
    STATE(53), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1637] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(217), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(263), 1,
      sym__line_break,
    STATE(62), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(261), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(77), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1683] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(217), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(267), 1,
      sym__line_break,
    STATE(53), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(265), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1709] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_text_chunk,
    ACTIONS(211), 1,
      sym__whitespace,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 1,
      sym__line_break,
    STATE(49), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(271), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1737] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(217), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(267), 1,
      sym__line_break,
    STATE(53), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(275), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1763] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(67), 11,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_ellipses,
      sym_indented_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
      sym__line_break,
  [1783] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(217), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(279), 1,
      sym__line_break,
    STATE(58), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1809] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_text_chunk,
    ACTIONS(211), 1,
      sym__whitespace,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      sym__line_break,
    STATE(63), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(283), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1837] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(217), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(267), 1,
      sym__line_break,
    STATE(53), 3,
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
  [1863] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_text_chunk,
    ACTIONS(211), 1,
      sym__whitespace,
    ACTIONS(273), 1,
      sym__line_break,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    STATE(49), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(289), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1891] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_text_chunk,
    ACTIONS(211), 1,
      sym__whitespace,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      sym__line_break,
    STATE(57), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(293), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1919] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_text_chunk,
    ACTIONS(211), 1,
      sym__whitespace,
    ACTIONS(273), 1,
      sym__line_break,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    STATE(49), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(293), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1947] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(51), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(113), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1977] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(51), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(113), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [2007] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [2026] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [2045] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [2064] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [2083] = 3,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(81), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [2102] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [2121] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    ACTIONS(321), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [2140] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
      sym__line_break,
  [2159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(301), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(331), 1,
      sym_text_chunk,
    STATE(74), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
    ACTIONS(327), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_or_task_setting_token1,
      aux_sym_test_case_or_task_setting_token2,
  [2199] = 3,
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
      anon_sym_,
      sym_test_case_or_task,
      sym__whitespace,
      sym__line_break,
  [2217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(325), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2235] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__whitespace,
      sym__line_break,
  [2253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(305), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(339), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2289] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      anon_sym_,
      sym_test_case_or_task,
      sym__whitespace,
      sym__line_break,
  [2307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(317), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2325] = 3,
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
  [2343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(349), 1,
      sym_text_chunk,
    STATE(87), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
    ACTIONS(345), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [2365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(321), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(313), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2401] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(80), 1,
      sym_arguments,
    STATE(140), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2428] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(97), 1,
      sym_arguments,
    STATE(145), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2455] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(104), 1,
      sym_arguments,
    STATE(145), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2482] = 3,
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
  [2499] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(81), 1,
      sym_arguments,
    STATE(134), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2526] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(76), 1,
      sym_arguments,
    STATE(134), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(361), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [2570] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(83), 1,
      sym_arguments,
    STATE(140), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym__whitespace,
    ACTIONS(363), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2614] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(17), 1,
      sym_arguments,
    STATE(145), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2641] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(69), 1,
      sym_arguments,
    STATE(144), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2668] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(70), 1,
      sym_arguments,
    STATE(144), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2695] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(84), 1,
      sym_arguments,
    STATE(134), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2722] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(68), 1,
      sym_arguments,
    STATE(144), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2749] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(73), 1,
      sym_arguments,
    STATE(144), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym__whitespace,
    ACTIONS(367), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2793] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(82), 1,
      sym_arguments,
    STATE(134), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2820] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym__separator,
    ACTIONS(95), 1,
      sym__whitespace,
    ACTIONS(371), 1,
      sym__line_break,
    STATE(80), 1,
      sym_test_case_or_task_definition_body,
    STATE(18), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [2842] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(357), 1,
      anon_sym_AMP_LBRACE,
    STATE(161), 1,
      sym_argument,
    STATE(111), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2866] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym__separator,
    ACTIONS(95), 1,
      sym__whitespace,
    ACTIONS(371), 1,
      sym__line_break,
    STATE(83), 1,
      sym_test_case_or_task_definition_body,
    STATE(18), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [2888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym__separator,
    ACTIONS(133), 1,
      sym__whitespace,
    ACTIONS(373), 1,
      sym__line_break,
    STATE(95), 1,
      sym_keyword_definition_body,
    STATE(28), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2910] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(381), 1,
      sym_text_chunk,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(110), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2933] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(388), 1,
      anon_sym_,
    ACTIONS(390), 1,
      sym_text_chunk,
    ACTIONS(392), 1,
      sym__separator,
    ACTIONS(394), 1,
      sym__line_break,
    STATE(112), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2956] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(388), 1,
      anon_sym_,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(110), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(384), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(404), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(408), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(412), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(416), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(420), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(424), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(428), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(432), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(436), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym__separator,
    ACTIONS(442), 1,
      sym__whitespace,
    ACTIONS(444), 1,
      sym__line_break,
    STATE(108), 1,
      sym__empty_line,
  [3137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym__whitespace,
    ACTIONS(446), 1,
      sym__separator,
    ACTIONS(448), 1,
      sym__line_break,
    STATE(106), 1,
      sym__empty_line,
  [3153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym__separator,
    ACTIONS(454), 1,
      sym__line_break,
    ACTIONS(450), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym__separator,
    ACTIONS(460), 1,
      sym__line_break,
    ACTIONS(456), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(464), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
  [3194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(466), 1,
      sym__line_break,
    STATE(133), 1,
      aux_sym_arguments_repeat1,
  [3207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(468), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
  [3220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(470), 1,
      sym__line_break,
    STATE(132), 1,
      aux_sym_arguments_repeat1,
  [3233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(472), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
  [3246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(474), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
  [3259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(476), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
  [3272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(478), 1,
      sym_text_chunk,
    STATE(114), 1,
      sym_scalar_variable,
  [3285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__line_break,
    ACTIONS(81), 2,
      sym__separator,
      sym__whitespace,
  [3296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(480), 1,
      sym__line_break,
    STATE(138), 1,
      aux_sym_arguments_repeat1,
  [3309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(482), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
  [3322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym__separator,
    ACTIONS(487), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
  [3335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(489), 1,
      sym__line_break,
    STATE(141), 1,
      aux_sym_arguments_repeat1,
  [3348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(491), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
  [3361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym__separator,
    ACTIONS(493), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(497), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
  [3385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(499), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(501), 1,
      sym__line_break,
    STATE(143), 1,
      aux_sym_arguments_repeat1,
  [3411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(503), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
  [3424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(505), 1,
      sym__line_break,
    STATE(130), 1,
      aux_sym_arguments_repeat1,
  [3437] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_,
    ACTIONS(509), 1,
      sym_variable_name,
  [3447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      aux_sym_settings_section_token3,
    ACTIONS(513), 1,
      sym__line_break,
  [3457] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_,
    ACTIONS(517), 1,
      sym_variable_name,
  [3467] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_,
    ACTIONS(521), 1,
      sym_variable_name,
  [3477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym__separator,
    ACTIONS(525), 1,
      sym__line_break,
  [3487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym__separator,
    ACTIONS(529), 1,
      sym__line_break,
  [3497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__separator,
    ACTIONS(533), 1,
      sym__line_break,
  [3507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    ACTIONS(537), 1,
      anon_sym_,
  [3517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(541), 1,
      anon_sym_,
  [3527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    ACTIONS(545), 1,
      anon_sym_,
  [3537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym__separator,
    ACTIONS(549), 1,
      sym__line_break,
  [3547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      anon_sym_,
  [3557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_,
  [3567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym__line_break,
    ACTIONS(559), 1,
      sym__separator,
  [3577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    ACTIONS(563), 1,
      anon_sym_,
  [3587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      aux_sym_settings_section_token3,
    ACTIONS(567), 1,
      sym__line_break,
  [3597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__separator,
    ACTIONS(571), 1,
      sym__line_break,
  [3607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      aux_sym_settings_section_token3,
    ACTIONS(575), 1,
      sym__line_break,
  [3617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__separator,
    ACTIONS(579), 1,
      sym__line_break,
  [3627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      aux_sym_settings_section_token3,
    ACTIONS(583), 1,
      sym__line_break,
  [3637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym__separator,
    ACTIONS(587), 1,
      sym__line_break,
  [3647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__separator,
    ACTIONS(591), 1,
      sym__line_break,
  [3657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
  [3664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
  [3671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      aux_sym_settings_section_token2,
  [3678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      aux_sym_settings_section_token2,
  [3685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      aux_sym_settings_section_token2,
  [3692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_settings_section_token2,
  [3699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym__separator,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
  [3713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__separator,
  [3720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__separator,
  [3727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym__line_break,
  [3734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym__line_break,
  [3741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
  [3748] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym_variable_name,
  [3755] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_variable_name,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym__line_break,
  [3769] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_test_case_or_task,
  [3776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
  [3783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
  [3790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__line_break,
  [3797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__line_break,
  [3811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym__line_break,
  [3818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
  [3832] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym_variable_name,
  [3839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym__separator,
  [3846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym__line_break,
  [3853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym__line_break,
  [3860] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_variable_name,
  [3867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__line_break,
  [3874] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym_variable_name,
  [3881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__line_break,
  [3888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym__line_break,
  [3895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
  [3902] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym_variable_name,
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
  [SMALL_STATE(15)] = 540,
  [SMALL_STATE(16)] = 576,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 674,
  [SMALL_STATE(20)] = 701,
  [SMALL_STATE(21)] = 728,
  [SMALL_STATE(22)] = 759,
  [SMALL_STATE(23)] = 786,
  [SMALL_STATE(24)] = 813,
  [SMALL_STATE(25)] = 840,
  [SMALL_STATE(26)] = 868,
  [SMALL_STATE(27)] = 896,
  [SMALL_STATE(28)] = 924,
  [SMALL_STATE(29)] = 954,
  [SMALL_STATE(30)] = 984,
  [SMALL_STATE(31)] = 1010,
  [SMALL_STATE(32)] = 1036,
  [SMALL_STATE(33)] = 1064,
  [SMALL_STATE(34)] = 1092,
  [SMALL_STATE(35)] = 1118,
  [SMALL_STATE(36)] = 1144,
  [SMALL_STATE(37)] = 1170,
  [SMALL_STATE(38)] = 1201,
  [SMALL_STATE(39)] = 1232,
  [SMALL_STATE(40)] = 1263,
  [SMALL_STATE(41)] = 1284,
  [SMALL_STATE(42)] = 1315,
  [SMALL_STATE(43)] = 1336,
  [SMALL_STATE(44)] = 1367,
  [SMALL_STATE(45)] = 1398,
  [SMALL_STATE(46)] = 1429,
  [SMALL_STATE(47)] = 1457,
  [SMALL_STATE(48)] = 1483,
  [SMALL_STATE(49)] = 1503,
  [SMALL_STATE(50)] = 1531,
  [SMALL_STATE(51)] = 1561,
  [SMALL_STATE(52)] = 1591,
  [SMALL_STATE(53)] = 1611,
  [SMALL_STATE(54)] = 1637,
  [SMALL_STATE(55)] = 1663,
  [SMALL_STATE(56)] = 1683,
  [SMALL_STATE(57)] = 1709,
  [SMALL_STATE(58)] = 1737,
  [SMALL_STATE(59)] = 1763,
  [SMALL_STATE(60)] = 1783,
  [SMALL_STATE(61)] = 1809,
  [SMALL_STATE(62)] = 1837,
  [SMALL_STATE(63)] = 1863,
  [SMALL_STATE(64)] = 1891,
  [SMALL_STATE(65)] = 1919,
  [SMALL_STATE(66)] = 1947,
  [SMALL_STATE(67)] = 1977,
  [SMALL_STATE(68)] = 2007,
  [SMALL_STATE(69)] = 2026,
  [SMALL_STATE(70)] = 2045,
  [SMALL_STATE(71)] = 2064,
  [SMALL_STATE(72)] = 2083,
  [SMALL_STATE(73)] = 2102,
  [SMALL_STATE(74)] = 2121,
  [SMALL_STATE(75)] = 2140,
  [SMALL_STATE(76)] = 2159,
  [SMALL_STATE(77)] = 2177,
  [SMALL_STATE(78)] = 2199,
  [SMALL_STATE(79)] = 2217,
  [SMALL_STATE(80)] = 2235,
  [SMALL_STATE(81)] = 2253,
  [SMALL_STATE(82)] = 2271,
  [SMALL_STATE(83)] = 2289,
  [SMALL_STATE(84)] = 2307,
  [SMALL_STATE(85)] = 2325,
  [SMALL_STATE(86)] = 2343,
  [SMALL_STATE(87)] = 2365,
  [SMALL_STATE(88)] = 2383,
  [SMALL_STATE(89)] = 2401,
  [SMALL_STATE(90)] = 2428,
  [SMALL_STATE(91)] = 2455,
  [SMALL_STATE(92)] = 2482,
  [SMALL_STATE(93)] = 2499,
  [SMALL_STATE(94)] = 2526,
  [SMALL_STATE(95)] = 2553,
  [SMALL_STATE(96)] = 2570,
  [SMALL_STATE(97)] = 2597,
  [SMALL_STATE(98)] = 2614,
  [SMALL_STATE(99)] = 2641,
  [SMALL_STATE(100)] = 2668,
  [SMALL_STATE(101)] = 2695,
  [SMALL_STATE(102)] = 2722,
  [SMALL_STATE(103)] = 2749,
  [SMALL_STATE(104)] = 2776,
  [SMALL_STATE(105)] = 2793,
  [SMALL_STATE(106)] = 2820,
  [SMALL_STATE(107)] = 2842,
  [SMALL_STATE(108)] = 2866,
  [SMALL_STATE(109)] = 2888,
  [SMALL_STATE(110)] = 2910,
  [SMALL_STATE(111)] = 2933,
  [SMALL_STATE(112)] = 2956,
  [SMALL_STATE(113)] = 2979,
  [SMALL_STATE(114)] = 2991,
  [SMALL_STATE(115)] = 3004,
  [SMALL_STATE(116)] = 3017,
  [SMALL_STATE(117)] = 3030,
  [SMALL_STATE(118)] = 3043,
  [SMALL_STATE(119)] = 3056,
  [SMALL_STATE(120)] = 3069,
  [SMALL_STATE(121)] = 3082,
  [SMALL_STATE(122)] = 3095,
  [SMALL_STATE(123)] = 3108,
  [SMALL_STATE(124)] = 3121,
  [SMALL_STATE(125)] = 3137,
  [SMALL_STATE(126)] = 3153,
  [SMALL_STATE(127)] = 3167,
  [SMALL_STATE(128)] = 3181,
  [SMALL_STATE(129)] = 3194,
  [SMALL_STATE(130)] = 3207,
  [SMALL_STATE(131)] = 3220,
  [SMALL_STATE(132)] = 3233,
  [SMALL_STATE(133)] = 3246,
  [SMALL_STATE(134)] = 3259,
  [SMALL_STATE(135)] = 3272,
  [SMALL_STATE(136)] = 3285,
  [SMALL_STATE(137)] = 3296,
  [SMALL_STATE(138)] = 3309,
  [SMALL_STATE(139)] = 3322,
  [SMALL_STATE(140)] = 3335,
  [SMALL_STATE(141)] = 3348,
  [SMALL_STATE(142)] = 3361,
  [SMALL_STATE(143)] = 3372,
  [SMALL_STATE(144)] = 3385,
  [SMALL_STATE(145)] = 3398,
  [SMALL_STATE(146)] = 3411,
  [SMALL_STATE(147)] = 3424,
  [SMALL_STATE(148)] = 3437,
  [SMALL_STATE(149)] = 3447,
  [SMALL_STATE(150)] = 3457,
  [SMALL_STATE(151)] = 3467,
  [SMALL_STATE(152)] = 3477,
  [SMALL_STATE(153)] = 3487,
  [SMALL_STATE(154)] = 3497,
  [SMALL_STATE(155)] = 3507,
  [SMALL_STATE(156)] = 3517,
  [SMALL_STATE(157)] = 3527,
  [SMALL_STATE(158)] = 3537,
  [SMALL_STATE(159)] = 3547,
  [SMALL_STATE(160)] = 3557,
  [SMALL_STATE(161)] = 3567,
  [SMALL_STATE(162)] = 3577,
  [SMALL_STATE(163)] = 3587,
  [SMALL_STATE(164)] = 3597,
  [SMALL_STATE(165)] = 3607,
  [SMALL_STATE(166)] = 3617,
  [SMALL_STATE(167)] = 3627,
  [SMALL_STATE(168)] = 3637,
  [SMALL_STATE(169)] = 3647,
  [SMALL_STATE(170)] = 3657,
  [SMALL_STATE(171)] = 3664,
  [SMALL_STATE(172)] = 3671,
  [SMALL_STATE(173)] = 3678,
  [SMALL_STATE(174)] = 3685,
  [SMALL_STATE(175)] = 3692,
  [SMALL_STATE(176)] = 3699,
  [SMALL_STATE(177)] = 3706,
  [SMALL_STATE(178)] = 3713,
  [SMALL_STATE(179)] = 3720,
  [SMALL_STATE(180)] = 3727,
  [SMALL_STATE(181)] = 3734,
  [SMALL_STATE(182)] = 3741,
  [SMALL_STATE(183)] = 3748,
  [SMALL_STATE(184)] = 3755,
  [SMALL_STATE(185)] = 3762,
  [SMALL_STATE(186)] = 3769,
  [SMALL_STATE(187)] = 3776,
  [SMALL_STATE(188)] = 3783,
  [SMALL_STATE(189)] = 3790,
  [SMALL_STATE(190)] = 3797,
  [SMALL_STATE(191)] = 3804,
  [SMALL_STATE(192)] = 3811,
  [SMALL_STATE(193)] = 3818,
  [SMALL_STATE(194)] = 3825,
  [SMALL_STATE(195)] = 3832,
  [SMALL_STATE(196)] = 3839,
  [SMALL_STATE(197)] = 3846,
  [SMALL_STATE(198)] = 3853,
  [SMALL_STATE(199)] = 3860,
  [SMALL_STATE(200)] = 3867,
  [SMALL_STATE(201)] = 3874,
  [SMALL_STATE(202)] = 3881,
  [SMALL_STATE(203)] = 3888,
  [SMALL_STATE(204)] = 3895,
  [SMALL_STATE(205)] = 3902,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(129),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 6),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(179),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(180),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(147),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(77),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(203),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(21),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(137),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(137),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(86),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(202),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(29),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(131),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(186),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(125),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(192),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(43),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(185),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(181),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(49),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(184),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(180),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(53),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 6),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 6),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 5),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_setting, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_setting, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 4),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(135),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(151),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(110),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(107),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [605] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
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
