// Copyright 2007, Google Inc.
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


// Google Test - The Google C++ Testing and Mocking Framework
//
// This file implements a universal value printer that can print a
// value of any type T:
//
//   void ::testing::internal::UniversalPrinter<T>::Print(value, ostream_ptr);
//
// It uses the << operator when possible, and prints the bytes in the
// object otherwise.  A user can override its behavior for a class
// type Foo by defining either operator<<(::std::ostream&, const Foo&)
// or void PrintTo(const Foo&, ::std::ostream*) in the namespace that
// defines Foo.

#include "gtest/gtest-printers.h"
#include <stdio.h>
#include <cctype>
#include <cwchar>
#include <ostream>  // NOLINT
#include <string>
#include "gtest/internal/gtest-port.h"
#include "src/gtest-internal-inl.h"

namespace testing {

namespace {

using ::std::ostream;

// Prints a segment of bytes in the given object.
GTEST_ATTRIBUTE_NO_SANITIZE_MEMORY_
GTEST_ATTRIBUTE_NO_SANITIZE_ADDRESS_
GTEST_ATTRIBUTE_NO_SANITIZE_HWADDRESS_
GTEST_ATTRIBUTE_NO_SANITIZE_THREAD_
void PrintByteSegmentInObjectTo(const unsigned char* obj_bytes, size_t start,
                                size_t count, ostream* os) {
  char text[5] = "";
  for (size_t i = 0; i != count; i++) {
    const size_t j = start + i;
    if (i != 0) {
      // Organizes the bytes into groups of 2 for easy parsing by
      // human.
      if ((j % 2) == 0)
        *os << ' ';
      else
        *os << '-';
    }
    GTEST_SNPRINTF_(text, sizeof(text), "%02X", obj_bytes[j]);
    *os << text;
  }
}

// Prints the bytes in the given value to the given ostream.
void PrintBytesInObjectToImpl(const unsigned char* obj_bytes, size_t count,
                              ostream* os) {
  // Tells the user how big the object is.
  *os << count << "-byte object <";

  const size_t kThreshold = 132;
  const size_t kChunkSize = 64;
  // If the object size is bigger than kThreshold, we'll have to omit
  // some details by printing only the first and the last kChunkSize
  // bytes.
  if (count < kThreshold) {
    PrintByteSegmentInObjectTo(obj_bytes, 0, count, os);
  } else {
    PrintByteSegmentInObjectTo(obj_bytes, 0, kChunkSize, os);
    *os << " ... ";
    // Rounds up to 2-byte boundary.
    const size_t resume_pos = (count - kChunkSize + 1)/2*2;
    PrintByteSegmentInObjectTo(obj_bytes, resume_pos, count - resume_pos, os);
  }
  *os << ">";
}

}  // namespace

namespace internal2 {

// Delegates to PrintBytesInObjectToImpl() to print the bytes in the
// given object.  The delegation simplifies the implementation, which
// uses the << operator and thus is easier done outside of the
// ::testing::internal namespace, which contains a << operator that
// sometimes conflicts with the one in STL.
void PrintBytesInObjectTo(const unsigned char* obj_bytes, size_t count,
                          ostream* os) {
  PrintBytesInObjectToImpl(obj_bytes, count, os);
}

}  // namespace internal2

namespace internal {

// Depending on the value of a char (or wchar_t), we print it in one
// of three formats:
//   - as is if it's a printable ASCII (e.g. 'a', '2', ' '),
//   - as a hexadecimal escape sequence (e.g. '\x7F'), or
//   - as a special escape sequence (e.g. '\r', '\n').
enum CharFormat {
  kAsIs,
  kHexEscape,
  kSpecialEscape
};

// Returns true if c is a printable ASCII character.  We test the
// value of c directly instead of calling isprint(), which is buggy on
// Windows Mobile.
inline bool IsPrintableAscii(wchar_t c) {
  return 0x20 <= c && c <= 0x7E;
}

// Prints a wide or narrow char c as a character literal without the
// quotes, escaping it when necessary; returns how c was formatted.
// The template argument UnsignedChar is the unsigned version of Char,
// which is the type of c.
template <typename UnsignedChar, typename Char>
static CharFormat PrintAsCharLiteralTo(Char c, ostream* os) {
  wchar_t w_c = static_cast<wchar_t>(c);
  switch (w_c) {
    case L'\0':
      *os << "\\0";
      break;
    case L'\'':
      *os << "\\'";
      break;
    case L'\\':
      *os << "\\\\";
      break;
    case L'\a':
      *os << "\\a";
      break;
    case L'\b':
      *os << "\\b";
      break;
    case L'\f':
      *os << "\\f";
      break;
    case L'\n':
      *os << "\\n";
      break;
    case L'\r':
      *os << "\\r";
      break;
    case L'\t':
      *os << "\\t";
      break;
    case L'\v':
      *os << "\\v";
      break;
    default:
      if (IsPrintableAscii(w_c)) {
        *os << static_cast<char>(c);
        return kAsIs;
      } else {
        ostream::fmtflags flags = os->flags();
        *os << "\\x" << std::hex << std::uppercase
            << static_cast<int>(static_cast<UnsignedChar>(c));
        os->flags(flags);
        return kHexEscape;
      }
  }
  return kSpecialEscape;
}

// Prints a wchar_t c as if it's part of a string literal, escaping it when
// necessary; returns how c was formatted.
static CharFormat PrintAsStringLiteralTo(wchar_t c, ostream* os) {
  switch (c) {
    case L'\'':
      *os << "'";
      return kAsIs;
    case L'"':
      *os << "\\\"";
      return kSpecialEscape;
    default:
      return PrintAsCharLiteralTo<wchar_t>(c, os);
  }
}

// Prints a char c as if it's part of a string literal, escaping it when
// necessary; returns how c was formatted.
static CharFormat PrintAsStringLiteralTo(char c, ostream* os) {
  return PrintAsStringLiteralTo(
      static_cast<wchar_t>(static_cast<unsigned char>(c)), os);
}

// Prints a wide or narrow character c and its code.  '\0' is printed
// as "'\\0'", other unprintable characters are also properly escaped
// using the standard C++ escape sequence.  The template argument
// UnsignedChar is the unsigned version of Char, which is the type of c.
template <typename UnsignedChar, typename Char>
void PrintCharAndCodeTo(Char c, ostream* os) {
  // First, print c as a literal in the most readable form we can find.
  *os << ((sizeof(c) > 1) ? "L'" : "'");
  const CharFormat format = PrintAsCharLiteralTo<UnsignedChar>(c, os);
  *os << "'";

  // To aid user debugging, we also print c's code in decimal, unless
  // it's 0 (in which case c was printed as '\\0', making the code
  // obvious).
  if (c == 0)
    return;
  *os << " (" << static_cast<int>(c);

  // For more convenience, we print c's code again in hexadecimal,
  // unless c was already printed in the form '\x##' or the code is in
  // [1, 9].
  if (format == kHexEscape || (1 <= c && c <= 9)) {
    // Do nothing.
  } else {
    *os << ", 0x" << String::FormatHexInt(static_cast<int>(c));
  }
  *os << ")";
}

void PrintTo(unsigned char c, ::std::ostream* os) {
  PrintCharAndCodeTo<unsigned char>(c, os);
}
void PrintTo(signed char c, ::std::ostream* os) {
  PrintCharAndCodeTo<unsigned char>(c, os);
}

// Prints a wchar_t as a symbol if it is printable or as its internal
// code otherwise and also as its code.  L'\0' is printed as "L'\\0'".
void PrintTo(wchar_t wc, ostream* os) {
  PrintCharAndCodeTo<wchar_t>(wc, os);
}

// Prints the given array of characters to the ostream.  CharType must be either
// char or wchar_t.
// The array starts at begin, the length is len, it may include '\0' characters
// and may not be NUL-terminated.
template <typename CharType>
GTEST_ATTRIBUTE_NO_SANITIZE_MEMORY_
GTEST_ATTRIBUTE_NO_SANITIZE_ADDRESS_
GTEST_ATTRIBUTE_NO_SANITIZE_HWADDRESS_
GTEST_ATTRIBUTE_NO_SANITIZE_THREAD_
static CharFormat PrintCharsAsStringTo(
    const CharType* begin, size_t len, ostream* os) {
  const char* const kQuoteBegin = sizeof(CharType) == 1 ? "\"" : "L\"";
  *os << kQuoteBegin;
  bool is_previous_hex = false;
  CharFormat print_format = kAsIs;
  for (size_t index = 0; index < len; ++index) {
    const CharType cur = begin[index];
    if (is_previous_hex && IsXDigit(cur)) {
      // Previous character is of '\x..' form and this character can be
      // interpreted as another hexadecimal digit in its number. Break string to
      // disambiguate.
      *os << "\" " << kQuoteBegin;
    }
    is_previous_hex = PrintAsStringLiteralTo(cur, os) == kHexEscape;
    // Remember if any characters required hex escaping.
    if (is_previous_hex) {
      print_format = kHexEscape;
    }
  }
  *os << "\"";
  return print_format;
}

// Prints a (const) char/wchar_t array of 'len' elements, starting at address
// 'begin'.  CharType must be either char or wchar_t.
template <typename CharType>
GTEST_ATTRIBUTE_NO_SANITIZE_MEMORY_
GTEST_ATTRIBUTE_NO_SANITIZE_ADDRESS_
GTEST_ATTRIBUTE_NO_SANITIZE_HWADDRESS_
GTEST_ATTRIBUTE_NO_SANITIZE_THREAD_
static void UniversalPrintCharArray(
    const CharType* begin, size_t len, ostream* os) {
  // The code
  //   const char kFoo[] = "foo";
  // generates an array of 4, not 3, elements, with the last one being '\0'.
  //
  // Therefore when printing a char array, we don't print the last element if
  // it's '\0', such that the output matches the string literal as it's
  // written in the source code.
  if (len > 0 && begin[len - 1] == '\0') {
    PrintCharsAsStringTo(begin, len - 1, os);
    return;
  }

  // If, however, the last element in the array is not '\0', e.g.
  //    const char kFoo[] = { 'f', 'o', 'o' };
  // we must print the entire array.  We also print a message to indicate
  // that the array is not NUL-terminated.
  PrintCharsAsStringTo(begin, len, os);
  *os << " (no terminating NUL)";
}

// Prints a (const) char array of 'len' elements, starting at address 'begin'.
void UniversalPrintArray(const char* begin, size_t len, ostream* os) {
  UniversalPrintCharArray(begin, len, os);
}

// Prints a (const) wchar_t array of 'len' elements, starting at address
// 'begin'.
void UniversalPrintArray(const wchar_t* begin, size_t len, ostream* os) {
  UniversalPrintCharArray(begin, len, os);
}

// Prints the given C string to the ostream.
void PrintTo(const char* s, ostream* os) {
  if (s == nullptr) {
    *os << "NULL";
  } else {
    *os << ImplicitCast_<const void*>(s) << " pointing to ";
    PrintCharsAsStringTo(s, strlen(s), os);
  }
}

// MSVC compiler can be configured to define whar_t as a typedef
// of unsigned short. Defining an overload for const wchar_t* in that case
// would cause pointers to unsigned shorts be printed as wide strings,
// possibly accessing more memory than intended and causing invalid
// memory accesses. MSVC defines _NATIVE_WCHAR_T_DEFINED symbol when
// wchar_t is implemented as a native type.
#if !defined(_MSC_VER) || defined(_NATIVE_WCHAR_T_DEFINED)
// Prints the given wide C string to the ostream.
void PrintTo(const wchar_t* s, ostream* os) {
  if (s == nullptr) {
    *os << "NULL";
  } else {
    *os << ImplicitCast_<const void*>(s) << " pointing to ";
    PrintCharsAsStringTo(s, wcslen(s), os);
  }
}
#endif  // wchar_t is native

namespace {

bool ContainsUnprintableControlCodes(const char* str, size_t length) {
  const unsigned char *s = reinterpret_cast<const unsigned char *>(str);

  for (size_t i = 0; i < length; i++) {
    unsigned char ch = *s++;
    if (std::iscntrl(ch)) {
        switch (ch) {
        case '\t':
        case '\n':
        case '\r':
          break;
        default:
          return true;
        }
      }
  }
  return false;
}

bool IsUTF8TrailByte(unsigned char t) { return 0x80 <= t && t<= 0xbf; }

bool IsValidUTF8(const char* str, size_t length) {
  const unsigned char *s = reinterpret_cast<const unsigned char *>(str);

  for (size_t i = 0; i < length;) {
    unsigned char lead = s[i++];

    if (lead <= 0x7f) {
      continue;  // single-byte character (ASCII) 0..7F
    }
    if (lead < 0xc2) {
      return false;  // trail byte or non-shortest form
    } else if (lead <= 0xdf && (i + 1) <= length && IsUTF8TrailByte(s[i])) {
      ++i;  // 2-byte character
    } else if (0xe0 <= lead && lead <= 0xef && (i + 2) <= length &&
               IsUTF8TrailByte(s[i]) &&
               IsUTF8TrailByte(s[i + 1]) &&
               // check for non-shortest form and surrogate
               (lead != 0xe0 || s[i] >= 0xa0) &&
               (lead != 0xed || s[i] < 0xa0)) {
      i += 2;  // 3-byte character
    } else if (0xf0 <= lead && lead <= 0xf4 && (i + 3) <= length &&
               IsUTF8TrailByte(s[i]) &&
               IsUTF8TrailByte(s[i + 1]) &&
               IsUTF8TrailByte(s[i + 2]) &&
               // check for non-shortest form
               (lead != 0xf0 || s[i] >= 0x90) &&
               (lead != 0xf4 || s[i] < 0x90)) {
      i += 3;  // 4-byte character
    } else {
      return false;
    }
  }
  return true;
}

void ConditionalPrintAsText(const char* str, size_t length, ostream* os) {
  if (!ContainsUnprintableControlCodes(str, length) &&
      IsValidUTF8(str, length)) {
    *os << "\n    As Text: \"" << str << "\"";
  }
}

}  // anonymous namespace

void PrintStringTo(const ::std::string& s, ostream* os) {
  if (PrintCharsAsStringTo(s.data(), s.size(), os) == kHexEscape) {
    if (GTEST_FLAG(print_utf8)) {
      ConditionalPrintAsText(s.data(), s.size(), os);
    }
  }
}

#if GTEST_HAS_STD_WSTRING
void PrintWideStringTo(const ::std::wstring& s, ostream* os) {
  PrintCharsAsStringTo(s.data(), s.size(), os);
}
#endif  // GTEST_HAS_STD_WSTRING

}  // namespace internal

}  // namespace testing
