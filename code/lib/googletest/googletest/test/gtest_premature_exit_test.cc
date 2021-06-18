// Copyright 2013, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

//
// Tests that Google Test manipulates the premature-exit-detection
// file correctly.

#include <stdio.h>

#include "gtest/gtest.h"

using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::internal::posix::GetEnv;
using ::testing::internal::posix::Stat;
using ::testing::internal::posix::StatStruct;

namespace {

class PrematureExitTest : public Test {
 public:
  // Returns true if and only if the given file exists.
  static bool FileExists(const char* filepath) {
    StatStruct stat;
    return Stat(filepath, &stat) == 0;
  }

 protected:
  PrematureExitTest() {
    premature_exit_file_path_ = GetEnv("TEST_PREMATURE_EXIT_FILE");

    // Normalize NULL to "" for ease of handling.
    if (premature_exit_file_path_ == nullptr) {
      premature_exit_file_path_ = "";
    }
  }

  // Returns true if and only if the premature-exit file exists.
  bool PrematureExitFileExists() const {
    return FileExists(premature_exit_file_path_);
  }

  const char* premature_exit_file_path_;
};

typedef PrematureExitTest PrematureExitDeathTest;

// Tests that:
//   - the premature-exit file exists during the execution of a
//     death test (EXPECT_DEATH*), and
//   - a death test doesn't interfere with the main test process's
//     handling of the premature-exit file.
TEST_F(PrematureExitDeathTest, FileExistsDuringExecutionOfDeathTest) {
  if (*premature_exit_file_path_ == '\0') {
    return;
  }

  EXPECT_DEATH_IF_SUPPORTED({
      // If the file exists, crash the process such that the main test
      // process will catch the (expected) crash and report a success;
      // otherwise don't crash, which will cause the main test process
      // to report that the death test has failed.
      if (PrematureExitFileExists()) {
        exit(1);
      }
    }, "");
}

// Tests that the premature-exit file exists during the execution of a
// normal (non-death) test.
TEST_F(PrematureExitTest, PrematureExitFileExistsDuringTestExecution) {
  if (*premature_exit_file_path_ == '\0') {
    return;
  }

  EXPECT_TRUE(PrematureExitFileExists())
      << " file " << premature_exit_file_path_
      << " should exist during test execution, but doesn't.";
}

}  // namespace

int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);
  const int exit_code = RUN_ALL_TESTS();

  // Test that the premature-exit file is deleted upon return from
  // RUN_ALL_TESTS().
  const char* const filepath = GetEnv("TEST_PREMATURE_EXIT_FILE");
  if (filepath != nullptr && *filepath != '\0') {
    if (PrematureExitTest::FileExists(filepath)) {
      printf(
          "File %s shouldn't exist after the test program finishes, but does.",
          filepath);
      return 1;
    }
  }

  return exit_code;
}
