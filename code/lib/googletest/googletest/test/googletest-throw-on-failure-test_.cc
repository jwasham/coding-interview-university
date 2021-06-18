// Copyright 2009, Google Inc.
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


// Tests Google Test's throw-on-failure mode with exceptions disabled.
//
// This program must be compiled with exceptions disabled.  It will be
// invoked by googletest-throw-on-failure-test.py, and is expected to exit
// with non-zero in the throw-on-failure mode or 0 otherwise.

#include "gtest/gtest.h"

#include <stdio.h>                      // for fflush, fprintf, NULL, etc.
#include <stdlib.h>                     // for exit
#include <exception>                    // for set_terminate

// This terminate handler aborts the program using exit() rather than abort().
// This avoids showing pop-ups on Windows systems and core dumps on Unix-like
// ones.
void TerminateHandler() {
  fprintf(stderr, "%s\n", "Unhandled C++ exception terminating the program.");
  fflush(nullptr);
  exit(1);
}

int main(int argc, char** argv) {
#if GTEST_HAS_EXCEPTIONS
  std::set_terminate(&TerminateHandler);
#endif
  testing::InitGoogleTest(&argc, argv);

  // We want to ensure that people can use Google Test assertions in
  // other testing frameworks, as long as they initialize Google Test
  // properly and set the throw-on-failure mode.  Therefore, we don't
  // use Google Test's constructs for defining and running tests
  // (e.g. TEST and RUN_ALL_TESTS) here.

  // In the throw-on-failure mode with exceptions disabled, this
  // assertion will cause the program to exit with a non-zero code.
  EXPECT_EQ(2, 3);

  // When not in the throw-on-failure mode, the control will reach
  // here.
  return 0;
}
