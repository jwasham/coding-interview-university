"""Negative compilation tests for Google Mock macro MOCK_METHOD."""

import os
import sys

IS_LINUX = os.name == "posix" and os.uname()[0] == "Linux"
if not IS_LINUX:
  sys.stderr.write(
      "WARNING: Negative compilation tests are not supported on this platform")
  sys.exit(0)

# Suppresses the 'Import not at the top of the file' lint complaint.
# pylint: disable-msg=C6204
from google3.testing.pybase import fake_target_util
from google3.testing.pybase import googletest

# pylint: enable-msg=C6204


class GMockMethodNCTest(googletest.TestCase):
  """Negative compilation tests for MOCK_METHOD."""

  # The class body is intentionally empty.  The actual test*() methods
  # will be defined at run time by a call to
  # DefineNegativeCompilationTests() later.
  pass


# Defines a list of test specs, where each element is a tuple
# (test name, list of regexes for matching the compiler errors).
TEST_SPECS = [
    ("MOCK_METHOD_INVALID_CONST_SPEC",
     [r"onst cannot be recognized as a valid specification modifier"]),
]

# Define a test method in GMockNCTest for each element in TEST_SPECS.
fake_target_util.DefineNegativeCompilationTests(
    GMockMethodNCTest,
    "google3/third_party/googletest/googlemock/test/gmock-function-mocker_nc",
    "gmock-function-mocker_nc.o", TEST_SPECS)

if __name__ == "__main__":
  googletest.main()
