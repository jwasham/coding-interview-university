########################################################################
# Note: CMake support is community-based. The maintainers do not use CMake
# internally.
#
# CMake build script for Google Mock.
#
# To run the tests for Google Mock itself on Linux, use 'make test' or
# ctest.  You can select which tests to run using 'ctest -R regex'.
# For more options, run 'ctest --help'.

option(gmock_build_tests "Build all of Google Mock's own tests." OFF)

# A directory to find Google Test sources.
if (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/gtest/CMakeLists.txt")
  set(gtest_dir gtest)
else()
  set(gtest_dir ../googletest)
endif()

# Defines pre_project_set_up_hermetic_build() and set_up_hermetic_build().
include("${gtest_dir}/cmake/hermetic_build.cmake" OPTIONAL)

if (COMMAND pre_project_set_up_hermetic_build)
  # Google Test also calls hermetic setup functions from add_subdirectory,
  # although its changes will not affect things at the current scope.
  pre_project_set_up_hermetic_build()
endif()

########################################################################
#
# Project-wide settings

# Name of the project.
#
# CMake files in this project can refer to the root source directory
# as ${gmock_SOURCE_DIR} and to the root binary directory as
# ${gmock_BINARY_DIR}.
# Language "C" is required for find_package(Threads).
if (CMAKE_VERSION VERSION_LESS 3.0)
  project(gmock CXX C)
else()
  cmake_policy(SET CMP0048 NEW)
  project(gmock VERSION ${GOOGLETEST_VERSION} LANGUAGES CXX C)
endif()
cmake_minimum_required(VERSION 2.6.4)

if (COMMAND set_up_hermetic_build)
  set_up_hermetic_build()
endif()

# Instructs CMake to process Google Test's CMakeLists.txt and add its
# targets to the current scope.  We are placing Google Test's binary
# directory in a subdirectory of our own as VC compilation may break
# if they are the same (the default).
add_subdirectory("${gtest_dir}" "${gmock_BINARY_DIR}/${gtest_dir}")


# These commands only run if this is the main project
if(CMAKE_PROJECT_NAME STREQUAL "gmock" OR CMAKE_PROJECT_NAME STREQUAL "googletest-distribution")
  # BUILD_SHARED_LIBS is a standard CMake variable, but we declare it here to
  # make it prominent in the GUI.
  option(BUILD_SHARED_LIBS "Build shared libraries (DLLs)." OFF)
else()
  mark_as_advanced(gmock_build_tests)
endif()

# Although Google Test's CMakeLists.txt calls this function, the
# changes there don't affect the current scope.  Therefore we have to
# call it again here.
config_compiler_and_linker()  # from ${gtest_dir}/cmake/internal_utils.cmake

# Adds Google Mock's and Google Test's header directories to the search path.
set(gmock_build_include_dirs
  "${gmock_SOURCE_DIR}/include"
  "${gmock_SOURCE_DIR}"
  "${gtest_SOURCE_DIR}/include"
  # This directory is needed to build directly from Google Test sources.
  "${gtest_SOURCE_DIR}")
include_directories(${gmock_build_include_dirs})

########################################################################
#
# Defines the gmock & gmock_main libraries.  User tests should link
# with one of them.

# Google Mock libraries.  We build them using more strict warnings than what
# are used for other targets, to ensure that Google Mock can be compiled by
# a user aggressive about warnings.
if (MSVC)
  cxx_library(gmock
              "${cxx_strict}"
              "${gtest_dir}/src/gtest-all.cc"
              src/gmock-all.cc)

  cxx_library(gmock_main
              "${cxx_strict}"
              "${gtest_dir}/src/gtest-all.cc"
              src/gmock-all.cc
              src/gmock_main.cc)
else()
  cxx_library(gmock "${cxx_strict}" src/gmock-all.cc)
  target_link_libraries(gmock PUBLIC gtest)
  cxx_library(gmock_main "${cxx_strict}" src/gmock_main.cc)
  target_link_libraries(gmock_main PUBLIC gmock)
endif()
# If the CMake version supports it, attach header directory information
# to the targets for when we are part of a parent build (ie being pulled
# in via add_subdirectory() rather than being a standalone build).
if (DEFINED CMAKE_VERSION AND NOT "${CMAKE_VERSION}" VERSION_LESS "2.8.11")
  target_include_directories(gmock SYSTEM INTERFACE
    "$<BUILD_INTERFACE:${gmock_build_include_dirs}>"
    "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>")
  target_include_directories(gmock_main SYSTEM INTERFACE
    "$<BUILD_INTERFACE:${gmock_build_include_dirs}>"
    "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>")
endif()

########################################################################
#
# Install rules
install_project(gmock gmock_main)

########################################################################
#
# Google Mock's own tests.
#
# You can skip this section if you aren't interested in testing
# Google Mock itself.
#
# The tests are not built by default.  To build them, set the
# gmock_build_tests option to ON.  You can do it by running ccmake
# or specifying the -Dgmock_build_tests=ON flag when running cmake.

if (gmock_build_tests)
  # This must be set in the root directory for the tests to be run by
  # 'make test' or ctest.
  enable_testing()

  if (WIN32)
    file(GENERATE OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>/RunTest.ps1"
         CONTENT
"$project_bin = \"${CMAKE_BINARY_DIR}/bin/$<CONFIG>\"
$env:Path = \"$project_bin;$env:Path\"
& $args")
  elseif (MINGW OR CYGWIN)
    file(GENERATE OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/RunTest.ps1"
         CONTENT
"$project_bin = (cygpath --windows ${CMAKE_BINARY_DIR}/bin)
$env:Path = \"$project_bin;$env:Path\"
& $args")
  endif()

  if (MINGW OR CYGWIN)
    if (CMAKE_VERSION VERSION_LESS "2.8.12")
      add_compile_options("-Wa,-mbig-obj")
    else()
      add_definitions("-Wa,-mbig-obj")
    endif()
  endif()

  ############################################################
  # C++ tests built with standard compiler flags.

  cxx_test(gmock-actions_test gmock_main)
  cxx_test(gmock-cardinalities_test gmock_main)
  cxx_test(gmock_ex_test gmock_main)
  cxx_test(gmock-function-mocker_test gmock_main)
  cxx_test(gmock-generated-actions_test gmock_main)
  cxx_test(gmock-generated-function-mockers_test gmock_main)
  cxx_test(gmock-generated-matchers_test gmock_main)
  cxx_test(gmock-internal-utils_test gmock_main)
  cxx_test(gmock-matchers_test gmock_main)
  cxx_test(gmock-more-actions_test gmock_main)
  cxx_test(gmock-nice-strict_test gmock_main)
  cxx_test(gmock-port_test gmock_main)
  cxx_test(gmock-spec-builders_test gmock_main)
  cxx_test(gmock_link_test gmock_main test/gmock_link2_test.cc)
  cxx_test(gmock_test gmock_main)

  if (DEFINED GTEST_HAS_PTHREAD)
    cxx_test(gmock_stress_test gmock)
  endif()

  # gmock_all_test is commented to save time building and running tests.
  # Uncomment if necessary.
  # cxx_test(gmock_all_test gmock_main)

  ############################################################
  # C++ tests built with non-standard compiler flags.

  if (MSVC)
    cxx_library(gmock_main_no_exception "${cxx_no_exception}"
      "${gtest_dir}/src/gtest-all.cc" src/gmock-all.cc src/gmock_main.cc)

    cxx_library(gmock_main_no_rtti "${cxx_no_rtti}"
      "${gtest_dir}/src/gtest-all.cc" src/gmock-all.cc src/gmock_main.cc)

  else()
    cxx_library(gmock_main_no_exception "${cxx_no_exception}" src/gmock_main.cc)
    target_link_libraries(gmock_main_no_exception PUBLIC gmock)

    cxx_library(gmock_main_no_rtti "${cxx_no_rtti}" src/gmock_main.cc)
    target_link_libraries(gmock_main_no_rtti PUBLIC gmock)
  endif()
  cxx_test_with_flags(gmock-more-actions_no_exception_test "${cxx_no_exception}"
    gmock_main_no_exception test/gmock-more-actions_test.cc)

  cxx_test_with_flags(gmock_no_rtti_test "${cxx_no_rtti}"
    gmock_main_no_rtti test/gmock-spec-builders_test.cc)

  cxx_shared_library(shared_gmock_main "${cxx_default}"
    "${gtest_dir}/src/gtest-all.cc" src/gmock-all.cc src/gmock_main.cc)

  # Tests that a binary can be built with Google Mock as a shared library.  On
  # some system configurations, it may not possible to run the binary without
  # knowing more details about the system configurations. We do not try to run
  # this binary. To get a more robust shared library coverage, configure with
  # -DBUILD_SHARED_LIBS=ON.
  cxx_executable_with_flags(shared_gmock_test_ "${cxx_default}"
    shared_gmock_main test/gmock-spec-builders_test.cc)
  set_target_properties(shared_gmock_test_
    PROPERTIES
    COMPILE_DEFINITIONS "GTEST_LINKED_AS_SHARED_LIBRARY=1")

  ############################################################
  # Python tests.

  cxx_executable(gmock_leak_test_ test gmock_main)
  py_test(gmock_leak_test)

  cxx_executable(gmock_output_test_ test gmock)
  py_test(gmock_output_test)
endif()
