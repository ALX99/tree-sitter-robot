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
#define STATE_COUNT 211
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_settings_section_token1 = 1,
  aux_sym_settings_section_token2 = 2,
  aux_sym_settings_section_token3 = 3,
  aux_sym_setting_statement_token1 = 4,
  aux_sym_setting_statement_token2 = 5,
  aux_sym_setting_statement_token3 = 6,
  aux_sym_setting_statement_token4 = 7,
  aux_sym_setting_statement_token5 = 8,
  aux_sym_setting_statement_token6 = 9,
  aux_sym_setting_statement_token7 = 10,
  aux_sym_setting_statement_token8 = 11,
  aux_sym_setting_statement_token9 = 12,
  aux_sym_setting_statement_token10 = 13,
  aux_sym_setting_statement_token11 = 14,
  aux_sym_setting_statement_token12 = 15,
  aux_sym_setting_statement_token13 = 16,
  aux_sym_setting_statement_token14 = 17,
  aux_sym_setting_statement_token15 = 18,
  aux_sym_setting_statement_token16 = 19,
  aux_sym_setting_statement_token17 = 20,
  aux_sym_variables_section_token1 = 21,
  aux_sym_variable_definition_token1 = 22,
  anon_sym_RBRACE = 23,
  anon_sym_EQ = 24,
  anon_sym_EQ2 = 25,
  aux_sym_keywords_section_token1 = 26,
  anon_sym_ = 27,
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
  sym_test_case_or_task = 41,
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
  aux_sym_source_file_repeat2 = 75,
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
  [anon_sym_] = " ",
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
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
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
  [anon_sym_] = anon_sym_,
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
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
  [aux_sym_source_file_repeat2] = {
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
    [1] = sym_test_case_or_task,
  },
  [3] = {
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
  [20] = 20,
  [21] = 3,
  [22] = 3,
  [23] = 2,
  [24] = 2,
  [25] = 4,
  [26] = 4,
  [27] = 5,
  [28] = 28,
  [29] = 29,
  [30] = 5,
  [31] = 31,
  [32] = 6,
  [33] = 6,
  [34] = 5,
  [35] = 4,
  [36] = 3,
  [37] = 2,
  [38] = 11,
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
  [52] = 7,
  [53] = 7,
  [54] = 54,
  [55] = 11,
  [56] = 56,
  [57] = 7,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 11,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 71,
  [72] = 72,
  [73] = 16,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 74,
  [79] = 75,
  [80] = 80,
  [81] = 69,
  [82] = 16,
  [83] = 72,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 16,
  [89] = 89,
  [90] = 16,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 96,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 100,
  [106] = 93,
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
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 129,
  [131] = 16,
  [132] = 132,
  [133] = 133,
  [134] = 132,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 135,
  [139] = 135,
  [140] = 132,
  [141] = 136,
  [142] = 135,
  [143] = 133,
  [144] = 136,
  [145] = 145,
  [146] = 133,
  [147] = 147,
  [148] = 133,
  [149] = 132,
  [150] = 136,
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
  [163] = 158,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 160,
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
  [186] = 182,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 182,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 182,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 182,
  [208] = 182,
  [209] = 175,
  [210] = 199,
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
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(248);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '=') ADVANCE(273);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '}') ADVANCE(272);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(504);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '=') ADVANCE(274);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(504);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '=') ADVANCE(273);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(504);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(506);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == '[') ADVANCE(483);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(504);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == '&') ADVANCE(384);
      if (lookahead == '@') ADVANCE(385);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(498);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(499);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '.') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(187);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(209);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(397);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(499);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(300);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(275);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(244);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(268);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(297);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(356);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(356);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(356);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(356);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(356);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(308);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(311);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 60:
      if (lookahead == ']') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 67:
      if (lookahead == '{') ADVANCE(271);
      END_STATE();
    case 68:
      if (lookahead == '{') ADVANCE(397);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 89:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 90:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(356);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 124:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 125:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 126:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 127:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 134:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(9);
      END_STATE();
    case 135:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(356);
      END_STATE();
    case 136:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 137:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(177);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 143:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 144:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 152:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 153:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 154:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 155:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 156:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 158:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 159:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 160:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 161:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 162:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 163:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 164:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 165:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 166:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 167:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 168:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 169:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 170:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 171:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 172:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 173:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 174:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 176:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 177:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 178:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      END_STATE();
    case 179:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      END_STATE();
    case 180:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      END_STATE();
    case 181:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 182:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      END_STATE();
    case 183:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      END_STATE();
    case 184:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      END_STATE();
    case 190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 195:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 196:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 197:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 198:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 199:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 200:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 201:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 202:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 212:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 213:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 214:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 215:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 216:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 217:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 218:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 219:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 220:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 221:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(147);
      END_STATE();
    case 222:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 223:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 224:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 225:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 226:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      END_STATE();
    case 227:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(397);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(395);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      END_STATE();
    case 228:
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(397);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(391);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(392);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(387);
      END_STATE();
    case 229:
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(397);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(395);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 230:
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(397);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 231:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 232:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(356);
      END_STATE();
    case 233:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(502);
      END_STATE();
    case 234:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(397);
      END_STATE();
    case 235:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(507);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(505);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '@') ADVANCE(67);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(103);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 236:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(507);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(279);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 237:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(508);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 238:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(508);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 239:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(503);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 240:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(503);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 241:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(504);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 242:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(504);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(504);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(507);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(503);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(504);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(508);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(499);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(397);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(356);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '.') ADVANCE(382);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '{') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '{') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(479);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(479);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (!sym_text_chunk_character_set_6(lookahead)) ADVANCE(479);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (!sym_text_chunk_character_set_7(lookahead)) ADVANCE(479);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(439);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(479);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(479);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(479);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(479);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(479);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(479);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(479);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(479);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(479);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(479);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'K' &&
          lookahead != 'k') ADVANCE(479);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(479);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(479);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(479);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(479);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(479);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(479);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(479);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(479);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(479);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(479);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(479);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(479);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(479);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(479);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(479);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(479);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(479);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(479);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(479);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(479);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(479);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(479);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(479);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(479);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(440);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(479);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(479);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(479);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(479);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(479);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(479);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(479);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(479);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(479);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(479);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(479);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(479);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(228);
      if (!sym_text_chunk_character_set_8(lookahead)) ADVANCE(479);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(406);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(407);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(227);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(434);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(229);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(434);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == ']') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == ']') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == ']') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ']') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '*') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(502);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(499);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      if (lookahead == '{') ADVANCE(397);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      if (lookahead == '{') ADVANCE(397);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(507);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(504);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(509);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 235},
  [2] = {.lex_state = 235},
  [3] = {.lex_state = 235},
  [4] = {.lex_state = 235},
  [5] = {.lex_state = 235},
  [6] = {.lex_state = 235},
  [7] = {.lex_state = 235},
  [8] = {.lex_state = 235},
  [9] = {.lex_state = 235},
  [10] = {.lex_state = 235},
  [11] = {.lex_state = 235},
  [12] = {.lex_state = 235},
  [13] = {.lex_state = 235},
  [14] = {.lex_state = 235},
  [15] = {.lex_state = 235},
  [16] = {.lex_state = 235},
  [17] = {.lex_state = 235},
  [18] = {.lex_state = 235},
  [19] = {.lex_state = 239},
  [20] = {.lex_state = 241},
  [21] = {.lex_state = 239},
  [22] = {.lex_state = 240},
  [23] = {.lex_state = 239},
  [24] = {.lex_state = 240},
  [25] = {.lex_state = 240},
  [26] = {.lex_state = 239},
  [27] = {.lex_state = 239},
  [28] = {.lex_state = 242},
  [29] = {.lex_state = 242},
  [30] = {.lex_state = 240},
  [31] = {.lex_state = 241},
  [32] = {.lex_state = 240},
  [33] = {.lex_state = 236},
  [34] = {.lex_state = 236},
  [35] = {.lex_state = 236},
  [36] = {.lex_state = 236},
  [37] = {.lex_state = 236},
  [38] = {.lex_state = 239},
  [39] = {.lex_state = 237},
  [40] = {.lex_state = 238},
  [41] = {.lex_state = 237},
  [42] = {.lex_state = 238},
  [43] = {.lex_state = 237},
  [44] = {.lex_state = 237},
  [45] = {.lex_state = 237},
  [46] = {.lex_state = 237},
  [47] = {.lex_state = 238},
  [48] = {.lex_state = 238},
  [49] = {.lex_state = 238},
  [50] = {.lex_state = 238},
  [51] = {.lex_state = 237},
  [52] = {.lex_state = 240},
  [53] = {.lex_state = 239},
  [54] = {.lex_state = 238},
  [55] = {.lex_state = 240},
  [56] = {.lex_state = 235},
  [57] = {.lex_state = 236},
  [58] = {.lex_state = 235},
  [59] = {.lex_state = 235},
  [60] = {.lex_state = 235},
  [61] = {.lex_state = 235},
  [62] = {.lex_state = 235},
  [63] = {.lex_state = 235},
  [64] = {.lex_state = 235},
  [65] = {.lex_state = 235},
  [66] = {.lex_state = 235},
  [67] = {.lex_state = 236},
  [68] = {.lex_state = 241},
  [69] = {.lex_state = 242},
  [70] = {.lex_state = 242},
  [71] = {.lex_state = 242},
  [72] = {.lex_state = 242},
  [73] = {.lex_state = 242},
  [74] = {.lex_state = 242},
  [75] = {.lex_state = 242},
  [76] = {.lex_state = 242},
  [77] = {.lex_state = 241},
  [78] = {.lex_state = 241},
  [79] = {.lex_state = 241},
  [80] = {.lex_state = 241},
  [81] = {.lex_state = 241},
  [82] = {.lex_state = 241},
  [83] = {.lex_state = 241},
  [84] = {.lex_state = 238},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 237},
  [87] = {.lex_state = 238},
  [88] = {.lex_state = 237},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 238},
  [91] = {.lex_state = 237},
  [92] = {.lex_state = 235},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 235},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 235},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 235},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 241},
  [133] = {.lex_state = 241},
  [134] = {.lex_state = 241},
  [135] = {.lex_state = 241},
  [136] = {.lex_state = 241},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 241},
  [139] = {.lex_state = 241},
  [140] = {.lex_state = 241},
  [141] = {.lex_state = 241},
  [142] = {.lex_state = 241},
  [143] = {.lex_state = 241},
  [144] = {.lex_state = 241},
  [145] = {.lex_state = 241},
  [146] = {.lex_state = 241},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 241},
  [149] = {.lex_state = 241},
  [150] = {.lex_state = 241},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 241},
  [158] = {.lex_state = 241},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 241},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 241},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 241},
  [167] = {.lex_state = 241},
  [168] = {.lex_state = 241},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 241},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 241},
  [173] = {.lex_state = 235},
  [174] = {.lex_state = 235},
  [175] = {.lex_state = 235},
  [176] = {.lex_state = 24},
  [177] = {.lex_state = 24},
  [178] = {.lex_state = 24},
  [179] = {.lex_state = 24},
  [180] = {.lex_state = 27},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 235},
  [183] = {.lex_state = 27},
  [184] = {.lex_state = 235},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 235},
  [187] = {.lex_state = 235},
  [188] = {.lex_state = 235},
  [189] = {.lex_state = 26},
  [190] = {.lex_state = 235},
  [191] = {.lex_state = 235},
  [192] = {.lex_state = 241},
  [193] = {.lex_state = 241},
  [194] = {.lex_state = 235},
  [195] = {.lex_state = 27},
  [196] = {.lex_state = 235},
  [197] = {.lex_state = 235},
  [198] = {.lex_state = 235},
  [199] = {.lex_state = 27},
  [200] = {.lex_state = 241},
  [201] = {.lex_state = 235},
  [202] = {.lex_state = 235},
  [203] = {.lex_state = 241},
  [204] = {.lex_state = 235},
  [205] = {.lex_state = 27},
  [206] = {.lex_state = 235},
  [207] = {.lex_state = 235},
  [208] = {.lex_state = 235},
  [209] = {.lex_state = 235},
  [210] = {.lex_state = 27},
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
    [sym_source_file] = STATE(181),
    [sym_section] = STATE(59),
    [sym_settings_section] = STATE(116),
    [sym_variables_section] = STATE(116),
    [sym_keywords_section] = STATE(116),
    [sym_test_cases_or_tasks_section] = STATE(116),
    [sym__empty_line] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_source_file_repeat2] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_settings_section_token1] = ACTIONS(7),
    [aux_sym_variables_section_token1] = ACTIONS(9),
    [aux_sym_keywords_section_token1] = ACTIONS(11),
    [aux_sym_test_cases_or_tasks_section_token1] = ACTIONS(13),
    [aux_sym_test_cases_or_tasks_section_token2] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(15),
    [sym__line_break] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(2), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(19), 25,
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
    ACTIONS(30), 1,
      sym__whitespace,
    ACTIONS(28), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(2), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(26), 25,
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
    ACTIONS(34), 1,
      sym__whitespace,
    ACTIONS(28), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(3), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(32), 25,
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
    ACTIONS(34), 1,
      sym__whitespace,
    ACTIONS(28), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(2), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(32), 25,
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
    ACTIONS(38), 1,
      sym__whitespace,
    ACTIONS(28), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(5), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 25,
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
  [210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(40), 27,
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
  [246] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(48), 1,
      sym__line_break,
    STATE(12), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(46), 17,
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
  [288] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(48), 1,
      sym__line_break,
    STATE(12), 3,
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
    ACTIONS(46), 17,
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
  [330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(52), 1,
      sym__line_break,
    STATE(8), 3,
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
    ACTIONS(46), 17,
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
  [372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym__whitespace,
    ACTIONS(54), 27,
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
  [408] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(66), 1,
      sym__line_break,
    STATE(12), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(60), 17,
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
  [450] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__line_break,
    STATE(15), 3,
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
    ACTIONS(46), 17,
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
  [492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(75), 1,
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
    ACTIONS(46), 17,
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
  [534] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(48), 1,
      sym__line_break,
    STATE(12), 3,
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
    ACTIONS(46), 17,
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
  [643] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym__line_break,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(56), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(92), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    STATE(116), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [683] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(27), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(38), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [712] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym__separator,
    ACTIONS(102), 1,
      sym__whitespace,
    ACTIONS(105), 1,
      sym__line_break,
    STATE(20), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(97), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [743] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(30), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [772] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_ellipses,
    ACTIONS(110), 1,
      sym_indented_ellipses,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(24), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(30), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [801] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_ellipses,
    ACTIONS(115), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(24), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_ellipses,
    ACTIONS(121), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(24), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(24), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [859] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_ellipses,
    ACTIONS(110), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(21), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [917] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [946] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      sym__separator,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(132), 1,
      sym__line_break,
    STATE(29), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(126), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [977] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym__separator,
    ACTIONS(141), 1,
      sym__whitespace,
    ACTIONS(144), 1,
      sym__line_break,
    STATE(29), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(136), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [1008] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_ellipses,
    ACTIONS(110), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(24), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1037] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym__separator,
    ACTIONS(153), 1,
      sym__whitespace,
    ACTIONS(155), 1,
      sym__line_break,
    STATE(20), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(149), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [1068] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_ellipses,
    ACTIONS(110), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(30), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(38), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1097] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_ellipses,
    ACTIONS(159), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(34), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(38), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [1125] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_ellipses,
    ACTIONS(159), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(37), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [1153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_ellipses,
    ACTIONS(159), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(36), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [1181] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_ellipses,
    ACTIONS(159), 1,
      sym_indented_ellipses,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(37), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(30), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [1209] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_ellipses,
    ACTIONS(164), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(37), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(24), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [1237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(56), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1258] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_text_chunk,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(177), 1,
      sym__line_break,
    STATE(45), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(169), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1289] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_test_case_or_task,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      sym__line_break,
    STATE(42), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(181), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1320] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_text_chunk,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(46), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(193), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1351] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_test_case_or_task,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym__line_break,
    STATE(49), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(199), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1382] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_text_chunk,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(46), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(205), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1413] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_text_chunk,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      sym__line_break,
    STATE(41), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(209), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1444] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_text_chunk,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(46), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(215), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1475] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_,
    ACTIONS(224), 1,
      sym_text_chunk,
    ACTIONS(227), 1,
      sym__whitespace,
    ACTIONS(230), 1,
      sym__line_break,
    STATE(46), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(219), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1506] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_test_case_or_task,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      sym__line_break,
    STATE(50), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(235), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1537] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_test_case_or_task,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      sym__line_break,
    STATE(54), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(241), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1568] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 1,
      anon_sym_,
    ACTIONS(252), 1,
      sym_test_case_or_task,
    ACTIONS(255), 1,
      sym__whitespace,
    ACTIONS(258), 1,
      sym__line_break,
    STATE(49), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(247), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1599] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_test_case_or_task,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(201), 1,
      sym__line_break,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    STATE(49), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(241), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1630] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_text_chunk,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 1,
      sym__line_break,
    STATE(43), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(193), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(42), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(42), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1703] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_test_case_or_task,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(201), 1,
      sym__line_break,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
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
  [1734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(56), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1755] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(61), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(116), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(42), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
  [1805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(271), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(273), 1,
      sym__line_break,
    STATE(66), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(269), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1831] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(61), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(116), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1861] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(271), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(277), 1,
      sym__line_break,
    STATE(62), 3,
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
  [1887] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 1,
      aux_sym_settings_section_token1,
    ACTIONS(284), 1,
      aux_sym_variables_section_token1,
    ACTIONS(287), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(290), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(61), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(116), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1917] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(271), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(273), 1,
      sym__line_break,
    STATE(66), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(293), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1943] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(271), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(297), 1,
      sym__line_break,
    STATE(65), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(295), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1969] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(271), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(301), 1,
      sym__line_break,
    STATE(58), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(299), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1995] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(271), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(273), 1,
      sym__line_break,
    STATE(66), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(299), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2021] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(308), 1,
      sym__whitespace,
    ACTIONS(311), 1,
      sym__line_break,
    STATE(66), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(303), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(56), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
  [2067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(316), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(320), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(316), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(324), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(328), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(332), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(336), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(340), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(340), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(332), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(336), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(344), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(320), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(328), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(348), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [2389] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(354), 1,
      sym_text_chunk,
    STATE(81), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
    ACTIONS(350), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [2411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(358), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [2429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(362), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [2447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [2465] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(368), 1,
      sym_text_chunk,
    STATE(69), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
    ACTIONS(364), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_or_task_setting_token1,
      aux_sym_test_case_or_task_setting_token2,
  [2487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [2505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(372), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [2523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym__whitespace,
    ACTIONS(379), 1,
      sym__line_break,
    STATE(92), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    ACTIONS(374), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2545] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(83), 1,
      sym_arguments,
    STATE(142), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2572] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      sym_arguments,
    STATE(139), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2599] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(101), 1,
      sym_arguments,
    STATE(138), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2626] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(77), 1,
      sym_arguments,
    STATE(142), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2653] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(17), 1,
      sym_arguments,
    STATE(138), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2680] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(80), 1,
      sym_arguments,
    STATE(142), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2707] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(76), 1,
      sym_arguments,
    STATE(139), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2734] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(75), 1,
      sym_arguments,
    STATE(139), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym__whitespace,
    ACTIONS(390), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2778] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(87), 1,
      sym_arguments,
    STATE(135), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__whitespace,
    ACTIONS(394), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2822] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(103), 1,
      sym_arguments,
    STATE(138), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2849] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(79), 1,
      sym_arguments,
    STATE(142), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2876] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(72), 1,
      sym_arguments,
    STATE(139), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2903] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(84), 1,
      sym_arguments,
    STATE(135), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2930] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__separator,
    ACTIONS(153), 1,
      sym__whitespace,
    ACTIONS(398), 1,
      sym__line_break,
    STATE(86), 1,
      sym_keyword_definition_body,
    STATE(31), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2952] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__separator,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(87), 1,
      sym_test_case_or_task_definition_body,
    STATE(28), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [2974] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__separator,
    ACTIONS(153), 1,
      sym__whitespace,
    ACTIONS(398), 1,
      sym__line_break,
    STATE(91), 1,
      sym_keyword_definition_body,
    STATE(31), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2996] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      sym_text_chunk,
    ACTIONS(386), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(388), 1,
      anon_sym_AMP_LBRACE,
    STATE(172), 1,
      sym_argument,
    STATE(115), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [3020] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__separator,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(84), 1,
      sym_test_case_or_task_definition_body,
    STATE(28), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [3042] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(402), 1,
      anon_sym_,
    ACTIONS(404), 1,
      sym_text_chunk,
    ACTIONS(406), 1,
      sym__separator,
    ACTIONS(408), 1,
      sym__line_break,
    STATE(114), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [3065] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_,
    ACTIONS(413), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(416), 1,
      sym_text_chunk,
    ACTIONS(419), 1,
      sym__separator,
    ACTIONS(421), 1,
      sym__line_break,
    STATE(114), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [3088] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(402), 1,
      anon_sym_,
    ACTIONS(423), 1,
      sym_text_chunk,
    ACTIONS(425), 1,
      sym__separator,
    ACTIONS(427), 1,
      sym__line_break,
    STATE(113), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(431), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(435), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(439), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(443), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(447), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(451), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(455), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(459), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(419), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(463), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3253] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym__separator,
    ACTIONS(469), 1,
      sym__whitespace,
    ACTIONS(471), 1,
      sym__line_break,
    STATE(112), 1,
      sym__empty_line,
  [3269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__whitespace,
    ACTIONS(473), 1,
      sym__separator,
    ACTIONS(475), 1,
      sym__line_break,
    STATE(109), 1,
      sym__empty_line,
  [3285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym__separator,
    ACTIONS(481), 1,
      sym__line_break,
    ACTIONS(477), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__separator,
    ACTIONS(487), 1,
      sym__line_break,
    ACTIONS(483), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__line_break,
    ACTIONS(81), 2,
      sym__separator,
      sym__whitespace,
  [3324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(491), 1,
      sym__line_break,
    STATE(145), 1,
      aux_sym_arguments_repeat1,
  [3337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(493), 1,
      sym__line_break,
    STATE(141), 1,
      aux_sym_arguments_repeat1,
  [3350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(495), 1,
      sym__line_break,
    STATE(145), 1,
      aux_sym_arguments_repeat1,
  [3363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(497), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
  [3376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(499), 1,
      sym__line_break,
    STATE(145), 1,
      aux_sym_arguments_repeat1,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym__separator,
    ACTIONS(501), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(505), 1,
      sym__line_break,
    STATE(132), 1,
      aux_sym_arguments_repeat1,
  [3413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(507), 1,
      sym__line_break,
    STATE(140), 1,
      aux_sym_arguments_repeat1,
  [3426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(509), 1,
      sym__line_break,
    STATE(145), 1,
      aux_sym_arguments_repeat1,
  [3439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(511), 1,
      sym__line_break,
    STATE(145), 1,
      aux_sym_arguments_repeat1,
  [3452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(513), 1,
      sym__line_break,
    STATE(134), 1,
      aux_sym_arguments_repeat1,
  [3465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(515), 1,
      sym__line_break,
    STATE(144), 1,
      aux_sym_arguments_repeat1,
  [3478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(517), 1,
      sym__line_break,
    STATE(145), 1,
      aux_sym_arguments_repeat1,
  [3491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym__separator,
    ACTIONS(522), 1,
      sym__line_break,
    STATE(145), 1,
      aux_sym_arguments_repeat1,
  [3504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(524), 1,
      sym__line_break,
    STATE(136), 1,
      aux_sym_arguments_repeat1,
  [3517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(526), 1,
      sym_text_chunk,
    STATE(125), 1,
      sym_scalar_variable,
  [3530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(528), 1,
      sym__line_break,
    STATE(150), 1,
      aux_sym_arguments_repeat1,
  [3543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(530), 1,
      sym__line_break,
    STATE(145), 1,
      aux_sym_arguments_repeat1,
  [3556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__separator,
    ACTIONS(532), 1,
      sym__line_break,
    STATE(145), 1,
      aux_sym_arguments_repeat1,
  [3569] = 3,
    ACTIONS(534), 1,
      anon_sym_,
    ACTIONS(536), 1,
      sym_variable_name,
    ACTIONS(538), 1,
      sym_comment,
  [3579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_settings_section_token3,
    ACTIONS(542), 1,
      sym__line_break,
  [3589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(546), 1,
      anon_sym_,
  [3599] = 3,
    ACTIONS(538), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_,
    ACTIONS(550), 1,
      sym_variable_name,
  [3609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    ACTIONS(554), 1,
      anon_sym_,
  [3619] = 3,
    ACTIONS(538), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_,
    ACTIONS(558), 1,
      sym_variable_name,
  [3629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym__separator,
    ACTIONS(562), 1,
      sym__line_break,
  [3639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__separator,
    ACTIONS(566), 1,
      sym__line_break,
  [3649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
    ACTIONS(570), 1,
      anon_sym_,
  [3659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(574), 1,
      sym__line_break,
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
    ACTIONS(578), 1,
      anon_sym_,
  [3679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    ACTIONS(582), 1,
      anon_sym_,
  [3689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym__separator,
    ACTIONS(586), 1,
      sym__line_break,
  [3699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
    ACTIONS(590), 1,
      anon_sym_,
  [3709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      aux_sym_settings_section_token3,
    ACTIONS(594), 1,
      sym__line_break,
  [3719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym__separator,
    ACTIONS(598), 1,
      sym__line_break,
  [3729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym__separator,
    ACTIONS(602), 1,
      sym__line_break,
  [3739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym__separator,
    ACTIONS(606), 1,
      sym__line_break,
  [3749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      aux_sym_settings_section_token3,
    ACTIONS(610), 1,
      sym__line_break,
  [3759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__separator,
    ACTIONS(614), 1,
      sym__line_break,
  [3769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      aux_sym_settings_section_token3,
    ACTIONS(618), 1,
      sym__line_break,
  [3779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym__line_break,
    ACTIONS(620), 1,
      sym__separator,
  [3789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [3796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__line_break,
  [3803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
  [3810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_settings_section_token2,
  [3817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      aux_sym_settings_section_token2,
  [3824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      aux_sym_settings_section_token2,
  [3831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym_settings_section_token2,
  [3838] = 2,
    ACTIONS(538), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_variable_name,
  [3845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
  [3852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__line_break,
  [3859] = 2,
    ACTIONS(538), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_variable_name,
  [3866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
  [3873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_text_chunk,
  [3880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__line_break,
  [3887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__line_break,
  [3894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
  [3901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_test_case_or_task,
  [3908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
  [3915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
  [3922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__separator,
  [3929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__separator,
  [3936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
  [3943] = 2,
    ACTIONS(538), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym_variable_name,
  [3950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__line_break,
  [3957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym__line_break,
  [3964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
  [3971] = 2,
    ACTIONS(538), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_variable_name,
  [3978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym__separator,
  [3985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__line_break,
  [3992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym__line_break,
  [3999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__separator,
  [4006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym__line_break,
  [4013] = 2,
    ACTIONS(538), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_variable_name,
  [4020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__line_break,
  [4027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__line_break,
  [4034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__line_break,
  [4041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
  [4048] = 2,
    ACTIONS(538), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 330,
  [SMALL_STATE(11)] = 372,
  [SMALL_STATE(12)] = 408,
  [SMALL_STATE(13)] = 450,
  [SMALL_STATE(14)] = 492,
  [SMALL_STATE(15)] = 534,
  [SMALL_STATE(16)] = 576,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 712,
  [SMALL_STATE(21)] = 743,
  [SMALL_STATE(22)] = 772,
  [SMALL_STATE(23)] = 801,
  [SMALL_STATE(24)] = 830,
  [SMALL_STATE(25)] = 859,
  [SMALL_STATE(26)] = 888,
  [SMALL_STATE(27)] = 917,
  [SMALL_STATE(28)] = 946,
  [SMALL_STATE(29)] = 977,
  [SMALL_STATE(30)] = 1008,
  [SMALL_STATE(31)] = 1037,
  [SMALL_STATE(32)] = 1068,
  [SMALL_STATE(33)] = 1097,
  [SMALL_STATE(34)] = 1125,
  [SMALL_STATE(35)] = 1153,
  [SMALL_STATE(36)] = 1181,
  [SMALL_STATE(37)] = 1209,
  [SMALL_STATE(38)] = 1237,
  [SMALL_STATE(39)] = 1258,
  [SMALL_STATE(40)] = 1289,
  [SMALL_STATE(41)] = 1320,
  [SMALL_STATE(42)] = 1351,
  [SMALL_STATE(43)] = 1382,
  [SMALL_STATE(44)] = 1413,
  [SMALL_STATE(45)] = 1444,
  [SMALL_STATE(46)] = 1475,
  [SMALL_STATE(47)] = 1506,
  [SMALL_STATE(48)] = 1537,
  [SMALL_STATE(49)] = 1568,
  [SMALL_STATE(50)] = 1599,
  [SMALL_STATE(51)] = 1630,
  [SMALL_STATE(52)] = 1661,
  [SMALL_STATE(53)] = 1682,
  [SMALL_STATE(54)] = 1703,
  [SMALL_STATE(55)] = 1734,
  [SMALL_STATE(56)] = 1755,
  [SMALL_STATE(57)] = 1785,
  [SMALL_STATE(58)] = 1805,
  [SMALL_STATE(59)] = 1831,
  [SMALL_STATE(60)] = 1861,
  [SMALL_STATE(61)] = 1887,
  [SMALL_STATE(62)] = 1917,
  [SMALL_STATE(63)] = 1943,
  [SMALL_STATE(64)] = 1969,
  [SMALL_STATE(65)] = 1995,
  [SMALL_STATE(66)] = 2021,
  [SMALL_STATE(67)] = 2047,
  [SMALL_STATE(68)] = 2067,
  [SMALL_STATE(69)] = 2086,
  [SMALL_STATE(70)] = 2105,
  [SMALL_STATE(71)] = 2124,
  [SMALL_STATE(72)] = 2143,
  [SMALL_STATE(73)] = 2162,
  [SMALL_STATE(74)] = 2181,
  [SMALL_STATE(75)] = 2200,
  [SMALL_STATE(76)] = 2219,
  [SMALL_STATE(77)] = 2238,
  [SMALL_STATE(78)] = 2257,
  [SMALL_STATE(79)] = 2276,
  [SMALL_STATE(80)] = 2295,
  [SMALL_STATE(81)] = 2314,
  [SMALL_STATE(82)] = 2333,
  [SMALL_STATE(83)] = 2352,
  [SMALL_STATE(84)] = 2371,
  [SMALL_STATE(85)] = 2389,
  [SMALL_STATE(86)] = 2411,
  [SMALL_STATE(87)] = 2429,
  [SMALL_STATE(88)] = 2447,
  [SMALL_STATE(89)] = 2465,
  [SMALL_STATE(90)] = 2487,
  [SMALL_STATE(91)] = 2505,
  [SMALL_STATE(92)] = 2523,
  [SMALL_STATE(93)] = 2545,
  [SMALL_STATE(94)] = 2572,
  [SMALL_STATE(95)] = 2599,
  [SMALL_STATE(96)] = 2626,
  [SMALL_STATE(97)] = 2653,
  [SMALL_STATE(98)] = 2680,
  [SMALL_STATE(99)] = 2707,
  [SMALL_STATE(100)] = 2734,
  [SMALL_STATE(101)] = 2761,
  [SMALL_STATE(102)] = 2778,
  [SMALL_STATE(103)] = 2805,
  [SMALL_STATE(104)] = 2822,
  [SMALL_STATE(105)] = 2849,
  [SMALL_STATE(106)] = 2876,
  [SMALL_STATE(107)] = 2903,
  [SMALL_STATE(108)] = 2930,
  [SMALL_STATE(109)] = 2952,
  [SMALL_STATE(110)] = 2974,
  [SMALL_STATE(111)] = 2996,
  [SMALL_STATE(112)] = 3020,
  [SMALL_STATE(113)] = 3042,
  [SMALL_STATE(114)] = 3065,
  [SMALL_STATE(115)] = 3088,
  [SMALL_STATE(116)] = 3111,
  [SMALL_STATE(117)] = 3123,
  [SMALL_STATE(118)] = 3136,
  [SMALL_STATE(119)] = 3149,
  [SMALL_STATE(120)] = 3162,
  [SMALL_STATE(121)] = 3175,
  [SMALL_STATE(122)] = 3188,
  [SMALL_STATE(123)] = 3201,
  [SMALL_STATE(124)] = 3214,
  [SMALL_STATE(125)] = 3227,
  [SMALL_STATE(126)] = 3240,
  [SMALL_STATE(127)] = 3253,
  [SMALL_STATE(128)] = 3269,
  [SMALL_STATE(129)] = 3285,
  [SMALL_STATE(130)] = 3299,
  [SMALL_STATE(131)] = 3313,
  [SMALL_STATE(132)] = 3324,
  [SMALL_STATE(133)] = 3337,
  [SMALL_STATE(134)] = 3350,
  [SMALL_STATE(135)] = 3363,
  [SMALL_STATE(136)] = 3376,
  [SMALL_STATE(137)] = 3389,
  [SMALL_STATE(138)] = 3400,
  [SMALL_STATE(139)] = 3413,
  [SMALL_STATE(140)] = 3426,
  [SMALL_STATE(141)] = 3439,
  [SMALL_STATE(142)] = 3452,
  [SMALL_STATE(143)] = 3465,
  [SMALL_STATE(144)] = 3478,
  [SMALL_STATE(145)] = 3491,
  [SMALL_STATE(146)] = 3504,
  [SMALL_STATE(147)] = 3517,
  [SMALL_STATE(148)] = 3530,
  [SMALL_STATE(149)] = 3543,
  [SMALL_STATE(150)] = 3556,
  [SMALL_STATE(151)] = 3569,
  [SMALL_STATE(152)] = 3579,
  [SMALL_STATE(153)] = 3589,
  [SMALL_STATE(154)] = 3599,
  [SMALL_STATE(155)] = 3609,
  [SMALL_STATE(156)] = 3619,
  [SMALL_STATE(157)] = 3629,
  [SMALL_STATE(158)] = 3639,
  [SMALL_STATE(159)] = 3649,
  [SMALL_STATE(160)] = 3659,
  [SMALL_STATE(161)] = 3669,
  [SMALL_STATE(162)] = 3679,
  [SMALL_STATE(163)] = 3689,
  [SMALL_STATE(164)] = 3699,
  [SMALL_STATE(165)] = 3709,
  [SMALL_STATE(166)] = 3719,
  [SMALL_STATE(167)] = 3729,
  [SMALL_STATE(168)] = 3739,
  [SMALL_STATE(169)] = 3749,
  [SMALL_STATE(170)] = 3759,
  [SMALL_STATE(171)] = 3769,
  [SMALL_STATE(172)] = 3779,
  [SMALL_STATE(173)] = 3789,
  [SMALL_STATE(174)] = 3796,
  [SMALL_STATE(175)] = 3803,
  [SMALL_STATE(176)] = 3810,
  [SMALL_STATE(177)] = 3817,
  [SMALL_STATE(178)] = 3824,
  [SMALL_STATE(179)] = 3831,
  [SMALL_STATE(180)] = 3838,
  [SMALL_STATE(181)] = 3845,
  [SMALL_STATE(182)] = 3852,
  [SMALL_STATE(183)] = 3859,
  [SMALL_STATE(184)] = 3866,
  [SMALL_STATE(185)] = 3873,
  [SMALL_STATE(186)] = 3880,
  [SMALL_STATE(187)] = 3887,
  [SMALL_STATE(188)] = 3894,
  [SMALL_STATE(189)] = 3901,
  [SMALL_STATE(190)] = 3908,
  [SMALL_STATE(191)] = 3915,
  [SMALL_STATE(192)] = 3922,
  [SMALL_STATE(193)] = 3929,
  [SMALL_STATE(194)] = 3936,
  [SMALL_STATE(195)] = 3943,
  [SMALL_STATE(196)] = 3950,
  [SMALL_STATE(197)] = 3957,
  [SMALL_STATE(198)] = 3964,
  [SMALL_STATE(199)] = 3971,
  [SMALL_STATE(200)] = 3978,
  [SMALL_STATE(201)] = 3985,
  [SMALL_STATE(202)] = 3992,
  [SMALL_STATE(203)] = 3999,
  [SMALL_STATE(204)] = 4006,
  [SMALL_STATE(205)] = 4013,
  [SMALL_STATE(206)] = 4020,
  [SMALL_STATE(207)] = 4027,
  [SMALL_STATE(208)] = 4034,
  [SMALL_STATE(209)] = 4041,
  [SMALL_STATE(210)] = 4048,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(146),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 6),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(192),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(182),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(85),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(207),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(20),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(133),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(133),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(148),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(148),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(89),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(208),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(29),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(143),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(143),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 6),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(185),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(187),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(186),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(46),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(189),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(128),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(197),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(49),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(157),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(166),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(167),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(168),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(183),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(182),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(66),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_setting, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_setting, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 4),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(147),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(151),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(114),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [636] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
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
