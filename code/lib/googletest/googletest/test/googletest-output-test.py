#!/usr/bin/env python
#
# Copyright 2008, Google Inc.
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:
#
#     * Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above
# copyright notice, this list of conditions and the following disclaimer
# in the documentation and/or other materials provided with the
# distribution.
#     * Neither the name of Google Inc. nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

"""Tests the text output of Google C++ Testing and Mocking Framework.

To update the golden file:
googletest_output_test.py --build_dir=BUILD/DIR --gengolden
where BUILD/DIR contains the built googletest-output-test_ file.
googletest_output_test.py --gengolden
googletest_output_test.py
"""

import difflib
import os
import re
import sys
import gtest_test_utils


# The flag for generating the golden file
GENGOLDEN_FLAG = '--gengolden'
CATCH_EXCEPTIONS_ENV_VAR_NAME = 'GTEST_CATCH_EXCEPTIONS'

# The flag indicating stacktraces are not supported
NO_STACKTRACE_SUPPORT_FLAG = '--no_stacktrace_support'

IS_LINUX = os.name == 'posix' and os.uname()[0] == 'Linux'
IS_WINDOWS = os.name == 'nt'

GOLDEN_NAME = 'googletest-output-test-golden-lin.txt'

PROGRAM_PATH = gtest_test_utils.GetTestExecutablePath('googletest-output-test_')

# At least one command we exercise must not have the
# 'internal_skip_environment_and_ad_hoc_tests' argument.
COMMAND_LIST_TESTS = ({}, [PROGRAM_PATH, '--gtest_list_tests'])
COMMAND_WITH_COLOR = ({}, [PROGRAM_PATH, '--gtest_color=yes'])
COMMAND_WITH_TIME = ({}, [PROGRAM_PATH,
                          '--gtest_print_time',
                          'internal_skip_environment_and_ad_hoc_tests',
                          '--gtest_filter=FatalFailureTest.*:LoggingTest.*'])
COMMAND_WITH_DISABLED = (
    {}, [PROGRAM_PATH,
         '--gtest_also_run_disabled_tests',
         'internal_skip_environment_and_ad_hoc_tests',
         '--gtest_filter=*DISABLED_*'])
COMMAND_WITH_SHARDING = (
    {'GTEST_SHARD_INDEX': '1', 'GTEST_TOTAL_SHARDS': '2'},
    [PROGRAM_PATH,
     'internal_skip_environment_and_ad_hoc_tests',
     '--gtest_filter=PassingTest.*'])

GOLDEN_PATH = os.path.join(gtest_test_utils.GetSourceDir(), GOLDEN_NAME)


def ToUnixLineEnding(s):
  """Changes all Windows/Mac line endings in s to UNIX line endings."""

  return s.replace('\r\n', '\n').replace('\r', '\n')


def RemoveLocations(test_output):
  """Removes all file location info from a Google Test program's output.

  Args:
       test_output:  the output of a Google Test program.

  Returns:
       output with all file location info (in the form of
       'DIRECTORY/FILE_NAME:LINE_NUMBER: 'or
       'DIRECTORY\\FILE_NAME(LINE_NUMBER): ') replaced by
       'FILE_NAME:#: '.
  """

  return re.sub(r'.*[/\\]((googletest-output-test_|gtest).cc)(\:\d+|\(\d+\))\: ',
                r'\1:#: ', test_output)


def RemoveStackTraceDetails(output):
  """Removes all stack traces from a Google Test program's output."""

  # *? means "find the shortest string that matches".
  return re.sub(r'Stack trace:(.|\n)*?\n\n',
                'Stack trace: (omitted)\n\n', output)


def RemoveStackTraces(output):
  """Removes all traces of stack traces from a Google Test program's output."""

  # *? means "find the shortest string that matches".
  return re.sub(r'Stack trace:(.|\n)*?\n\n', '', output)


def RemoveTime(output):
  """Removes all time information from a Google Test program's output."""

  return re.sub(r'\(\d+ ms', '(? ms', output)


def RemoveTypeInfoDetails(test_output):
  """Removes compiler-specific type info from Google Test program's output.

  Args:
       test_output:  the output of a Google Test program.

  Returns:
       output with type information normalized to canonical form.
  """

  # some compilers output the name of type 'unsigned int' as 'unsigned'
  return re.sub(r'unsigned int', 'unsigned', test_output)


def NormalizeToCurrentPlatform(test_output):
  """Normalizes platform specific output details for easier comparison."""

  if IS_WINDOWS:
    # Removes the color information that is not present on Windows.
    test_output = re.sub('\x1b\\[(0;3\d)?m', '', test_output)
    # Changes failure message headers into the Windows format.
    test_output = re.sub(r': Failure\n', r': error: ', test_output)
    # Changes file(line_number) to file:line_number.
    test_output = re.sub(r'((\w|\.)+)\((\d+)\):', r'\1:\3:', test_output)

  return test_output


def RemoveTestCounts(output):
  """Removes test counts from a Google Test program's output."""

  output = re.sub(r'\d+ tests?, listed below',
                  '? tests, listed below', output)
  output = re.sub(r'\d+ FAILED TESTS',
                  '? FAILED TESTS', output)
  output = re.sub(r'\d+ tests? from \d+ test cases?',
                  '? tests from ? test cases', output)
  output = re.sub(r'\d+ tests? from ([a-zA-Z_])',
                  r'? tests from \1', output)
  return re.sub(r'\d+ tests?\.', '? tests.', output)


def RemoveMatchingTests(test_output, pattern):
  """Removes output of specified tests from a Google Test program's output.

  This function strips not only the beginning and the end of a test but also
  all output in between.

  Args:
    test_output:       A string containing the test output.
    pattern:           A regex string that matches names of test cases or
                       tests to remove.

  Returns:
    Contents of test_output with tests whose names match pattern removed.
  """

  test_output = re.sub(
      r'.*\[ RUN      \] .*%s(.|\n)*?\[(  FAILED  |       OK )\] .*%s.*\n' % (
          pattern, pattern),
      '',
      test_output)
  return re.sub(r'.*%s.*\n' % pattern, '', test_output)


def NormalizeOutput(output):
  """Normalizes output (the output of googletest-output-test_.exe)."""

  output = ToUnixLineEnding(output)
  output = RemoveLocations(output)
  output = RemoveStackTraceDetails(output)
  output = RemoveTime(output)
  return output


def GetShellCommandOutput(env_cmd):
  """Runs a command in a sub-process, and returns its output in a string.

  Args:
    env_cmd: The shell command. A 2-tuple where element 0 is a dict of extra
             environment variables to set, and element 1 is a string with
             the command and any flags.

  Returns:
    A string with the command's combined standard and diagnostic output.
  """

  # Spawns cmd in a sub-process, and gets its standard I/O file objects.
  # Set and save the environment properly.
  environ = os.environ.copy()
  environ.update(env_cmd[0])
  p = gtest_test_utils.Subprocess(env_cmd[1], env=environ)

  return p.output


def GetCommandOutput(env_cmd):
  """Runs a command and returns its output with all file location
  info stripped off.

  Args:
    env_cmd:  The shell command. A 2-tuple where element 0 is a dict of extra
              environment variables to set, and element 1 is a string with
              the command and any flags.
  """

  # Disables exception pop-ups on Windows.
  environ, cmdline = env_cmd
  environ = dict(environ)  # Ensures we are modifying a copy.
  environ[CATCH_EXCEPTIONS_ENV_VAR_NAME] = '1'
  return NormalizeOutput(GetShellCommandOutput((environ, cmdline)))


def GetOutputOfAllCommands():
  """Returns concatenated output from several representative commands."""

  return (GetCommandOutput(COMMAND_WITH_COLOR) +
          GetCommandOutput(COMMAND_WITH_TIME) +
          GetCommandOutput(COMMAND_WITH_DISABLED) +
          GetCommandOutput(COMMAND_WITH_SHARDING))


test_list = GetShellCommandOutput(COMMAND_LIST_TESTS)
SUPPORTS_DEATH_TESTS = 'DeathTest' in test_list
SUPPORTS_TYPED_TESTS = 'TypedTest' in test_list
SUPPORTS_THREADS = 'ExpectFailureWithThreadsTest' in test_list
SUPPORTS_STACK_TRACES = NO_STACKTRACE_SUPPORT_FLAG not in sys.argv

CAN_GENERATE_GOLDEN_FILE = (SUPPORTS_DEATH_TESTS and
                            SUPPORTS_TYPED_TESTS and
                            SUPPORTS_THREADS and
                            SUPPORTS_STACK_TRACES)

class GTestOutputTest(gtest_test_utils.TestCase):
  def RemoveUnsupportedTests(self, test_output):
    if not SUPPORTS_DEATH_TESTS:
      test_output = RemoveMatchingTests(test_output, 'DeathTest')
    if not SUPPORTS_TYPED_TESTS:
      test_output = RemoveMatchingTests(test_output, 'TypedTest')
      test_output = RemoveMatchingTests(test_output, 'TypedDeathTest')
      test_output = RemoveMatchingTests(test_output, 'TypeParamDeathTest')
    if not SUPPORTS_THREADS:
      test_output = RemoveMatchingTests(test_output,
                                        'ExpectFailureWithThreadsTest')
      test_output = RemoveMatchingTests(test_output,
                                        'ScopedFakeTestPartResultReporterTest')
      test_output = RemoveMatchingTests(test_output,
                                        'WorksConcurrently')
    if not SUPPORTS_STACK_TRACES:
      test_output = RemoveStackTraces(test_output)

    return test_output

  def testOutput(self):
    output = GetOutputOfAllCommands()

    golden_file = open(GOLDEN_PATH, 'rb')
    # A mis-configured source control system can cause \r appear in EOL
    # sequences when we read the golden file irrespective of an operating
    # system used. Therefore, we need to strip those \r's from newlines
    # unconditionally.
    golden = ToUnixLineEnding(golden_file.read().decode())
    golden_file.close()

    # We want the test to pass regardless of certain features being
    # supported or not.

    # We still have to remove type name specifics in all cases.
    normalized_actual = RemoveTypeInfoDetails(output)
    normalized_golden = RemoveTypeInfoDetails(golden)

    if CAN_GENERATE_GOLDEN_FILE:
      self.assertEqual(normalized_golden, normalized_actual,
                       '\n'.join(difflib.unified_diff(
                           normalized_golden.split('\n'),
                           normalized_actual.split('\n'),
                           'golden', 'actual')))
    else:
      normalized_actual = NormalizeToCurrentPlatform(
          RemoveTestCounts(normalized_actual))
      normalized_golden = NormalizeToCurrentPlatform(
          RemoveTestCounts(self.RemoveUnsupportedTests(normalized_golden)))

      # This code is very handy when debugging golden file differences:
      if os.getenv('DEBUG_GTEST_OUTPUT_TEST'):
        open(os.path.join(
            gtest_test_utils.GetSourceDir(),
            '_googletest-output-test_normalized_actual.txt'), 'wb').write(
                normalized_actual)
        open(os.path.join(
            gtest_test_utils.GetSourceDir(),
            '_googletest-output-test_normalized_golden.txt'), 'wb').write(
                normalized_golden)

      self.assertEqual(normalized_golden, normalized_actual)


if __name__ == '__main__':
  if NO_STACKTRACE_SUPPORT_FLAG in sys.argv:
    # unittest.main() can't handle unknown flags
    sys.argv.remove(NO_STACKTRACE_SUPPORT_FLAG)

  if GENGOLDEN_FLAG in sys.argv:
    if CAN_GENERATE_GOLDEN_FILE:
      output = GetOutputOfAllCommands()
      golden_file = open(GOLDEN_PATH, 'wb')
      golden_file.write(output)
      golden_file.close()
    else:
      message = (
          """Unable to write a golden file when compiled in an environment
that does not support all the required features (death tests,
typed tests, stack traces, and multiple threads).
Please build this test and generate the golden file using Blaze on Linux.""")

      sys.stderr.write(message)
      sys.exit(1)
  else:
    gtest_test_utils.Main()
