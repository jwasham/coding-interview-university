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
// Google Test filepath utilities
//
// This file tests classes and functions used internally by
// Google Test.  They are subject to change without notice.
//
// This file is #included from gtest-internal.h.
// Do not #include this file anywhere else!

#include "gtest/internal/gtest-filepath.h"
#include "gtest/gtest.h"
#include "src/gtest-internal-inl.h"

#if GTEST_OS_WINDOWS_MOBILE
# include <windows.h>  // NOLINT
#elif GTEST_OS_WINDOWS
# include <direct.h>  // NOLINT
#endif  // GTEST_OS_WINDOWS_MOBILE

namespace testing {
namespace internal {
namespace {

#if GTEST_OS_WINDOWS_MOBILE

// Windows CE doesn't have the remove C function.
int remove(const char* path) {
  LPCWSTR wpath = String::AnsiToUtf16(path);
  int ret = DeleteFile(wpath) ? 0 : -1;
  delete [] wpath;
  return ret;
}
// Windows CE doesn't have the _rmdir C function.
int _rmdir(const char* path) {
  FilePath filepath(path);
  LPCWSTR wpath = String::AnsiToUtf16(
      filepath.RemoveTrailingPathSeparator().c_str());
  int ret = RemoveDirectory(wpath) ? 0 : -1;
  delete [] wpath;
  return ret;
}

#else

TEST(GetCurrentDirTest, ReturnsCurrentDir) {
  const FilePath original_dir = FilePath::GetCurrentDir();
  EXPECT_FALSE(original_dir.IsEmpty());

  posix::ChDir(GTEST_PATH_SEP_);
  const FilePath cwd = FilePath::GetCurrentDir();
  posix::ChDir(original_dir.c_str());

# if GTEST_OS_WINDOWS || GTEST_OS_OS2

  // Skips the ":".
  const char* const cwd_without_drive = strchr(cwd.c_str(), ':');
  ASSERT_TRUE(cwd_without_drive != NULL);
  EXPECT_STREQ(GTEST_PATH_SEP_, cwd_without_drive + 1);

# else

  EXPECT_EQ(GTEST_PATH_SEP_, cwd.string());

# endif
}

#endif  // GTEST_OS_WINDOWS_MOBILE

TEST(IsEmptyTest, ReturnsTrueForEmptyPath) {
  EXPECT_TRUE(FilePath("").IsEmpty());
}

TEST(IsEmptyTest, ReturnsFalseForNonEmptyPath) {
  EXPECT_FALSE(FilePath("a").IsEmpty());
  EXPECT_FALSE(FilePath(".").IsEmpty());
  EXPECT_FALSE(FilePath("a/b").IsEmpty());
  EXPECT_FALSE(FilePath("a\\b\\").IsEmpty());
}

// RemoveDirectoryName "" -> ""
TEST(RemoveDirectoryNameTest, WhenEmptyName) {
  EXPECT_EQ("", FilePath("").RemoveDirectoryName().string());
}

// RemoveDirectoryName "afile" -> "afile"
TEST(RemoveDirectoryNameTest, ButNoDirectory) {
  EXPECT_EQ("afile",
      FilePath("afile").RemoveDirectoryName().string());
}

// RemoveDirectoryName "/afile" -> "afile"
TEST(RemoveDirectoryNameTest, RootFileShouldGiveFileName) {
  EXPECT_EQ("afile",
      FilePath(GTEST_PATH_SEP_ "afile").RemoveDirectoryName().string());
}

// RemoveDirectoryName "adir/" -> ""
TEST(RemoveDirectoryNameTest, WhereThereIsNoFileName) {
  EXPECT_EQ("",
      FilePath("adir" GTEST_PATH_SEP_).RemoveDirectoryName().string());
}

// RemoveDirectoryName "adir/afile" -> "afile"
TEST(RemoveDirectoryNameTest, ShouldGiveFileName) {
  EXPECT_EQ("afile",
      FilePath("adir" GTEST_PATH_SEP_ "afile").RemoveDirectoryName().string());
}

// RemoveDirectoryName "adir/subdir/afile" -> "afile"
TEST(RemoveDirectoryNameTest, ShouldAlsoGiveFileName) {
  EXPECT_EQ("afile",
      FilePath("adir" GTEST_PATH_SEP_ "subdir" GTEST_PATH_SEP_ "afile")
      .RemoveDirectoryName().string());
}

#if GTEST_HAS_ALT_PATH_SEP_

// Tests that RemoveDirectoryName() works with the alternate separator
// on Windows.

// RemoveDirectoryName("/afile") -> "afile"
TEST(RemoveDirectoryNameTest, RootFileShouldGiveFileNameForAlternateSeparator) {
  EXPECT_EQ("afile", FilePath("/afile").RemoveDirectoryName().string());
}

// RemoveDirectoryName("adir/") -> ""
TEST(RemoveDirectoryNameTest, WhereThereIsNoFileNameForAlternateSeparator) {
  EXPECT_EQ("", FilePath("adir/").RemoveDirectoryName().string());
}

// RemoveDirectoryName("adir/afile") -> "afile"
TEST(RemoveDirectoryNameTest, ShouldGiveFileNameForAlternateSeparator) {
  EXPECT_EQ("afile", FilePath("adir/afile").RemoveDirectoryName().string());
}

// RemoveDirectoryName("adir/subdir/afile") -> "afile"
TEST(RemoveDirectoryNameTest, ShouldAlsoGiveFileNameForAlternateSeparator) {
  EXPECT_EQ("afile",
            FilePath("adir/subdir/afile").RemoveDirectoryName().string());
}

#endif

// RemoveFileName "" -> "./"
TEST(RemoveFileNameTest, EmptyName) {
#if GTEST_OS_WINDOWS_MOBILE
  // On Windows CE, we use the root as the current directory.
  EXPECT_EQ(GTEST_PATH_SEP_, FilePath("").RemoveFileName().string());
#else
  EXPECT_EQ("." GTEST_PATH_SEP_, FilePath("").RemoveFileName().string());
#endif
}

// RemoveFileName "adir/" -> "adir/"
TEST(RemoveFileNameTest, ButNoFile) {
  EXPECT_EQ("adir" GTEST_PATH_SEP_,
      FilePath("adir" GTEST_PATH_SEP_).RemoveFileName().string());
}

// RemoveFileName "adir/afile" -> "adir/"
TEST(RemoveFileNameTest, GivesDirName) {
  EXPECT_EQ("adir" GTEST_PATH_SEP_,
            FilePath("adir" GTEST_PATH_SEP_ "afile").RemoveFileName().string());
}

// RemoveFileName "adir/subdir/afile" -> "adir/subdir/"
TEST(RemoveFileNameTest, GivesDirAndSubDirName) {
  EXPECT_EQ("adir" GTEST_PATH_SEP_ "subdir" GTEST_PATH_SEP_,
      FilePath("adir" GTEST_PATH_SEP_ "subdir" GTEST_PATH_SEP_ "afile")
      .RemoveFileName().string());
}

// RemoveFileName "/afile" -> "/"
TEST(RemoveFileNameTest, GivesRootDir) {
  EXPECT_EQ(GTEST_PATH_SEP_,
      FilePath(GTEST_PATH_SEP_ "afile").RemoveFileName().string());
}

#if GTEST_HAS_ALT_PATH_SEP_

// Tests that RemoveFileName() works with the alternate separator on
// Windows.

// RemoveFileName("adir/") -> "adir/"
TEST(RemoveFileNameTest, ButNoFileForAlternateSeparator) {
  EXPECT_EQ("adir" GTEST_PATH_SEP_,
            FilePath("adir/").RemoveFileName().string());
}

// RemoveFileName("adir/afile") -> "adir/"
TEST(RemoveFileNameTest, GivesDirNameForAlternateSeparator) {
  EXPECT_EQ("adir" GTEST_PATH_SEP_,
            FilePath("adir/afile").RemoveFileName().string());
}

// RemoveFileName("adir/subdir/afile") -> "adir/subdir/"
TEST(RemoveFileNameTest, GivesDirAndSubDirNameForAlternateSeparator) {
  EXPECT_EQ("adir" GTEST_PATH_SEP_ "subdir" GTEST_PATH_SEP_,
            FilePath("adir/subdir/afile").RemoveFileName().string());
}

// RemoveFileName("/afile") -> "\"
TEST(RemoveFileNameTest, GivesRootDirForAlternateSeparator) {
  EXPECT_EQ(GTEST_PATH_SEP_, FilePath("/afile").RemoveFileName().string());
}

#endif

TEST(MakeFileNameTest, GenerateWhenNumberIsZero) {
  FilePath actual = FilePath::MakeFileName(FilePath("foo"), FilePath("bar"),
      0, "xml");
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar.xml", actual.string());
}

TEST(MakeFileNameTest, GenerateFileNameNumberGtZero) {
  FilePath actual = FilePath::MakeFileName(FilePath("foo"), FilePath("bar"),
      12, "xml");
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar_12.xml", actual.string());
}

TEST(MakeFileNameTest, GenerateFileNameWithSlashNumberIsZero) {
  FilePath actual = FilePath::MakeFileName(FilePath("foo" GTEST_PATH_SEP_),
      FilePath("bar"), 0, "xml");
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar.xml", actual.string());
}

TEST(MakeFileNameTest, GenerateFileNameWithSlashNumberGtZero) {
  FilePath actual = FilePath::MakeFileName(FilePath("foo" GTEST_PATH_SEP_),
      FilePath("bar"), 12, "xml");
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar_12.xml", actual.string());
}

TEST(MakeFileNameTest, GenerateWhenNumberIsZeroAndDirIsEmpty) {
  FilePath actual = FilePath::MakeFileName(FilePath(""), FilePath("bar"),
      0, "xml");
  EXPECT_EQ("bar.xml", actual.string());
}

TEST(MakeFileNameTest, GenerateWhenNumberIsNotZeroAndDirIsEmpty) {
  FilePath actual = FilePath::MakeFileName(FilePath(""), FilePath("bar"),
      14, "xml");
  EXPECT_EQ("bar_14.xml", actual.string());
}

TEST(ConcatPathsTest, WorksWhenDirDoesNotEndWithPathSep) {
  FilePath actual = FilePath::ConcatPaths(FilePath("foo"),
                                          FilePath("bar.xml"));
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar.xml", actual.string());
}

TEST(ConcatPathsTest, WorksWhenPath1EndsWithPathSep) {
  FilePath actual = FilePath::ConcatPaths(FilePath("foo" GTEST_PATH_SEP_),
                                          FilePath("bar.xml"));
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar.xml", actual.string());
}

TEST(ConcatPathsTest, Path1BeingEmpty) {
  FilePath actual = FilePath::ConcatPaths(FilePath(""),
                                          FilePath("bar.xml"));
  EXPECT_EQ("bar.xml", actual.string());
}

TEST(ConcatPathsTest, Path2BeingEmpty) {
  FilePath actual = FilePath::ConcatPaths(FilePath("foo"), FilePath(""));
  EXPECT_EQ("foo" GTEST_PATH_SEP_, actual.string());
}

TEST(ConcatPathsTest, BothPathBeingEmpty) {
  FilePath actual = FilePath::ConcatPaths(FilePath(""),
                                          FilePath(""));
  EXPECT_EQ("", actual.string());
}

TEST(ConcatPathsTest, Path1ContainsPathSep) {
  FilePath actual = FilePath::ConcatPaths(FilePath("foo" GTEST_PATH_SEP_ "bar"),
                                          FilePath("foobar.xml"));
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar" GTEST_PATH_SEP_ "foobar.xml",
            actual.string());
}

TEST(ConcatPathsTest, Path2ContainsPathSep) {
  FilePath actual = FilePath::ConcatPaths(
      FilePath("foo" GTEST_PATH_SEP_),
      FilePath("bar" GTEST_PATH_SEP_ "bar.xml"));
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar" GTEST_PATH_SEP_ "bar.xml",
            actual.string());
}

TEST(ConcatPathsTest, Path2EndsWithPathSep) {
  FilePath actual = FilePath::ConcatPaths(FilePath("foo"),
                                          FilePath("bar" GTEST_PATH_SEP_));
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar" GTEST_PATH_SEP_, actual.string());
}

// RemoveTrailingPathSeparator "" -> ""
TEST(RemoveTrailingPathSeparatorTest, EmptyString) {
  EXPECT_EQ("", FilePath("").RemoveTrailingPathSeparator().string());
}

// RemoveTrailingPathSeparator "foo" -> "foo"
TEST(RemoveTrailingPathSeparatorTest, FileNoSlashString) {
  EXPECT_EQ("foo", FilePath("foo").RemoveTrailingPathSeparator().string());
}

// RemoveTrailingPathSeparator "foo/" -> "foo"
TEST(RemoveTrailingPathSeparatorTest, ShouldRemoveTrailingSeparator) {
  EXPECT_EQ("foo",
      FilePath("foo" GTEST_PATH_SEP_).RemoveTrailingPathSeparator().string());
#if GTEST_HAS_ALT_PATH_SEP_
  EXPECT_EQ("foo", FilePath("foo/").RemoveTrailingPathSeparator().string());
#endif
}

// RemoveTrailingPathSeparator "foo/bar/" -> "foo/bar/"
TEST(RemoveTrailingPathSeparatorTest, ShouldRemoveLastSeparator) {
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar",
            FilePath("foo" GTEST_PATH_SEP_ "bar" GTEST_PATH_SEP_)
                .RemoveTrailingPathSeparator().string());
}

// RemoveTrailingPathSeparator "foo/bar" -> "foo/bar"
TEST(RemoveTrailingPathSeparatorTest, ShouldReturnUnmodified) {
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar",
            FilePath("foo" GTEST_PATH_SEP_ "bar")
                .RemoveTrailingPathSeparator().string());
}

TEST(DirectoryTest, RootDirectoryExists) {
#if GTEST_OS_WINDOWS  // We are on Windows.
  char current_drive[_MAX_PATH];  // NOLINT
  current_drive[0] = static_cast<char>(_getdrive() + 'A' - 1);
  current_drive[1] = ':';
  current_drive[2] = '\\';
  current_drive[3] = '\0';
  EXPECT_TRUE(FilePath(current_drive).DirectoryExists());
#else
  EXPECT_TRUE(FilePath("/").DirectoryExists());
#endif  // GTEST_OS_WINDOWS
}

#if GTEST_OS_WINDOWS
TEST(DirectoryTest, RootOfWrongDriveDoesNotExists) {
  const int saved_drive_ = _getdrive();
  // Find a drive that doesn't exist. Start with 'Z' to avoid common ones.
  for (char drive = 'Z'; drive >= 'A'; drive--)
    if (_chdrive(drive - 'A' + 1) == -1) {
      char non_drive[_MAX_PATH];  // NOLINT
      non_drive[0] = drive;
      non_drive[1] = ':';
      non_drive[2] = '\\';
      non_drive[3] = '\0';
      EXPECT_FALSE(FilePath(non_drive).DirectoryExists());
      break;
    }
  _chdrive(saved_drive_);
}
#endif  // GTEST_OS_WINDOWS

#if !GTEST_OS_WINDOWS_MOBILE
// Windows CE _does_ consider an empty directory to exist.
TEST(DirectoryTest, EmptyPathDirectoryDoesNotExist) {
  EXPECT_FALSE(FilePath("").DirectoryExists());
}
#endif  // !GTEST_OS_WINDOWS_MOBILE

TEST(DirectoryTest, CurrentDirectoryExists) {
#if GTEST_OS_WINDOWS  // We are on Windows.
# ifndef _WIN32_CE  // Windows CE doesn't have a current directory.

  EXPECT_TRUE(FilePath(".").DirectoryExists());
  EXPECT_TRUE(FilePath(".\\").DirectoryExists());

# endif  // _WIN32_CE
#else
  EXPECT_TRUE(FilePath(".").DirectoryExists());
  EXPECT_TRUE(FilePath("./").DirectoryExists());
#endif  // GTEST_OS_WINDOWS
}

// "foo/bar" == foo//bar" == "foo///bar"
TEST(NormalizeTest, MultipleConsecutiveSepaparatorsInMidstring) {
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar",
            FilePath("foo" GTEST_PATH_SEP_ "bar").string());
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar",
            FilePath("foo" GTEST_PATH_SEP_ GTEST_PATH_SEP_ "bar").string());
  EXPECT_EQ("foo" GTEST_PATH_SEP_ "bar",
            FilePath("foo" GTEST_PATH_SEP_ GTEST_PATH_SEP_
                     GTEST_PATH_SEP_ "bar").string());
}

// "/bar" == //bar" == "///bar"
TEST(NormalizeTest, MultipleConsecutiveSepaparatorsAtStringStart) {
  EXPECT_EQ(GTEST_PATH_SEP_ "bar",
    FilePath(GTEST_PATH_SEP_ "bar").string());
  EXPECT_EQ(GTEST_PATH_SEP_ "bar",
    FilePath(GTEST_PATH_SEP_ GTEST_PATH_SEP_ "bar").string());
  EXPECT_EQ(GTEST_PATH_SEP_ "bar",
    FilePath(GTEST_PATH_SEP_ GTEST_PATH_SEP_ GTEST_PATH_SEP_ "bar").string());
}

// "foo/" == foo//" == "foo///"
TEST(NormalizeTest, MultipleConsecutiveSepaparatorsAtStringEnd) {
  EXPECT_EQ("foo" GTEST_PATH_SEP_,
    FilePath("foo" GTEST_PATH_SEP_).string());
  EXPECT_EQ("foo" GTEST_PATH_SEP_,
    FilePath("foo" GTEST_PATH_SEP_ GTEST_PATH_SEP_).string());
  EXPECT_EQ("foo" GTEST_PATH_SEP_,
    FilePath("foo" GTEST_PATH_SEP_ GTEST_PATH_SEP_ GTEST_PATH_SEP_).string());
}

#if GTEST_HAS_ALT_PATH_SEP_

// Tests that separators at the end of the string are normalized
// regardless of their combination (e.g. "foo\" =="foo/\" ==
// "foo\\/").
TEST(NormalizeTest, MixAlternateSeparatorAtStringEnd) {
  EXPECT_EQ("foo" GTEST_PATH_SEP_,
            FilePath("foo/").string());
  EXPECT_EQ("foo" GTEST_PATH_SEP_,
            FilePath("foo" GTEST_PATH_SEP_ "/").string());
  EXPECT_EQ("foo" GTEST_PATH_SEP_,
            FilePath("foo//" GTEST_PATH_SEP_).string());
}

#endif

TEST(AssignmentOperatorTest, DefaultAssignedToNonDefault) {
  FilePath default_path;
  FilePath non_default_path("path");
  non_default_path = default_path;
  EXPECT_EQ("", non_default_path.string());
  EXPECT_EQ("", default_path.string());  // RHS var is unchanged.
}

TEST(AssignmentOperatorTest, NonDefaultAssignedToDefault) {
  FilePath non_default_path("path");
  FilePath default_path;
  default_path = non_default_path;
  EXPECT_EQ("path", default_path.string());
  EXPECT_EQ("path", non_default_path.string());  // RHS var is unchanged.
}

TEST(AssignmentOperatorTest, ConstAssignedToNonConst) {
  const FilePath const_default_path("const_path");
  FilePath non_default_path("path");
  non_default_path = const_default_path;
  EXPECT_EQ("const_path", non_default_path.string());
}

class DirectoryCreationTest : public Test {
 protected:
  void SetUp() override {
    testdata_path_.Set(FilePath(
        TempDir() + GetCurrentExecutableName().string() +
        "_directory_creation" GTEST_PATH_SEP_ "test" GTEST_PATH_SEP_));
    testdata_file_.Set(testdata_path_.RemoveTrailingPathSeparator());

    unique_file0_.Set(FilePath::MakeFileName(testdata_path_, FilePath("unique"),
        0, "txt"));
    unique_file1_.Set(FilePath::MakeFileName(testdata_path_, FilePath("unique"),
        1, "txt"));

    remove(testdata_file_.c_str());
    remove(unique_file0_.c_str());
    remove(unique_file1_.c_str());
    posix::RmDir(testdata_path_.c_str());
  }

  void TearDown() override {
    remove(testdata_file_.c_str());
    remove(unique_file0_.c_str());
    remove(unique_file1_.c_str());
    posix::RmDir(testdata_path_.c_str());
  }

  void CreateTextFile(const char* filename) {
    FILE* f = posix::FOpen(filename, "w");
    fprintf(f, "text\n");
    fclose(f);
  }

  // Strings representing a directory and a file, with identical paths
  // except for the trailing separator character that distinquishes
  // a directory named 'test' from a file named 'test'. Example names:
  FilePath testdata_path_;  // "/tmp/directory_creation/test/"
  FilePath testdata_file_;  // "/tmp/directory_creation/test"
  FilePath unique_file0_;  // "/tmp/directory_creation/test/unique.txt"
  FilePath unique_file1_;  // "/tmp/directory_creation/test/unique_1.txt"
};

TEST_F(DirectoryCreationTest, CreateDirectoriesRecursively) {
  EXPECT_FALSE(testdata_path_.DirectoryExists()) << testdata_path_.string();
  EXPECT_TRUE(testdata_path_.CreateDirectoriesRecursively());
  EXPECT_TRUE(testdata_path_.DirectoryExists());
}

TEST_F(DirectoryCreationTest, CreateDirectoriesForAlreadyExistingPath) {
  EXPECT_FALSE(testdata_path_.DirectoryExists()) << testdata_path_.string();
  EXPECT_TRUE(testdata_path_.CreateDirectoriesRecursively());
  // Call 'create' again... should still succeed.
  EXPECT_TRUE(testdata_path_.CreateDirectoriesRecursively());
}

TEST_F(DirectoryCreationTest, CreateDirectoriesAndUniqueFilename) {
  FilePath file_path(FilePath::GenerateUniqueFileName(testdata_path_,
      FilePath("unique"), "txt"));
  EXPECT_EQ(unique_file0_.string(), file_path.string());
  EXPECT_FALSE(file_path.FileOrDirectoryExists());  // file not there

  testdata_path_.CreateDirectoriesRecursively();
  EXPECT_FALSE(file_path.FileOrDirectoryExists());  // file still not there
  CreateTextFile(file_path.c_str());
  EXPECT_TRUE(file_path.FileOrDirectoryExists());

  FilePath file_path2(FilePath::GenerateUniqueFileName(testdata_path_,
      FilePath("unique"), "txt"));
  EXPECT_EQ(unique_file1_.string(), file_path2.string());
  EXPECT_FALSE(file_path2.FileOrDirectoryExists());  // file not there
  CreateTextFile(file_path2.c_str());
  EXPECT_TRUE(file_path2.FileOrDirectoryExists());
}

TEST_F(DirectoryCreationTest, CreateDirectoriesFail) {
  // force a failure by putting a file where we will try to create a directory.
  CreateTextFile(testdata_file_.c_str());
  EXPECT_TRUE(testdata_file_.FileOrDirectoryExists());
  EXPECT_FALSE(testdata_file_.DirectoryExists());
  EXPECT_FALSE(testdata_file_.CreateDirectoriesRecursively());
}

TEST(NoDirectoryCreationTest, CreateNoDirectoriesForDefaultXmlFile) {
  const FilePath test_detail_xml("test_detail.xml");
  EXPECT_FALSE(test_detail_xml.CreateDirectoriesRecursively());
}

TEST(FilePathTest, DefaultConstructor) {
  FilePath fp;
  EXPECT_EQ("", fp.string());
}

TEST(FilePathTest, CharAndCopyConstructors) {
  const FilePath fp("spicy");
  EXPECT_EQ("spicy", fp.string());

  const FilePath fp_copy(fp);
  EXPECT_EQ("spicy", fp_copy.string());
}

TEST(FilePathTest, StringConstructor) {
  const FilePath fp(std::string("cider"));
  EXPECT_EQ("cider", fp.string());
}

TEST(FilePathTest, Set) {
  const FilePath apple("apple");
  FilePath mac("mac");
  mac.Set(apple);  // Implement Set() since overloading operator= is forbidden.
  EXPECT_EQ("apple", mac.string());
  EXPECT_EQ("apple", apple.string());
}

TEST(FilePathTest, ToString) {
  const FilePath file("drink");
  EXPECT_EQ("drink", file.string());
}

TEST(FilePathTest, RemoveExtension) {
  EXPECT_EQ("app", FilePath("app.cc").RemoveExtension("cc").string());
  EXPECT_EQ("app", FilePath("app.exe").RemoveExtension("exe").string());
  EXPECT_EQ("APP", FilePath("APP.EXE").RemoveExtension("exe").string());
}

TEST(FilePathTest, RemoveExtensionWhenThereIsNoExtension) {
  EXPECT_EQ("app", FilePath("app").RemoveExtension("exe").string());
}

TEST(FilePathTest, IsDirectory) {
  EXPECT_FALSE(FilePath("cola").IsDirectory());
  EXPECT_TRUE(FilePath("koala" GTEST_PATH_SEP_).IsDirectory());
#if GTEST_HAS_ALT_PATH_SEP_
  EXPECT_TRUE(FilePath("koala/").IsDirectory());
#endif
}

TEST(FilePathTest, IsAbsolutePath) {
  EXPECT_FALSE(FilePath("is" GTEST_PATH_SEP_ "relative").IsAbsolutePath());
  EXPECT_FALSE(FilePath("").IsAbsolutePath());
#if GTEST_OS_WINDOWS
  EXPECT_TRUE(FilePath("c:\\" GTEST_PATH_SEP_ "is_not"
                       GTEST_PATH_SEP_ "relative").IsAbsolutePath());
  EXPECT_FALSE(FilePath("c:foo" GTEST_PATH_SEP_ "bar").IsAbsolutePath());
  EXPECT_TRUE(FilePath("c:/" GTEST_PATH_SEP_ "is_not"
                       GTEST_PATH_SEP_ "relative").IsAbsolutePath());
#else
  EXPECT_TRUE(FilePath(GTEST_PATH_SEP_ "is_not" GTEST_PATH_SEP_ "relative")
              .IsAbsolutePath());
#endif  // GTEST_OS_WINDOWS
}

TEST(FilePathTest, IsRootDirectory) {
#if GTEST_OS_WINDOWS
  EXPECT_TRUE(FilePath("a:\\").IsRootDirectory());
  EXPECT_TRUE(FilePath("Z:/").IsRootDirectory());
  EXPECT_TRUE(FilePath("e://").IsRootDirectory());
  EXPECT_FALSE(FilePath("").IsRootDirectory());
  EXPECT_FALSE(FilePath("b:").IsRootDirectory());
  EXPECT_FALSE(FilePath("b:a").IsRootDirectory());
  EXPECT_FALSE(FilePath("8:/").IsRootDirectory());
  EXPECT_FALSE(FilePath("c|/").IsRootDirectory());
#else
  EXPECT_TRUE(FilePath("/").IsRootDirectory());
  EXPECT_TRUE(FilePath("//").IsRootDirectory());
  EXPECT_FALSE(FilePath("").IsRootDirectory());
  EXPECT_FALSE(FilePath("\\").IsRootDirectory());
  EXPECT_FALSE(FilePath("/x").IsRootDirectory());
#endif
}

}  // namespace
}  // namespace internal
}  // namespace testing
