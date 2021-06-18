# Google Test

#### OSS Builds Status:

[![Build Status](https://api.travis-ci.org/google/googletest.svg?branch=master)](https://travis-ci.org/google/googletest)
[![Build status](https://ci.appveyor.com/api/projects/status/4o38plt0xbo1ubc8/branch/master?svg=true)](https://ci.appveyor.com/project/GoogleTestAppVeyor/googletest/branch/master)

### Future Plans

#### 1.8.x Release:

[the 1.8.x](https://github.com/google/googletest/releases/tag/release-1.8.1) is
the last release that works with pre-C++11 compilers. The 1.8.x will not accept
any requests for any new features and any bugfix requests will only be accepted
if proven "critical"

#### Post 1.8.x:

On-going work to improve/cleanup/pay technical debt. When this work is completed
there will be a 1.9.x tagged release

#### Post 1.9.x

Post 1.9.x googletest will follow
[Abseil Live at Head philosophy](https://abseil.io/about/philosophy)

## Welcome to **Google Test**, Google's C++ test framework!

This repository is a merger of the formerly separate GoogleTest and GoogleMock
projects. These were so closely related that it makes sense to maintain and
release them together.

Please subscribe to the mailing list at googletestframework@googlegroups.com for
questions, discussions, and development.

### Getting started:

The information for **Google Test** is available in the
[Google Test Primer](googletest/docs/primer.md) documentation.

**Google Mock** is an extension to Google Test for writing and using C++ mock
classes. See the separate [Google Mock documentation](googlemock/README.md).

More detailed documentation for googletest is in its interior
[googletest/README.md](googletest/README.md) file.

## Features

*   An [xUnit](https://en.wikipedia.org/wiki/XUnit) test framework.
*   Test discovery.
*   A rich set of assertions.
*   User-defined assertions.
*   Death tests.
*   Fatal and non-fatal failures.
*   Value-parameterized tests.
*   Type-parameterized tests.
*   Various options for running the tests.
*   XML test report generation.

## Platforms

Google test has been used on a variety of platforms:

*   Linux
*   Mac OS X
*   Windows
*   Cygwin
*   MinGW
*   Windows Mobile
*   Symbian
*   PlatformIO

## Who Is Using Google Test?

In addition to many internal projects at Google, Google Test is also used by the
following notable projects:

*   The [Chromium projects](http://www.chromium.org/) (behind the Chrome browser
    and Chrome OS).
*   The [LLVM](http://llvm.org/) compiler.
*   [Protocol Buffers](https://github.com/google/protobuf), Google's data
    interchange format.
*   The [OpenCV](http://opencv.org/) computer vision library.
*   [tiny-dnn](https://github.com/tiny-dnn/tiny-dnn): header only,
    dependency-free deep learning framework in C++11.

## Related Open Source Projects

[GTest Runner](https://github.com/nholthaus/gtest-runner) is a Qt5 based
automated test-runner and Graphical User Interface with powerful features for
Windows and Linux platforms.

[Google Test UI](https://github.com/ospector/gtest-gbar) is test runner that
runs your test binary, allows you to track its progress via a progress bar, and
displays a list of test failures. Clicking on one shows failure text. Google
Test UI is written in C#.

[GTest TAP Listener](https://github.com/kinow/gtest-tap-listener) is an event
listener for Google Test that implements the
[TAP protocol](https://en.wikipedia.org/wiki/Test_Anything_Protocol) for test
result output. If your test runner understands TAP, you may find it useful.

[gtest-parallel](https://github.com/google/gtest-parallel) is a test runner that
runs tests from your binary in parallel to provide significant speed-up.

[GoogleTest Adapter](https://marketplace.visualstudio.com/items?itemName=DavidSchuldenfrei.gtest-adapter)
is a VS Code extension allowing to view Google Tests in a tree view, and
run/debug your tests.

## Requirements

Google Test is designed to have fairly minimal requirements to build and use
with your projects, but there are some. If you notice any problems on your
platform, please notify
[googletestframework@googlegroups.com](https://groups.google.com/forum/#!forum/googletestframework).
Patches for fixing them are welcome!

### Build Requirements

These are the base requirements to build and use Google Test from a source
package:

*   [Bazel](https://bazel.build/) or [CMake](https://cmake.org/). NOTE: Bazel is
    the build system that googletest is using internally and tests against.
    CMake is community-supported.

*   a C++11-standard-compliant compiler

## Contributing change

Please read the [`CONTRIBUTING.md`](CONTRIBUTING.md) for details on how to
contribute to this project.

Happy testing!
