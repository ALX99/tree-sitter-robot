
const SECTION_NAMES = [
  "Settings",
  "Variables",
  "Test Cases",
  "Tasks",
  "Keywords",
  "Comments",
]

const SETTINGS_KEYWORDS = [
  "Library",
  "Resource",
  "Variables",
  "Documentation",
  "Metadata",
  "Suite Setup",
  "Suite Teardown",
  "Force Tags",
  "Default Tags",
  "Test Setup",
  "Test Teardown",
  "Test Template",
  "Test Timeout",
  "Task Setup",
  "Task Teardown",
  "Task Template",
  "Task Timeout",
];

function caseInsensitive(keyword) {
  return new RegExp(
    keyword
      .split("")
      .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join("")
  );
}

/**
 * Shortcut for defining a section header
 */
function section_header($, name) {
  return seq(
    alias(
      token(
        seq("***", optional(" "), caseInsensitive(name), optional(" "), "***")
      ),
      $.section_header
    ),
    optional(seq($._separator, alias(seq(/[^#]/, optional(/[^#\r\n]+/)), $.extra_text))),
    $._line_break,
  )
}

/**
 * Shortcut for defining a setting token
 */
function setting(name) {
  return token(
    seq("[", optional(" "), caseInsensitive(name), optional(" "), "]")
  )
}

module.exports = grammar({
  name: "robot",

  extras: $ => [$.comment],

  rules: {
    source_file: $ => seq(
      repeat($._empty_line), // Allows empty lines before the first section
      repeat($.section)
    ),

    section: $ => choice(
      $.settings_section,
      $.variables_section,
      $.keywords_section,
      $.test_cases_or_tasks_section,
    ),

    //
    // Settings section
    //

    settings_section: $ => seq(
      section_header($, "Settings"),
      repeat(choice(
        $.setting_statement,
        $._empty_line,
      )),
    ),
    setting_statement: $ => seq(
      choice(...SETTINGS_KEYWORDS.map(caseInsensitive)),
      $._separator,
      $.arguments,
    ),

    //
    // Variables section
    //

    variables_section: $ => seq(
      section_header($, "Variables"),
      repeat(choice(
        $.variable_definition,
        $._empty_line,
      )),
    ),
    variable_definition: $ => seq(
      seq(/[$@]\{/, $.variable_name, "}"),
      optional(choice("=", " =")),
      $._separator,
      $.arguments,
    ),

    //
    // Keywords section
    //

    keywords_section: $ => seq(
      section_header($, "Keywords"),
      repeat(choice(
        $.keyword_definition,
        $._empty_line,
      )),
    ),
    keyword_definition: $ => seq(
      optional(" "),
      alias($.keyword, $.name),
      $._line_break,
      alias($.keyword_definition_body, $.body),
    ),
    keyword_definition_body: $ => prec.right(repeat1(
      choice(
        $.keyword_setting,
        $.statement,
        $._empty_line,
      )
    )),
    // Ref: http://robotframework.org/robotframework/latest/RobotFrameworkUserGuide.html#keyword-section-1
    keyword_setting: $ => seq(
      $._separator,
      choice(
        setting("Documentation"),
        setting("Tags"),
        setting("Arguments"),
        setting("Return"),
        setting("Teardown"),
        setting("Timeout"),
      ),
      $._separator,
      $.arguments,
    ),

    //
    // Test cases / Tasks section
    //

    test_cases_or_tasks_section: $ => seq(
      choice(
        section_header($, "Test Cases"),
        section_header($, "Tasks"),
      ),
      repeat(choice(
        $.test_case_or_task_definition,
        $._empty_line,
      )),
    ),
    test_case_or_task_definition: $ => seq(
      optional(" "),
      alias($.test_case_or_task, $.name),
      choice(
        // Data-driven tests have arguments
        seq(
          $._separator,
          $.arguments,
        ),

        // Regular tests have bodies
        seq(
          $._empty_line,
          alias($.test_case_or_task_definition_body, $.body),
        )
      )
    ),
    test_case_or_task_definition_body: $ => prec.right(repeat1(
      choice(
        $.test_case_or_task_setting,
        $.statement,
        $._empty_line,
      )
    )),
    // Ref: http://robotframework.org/robotframework/latest/RobotFrameworkUserGuide.html#test-case-section
    test_case_or_task_setting: $ => seq(
      $._separator,
      choice(
        setting("Documentation"),
        setting("Tags"),
        setting("Setup"),
        setting("Teardown"),
        setting("Template"),
        setting("Timeout"),
      ),
      $._separator,
      $.arguments,
    ),

    //
    // Statements
    //
    // These are the lines that appear within test cases, tasks and user
    // defined keywords
    //

    statement: $ => seq(
      $._separator,   // The initial indentation
      choice(
        $.variable_assignment,
        $.return_statement,
        $.keyword_invocation,
      ),
    ),

    variable_assignment: $ => seq(
      seq("${", $.variable_name, "}"),
      optional(
        choice("=", " =")
      ),
      choice(
        seq(
          $._separator,
          $.arguments,
        ),
        $._line_break,
      ),
    ),

    keyword_invocation: $ => seq(
      $.keyword,
      choice(
        seq(
          $._separator,
          $.arguments,
        ),
        $._line_break,
      ),
    ),

    //
    // Reusable rules
    //

    arguments: $ => seq(
      $.argument,
      repeat(seq(
        $._separator,
        $.argument,
      )),
      $._line_break,
      repeat($.continuation),
    ),

    continuation: $ => seq(
      choice(
        $.ellipses,
        alias($.indented_ellipses, $.ellipses),
      ),
      repeat(seq(
        $._separator,
        $.argument,
      )),
      $._line_break,
    ),

    ellipses: $ => "...",
    indented_ellipses: $ => token(seq(
      /[ ]{2}|\t/,
      optional(/[ \t]+/),
      "..."
    )),

    argument: $ => repeat1(seq(
      choice(
        $.text,
        $.variable,
      ),
      optional(" "),
    )),

    // TODO variables can exist inside of these
    // TODO they are not allowed to begin with ^\*, but they can with ^ \*
    test_case_or_task: $ => token(seq(
      /[^\s#]/, // Can't begin with whitespace or start of comment
      repeat1(choice(
        /[ ][^\s]/,
        /[^\s]/,
      )),
    )),


    keyword: $ => seq(
      /[^\s#]/, // Can't begin with whitespace or start of comment
      repeat1(choice(
        /[ ][^\s$@&]/,
        /[^\s$@&]/,
        /[$@&][^{]/,
        seq(optional(" "), $.variable),
      )),
    ),

    text: $ => prec.right(seq(
      choice(
        /[^\s$@&]/,
        /[$@&][^{]/,
      ),
      repeat1(choice(
        /[ ][^\s$@&]/,
        /[^\s$@&]/,
        /[$@&][^{]/,
        seq(optional(" "), $.variable),
    )))),


    return_statement: $ => seq(
      'RETURN',
      choice(
        seq($._separator, $.arguments),
        $._line_break,
      ),
    ),

    variable_name: $ => /[^{}]+/,

    variable: $ => choice(
      $.scalar_variable,
      $.list_variable,
      $.dictionary_variable,
      $.empty_variable,
    ),

    list_variable: $ => seq("@{", optional(" "), $.variable_name, optional(" "), "}"),
    scalar_variable: $ => seq("${", optional(" "), $.variable_name, optional(" "), "}"),
    dictionary_variable: $ => seq("&{", optional(" "), $.variable_name, optional(" "), "}"),
    empty_variable: $ => seq("${", optional(" "), alias("EMPTY", $.variable_name), optional(" "), "}"),

    comment: $ => token(seq(optional(/[ \t]+/), "#", /[^\n]+/)),

    _separator: $ => token(seq(/[ ]{2}|\t/, optional(/[ \t]+/))),
    _whitespace: $ => /[ \t]+/,
    _line_break: $ => /\r\n|\r|\n/,
    _empty_line: $ => seq(optional($._whitespace), $._line_break),
  },
});
