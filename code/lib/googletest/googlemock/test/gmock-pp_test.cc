#include "gmock/internal/gmock-pp.h"

// Static assertions.
namespace testing {
namespace internal {
namespace gmockpp {

static_assert(GMOCK_PP_CAT(1, 4) == 14, "");
static_assert(GMOCK_PP_INTERNAL_INTERNAL_16TH(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
                                              12, 13, 14, 15, 16, 17, 18) == 16,
              "");
static_assert(GMOCK_PP_NARG() == 1, "");
static_assert(GMOCK_PP_NARG(x) == 1, "");
static_assert(GMOCK_PP_NARG(x, y) == 2, "");
static_assert(GMOCK_PP_NARG(x, y, z) == 3, "");
static_assert(GMOCK_PP_NARG(x, y, z, w) == 4, "");
static_assert(!GMOCK_PP_HAS_COMMA(), "");
static_assert(GMOCK_PP_HAS_COMMA(b, ), "");
static_assert(!GMOCK_PP_HAS_COMMA((, )), "");
static_assert(!GMOCK_PP_IS_EMPTY(, ), "");
static_assert(!GMOCK_PP_IS_EMPTY(a), "");
static_assert(!GMOCK_PP_IS_EMPTY(()), "");
static_assert(GMOCK_PP_IF(1, 1, 2) == 1, "");
static_assert(GMOCK_PP_IF(0, 1, 2) == 2, "");
static_assert(GMOCK_PP_NARG0(x) == 1, "");
static_assert(GMOCK_PP_NARG0(x, y) == 2, "");
static_assert(GMOCK_PP_HEAD(1) == 1, "");
static_assert(GMOCK_PP_HEAD(1, 2) == 1, "");
static_assert(GMOCK_PP_HEAD(1, 2, 3) == 1, "");
static_assert(GMOCK_PP_TAIL(1, 2) == 2, "");
static_assert(GMOCK_PP_HEAD(GMOCK_PP_TAIL(1, 2, 3)) == 2, "");
static_assert(!GMOCK_PP_IS_BEGIN_PARENS(sss), "");
static_assert(!GMOCK_PP_IS_BEGIN_PARENS(sss()), "");
static_assert(!GMOCK_PP_IS_BEGIN_PARENS(sss() sss), "");
static_assert(GMOCK_PP_IS_BEGIN_PARENS((sss)), "");
static_assert(GMOCK_PP_IS_BEGIN_PARENS((sss)ss), "");
static_assert(!GMOCK_PP_IS_ENCLOSED_PARENS(sss), "");
static_assert(!GMOCK_PP_IS_ENCLOSED_PARENS(sss()), "");
static_assert(!GMOCK_PP_IS_ENCLOSED_PARENS(sss() sss), "");
static_assert(!GMOCK_PP_IS_ENCLOSED_PARENS((sss)ss), "");
static_assert(GMOCK_PP_REMOVE_PARENS((1 + 1)) * 2 == 3, "");
static_assert(GMOCK_PP_INC(4) == 5, "");

template <class... Args>
struct Test {
  static constexpr int kArgs = sizeof...(Args);
};
#define GMOCK_PP_INTERNAL_TYPE_TEST(_i, _Data, _element) \
  GMOCK_PP_COMMA_IF(_i) _element
static_assert(Test<GMOCK_PP_FOR_EACH(GMOCK_PP_INTERNAL_TYPE_TEST, ~,
                                     (int, float, double, char))>::kArgs == 4,
              "");
#define GMOCK_PP_INTERNAL_VAR_TEST_1(_x) 1
#define GMOCK_PP_INTERNAL_VAR_TEST_2(_x, _y) 2
#define GMOCK_PP_INTERNAL_VAR_TEST_3(_x, _y, _z) 3

#define GMOCK_PP_INTERNAL_VAR_TEST(...) \
  GMOCK_PP_VARIADIC_CALL(GMOCK_PP_INTERNAL_VAR_TEST_, __VA_ARGS__)
static_assert(GMOCK_PP_INTERNAL_VAR_TEST(x, y) == 2, "");
static_assert(GMOCK_PP_INTERNAL_VAR_TEST(silly) == 1, "");
static_assert(GMOCK_PP_INTERNAL_VAR_TEST(x, y, z) == 3, "");

// TODO(iserna): The following asserts fail in --config=lexan.
#define GMOCK_PP_INTERNAL_IS_EMPTY_TEST_1
static_assert(GMOCK_PP_IS_EMPTY(GMOCK_PP_INTERNAL_IS_EMPTY_TEST_1), "");
static_assert(GMOCK_PP_IS_EMPTY(), "");
static_assert(GMOCK_PP_IS_ENCLOSED_PARENS((sss)), "");
static_assert(GMOCK_PP_IS_EMPTY(GMOCK_PP_TAIL(1)), "");
static_assert(GMOCK_PP_NARG0() == 0, "");

}  // namespace gmockpp
}  // namespace internal
}  // namespace testing
