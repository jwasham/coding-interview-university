# Googletest Mocking (gMock) Framework

### Overview

Google's framework for writing and using C++ mock classes. It can help you
derive better designs of your system and write better tests.

It is inspired by:

*   [jMock](http://www.jmock.org/),
*   [EasyMock](http://www.easymock.org/), and
*   [Hamcrest](http://code.google.com/p/hamcrest/),

and designed with C++'s specifics in mind.

gMock:

-   provides a declarative syntax for defining mocks,
-   can define partial (hybrid) mocks, which are a cross of real and mock
    objects,
-   handles functions of arbitrary types and overloaded functions,
-   comes with a rich set of matchers for validating function arguments,
-   uses an intuitive syntax for controlling the behavior of a mock,
-   does automatic verification of expectations (no record-and-replay needed),
-   allows arbitrary (partial) ordering constraints on function calls to be
    expressed,
-   lets a user extend it by defining new matchers and actions.
-   does not use exceptions, and
-   is easy to learn and use.

Details and examples can be found here:

*   [gMock for Dummies](docs/for_dummies.md)
*   [Legacy gMock FAQ](docs/gmock_faq.md)
*   [gMock Cookbook](docs/cook_book.md)
*   [gMock Cheat Sheet](docs/cheat_sheet.md)

Please note that code under scripts/generator/ is from the [cppclean
project](http://code.google.com/p/cppclean/) and under the Apache
License, which is different from Google Mock's license.

Google Mock is a part of
[Google Test C++ testing framework](http://github.com/google/googletest/) and a
subject to the same requirements.
