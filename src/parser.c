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
#define STATE_COUNT 219
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 1
#define TOKEN_COUNT 51
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
  anon_sym_RETURN = 43,
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
  sym_return_statement = 71,
  sym_list_variable = 72,
  sym_scalar_variable = 73,
  sym_dictionary_variable = 74,
  sym__empty_line = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym_source_file_repeat2 = 77,
  aux_sym_settings_section_repeat1 = 78,
  aux_sym_variables_section_repeat1 = 79,
  aux_sym_keywords_section_repeat1 = 80,
  aux_sym_keyword_definition_body_repeat1 = 81,
  aux_sym_test_cases_or_tasks_section_repeat1 = 82,
  aux_sym_test_case_or_task_definition_body_repeat1 = 83,
  aux_sym_arguments_repeat1 = 84,
  aux_sym_arguments_repeat2 = 85,
  aux_sym_argument_repeat1 = 86,
  alias_sym_keyword = 87,
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
  [anon_sym_RETURN] = "RETURN",
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
  [sym_return_statement] = "return_statement",
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
  [anon_sym_RETURN] = anon_sym_RETURN,
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
  [sym_return_statement] = sym_return_statement,
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
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
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
  [sym_return_statement] = {
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 6,
  [23] = 5,
  [24] = 2,
  [25] = 3,
  [26] = 4,
  [27] = 3,
  [28] = 2,
  [29] = 4,
  [30] = 5,
  [31] = 6,
  [32] = 32,
  [33] = 2,
  [34] = 3,
  [35] = 4,
  [36] = 5,
  [37] = 6,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 15,
  [46] = 46,
  [47] = 47,
  [48] = 14,
  [49] = 49,
  [50] = 15,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 14,
  [55] = 55,
  [56] = 14,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 15,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 16,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 70,
  [80] = 16,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 84,
  [87] = 82,
  [88] = 73,
  [89] = 78,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 16,
  [94] = 16,
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
  [109] = 109,
  [110] = 101,
  [111] = 106,
  [112] = 99,
  [113] = 100,
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
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 134,
  [137] = 137,
  [138] = 138,
  [139] = 138,
  [140] = 16,
  [141] = 141,
  [142] = 137,
  [143] = 143,
  [144] = 143,
  [145] = 138,
  [146] = 143,
  [147] = 147,
  [148] = 147,
  [149] = 149,
  [150] = 147,
  [151] = 138,
  [152] = 137,
  [153] = 143,
  [154] = 154,
  [155] = 147,
  [156] = 137,
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
  [167] = 162,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 159,
  [172] = 172,
  [173] = 173,
  [174] = 161,
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
  [192] = 188,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 188,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 188,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 188,
  [216] = 188,
  [217] = 198,
  [218] = 189,
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
      if (lookahead == ' ') ADVANCE(510);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '=') ADVANCE(274);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(510);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '=') ADVANCE(273);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(510);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(388);
      if (lookahead == 'R') ADVANCE(383);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(510);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(388);
      if (lookahead == '&') ADVANCE(389);
      if (lookahead == '@') ADVANCE(390);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(505);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
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
      if (lookahead == '$') ADVANCE(388);
      if (lookahead == 'R') ADVANCE(383);
      if (lookahead == '[') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
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
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(505);
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
          lookahead != '@') ADVANCE(402);
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
          lookahead != '@') ADVANCE(402);
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
          lookahead != '@') ADVANCE(402);
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
          lookahead != '@') ADVANCE(402);
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
          lookahead != '@') ADVANCE(402);
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
          lookahead != '@') ADVANCE(402);
      END_STATE();
    case 60:
      if (lookahead == ']') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(402);
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
          lookahead != '@') ADVANCE(402);
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
          lookahead != '@') ADVANCE(402);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(402);
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
          lookahead != '@') ADVANCE(402);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(402);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(402);
      END_STATE();
    case 67:
      if (lookahead == '{') ADVANCE(271);
      END_STATE();
    case 68:
      if (lookahead == '{') ADVANCE(402);
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
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(402);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      END_STATE();
    case 228:
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(402);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(396);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(392);
      END_STATE();
    case 229:
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(398);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      END_STATE();
    case 230:
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(402);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 231:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(402);
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
          lookahead != '\n') ADVANCE(508);
      END_STATE();
    case 234:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(402);
      END_STATE();
    case 235:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(513);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(511);
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
      if (lookahead == '\t') ADVANCE(513);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(279);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 237:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(514);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 238:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(514);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 239:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(510);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 240:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(510);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 241:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(509);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 242:
      if (eof) ADVANCE(243);
      if (lookahead == '\t') ADVANCE(509);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '.') ADVANCE(11);
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
          lookahead != '@') ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead == ' ') ADVANCE(510);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(514);
      if (lookahead == ' ') ADVANCE(513);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(514);
      if (lookahead == ' ') ADVANCE(510);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(514);
      if (lookahead == ' ') ADVANCE(509);
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
          lookahead == ' ') ADVANCE(514);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(505);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(402);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '*') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead != 0) ADVANCE(484);
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
          lookahead != '@') ADVANCE(484);
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
      if (lookahead == 'E') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'N') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'R') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'T') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'U') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '{') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(484);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(430);
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
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(484);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(430);
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
      if (!sym_text_chunk_character_set_6(lookahead)) ADVANCE(484);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
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
      if (!sym_text_chunk_character_set_7(lookahead)) ADVANCE(484);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(444);
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
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(484);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(428);
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
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(484);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(474);
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
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(484);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(441);
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
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(484);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(456);
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
          lookahead != 'e') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
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
          lookahead != 'e') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
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
          lookahead != 'e') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
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
          lookahead != 'e') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
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
          lookahead != 'e') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
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
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
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
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
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
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
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
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
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
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
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
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(484);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(452);
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
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(484);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(475);
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
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(484);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(457);
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
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(484);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(433);
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
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(484);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(480);
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
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(484);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
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
          lookahead != 'K' &&
          lookahead != 'k') ADVANCE(484);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(453);
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
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(484);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(419);
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
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(484);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
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
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(484);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(414);
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
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(484);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(413);
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
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(484);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(418);
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
          lookahead != 'n') ADVANCE(484);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(423);
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
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(484);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(493);
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
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(484);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(495);
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
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(484);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(467);
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
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(484);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(496);
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
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(484);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
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
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(484);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(408);
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
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(484);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
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
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(484);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
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
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(484);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
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
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(484);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
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
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(484);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(429);
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
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(484);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(491);
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
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(484);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(425);
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
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(484);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
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
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(484);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
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
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(484);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(422);
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
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(484);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
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
          lookahead != 's') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(427);
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
          lookahead != 's') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(489);
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
          lookahead != 's') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
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
          lookahead != 's') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(461);
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
          lookahead != 's') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(497);
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
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(498);
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
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(499);
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
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(500);
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
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(501);
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
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
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
          lookahead != 't') ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(486);
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
          lookahead != 't') ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
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
          lookahead != 't') ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
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
          lookahead != 't') ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
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
          lookahead != 't') ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
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
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(492);
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
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(483);
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
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(472);
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
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
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
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(416);
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
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(484);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(445);
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
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(484);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(450);
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
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(484);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(466);
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
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(484);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(431);
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
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(484);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
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
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(484);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(440);
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
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(484);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(434);
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
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(484);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(476);
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
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(484);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 480:
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
          lookahead != 'a') ADVANCE(484);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 481:
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
          lookahead != 'a') ADVANCE(484);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 482:
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
          lookahead != 'a') ADVANCE(484);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 483:
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
          lookahead != 'a') ADVANCE(484);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(228);
      if (!sym_text_chunk_character_set_8(lookahead)) ADVANCE(484);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(411);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(412);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(229);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(439);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(227);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(68);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ']') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == ']') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == ']') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ']') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '*') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(505);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(508);
      if (lookahead != 0) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(505);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      if (lookahead == '{') ADVANCE(402);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      if (lookahead == '{') ADVANCE(402);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(514);
      if (lookahead == ' ') ADVANCE(513);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(514);
      if (lookahead == ' ') ADVANCE(510);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(515);
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
  [20] = {.lex_state = 240},
  [21] = {.lex_state = 239},
  [22] = {.lex_state = 241},
  [23] = {.lex_state = 241},
  [24] = {.lex_state = 242},
  [25] = {.lex_state = 242},
  [26] = {.lex_state = 241},
  [27] = {.lex_state = 241},
  [28] = {.lex_state = 241},
  [29] = {.lex_state = 242},
  [30] = {.lex_state = 242},
  [31] = {.lex_state = 242},
  [32] = {.lex_state = 240},
  [33] = {.lex_state = 236},
  [34] = {.lex_state = 236},
  [35] = {.lex_state = 236},
  [36] = {.lex_state = 236},
  [37] = {.lex_state = 236},
  [38] = {.lex_state = 238},
  [39] = {.lex_state = 237},
  [40] = {.lex_state = 238},
  [41] = {.lex_state = 237},
  [42] = {.lex_state = 238},
  [43] = {.lex_state = 237},
  [44] = {.lex_state = 237},
  [45] = {.lex_state = 241},
  [46] = {.lex_state = 237},
  [47] = {.lex_state = 238},
  [48] = {.lex_state = 242},
  [49] = {.lex_state = 237},
  [50] = {.lex_state = 242},
  [51] = {.lex_state = 238},
  [52] = {.lex_state = 238},
  [53] = {.lex_state = 237},
  [54] = {.lex_state = 241},
  [55] = {.lex_state = 238},
  [56] = {.lex_state = 236},
  [57] = {.lex_state = 235},
  [58] = {.lex_state = 235},
  [59] = {.lex_state = 235},
  [60] = {.lex_state = 235},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 235},
  [63] = {.lex_state = 235},
  [64] = {.lex_state = 235},
  [65] = {.lex_state = 235},
  [66] = {.lex_state = 235},
  [67] = {.lex_state = 236},
  [68] = {.lex_state = 235},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 240},
  [71] = {.lex_state = 240},
  [72] = {.lex_state = 240},
  [73] = {.lex_state = 239},
  [74] = {.lex_state = 240},
  [75] = {.lex_state = 239},
  [76] = {.lex_state = 239},
  [77] = {.lex_state = 240},
  [78] = {.lex_state = 239},
  [79] = {.lex_state = 239},
  [80] = {.lex_state = 239},
  [81] = {.lex_state = 239},
  [82] = {.lex_state = 239},
  [83] = {.lex_state = 240},
  [84] = {.lex_state = 240},
  [85] = {.lex_state = 239},
  [86] = {.lex_state = 239},
  [87] = {.lex_state = 240},
  [88] = {.lex_state = 240},
  [89] = {.lex_state = 240},
  [90] = {.lex_state = 238},
  [91] = {.lex_state = 238},
  [92] = {.lex_state = 237},
  [93] = {.lex_state = 238},
  [94] = {.lex_state = 237},
  [95] = {.lex_state = 235},
  [96] = {.lex_state = 237},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 235},
  [108] = {.lex_state = 235},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 235},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 239},
  [138] = {.lex_state = 239},
  [139] = {.lex_state = 239},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 239},
  [143] = {.lex_state = 239},
  [144] = {.lex_state = 239},
  [145] = {.lex_state = 239},
  [146] = {.lex_state = 239},
  [147] = {.lex_state = 239},
  [148] = {.lex_state = 239},
  [149] = {.lex_state = 239},
  [150] = {.lex_state = 239},
  [151] = {.lex_state = 239},
  [152] = {.lex_state = 239},
  [153] = {.lex_state = 239},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 239},
  [156] = {.lex_state = 239},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 239},
  [159] = {.lex_state = 239},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 239},
  [162] = {.lex_state = 239},
  [163] = {.lex_state = 239},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 239},
  [168] = {.lex_state = 239},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 239},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 239},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 239},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 239},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 26},
  [182] = {.lex_state = 235},
  [183] = {.lex_state = 24},
  [184] = {.lex_state = 24},
  [185] = {.lex_state = 24},
  [186] = {.lex_state = 235},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 235},
  [189] = {.lex_state = 27},
  [190] = {.lex_state = 24},
  [191] = {.lex_state = 239},
  [192] = {.lex_state = 235},
  [193] = {.lex_state = 235},
  [194] = {.lex_state = 27},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 235},
  [197] = {.lex_state = 27},
  [198] = {.lex_state = 235},
  [199] = {.lex_state = 27},
  [200] = {.lex_state = 235},
  [201] = {.lex_state = 235},
  [202] = {.lex_state = 235},
  [203] = {.lex_state = 235},
  [204] = {.lex_state = 235},
  [205] = {.lex_state = 235},
  [206] = {.lex_state = 235},
  [207] = {.lex_state = 235},
  [208] = {.lex_state = 235},
  [209] = {.lex_state = 239},
  [210] = {.lex_state = 235},
  [211] = {.lex_state = 239},
  [212] = {.lex_state = 27},
  [213] = {.lex_state = 239},
  [214] = {.lex_state = 235},
  [215] = {.lex_state = 235},
  [216] = {.lex_state = 235},
  [217] = {.lex_state = 235},
  [218] = {.lex_state = 27},
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
    [sym_source_file] = STATE(187),
    [sym_section] = STATE(63),
    [sym_settings_section] = STATE(122),
    [sym_variables_section] = STATE(122),
    [sym_keywords_section] = STATE(122),
    [sym_test_cases_or_tasks_section] = STATE(122),
    [sym__empty_line] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_source_file_repeat2] = STATE(63),
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
    ACTIONS(23), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(3), 2,
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
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(5), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 25,
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
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 25,
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
    ACTIONS(31), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(5), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 25,
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
    ACTIONS(21), 2,
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
  [210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(44), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(42), 17,
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
    ACTIONS(51), 1,
      sym__whitespace,
    ACTIONS(54), 1,
      sym__line_break,
    STATE(8), 3,
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
    ACTIONS(48), 17,
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
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__line_break,
    STATE(7), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(42), 17,
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
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(44), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(42), 17,
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
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(44), 1,
      sym__line_break,
    STATE(8), 3,
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
    ACTIONS(42), 17,
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
  [420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__line_break,
    STATE(10), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(42), 17,
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
  [462] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__line_break,
    STATE(11), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(67), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(42), 17,
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
  [504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__whitespace,
    ACTIONS(71), 27,
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
    STATE(60), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(95), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    STATE(122), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [683] = 7,
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
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(93), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [714] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(110), 1,
      sym__whitespace,
    ACTIONS(112), 1,
      sym__line_break,
    STATE(32), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(106), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [745] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      sym__separator,
    ACTIONS(120), 1,
      sym__whitespace,
    ACTIONS(122), 1,
      sym__line_break,
    STATE(19), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(116), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [776] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_ellipses,
    ACTIONS(126), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(23), 2,
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
  [805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_ellipses,
    ACTIONS(131), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
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
  [834] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_ellipses,
    ACTIONS(136), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(25), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [863] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_ellipses,
    ACTIONS(136), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(30), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [892] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_ellipses,
    ACTIONS(126), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [921] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_ellipses,
    ACTIONS(126), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [950] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_ellipses,
    ACTIONS(126), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(27), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [979] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_ellipses,
    ACTIONS(136), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(31), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1008] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_ellipses,
    ACTIONS(141), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(30), 2,
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
  [1037] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_ellipses,
    ACTIONS(136), 1,
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
  [1066] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      sym__separator,
    ACTIONS(151), 1,
      sym__whitespace,
    ACTIONS(154), 1,
      sym__line_break,
    STATE(32), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(146), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [1097] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_ellipses,
    ACTIONS(159), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(34), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 8,
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
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(36), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 8,
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
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(37), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 8,
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
    ACTIONS(161), 1,
      sym_ellipses,
    ACTIONS(164), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
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
  [1209] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_ellipses,
    ACTIONS(159), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(36), 2,
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
  [1237] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(177), 1,
      sym__line_break,
    STATE(42), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(169), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1268] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_text_chunk,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      sym__line_break,
    STATE(49), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(181), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1299] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(55), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(193), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1330] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_text_chunk,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      sym__line_break,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(49), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(199), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1361] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(55), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(203), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1392] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_text_chunk,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      sym__line_break,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(49), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(207), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1423] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_text_chunk,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym__line_break,
    STATE(41), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(207), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(77), 10,
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
  [1475] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_text_chunk,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      sym__line_break,
    STATE(43), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(213), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1506] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(55), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(169), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(73), 10,
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
  [1558] = 8,
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
    STATE(49), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(219), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(77), 10,
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
  [1610] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      sym__line_break,
    STATE(47), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(235), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1641] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      sym__line_break,
    STATE(40), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(241), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1672] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym_text_chunk,
    ACTIONS(187), 1,
      sym__whitespace,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 1,
      sym__line_break,
    STATE(39), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(247), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(73), 10,
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
  [1724] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 1,
      anon_sym_,
    ACTIONS(258), 1,
      sym_test_case_or_task,
    ACTIONS(261), 1,
      sym__whitespace,
    ACTIONS(264), 1,
      sym__line_break,
    STATE(55), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(253), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(73), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
  [1775] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(269), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(271), 1,
      sym__line_break,
    STATE(65), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(267), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1801] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(269), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(275), 1,
      sym__line_break,
    STATE(62), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(273), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1827] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 1,
      aux_sym_settings_section_token1,
    ACTIONS(282), 1,
      aux_sym_variables_section_token1,
    ACTIONS(285), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(288), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(59), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(122), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1857] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(59), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(122), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1887] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(297), 1,
      sym_text_chunk,
    ACTIONS(299), 1,
      anon_sym_RETURN,
    STATE(88), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(293), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_or_task_setting_token1,
      aux_sym_test_case_or_task_setting_token2,
  [1913] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(269), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(303), 1,
      sym__line_break,
    STATE(68), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(301), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1939] = 8,
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
    STATE(59), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(122), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1969] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(269), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(307), 1,
      sym__line_break,
    STATE(66), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(305), 6,
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
    ACTIONS(269), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(303), 1,
      sym__line_break,
    STATE(68), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(305), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2021] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(269), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(303), 1,
      sym__line_break,
    STATE(68), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(309), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2047] = 3,
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
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
  [2067] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(316), 1,
      sym__whitespace,
    ACTIONS(319), 1,
      sym__line_break,
    STATE(68), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(311), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2093] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(326), 1,
      sym_text_chunk,
    ACTIONS(328), 1,
      anon_sym_RETURN,
    STATE(73), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(322), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [2119] = 3,
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
  [2138] = 3,
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
  [2157] = 3,
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
  [2176] = 3,
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
  [2195] = 3,
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
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2214] = 3,
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
  [2233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(348), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(348), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(352), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2290] = 3,
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
  [2309] = 3,
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
  [2328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(356), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(360), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(364), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(368), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(364), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(368), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(360), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2461] = 3,
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
  [2480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(352), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2499] = 3,
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
      sym_test_case_or_task,
      sym__whitespace,
  [2517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(376), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [2535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(380), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [2553] = 3,
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
  [2571] = 3,
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
  [2589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__whitespace,
    ACTIONS(387), 1,
      sym__line_break,
    STATE(95), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    ACTIONS(382), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(392), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [2629] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(90), 1,
      sym_arguments,
    STATE(142), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2656] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(17), 1,
      sym_arguments,
    STATE(156), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2683] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(82), 1,
      sym_arguments,
    STATE(137), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2710] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(79), 1,
      sym_arguments,
    STATE(137), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2737] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(74), 1,
      sym_arguments,
    STATE(152), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2764] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(107), 1,
      sym_arguments,
    STATE(156), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2791] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(108), 1,
      sym_arguments,
    STATE(156), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2818] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(91), 1,
      sym_arguments,
    STATE(142), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2845] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(81), 1,
      sym_arguments,
    STATE(137), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2872] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(77), 1,
      sym_arguments,
    STATE(152), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__whitespace,
    ACTIONS(402), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym__whitespace,
    ACTIONS(406), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2933] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(72), 1,
      sym_arguments,
    STATE(152), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2960] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(75), 1,
      sym_arguments,
    STATE(137), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [2987] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(76), 1,
      sym_arguments,
    STATE(137), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [3014] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(87), 1,
      sym_arguments,
    STATE(152), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [3041] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(70), 1,
      sym_arguments,
    STATE(152), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [3068] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 1,
      sym_text_chunk,
    ACTIONS(398), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(400), 1,
      anon_sym_AMP_LBRACE,
    STATE(168), 1,
      sym_argument,
    STATE(120), 3,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
  [3092] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__separator,
    ACTIONS(120), 1,
      sym__whitespace,
    ACTIONS(410), 1,
      sym__line_break,
    STATE(92), 1,
      sym_keyword_definition_body,
    STATE(21), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [3114] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(110), 1,
      sym__whitespace,
    ACTIONS(412), 1,
      sym__line_break,
    STATE(91), 1,
      sym_test_case_or_task_definition_body,
    STATE(20), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [3136] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__separator,
    ACTIONS(120), 1,
      sym__whitespace,
    ACTIONS(410), 1,
      sym__line_break,
    STATE(96), 1,
      sym_keyword_definition_body,
    STATE(21), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [3158] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(110), 1,
      sym__whitespace,
    ACTIONS(412), 1,
      sym__line_break,
    STATE(90), 1,
      sym_test_case_or_task_definition_body,
    STATE(20), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [3180] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_,
    ACTIONS(417), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(420), 1,
      sym_text_chunk,
    ACTIONS(423), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(119), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [3203] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(427), 1,
      anon_sym_,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      sym__separator,
    ACTIONS(433), 1,
      sym__line_break,
    STATE(121), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [3226] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(427), 1,
      anon_sym_,
    ACTIONS(435), 1,
      sym_text_chunk,
    ACTIONS(437), 1,
      sym__separator,
    ACTIONS(439), 1,
      sym__line_break,
    STATE(119), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [3249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(443), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(447), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(451), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(455), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(459), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(423), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(463), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(467), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(471), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(475), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym__separator,
    ACTIONS(481), 1,
      sym__whitespace,
    ACTIONS(483), 1,
      sym__line_break,
    STATE(118), 1,
      sym__empty_line,
  [3407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym__separator,
    ACTIONS(489), 1,
      sym__line_break,
    ACTIONS(485), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__whitespace,
    ACTIONS(491), 1,
      sym__separator,
    ACTIONS(493), 1,
      sym__line_break,
    STATE(116), 1,
      sym__empty_line,
  [3437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym__separator,
    ACTIONS(499), 1,
      sym__line_break,
    ACTIONS(495), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(503), 1,
      sym__line_break,
    STATE(143), 1,
      aux_sym_arguments_repeat1,
  [3464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(505), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
  [3477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(507), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
  [3490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__line_break,
    ACTIONS(81), 2,
      sym__separator,
      sym__whitespace,
  [3501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(509), 1,
      sym_text_chunk,
    STATE(128), 1,
      sym_scalar_variable,
  [3514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(511), 1,
      sym__line_break,
    STATE(144), 1,
      aux_sym_arguments_repeat1,
  [3527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(513), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
  [3540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(515), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
  [3553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(517), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
  [3566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(519), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
  [3579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(521), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
  [3592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(523), 1,
      sym__line_break,
    STATE(138), 1,
      aux_sym_arguments_repeat1,
  [3605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(528), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
  [3618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(530), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
  [3631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(532), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
  [3644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(534), 1,
      sym__line_break,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
  [3657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(536), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
  [3670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym__separator,
    ACTIONS(538), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(542), 1,
      sym__line_break,
    STATE(145), 1,
      aux_sym_arguments_repeat1,
  [3694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(544), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3707] = 3,
    ACTIONS(546), 1,
      anon_sym_,
    ACTIONS(548), 1,
      sym_variable_name,
    ACTIONS(550), 1,
      sym_comment,
  [3717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym__separator,
    ACTIONS(554), 1,
      sym__line_break,
  [3727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym__separator,
    ACTIONS(558), 1,
      sym__line_break,
  [3737] = 3,
    ACTIONS(550), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_,
    ACTIONS(562), 1,
      sym_variable_name,
  [3747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__separator,
    ACTIONS(566), 1,
      sym__line_break,
  [3757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__separator,
    ACTIONS(570), 1,
      sym__line_break,
  [3767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(574), 1,
      sym__line_break,
  [3777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
    ACTIONS(578), 1,
      anon_sym_,
  [3787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    ACTIONS(582), 1,
      anon_sym_,
  [3797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    ACTIONS(586), 1,
      anon_sym_,
  [3807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym__separator,
    ACTIONS(590), 1,
      sym__line_break,
  [3817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__line_break,
    ACTIONS(592), 1,
      sym__separator,
  [3827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    ACTIONS(596), 1,
      anon_sym_,
  [3837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(600), 1,
      anon_sym_,
  [3847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym__separator,
    ACTIONS(604), 1,
      sym__line_break,
  [3857] = 3,
    ACTIONS(550), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_,
    ACTIONS(608), 1,
      sym_variable_name,
  [3867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym_settings_section_token3,
    ACTIONS(612), 1,
      sym__line_break,
  [3877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym__separator,
    ACTIONS(616), 1,
      sym__line_break,
  [3887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    ACTIONS(620), 1,
      anon_sym_,
  [3897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      aux_sym_settings_section_token3,
    ACTIONS(624), 1,
      sym__line_break,
  [3907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(628), 1,
      sym__line_break,
  [3917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      aux_sym_settings_section_token3,
    ACTIONS(632), 1,
      sym__line_break,
  [3927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym__separator,
    ACTIONS(636), 1,
      sym__line_break,
  [3937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      aux_sym_settings_section_token3,
    ACTIONS(640), 1,
      sym__line_break,
  [3947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_test_case_or_task,
  [3954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym__line_break,
  [3961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      aux_sym_settings_section_token2,
  [3968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      aux_sym_settings_section_token2,
  [3975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      aux_sym_settings_section_token2,
  [3982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
  [3989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
  [3996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__line_break,
  [4003] = 2,
    ACTIONS(550), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_variable_name,
  [4010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      aux_sym_settings_section_token2,
  [4017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__separator,
  [4024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym__line_break,
  [4031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
  [4038] = 2,
    ACTIONS(550), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_variable_name,
  [4045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_text_chunk,
  [4052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__line_break,
  [4059] = 2,
    ACTIONS(550), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_variable_name,
  [4066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
  [4073] = 2,
    ACTIONS(550), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_variable_name,
  [4080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
  [4087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
  [4094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__line_break,
  [4101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
  [4108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
  [4115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__line_break,
  [4122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__line_break,
  [4129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
  [4136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym__line_break,
  [4143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__separator,
  [4150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__line_break,
  [4157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__separator,
  [4164] = 2,
    ACTIONS(550), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_variable_name,
  [4171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__separator,
  [4178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym__line_break,
  [4185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__line_break,
  [4192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym__line_break,
  [4199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
  [4206] = 2,
    ACTIONS(550), 1,
      sym_comment,
    ACTIONS(710), 1,
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
  [SMALL_STATE(13)] = 462,
  [SMALL_STATE(14)] = 504,
  [SMALL_STATE(15)] = 540,
  [SMALL_STATE(16)] = 576,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 714,
  [SMALL_STATE(21)] = 745,
  [SMALL_STATE(22)] = 776,
  [SMALL_STATE(23)] = 805,
  [SMALL_STATE(24)] = 834,
  [SMALL_STATE(25)] = 863,
  [SMALL_STATE(26)] = 892,
  [SMALL_STATE(27)] = 921,
  [SMALL_STATE(28)] = 950,
  [SMALL_STATE(29)] = 979,
  [SMALL_STATE(30)] = 1008,
  [SMALL_STATE(31)] = 1037,
  [SMALL_STATE(32)] = 1066,
  [SMALL_STATE(33)] = 1097,
  [SMALL_STATE(34)] = 1125,
  [SMALL_STATE(35)] = 1153,
  [SMALL_STATE(36)] = 1181,
  [SMALL_STATE(37)] = 1209,
  [SMALL_STATE(38)] = 1237,
  [SMALL_STATE(39)] = 1268,
  [SMALL_STATE(40)] = 1299,
  [SMALL_STATE(41)] = 1330,
  [SMALL_STATE(42)] = 1361,
  [SMALL_STATE(43)] = 1392,
  [SMALL_STATE(44)] = 1423,
  [SMALL_STATE(45)] = 1454,
  [SMALL_STATE(46)] = 1475,
  [SMALL_STATE(47)] = 1506,
  [SMALL_STATE(48)] = 1537,
  [SMALL_STATE(49)] = 1558,
  [SMALL_STATE(50)] = 1589,
  [SMALL_STATE(51)] = 1610,
  [SMALL_STATE(52)] = 1641,
  [SMALL_STATE(53)] = 1672,
  [SMALL_STATE(54)] = 1703,
  [SMALL_STATE(55)] = 1724,
  [SMALL_STATE(56)] = 1755,
  [SMALL_STATE(57)] = 1775,
  [SMALL_STATE(58)] = 1801,
  [SMALL_STATE(59)] = 1827,
  [SMALL_STATE(60)] = 1857,
  [SMALL_STATE(61)] = 1887,
  [SMALL_STATE(62)] = 1913,
  [SMALL_STATE(63)] = 1939,
  [SMALL_STATE(64)] = 1969,
  [SMALL_STATE(65)] = 1995,
  [SMALL_STATE(66)] = 2021,
  [SMALL_STATE(67)] = 2047,
  [SMALL_STATE(68)] = 2067,
  [SMALL_STATE(69)] = 2093,
  [SMALL_STATE(70)] = 2119,
  [SMALL_STATE(71)] = 2138,
  [SMALL_STATE(72)] = 2157,
  [SMALL_STATE(73)] = 2176,
  [SMALL_STATE(74)] = 2195,
  [SMALL_STATE(75)] = 2214,
  [SMALL_STATE(76)] = 2233,
  [SMALL_STATE(77)] = 2252,
  [SMALL_STATE(78)] = 2271,
  [SMALL_STATE(79)] = 2290,
  [SMALL_STATE(80)] = 2309,
  [SMALL_STATE(81)] = 2328,
  [SMALL_STATE(82)] = 2347,
  [SMALL_STATE(83)] = 2366,
  [SMALL_STATE(84)] = 2385,
  [SMALL_STATE(85)] = 2404,
  [SMALL_STATE(86)] = 2423,
  [SMALL_STATE(87)] = 2442,
  [SMALL_STATE(88)] = 2461,
  [SMALL_STATE(89)] = 2480,
  [SMALL_STATE(90)] = 2499,
  [SMALL_STATE(91)] = 2517,
  [SMALL_STATE(92)] = 2535,
  [SMALL_STATE(93)] = 2553,
  [SMALL_STATE(94)] = 2571,
  [SMALL_STATE(95)] = 2589,
  [SMALL_STATE(96)] = 2611,
  [SMALL_STATE(97)] = 2629,
  [SMALL_STATE(98)] = 2656,
  [SMALL_STATE(99)] = 2683,
  [SMALL_STATE(100)] = 2710,
  [SMALL_STATE(101)] = 2737,
  [SMALL_STATE(102)] = 2764,
  [SMALL_STATE(103)] = 2791,
  [SMALL_STATE(104)] = 2818,
  [SMALL_STATE(105)] = 2845,
  [SMALL_STATE(106)] = 2872,
  [SMALL_STATE(107)] = 2899,
  [SMALL_STATE(108)] = 2916,
  [SMALL_STATE(109)] = 2933,
  [SMALL_STATE(110)] = 2960,
  [SMALL_STATE(111)] = 2987,
  [SMALL_STATE(112)] = 3014,
  [SMALL_STATE(113)] = 3041,
  [SMALL_STATE(114)] = 3068,
  [SMALL_STATE(115)] = 3092,
  [SMALL_STATE(116)] = 3114,
  [SMALL_STATE(117)] = 3136,
  [SMALL_STATE(118)] = 3158,
  [SMALL_STATE(119)] = 3180,
  [SMALL_STATE(120)] = 3203,
  [SMALL_STATE(121)] = 3226,
  [SMALL_STATE(122)] = 3249,
  [SMALL_STATE(123)] = 3261,
  [SMALL_STATE(124)] = 3274,
  [SMALL_STATE(125)] = 3287,
  [SMALL_STATE(126)] = 3300,
  [SMALL_STATE(127)] = 3313,
  [SMALL_STATE(128)] = 3326,
  [SMALL_STATE(129)] = 3339,
  [SMALL_STATE(130)] = 3352,
  [SMALL_STATE(131)] = 3365,
  [SMALL_STATE(132)] = 3378,
  [SMALL_STATE(133)] = 3391,
  [SMALL_STATE(134)] = 3407,
  [SMALL_STATE(135)] = 3421,
  [SMALL_STATE(136)] = 3437,
  [SMALL_STATE(137)] = 3451,
  [SMALL_STATE(138)] = 3464,
  [SMALL_STATE(139)] = 3477,
  [SMALL_STATE(140)] = 3490,
  [SMALL_STATE(141)] = 3501,
  [SMALL_STATE(142)] = 3514,
  [SMALL_STATE(143)] = 3527,
  [SMALL_STATE(144)] = 3540,
  [SMALL_STATE(145)] = 3553,
  [SMALL_STATE(146)] = 3566,
  [SMALL_STATE(147)] = 3579,
  [SMALL_STATE(148)] = 3592,
  [SMALL_STATE(149)] = 3605,
  [SMALL_STATE(150)] = 3618,
  [SMALL_STATE(151)] = 3631,
  [SMALL_STATE(152)] = 3644,
  [SMALL_STATE(153)] = 3657,
  [SMALL_STATE(154)] = 3670,
  [SMALL_STATE(155)] = 3681,
  [SMALL_STATE(156)] = 3694,
  [SMALL_STATE(157)] = 3707,
  [SMALL_STATE(158)] = 3717,
  [SMALL_STATE(159)] = 3727,
  [SMALL_STATE(160)] = 3737,
  [SMALL_STATE(161)] = 3747,
  [SMALL_STATE(162)] = 3757,
  [SMALL_STATE(163)] = 3767,
  [SMALL_STATE(164)] = 3777,
  [SMALL_STATE(165)] = 3787,
  [SMALL_STATE(166)] = 3797,
  [SMALL_STATE(167)] = 3807,
  [SMALL_STATE(168)] = 3817,
  [SMALL_STATE(169)] = 3827,
  [SMALL_STATE(170)] = 3837,
  [SMALL_STATE(171)] = 3847,
  [SMALL_STATE(172)] = 3857,
  [SMALL_STATE(173)] = 3867,
  [SMALL_STATE(174)] = 3877,
  [SMALL_STATE(175)] = 3887,
  [SMALL_STATE(176)] = 3897,
  [SMALL_STATE(177)] = 3907,
  [SMALL_STATE(178)] = 3917,
  [SMALL_STATE(179)] = 3927,
  [SMALL_STATE(180)] = 3937,
  [SMALL_STATE(181)] = 3947,
  [SMALL_STATE(182)] = 3954,
  [SMALL_STATE(183)] = 3961,
  [SMALL_STATE(184)] = 3968,
  [SMALL_STATE(185)] = 3975,
  [SMALL_STATE(186)] = 3982,
  [SMALL_STATE(187)] = 3989,
  [SMALL_STATE(188)] = 3996,
  [SMALL_STATE(189)] = 4003,
  [SMALL_STATE(190)] = 4010,
  [SMALL_STATE(191)] = 4017,
  [SMALL_STATE(192)] = 4024,
  [SMALL_STATE(193)] = 4031,
  [SMALL_STATE(194)] = 4038,
  [SMALL_STATE(195)] = 4045,
  [SMALL_STATE(196)] = 4052,
  [SMALL_STATE(197)] = 4059,
  [SMALL_STATE(198)] = 4066,
  [SMALL_STATE(199)] = 4073,
  [SMALL_STATE(200)] = 4080,
  [SMALL_STATE(201)] = 4087,
  [SMALL_STATE(202)] = 4094,
  [SMALL_STATE(203)] = 4101,
  [SMALL_STATE(204)] = 4108,
  [SMALL_STATE(205)] = 4115,
  [SMALL_STATE(206)] = 4122,
  [SMALL_STATE(207)] = 4129,
  [SMALL_STATE(208)] = 4136,
  [SMALL_STATE(209)] = 4143,
  [SMALL_STATE(210)] = 4150,
  [SMALL_STATE(211)] = 4157,
  [SMALL_STATE(212)] = 4164,
  [SMALL_STATE(213)] = 4171,
  [SMALL_STATE(214)] = 4178,
  [SMALL_STATE(215)] = 4185,
  [SMALL_STATE(216)] = 4192,
  [SMALL_STATE(217)] = 4199,
  [SMALL_STATE(218)] = 4206,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(150),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 6),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(191),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(188),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(69),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(215),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(19),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(147),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(147),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(155),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(155),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(61),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(216),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(32),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(148),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(148),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 6),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(195),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(196),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(192),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(49),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(181),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(133),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(205),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(55),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(163),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(177),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(179),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(158),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 6),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(194),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(188),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(68),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_setting, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_setting, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(141),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(160),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(119),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(114),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [654] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
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
