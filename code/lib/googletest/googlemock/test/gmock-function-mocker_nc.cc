#include "gmock/gmock.h"

#include <memory>
#include <string>

#if defined(TEST_MOCK_METHOD_INVALID_CONST_SPEC)

struct Base {
  MOCK_METHOD(int, F, (), (onst));
};

#else

// Sanity check - this should compile.

#endif
