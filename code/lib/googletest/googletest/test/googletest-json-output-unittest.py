#!/usr/bin/env python
# Copyright 2018, Google Inc.
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

"""Unit test for the gtest_json_output module."""

import datetime
import errno
import json
import os
import re
import sys

import gtest_json_test_utils
import gtest_test_utils

GTEST_FILTER_FLAG = '--gtest_filter'
GTEST_LIST_TESTS_FLAG = '--gtest_list_tests'
GTEST_OUTPUT_FLAG = '--gtest_output'
GTEST_DEFAULT_OUTPUT_FILE = 'test_detail.json'
GTEST_PROGRAM_NAME = 'gtest_xml_output_unittest_'

# The flag indicating stacktraces are not supported
NO_STACKTRACE_SUPPORT_FLAG = '--no_stacktrace_support'

SUPPORTS_STACK_TRACES = NO_STACKTRACE_SUPPORT_FLAG not in sys.argv

if SUPPORTS_STACK_TRACES:
  STACK_TRACE_TEMPLATE = '\nStack trace:\n*'
else:
  STACK_TRACE_TEMPLATE = ''

EXPECTED_NON_EMPTY = {
    u'tests':
        24,
    u'failures':
        4,
    u'disabled':
        2,
    u'errors':
        0,
    u'timestamp':
        u'*',
    u'time':
        u'*',
    u'ad_hoc_property':
        u'42',
    u'name':
        u'AllTests',
    u'testsuites': [{
        u'name':
            u'SuccessfulTest',
        u'tests':
            1,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'Succeeds',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'SuccessfulTest'
        }]
    }, {
        u'name':
            u'FailedTest',
        u'tests':
            1,
        u'failures':
            1,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name':
                u'Fails',
            u'status':
                u'RUN',
            u'result':
                u'COMPLETED',
            u'time':
                u'*',
            u'timestamp':
                u'*',
            u'classname':
                u'FailedTest',
            u'failures': [{
                u'failure': u'gtest_xml_output_unittest_.cc:*\n'
                            u'Expected equality of these values:\n'
                            u'  1\n  2' + STACK_TRACE_TEMPLATE,
                u'type': u''
            }]
        }]
    }, {
        u'name':
            u'DisabledTest',
        u'tests':
            1,
        u'failures':
            0,
        u'disabled':
            1,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'DISABLED_test_not_run',
            u'status': u'NOTRUN',
            u'result': u'SUPPRESSED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'DisabledTest'
        }]
    }, {
        u'name':
            u'SkippedTest',
        u'tests':
            1,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'Skipped',
            u'status': u'RUN',
            u'result': u'SKIPPED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'SkippedTest'
        }]
    }, {
        u'name':
            u'MixedResultTest',
        u'tests':
            3,
        u'failures':
            1,
        u'disabled':
            1,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'Succeeds',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'MixedResultTest'
        }, {
            u'name':
                u'Fails',
            u'status':
                u'RUN',
            u'result':
                u'COMPLETED',
            u'time':
                u'*',
            u'timestamp':
                u'*',
            u'classname':
                u'MixedResultTest',
            u'failures': [{
                u'failure': u'gtest_xml_output_unittest_.cc:*\n'
                            u'Expected equality of these values:\n'
                            u'  1\n  2' + STACK_TRACE_TEMPLATE,
                u'type': u''
            }, {
                u'failure': u'gtest_xml_output_unittest_.cc:*\n'
                            u'Expected equality of these values:\n'
                            u'  2\n  3' + STACK_TRACE_TEMPLATE,
                u'type': u''
            }]
        }, {
            u'name': u'DISABLED_test',
            u'status': u'NOTRUN',
            u'result': u'SUPPRESSED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'MixedResultTest'
        }]
    }, {
        u'name':
            u'XmlQuotingTest',
        u'tests':
            1,
        u'failures':
            1,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name':
                u'OutputsCData',
            u'status':
                u'RUN',
            u'result':
                u'COMPLETED',
            u'time':
                u'*',
            u'timestamp':
                u'*',
            u'classname':
                u'XmlQuotingTest',
            u'failures': [{
                u'failure': u'gtest_xml_output_unittest_.cc:*\n'
                            u'Failed\nXML output: <?xml encoding="utf-8">'
                            u'<top><![CDATA[cdata text]]></top>' +
                            STACK_TRACE_TEMPLATE,
                u'type': u''
            }]
        }]
    }, {
        u'name':
            u'InvalidCharactersTest',
        u'tests':
            1,
        u'failures':
            1,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name':
                u'InvalidCharactersInMessage',
            u'status':
                u'RUN',
            u'result':
                u'COMPLETED',
            u'time':
                u'*',
            u'timestamp':
                u'*',
            u'classname':
                u'InvalidCharactersTest',
            u'failures': [{
                u'failure': u'gtest_xml_output_unittest_.cc:*\n'
                            u'Failed\nInvalid characters in brackets'
                            u' [\x01\x02]' + STACK_TRACE_TEMPLATE,
                u'type': u''
            }]
        }]
    }, {
        u'name':
            u'PropertyRecordingTest',
        u'tests':
            4,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'SetUpTestSuite':
            u'yes',
        u'TearDownTestSuite':
            u'aye',
        u'testsuite': [{
            u'name': u'OneProperty',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'PropertyRecordingTest',
            u'key_1': u'1'
        }, {
            u'name': u'IntValuedProperty',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'PropertyRecordingTest',
            u'key_int': u'1'
        }, {
            u'name': u'ThreeProperties',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'PropertyRecordingTest',
            u'key_1': u'1',
            u'key_2': u'2',
            u'key_3': u'3'
        }, {
            u'name': u'TwoValuesForOneKeyUsesLastValue',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'PropertyRecordingTest',
            u'key_1': u'2'
        }]
    }, {
        u'name':
            u'NoFixtureTest',
        u'tests':
            3,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'RecordProperty',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'NoFixtureTest',
            u'key': u'1'
        }, {
            u'name': u'ExternalUtilityThatCallsRecordIntValuedProperty',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'NoFixtureTest',
            u'key_for_utility_int': u'1'
        }, {
            u'name': u'ExternalUtilityThatCallsRecordStringValuedProperty',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'NoFixtureTest',
            u'key_for_utility_string': u'1'
        }]
    }, {
        u'name':
            u'TypedTest/0',
        u'tests':
            1,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'HasTypeParamAttribute',
            u'type_param': u'int',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'TypedTest/0'
        }]
    }, {
        u'name':
            u'TypedTest/1',
        u'tests':
            1,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'HasTypeParamAttribute',
            u'type_param': u'long',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'TypedTest/1'
        }]
    }, {
        u'name':
            u'Single/TypeParameterizedTestSuite/0',
        u'tests':
            1,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'HasTypeParamAttribute',
            u'type_param': u'int',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'Single/TypeParameterizedTestSuite/0'
        }]
    }, {
        u'name':
            u'Single/TypeParameterizedTestSuite/1',
        u'tests':
            1,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'HasTypeParamAttribute',
            u'type_param': u'long',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'Single/TypeParameterizedTestSuite/1'
        }]
    }, {
        u'name':
            u'Single/ValueParamTest',
        u'tests':
            4,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'HasValueParamAttribute/0',
            u'value_param': u'33',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'Single/ValueParamTest'
        }, {
            u'name': u'HasValueParamAttribute/1',
            u'value_param': u'42',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'Single/ValueParamTest'
        }, {
            u'name': u'AnotherTestThatHasValueParamAttribute/0',
            u'value_param': u'33',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'Single/ValueParamTest'
        }, {
            u'name': u'AnotherTestThatHasValueParamAttribute/1',
            u'value_param': u'42',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'Single/ValueParamTest'
        }]
    }]
}

EXPECTED_FILTERED = {
    u'tests':
        1,
    u'failures':
        0,
    u'disabled':
        0,
    u'errors':
        0,
    u'time':
        u'*',
    u'timestamp':
        u'*',
    u'name':
        u'AllTests',
    u'ad_hoc_property':
        u'42',
    u'testsuites': [{
        u'name':
            u'SuccessfulTest',
        u'tests':
            1,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'Succeeds',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'SuccessfulTest',
        }]
    }],
}

EXPECTED_EMPTY = {
    u'tests': 0,
    u'failures': 0,
    u'disabled': 0,
    u'errors': 0,
    u'time': u'*',
    u'timestamp': u'*',
    u'name': u'AllTests',
    u'testsuites': [],
}

GTEST_PROGRAM_PATH = gtest_test_utils.GetTestExecutablePath(GTEST_PROGRAM_NAME)

SUPPORTS_TYPED_TESTS = 'TypedTest' in gtest_test_utils.Subprocess(
    [GTEST_PROGRAM_PATH, GTEST_LIST_TESTS_FLAG], capture_stderr=False).output


class GTestJsonOutputUnitTest(gtest_test_utils.TestCase):
  """Unit test for Google Test's JSON output functionality.
  """

  # This test currently breaks on platforms that do not support typed and
  # type-parameterized tests, so we don't run it under them.
  if SUPPORTS_TYPED_TESTS:

    def testNonEmptyJsonOutput(self):
      """Verifies JSON output for a Google Test binary with non-empty output.

      Runs a test program that generates a non-empty JSON output, and
      tests that the JSON output is expected.
      """
      self._TestJsonOutput(GTEST_PROGRAM_NAME, EXPECTED_NON_EMPTY, 1)

  def testEmptyJsonOutput(self):
    """Verifies JSON output for a Google Test binary without actual tests.

    Runs a test program that generates an empty JSON output, and
    tests that the JSON output is expected.
    """

    self._TestJsonOutput('gtest_no_test_unittest', EXPECTED_EMPTY, 0)

  def testTimestampValue(self):
    """Checks whether the timestamp attribute in the JSON output is valid.

    Runs a test program that generates an empty JSON output, and checks if
    the timestamp attribute in the testsuites tag is valid.
    """
    actual = self._GetJsonOutput('gtest_no_test_unittest', [], 0)
    date_time_str = actual['timestamp']
    # datetime.strptime() is only available in Python 2.5+ so we have to
    # parse the expected datetime manually.
    match = re.match(r'(\d+)-(\d\d)-(\d\d)T(\d\d):(\d\d):(\d\d)', date_time_str)
    self.assertTrue(
        re.match,
        'JSON datettime string %s has incorrect format' % date_time_str)
    date_time_from_json = datetime.datetime(
        year=int(match.group(1)), month=int(match.group(2)),
        day=int(match.group(3)), hour=int(match.group(4)),
        minute=int(match.group(5)), second=int(match.group(6)))

    time_delta = abs(datetime.datetime.now() - date_time_from_json)
    # timestamp value should be near the current local time
    self.assertTrue(time_delta < datetime.timedelta(seconds=600),
                    'time_delta is %s' % time_delta)

  def testDefaultOutputFile(self):
    """Verifies the default output file name.

    Confirms that Google Test produces an JSON output file with the expected
    default name if no name is explicitly specified.
    """
    output_file = os.path.join(gtest_test_utils.GetTempDir(),
                               GTEST_DEFAULT_OUTPUT_FILE)
    gtest_prog_path = gtest_test_utils.GetTestExecutablePath(
        'gtest_no_test_unittest')
    try:
      os.remove(output_file)
    except OSError:
      e = sys.exc_info()[1]
      if e.errno != errno.ENOENT:
        raise

    p = gtest_test_utils.Subprocess(
        [gtest_prog_path, '%s=json' % GTEST_OUTPUT_FLAG],
        working_dir=gtest_test_utils.GetTempDir())
    self.assert_(p.exited)
    self.assertEquals(0, p.exit_code)
    self.assert_(os.path.isfile(output_file))

  def testSuppressedJsonOutput(self):
    """Verifies that no JSON output is generated.

    Tests that no JSON file is generated if the default JSON listener is
    shut down before RUN_ALL_TESTS is invoked.
    """

    json_path = os.path.join(gtest_test_utils.GetTempDir(),
                             GTEST_PROGRAM_NAME + 'out.json')
    if os.path.isfile(json_path):
      os.remove(json_path)

    command = [GTEST_PROGRAM_PATH,
               '%s=json:%s' % (GTEST_OUTPUT_FLAG, json_path),
               '--shut_down_xml']
    p = gtest_test_utils.Subprocess(command)
    if p.terminated_by_signal:
      # p.signal is available only if p.terminated_by_signal is True.
      self.assertFalse(
          p.terminated_by_signal,
          '%s was killed by signal %d' % (GTEST_PROGRAM_NAME, p.signal))
    else:
      self.assert_(p.exited)
      self.assertEquals(1, p.exit_code,
                        "'%s' exited with code %s, which doesn't match "
                        'the expected exit code %s.'
                        % (command, p.exit_code, 1))

    self.assert_(not os.path.isfile(json_path))

  def testFilteredTestJsonOutput(self):
    """Verifies JSON output when a filter is applied.

    Runs a test program that executes only some tests and verifies that
    non-selected tests do not show up in the JSON output.
    """

    self._TestJsonOutput(GTEST_PROGRAM_NAME, EXPECTED_FILTERED, 0,
                         extra_args=['%s=SuccessfulTest.*' % GTEST_FILTER_FLAG])

  def _GetJsonOutput(self, gtest_prog_name, extra_args, expected_exit_code):
    """Returns the JSON output generated by running the program gtest_prog_name.

    Furthermore, the program's exit code must be expected_exit_code.

    Args:
      gtest_prog_name: Google Test binary name.
      extra_args: extra arguments to binary invocation.
      expected_exit_code: program's exit code.
    """
    json_path = os.path.join(gtest_test_utils.GetTempDir(),
                             gtest_prog_name + 'out.json')
    gtest_prog_path = gtest_test_utils.GetTestExecutablePath(gtest_prog_name)

    command = (
        [gtest_prog_path, '%s=json:%s' % (GTEST_OUTPUT_FLAG, json_path)] +
        extra_args
    )
    p = gtest_test_utils.Subprocess(command)
    if p.terminated_by_signal:
      self.assert_(False,
                   '%s was killed by signal %d' % (gtest_prog_name, p.signal))
    else:
      self.assert_(p.exited)
      self.assertEquals(expected_exit_code, p.exit_code,
                        "'%s' exited with code %s, which doesn't match "
                        'the expected exit code %s.'
                        % (command, p.exit_code, expected_exit_code))
    with open(json_path) as f:
      actual = json.load(f)
    return actual

  def _TestJsonOutput(self, gtest_prog_name, expected,
                      expected_exit_code, extra_args=None):
    """Checks the JSON output generated by the Google Test binary.

    Asserts that the JSON document generated by running the program
    gtest_prog_name matches expected_json, a string containing another
    JSON document.  Furthermore, the program's exit code must be
    expected_exit_code.

    Args:
      gtest_prog_name: Google Test binary name.
      expected: expected output.
      expected_exit_code: program's exit code.
      extra_args: extra arguments to binary invocation.
    """

    actual = self._GetJsonOutput(gtest_prog_name, extra_args or [],
                                 expected_exit_code)
    self.assertEqual(expected, gtest_json_test_utils.normalize(actual))


if __name__ == '__main__':
  if NO_STACKTRACE_SUPPORT_FLAG in sys.argv:
    # unittest.main() can't handle unknown flags
    sys.argv.remove(NO_STACKTRACE_SUPPORT_FLAG)

  os.environ['GTEST_STACK_TRACE_DEPTH'] = '1'
  gtest_test_utils.Main()
