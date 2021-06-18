// Copyright 2008, Google Inc.
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
// Google Test UnitTestOptions tests
//
// This file tests classes and functions used internally by
// Google Test.  They are subject to change without notice.
//
// This file is #included from gtest.cc, to avoid changing build or
// make-files on Windows and other platforms. Do not #include this file
// anywhere else!

#include "gtest/gtest.h"

#if GTEST_OS_WINDOWS_MOBILE
# include <windows.h>
#elif GTEST_OS_WINDOWS
# include <direct.h>
#endif  // GTEST_OS_WINDOWS_MOBILE

#include "src/gtest-internal-inl.h"

namespace testing {
namespace internal {
namespace {

// Turns the given relative path into an absolute path.
FilePath GetAbsolutePathOf(const FilePath& relative_path) {
  return FilePath::ConcatPaths(FilePath::GetCurrentDir(), relative_path);
}

// Testing UnitTestOptions::GetOutputFormat/GetOutputFile.

TEST(XmlOutputTest, GetOutputFormatDefault) {
  GTEST_FLAG(output) = "";
  EXPECT_STREQ("", UnitTestOptions::GetOutputFormat().c_str());
}

TEST(XmlOutputTest, GetOutputFormat) {
  GTEST_FLAG(output) = "xml:filename";
  EXPECT_STREQ("xml", UnitTestOptions::GetOutputFormat().c_str());
}

TEST(XmlOutputTest, GetOutputFileDefault) {
  GTEST_FLAG(output) = "";
  EXPECT_EQ(GetAbsolutePathOf(FilePath("test_detail.xml")).string(),
            UnitTestOptions::GetAbsolutePathToOutputFile());
}

TEST(XmlOutputTest, GetOutputFileSingleFile) {
  GTEST_FLAG(output) = "xml:filename.abc";
  EXPECT_EQ(GetAbsolutePathOf(FilePath("filename.abc")).string(),
            UnitTestOptions::GetAbsolutePathToOutputFile());
}

TEST(XmlOutputTest, GetOutputFileFromDirectoryPath) {
  GTEST_FLAG(output) = "xml:path" GTEST_PATH_SEP_;
  const std::string expected_output_file =
      GetAbsolutePathOf(
          FilePath(std::string("path") + GTEST_PATH_SEP_ +
                   GetCurrentExecutableName().string() + ".xml")).string();
  const std::string& output_file =
      UnitTestOptions::GetAbsolutePathToOutputFile();
#if GTEST_OS_WINDOWS
  EXPECT_STRCASEEQ(expected_output_file.c_str(), output_file.c_str());
#else
  EXPECT_EQ(expected_output_file, output_file.c_str());
#endif
}

TEST(OutputFileHelpersTest, GetCurrentExecutableName) {
  const std::string exe_str = GetCurrentExecutableName().string();
#if GTEST_OS_WINDOWS
  const bool success =
      _strcmpi("googletest-options-test", exe_str.c_str()) == 0 ||
      _strcmpi("gtest-options-ex_test", exe_str.c_str()) == 0 ||
      _strcmpi("gtest_all_test", exe_str.c_str()) == 0 ||
      _strcmpi("gtest_dll_test", exe_str.c_str()) == 0;
#elif GTEST_OS_OS2
  const bool success =
      strcasecmp("googletest-options-test", exe_str.c_str()) == 0 ||
      strcasecmp("gtest-options-ex_test", exe_str.c_str()) == 0 ||
      strcasecmp("gtest_all_test", exe_str.c_str()) == 0 ||
      strcasecmp("gtest_dll_test", exe_str.c_str()) == 0;
#elif GTEST_OS_FUCHSIA
  const bool success = exe_str == "app";
#else
  const bool success =
      exe_str == "googletest-options-test" ||
      exe_str == "gtest_all_test" ||
      exe_str == "lt-gtest_all_test" ||
      exe_str == "gtest_dll_test";
#endif  // GTEST_OS_WINDOWS
  if (!success)
    FAIL() << "GetCurrentExecutableName() returns " << exe_str;
}

#if !GTEST_OS_FUCHSIA

class XmlOutputChangeDirTest : public Test {
 protected:
  void SetUp() override {
    original_working_dir_ = FilePath::GetCurrentDir();
    posix::ChDir("..");
    // This will make the test fail if run from the root directory.
    EXPECT_NE(original_working_dir_.string(),
              FilePath::GetCurrentDir().string());
  }

  void TearDown() override {
    posix::ChDir(original_working_dir_.string().c_str());
  }

  FilePath original_working_dir_;
};

TEST_F(XmlOutputChangeDirTest, PreserveOriginalWorkingDirWithDefault) {
  GTEST_FLAG(output) = "";
  EXPECT_EQ(FilePath::ConcatPaths(original_working_dir_,
                                  FilePath("test_detail.xml")).string(),
            UnitTestOptions::GetAbsolutePathToOutputFile());
}

TEST_F(XmlOutputChangeDirTest, PreserveOriginalWorkingDirWithDefaultXML) {
  GTEST_FLAG(output) = "xml";
  EXPECT_EQ(FilePath::ConcatPaths(original_working_dir_,
                                  FilePath("test_detail.xml")).string(),
            UnitTestOptions::GetAbsolutePathToOutputFile());
}

TEST_F(XmlOutputChangeDirTest, PreserveOriginalWorkingDirWithRelativeFile) {
  GTEST_FLAG(output) = "xml:filename.abc";
  EXPECT_EQ(FilePath::ConcatPaths(original_working_dir_,
                                  FilePath("filename.abc")).string(),
            UnitTestOptions::GetAbsolutePathToOutputFile());
}

TEST_F(XmlOutputChangeDirTest, PreserveOriginalWorkingDirWithRelativePath) {
  GTEST_FLAG(output) = "xml:path" GTEST_PATH_SEP_;
  const std::string expected_output_file =
      FilePath::ConcatPaths(
          original_working_dir_,
          FilePath(std::string("path") + GTEST_PATH_SEP_ +
                   GetCurrentExecutableName().string() + ".xml")).string();
  const std::string& output_file =
      UnitTestOptions::GetAbsolutePathToOutputFile();
#if GTEST_OS_WINDOWS
  EXPECT_STRCASEEQ(expected_output_file.c_str(), output_file.c_str());
#else
  EXPECT_EQ(expected_output_file, output_file.c_str());
#endif
}

TEST_F(XmlOutputChangeDirTest, PreserveOriginalWorkingDirWithAbsoluteFile) {
#if GTEST_OS_WINDOWS
  GTEST_FLAG(output) = "xml:c:\\tmp\\filename.abc";
  EXPECT_EQ(FilePath("c:\\tmp\\filename.abc").string(),
            UnitTestOptions::GetAbsolutePathToOutputFile());
#else
  GTEST_FLAG(output) ="xml:/tmp/filename.abc";
  EXPECT_EQ(FilePath("/tmp/filename.abc").string(),
            UnitTestOptions::GetAbsolutePathToOutputFile());
#endif
}

TEST_F(XmlOutputChangeDirTest, PreserveOriginalWorkingDirWithAbsolutePath) {
#if GTEST_OS_WINDOWS
  const std::string path = "c:\\tmp\\";
#else
  const std::string path = "/tmp/";
#endif

  GTEST_FLAG(output) = "xml:" + path;
  const std::string expected_output_file =
      path + GetCurrentExecutableName().string() + ".xml";
  const std::string& output_file =
      UnitTestOptions::GetAbsolutePathToOutputFile();

#if GTEST_OS_WINDOWS
  EXPECT_STRCASEEQ(expected_output_file.c_str(), output_file.c_str());
#else
  EXPECT_EQ(expected_output_file, output_file.c_str());
#endif
}

#endif  // !GTEST_OS_FUCHSIA

}  // namespace
}  // namespace internal
}  // namespace testing
