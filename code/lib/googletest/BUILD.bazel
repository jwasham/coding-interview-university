# Copyright 2017 Google Inc.
# All Rights Reserved.
#
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
#
#   Bazel Build for Google C++ Testing Framework(Google Test)

load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

package(default_visibility = ["//visibility:public"])

licenses(["notice"])

config_setting(
    name = "windows",
    constraint_values = ["@bazel_tools//platforms:windows"],
)

config_setting(
    name = "has_absl",
    values = {"define": "absl=1"},
)

# Library that defines the FRIEND_TEST macro.
cc_library(
    name = "gtest_prod",
    hdrs = ["googletest/include/gtest/gtest_prod.h"],
    includes = ["googletest/include"],
)

# Google Test including Google Mock
cc_library(
    name = "gtest",
    srcs = glob(
        include = [
            "googletest/src/*.cc",
            "googletest/src/*.h",
            "googletest/include/gtest/**/*.h",
            "googlemock/src/*.cc",
            "googlemock/include/gmock/**/*.h",
        ],
        exclude = [
            "googletest/src/gtest-all.cc",
            "googletest/src/gtest_main.cc",
            "googlemock/src/gmock-all.cc",
            "googlemock/src/gmock_main.cc",
        ],
    ),
    hdrs = glob([
        "googletest/include/gtest/*.h",
        "googlemock/include/gmock/*.h",
    ]),
    copts = select({
        ":windows": [],
        "//conditions:default": ["-pthread"],
    }),
    defines = select({
        ":has_absl": ["GTEST_HAS_ABSL=1"],
        "//conditions:default": [],
    }),
    features = select({
        ":windows": ["windows_export_all_symbols"],
        "//conditions:default": [],
    }),
    includes = [
        "googlemock",
        "googlemock/include",
        "googletest",
        "googletest/include",
    ],
    linkopts = select({
        ":windows": [],
        "//conditions:default": ["-pthread"],
    }),
    deps = select({
        ":has_absl": [
            "@com_google_absl//absl/debugging:failure_signal_handler",
            "@com_google_absl//absl/debugging:stacktrace",
            "@com_google_absl//absl/debugging:symbolize",
            "@com_google_absl//absl/strings",
            "@com_google_absl//absl/types:optional",
            "@com_google_absl//absl/types:variant",
        ],
        "//conditions:default": [],
    }),
)

cc_library(
    name = "gtest_main",
    srcs = ["googlemock/src/gmock_main.cc"],
    features = select({
        ":windows": ["windows_export_all_symbols"],
        "//conditions:default": [],
    }),
    deps = [":gtest"],
)

# The following rules build samples of how to use gTest.
cc_library(
    name = "gtest_sample_lib",
    srcs = [
        "googletest/samples/sample1.cc",
        "googletest/samples/sample2.cc",
        "googletest/samples/sample4.cc",
    ],
    hdrs = [
        "googletest/samples/prime_tables.h",
        "googletest/samples/sample1.h",
        "googletest/samples/sample2.h",
        "googletest/samples/sample3-inl.h",
        "googletest/samples/sample4.h",
    ],
    features = select({
        ":windows": ["windows_export_all_symbols"],
        "//conditions:default": [],
    }),
)

cc_test(
    name = "gtest_samples",
    size = "small",
    # All Samples except:
    #   sample9 (main)
    #   sample10 (main and takes a command line option and needs to be separate)
    srcs = [
        "googletest/samples/sample1_unittest.cc",
        "googletest/samples/sample2_unittest.cc",
        "googletest/samples/sample3_unittest.cc",
        "googletest/samples/sample4_unittest.cc",
        "googletest/samples/sample5_unittest.cc",
        "googletest/samples/sample6_unittest.cc",
        "googletest/samples/sample7_unittest.cc",
        "googletest/samples/sample8_unittest.cc",
    ],
    linkstatic = 0,
    deps = [
        "gtest_sample_lib",
        ":gtest_main",
    ],
)

cc_test(
    name = "sample9_unittest",
    size = "small",
    srcs = ["googletest/samples/sample9_unittest.cc"],
    deps = [":gtest"],
)

cc_test(
    name = "sample10_unittest",
    size = "small",
    srcs = ["googletest/samples/sample10_unittest.cc"],
    deps = [":gtest"],
)
