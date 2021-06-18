# Customization Points

The custom directory is an injection point for custom user configurations.

## Header `gmock-port.h`

The following macros can be defined:

### Flag related macros:

*   `GMOCK_DECLARE_bool_(name)`
*   `GMOCK_DECLARE_int32_(name)`
*   `GMOCK_DECLARE_string_(name)`
*   `GMOCK_DEFINE_bool_(name, default_val, doc)`
*   `GMOCK_DEFINE_int32_(name, default_val, doc)`
*   `GMOCK_DEFINE_string_(name, default_val, doc)`
