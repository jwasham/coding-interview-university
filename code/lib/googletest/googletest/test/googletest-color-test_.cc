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


// A helper program for testing how Google Test determines whether to use
// colors in the output.  It prints "YES" and returns 1 if Google Test
// decides to use colors, and prints "NO" and returns 0 otherwise.

#include <stdio.h>

#include "gtest/gtest.h"
#include "src/gtest-internal-inl.h"

using testing::internal::ShouldUseColor;

// The purpose of this is to ensure that the UnitTest singleton is
// created before main() is entered, and thus that ShouldUseColor()
// works the same way as in a real Google-Test-based test.  We don't actual
// run the TEST itself.
TEST(GTestColorTest, Dummy) {
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);

  if (ShouldUseColor(true)) {
    // Google Test decides to use colors in the output (assuming it
    // goes to a TTY).
    printf("YES\n");
    return 1;
  } else {
    // Google Test decides not to use colors in the output.
    printf("NO\n");
    return 0;
  }
}
