# Customization Points

The custom directory is an injection point for custom user configurations.

## Header `gtest.h`

### The following macros can be defined:

*   `GTEST_OS_STACK_TRACE_GETTER_` - The name of an implementation of
    `OsStackTraceGetterInterface`.
*   `GTEST_CUSTOM_TEMPDIR_FUNCTION_` - An override for `testing::TempDir()`. See
    `testing::TempDir` for semantics and signature.

## Header `gtest-port.h`

The following macros can be defined:

### Flag related macros:

*   `GTEST_FLAG(flag_name)`
*   `GTEST_USE_OWN_FLAGFILE_FLAG_` - Define to 0 when the system provides its
    own flagfile flag parsing.
*   `GTEST_DECLARE_bool_(name)`
*   `GTEST_DECLARE_int32_(name)`
*   `GTEST_DECLARE_string_(name)`
*   `GTEST_DEFINE_bool_(name, default_val, doc)`
*   `GTEST_DEFINE_int32_(name, default_val, doc)`
*   `GTEST_DEFINE_string_(name, default_val, doc)`

### Logging:

*   `GTEST_LOG_(severity)`
*   `GTEST_CHECK_(condition)`
*   Functions `LogToStderr()` and `FlushInfoLog()` have to be provided too.

### Threading:

*   `GTEST_HAS_NOTIFICATION_` - Enabled if Notification is already provided.
*   `GTEST_HAS_MUTEX_AND_THREAD_LOCAL_` - Enabled if `Mutex` and `ThreadLocal`
    are already provided. Must also provide `GTEST_DECLARE_STATIC_MUTEX_(mutex)`
    and `GTEST_DEFINE_STATIC_MUTEX_(mutex)`
*   `GTEST_EXCLUSIVE_LOCK_REQUIRED_(locks)`
*   `GTEST_LOCK_EXCLUDED_(locks)`

### Underlying library support features

*   `GTEST_HAS_CXXABI_H_`

### Exporting API symbols:

*   `GTEST_API_` - Specifier for exported symbols.

## Header `gtest-printers.h`

*   See documentation at `gtest/gtest-printers.h` for details on how to define a
    custom printer.
