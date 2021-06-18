########################################################################
# Note: CMake support is community-based. The maintainers do not use CMake
# internally.
#
# CMake build script for Google Test.
#
# To run the tests for Google Test itself on Linux, use 'make test' or
# ctest.  You can select which tests to run using 'ctest -R regex'.
# For more options, run 'ctest --help'.

# When other libraries are using a shared version of runtime libraries,
# Google Test also has to use one.
option(
  gtest_force_shared_crt
  "Use shared (DLL) run-time lib even when Google Test is built as static lib."
  OFF)

option(gtest_build_tests "Build all of gtest's own tests." OFF)

option(gtest_build_samples "Build gtest's sample programs." OFF)

option(gtest_disable_pthreads "Disable uses of pthreads in gtest." OFF)

option(
  gtest_hide_internal_symbols
  "Build gtest with internal symbols hidden in shared libraries."
  OFF)

# Defines pre_project_set_up_hermetic_build() and set_up_hermetic_build().
include(cmake/hermetic_build.cmake OPTIONAL)

if (COMMAND pre_project_set_up_hermetic_build)
  pre_project_set_up_hermetic_build()
endif()

########################################################################
#
# Project-wide settings

# Name of the project.
#
# CMake files in this project can refer to the root source directory
# as ${gtest_SOURCE_DIR} and to the root binary directory as
# ${gtest_BINARY_DIR}.
# Language "C" is required for find_package(Threads).

# Project version:

if (CMAKE_VERSION VERSION_LESS 3.0)
  project(gtest CXX C)
  set(PROJECT_VERSION ${GOOGLETEST_VERSION})
else()
  cmake_policy(SET CMP0048 NEW)
  project(gtest VERSION ${GOOGLETEST_VERSION} LANGUAGES CXX C)
endif()
cmake_minimum_required(VERSION 2.6.4)

if (POLICY CMP0063) # Visibility
  cmake_policy(SET CMP0063 NEW)
endif (POLICY CMP0063)

if (COMMAND set_up_hermetic_build)
  set_up_hermetic_build()
endif()

# These commands only run if this is the main project
if(CMAKE_PROJECT_NAME STREQUAL "gtest" OR CMAKE_PROJECT_NAME STREQUAL "googletest-distribution")

  # BUILD_SHARED_LIBS is a standard CMake variable, but we declare it here to
  # make it prominent in the GUI.
  option(BUILD_SHARED_LIBS "Build shared libraries (DLLs)." OFF)

else()

  mark_as_advanced(
    gtest_force_shared_crt
    gtest_build_tests
    gtest_build_samples
    gtest_disable_pthreads
    gtest_hide_internal_symbols)

endif()


if (gtest_hide_internal_symbols)
  set(CMAKE_CXX_VISIBILITY_PRESET hidden)
  set(CMAKE_VISIBILITY_INLINES_HIDDEN 1)
endif()

# Define helper functions and macros used by Google Test.
include(cmake/internal_utils.cmake)

config_compiler_and_linker()  # Defined in internal_utils.cmake.

# Create the CMake package file descriptors.
if (INSTALL_GTEST)
  include(CMakePackageConfigHelpers)
  set(cmake_package_name GTest)
  set(targets_export_name ${cmake_package_name}Targets CACHE INTERNAL "")
  set(generated_dir "${CMAKE_CURRENT_BINARY_DIR}/generated" CACHE INTERNAL "")
  set(cmake_files_install_dir "${CMAKE_INSTALL_LIBDIR}/cmake/${cmake_package_name}")
  set(version_file "${generated_dir}/${cmake_package_name}ConfigVersion.cmake")
  write_basic_package_version_file(${version_file} VERSION ${GOOGLETEST_VERSION} COMPATIBILITY AnyNewerVersion)
  install(EXPORT ${targets_export_name}
    NAMESPACE ${cmake_package_name}::
    DESTINATION ${cmake_files_install_dir})
  set(config_file "${generated_dir}/${cmake_package_name}Config.cmake")
  configure_package_config_file("${gtest_SOURCE_DIR}/cmake/Config.cmake.in"
    "${config_file}" INSTALL_DESTINATION ${cmake_files_install_dir})
  install(FILES ${version_file} ${config_file}
    DESTINATION ${cmake_files_install_dir})
endif()

# Where Google Test's .h files can be found.
set(gtest_build_include_dirs
  "${gtest_SOURCE_DIR}/include"
  "${gtest_SOURCE_DIR}")
include_directories(${gtest_build_include_dirs})

########################################################################
#
# Defines the gtest & gtest_main libraries.  User tests should link
# with one of them.

# Google Test libraries.  We build them using more strict warnings than what
# are used for other targets, to ensure that gtest can be compiled by a user
# aggressive about warnings.
cxx_library(gtest "${cxx_strict}" src/gtest-all.cc)
cxx_library(gtest_main "${cxx_strict}" src/gtest_main.cc)
# If the CMake version supports it, attach header directory information
# to the targets for when we are part of a parent build (ie being pulled
# in via add_subdirectory() rather than being a standalone build).
if (DEFINED CMAKE_VERSION AND NOT "${CMAKE_VERSION}" VERSION_LESS "2.8.11")
  target_include_directories(gtest SYSTEM INTERFACE
    "$<BUILD_INTERFACE:${gtest_build_include_dirs}>"
    "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>")
  target_include_directories(gtest_main SYSTEM INTERFACE
    "$<BUILD_INTERFACE:${gtest_build_include_dirs}>"
    "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>")
endif()
target_link_libraries(gtest_main PUBLIC gtest)

########################################################################
#
# Install rules
install_project(gtest gtest_main)

########################################################################
#
# Samples on how to link user tests with gtest or gtest_main.
#
# They are not built by default.  To build them, set the
# gtest_build_samples option to ON.  You can do it by running ccmake
# or specifying the -Dgtest_build_samples=ON flag when running cmake.

if (gtest_build_samples)
  cxx_executable(sample1_unittest samples gtest_main samples/sample1.cc)
  cxx_executable(sample2_unittest samples gtest_main samples/sample2.cc)
  cxx_executable(sample3_unittest samples gtest_main)
  cxx_executable(sample4_unittest samples gtest_main samples/sample4.cc)
  cxx_executable(sample5_unittest samples gtest_main samples/sample1.cc)
  cxx_executable(sample6_unittest samples gtest_main)
  cxx_executable(sample7_unittest samples gtest_main)
  cxx_executable(sample8_unittest samples gtest_main)
  cxx_executable(sample9_unittest samples gtest)
  cxx_executable(sample10_unittest samples gtest)
endif()

########################################################################
#
# Google Test's own tests.
#
# You can skip this section if you aren't interested in testing
# Google Test itself.
#
# The tests are not built by default.  To build them, set the
# gtest_build_tests option to ON.  You can do it by running ccmake
# or specifying the -Dgtest_build_tests=ON flag when running cmake.

if (gtest_build_tests)
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

  ############################################################
  # C++ tests built with standard compiler flags.

  cxx_test(googletest-death-test-test gtest_main)
  cxx_test(gtest_environment_test gtest)
  cxx_test(googletest-filepath-test gtest_main)
  cxx_test(googletest-listener-test gtest_main)
  cxx_test(gtest_main_unittest gtest_main)
  cxx_test(googletest-message-test gtest_main)
  cxx_test(gtest_no_test_unittest gtest)
  cxx_test(googletest-options-test gtest_main)
  cxx_test(googletest-param-test-test gtest
    test/googletest-param-test2-test.cc)
  cxx_test(googletest-port-test gtest_main)
  cxx_test(gtest_pred_impl_unittest gtest_main)
  cxx_test(gtest_premature_exit_test gtest
    test/gtest_premature_exit_test.cc)
  cxx_test(googletest-printers-test gtest_main)
  cxx_test(gtest_prod_test gtest_main
    test/production.cc)
  cxx_test(gtest_repeat_test gtest)
  cxx_test(gtest_sole_header_test gtest_main)
  cxx_test(gtest_stress_test gtest)
  cxx_test(googletest-test-part-test gtest_main)
  cxx_test(gtest_throw_on_failure_ex_test gtest)
  cxx_test(gtest-typed-test_test gtest_main
    test/gtest-typed-test2_test.cc)
  cxx_test(gtest_unittest gtest_main)
  cxx_test(gtest-unittest-api_test gtest)
  cxx_test(gtest_skip_in_environment_setup_test gtest_main)
  cxx_test(gtest_skip_test gtest_main)

  ############################################################
  # C++ tests built with non-standard compiler flags.

  # MSVC 7.1 does not support STL with exceptions disabled.
  if (NOT MSVC OR MSVC_VERSION GREATER 1310)
    cxx_library(gtest_no_exception "${cxx_no_exception}"
      src/gtest-all.cc)
    cxx_library(gtest_main_no_exception "${cxx_no_exception}"
      src/gtest-all.cc src/gtest_main.cc)
  endif()
  cxx_library(gtest_main_no_rtti "${cxx_no_rtti}"
    src/gtest-all.cc src/gtest_main.cc)

  cxx_test_with_flags(gtest-death-test_ex_nocatch_test
    "${cxx_exception} -DGTEST_ENABLE_CATCH_EXCEPTIONS_=0"
    gtest test/googletest-death-test_ex_test.cc)
  cxx_test_with_flags(gtest-death-test_ex_catch_test
    "${cxx_exception} -DGTEST_ENABLE_CATCH_EXCEPTIONS_=1"
    gtest test/googletest-death-test_ex_test.cc)

  cxx_test_with_flags(gtest_no_rtti_unittest "${cxx_no_rtti}"
    gtest_main_no_rtti test/gtest_unittest.cc)

  cxx_shared_library(gtest_dll "${cxx_default}"
    src/gtest-all.cc src/gtest_main.cc)

  cxx_executable_with_flags(gtest_dll_test_ "${cxx_default}"
    gtest_dll test/gtest_all_test.cc)
  set_target_properties(gtest_dll_test_
                        PROPERTIES
                        COMPILE_DEFINITIONS "GTEST_LINKED_AS_SHARED_LIBRARY=1")

  ############################################################
  # Python tests.

  cxx_executable(googletest-break-on-failure-unittest_ test gtest)
  py_test(googletest-break-on-failure-unittest)

  py_test(gtest_skip_environment_check_output_test)

  # Visual Studio .NET 2003 does not support STL with exceptions disabled.
  if (NOT MSVC OR MSVC_VERSION GREATER 1310)  # 1310 is Visual Studio .NET 2003
    cxx_executable_with_flags(
      googletest-catch-exceptions-no-ex-test_
      "${cxx_no_exception}"
      gtest_main_no_exception
      test/googletest-catch-exceptions-test_.cc)
  endif()

  cxx_executable_with_flags(
    googletest-catch-exceptions-ex-test_
    "${cxx_exception}"
    gtest_main
    test/googletest-catch-exceptions-test_.cc)
  py_test(googletest-catch-exceptions-test)

  cxx_executable(googletest-color-test_ test gtest)
  py_test(googletest-color-test)

  cxx_executable(googletest-env-var-test_ test gtest)
  py_test(googletest-env-var-test)

  cxx_executable(googletest-filter-unittest_ test gtest)
  py_test(googletest-filter-unittest)

  cxx_executable(gtest_help_test_ test gtest_main)
  py_test(gtest_help_test)

  cxx_executable(googletest-list-tests-unittest_ test gtest)
  py_test(googletest-list-tests-unittest)

  cxx_executable(googletest-output-test_ test gtest)
  py_test(googletest-output-test --no_stacktrace_support)

  cxx_executable(googletest-shuffle-test_ test gtest)
  py_test(googletest-shuffle-test)

  # MSVC 7.1 does not support STL with exceptions disabled.
  if (NOT MSVC OR MSVC_VERSION GREATER 1310)
    cxx_executable(googletest-throw-on-failure-test_ test gtest_no_exception)
    set_target_properties(googletest-throw-on-failure-test_
      PROPERTIES
      COMPILE_FLAGS "${cxx_no_exception}")
    py_test(googletest-throw-on-failure-test)
  endif()

  cxx_executable(googletest-uninitialized-test_ test gtest)
  py_test(googletest-uninitialized-test)

  cxx_executable(gtest_xml_outfile1_test_ test gtest_main)
  cxx_executable(gtest_xml_outfile2_test_ test gtest_main)
  py_test(gtest_xml_outfiles_test)
  py_test(googletest-json-outfiles-test)

  cxx_executable(gtest_xml_output_unittest_ test gtest)
  py_test(gtest_xml_output_unittest --no_stacktrace_support)
  py_test(googletest-json-output-unittest --no_stacktrace_support)
endif()
