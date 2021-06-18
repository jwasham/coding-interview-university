// Copyright 2007, Google Inc.
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


// Google Mock - a framework for writing C++ mock classes.
//
// This file implements some commonly used actions.

// GOOGLETEST_CM0002 DO NOT DELETE

#ifndef GMOCK_INCLUDE_GMOCK_GMOCK_ACTIONS_H_
#define GMOCK_INCLUDE_GMOCK_GMOCK_ACTIONS_H_

#ifndef _WIN32_WCE
# include <errno.h>
#endif

#include <algorithm>
#include <functional>
#include <memory>
#include <string>
#include <type_traits>
#include <utility>

#include "gmock/internal/gmock-internal-utils.h"
#include "gmock/internal/gmock-port.h"

#ifdef _MSC_VER
# pragma warning(push)
# pragma warning(disable:4100)
#endif

namespace testing {

// To implement an action Foo, define:
//   1. a class FooAction that implements the ActionInterface interface, and
//   2. a factory function that creates an Action object from a
//      const FooAction*.
//
// The two-level delegation design follows that of Matcher, providing
// consistency for extension developers.  It also eases ownership
// management as Action objects can now be copied like plain values.

namespace internal {

// BuiltInDefaultValueGetter<T, true>::Get() returns a
// default-constructed T value.  BuiltInDefaultValueGetter<T,
// false>::Get() crashes with an error.
//
// This primary template is used when kDefaultConstructible is true.
template <typename T, bool kDefaultConstructible>
struct BuiltInDefaultValueGetter {
  static T Get() { return T(); }
};
template <typename T>
struct BuiltInDefaultValueGetter<T, false> {
  static T Get() {
    Assert(false, __FILE__, __LINE__,
           "Default action undefined for the function return type.");
    return internal::Invalid<T>();
    // The above statement will never be reached, but is required in
    // order for this function to compile.
  }
};

// BuiltInDefaultValue<T>::Get() returns the "built-in" default value
// for type T, which is NULL when T is a raw pointer type, 0 when T is
// a numeric type, false when T is bool, or "" when T is string or
// std::string.  In addition, in C++11 and above, it turns a
// default-constructed T value if T is default constructible.  For any
// other type T, the built-in default T value is undefined, and the
// function will abort the process.
template <typename T>
class BuiltInDefaultValue {
 public:
  // This function returns true if and only if type T has a built-in default
  // value.
  static bool Exists() {
    return ::std::is_default_constructible<T>::value;
  }

  static T Get() {
    return BuiltInDefaultValueGetter<
        T, ::std::is_default_constructible<T>::value>::Get();
  }
};

// This partial specialization says that we use the same built-in
// default value for T and const T.
template <typename T>
class BuiltInDefaultValue<const T> {
 public:
  static bool Exists() { return BuiltInDefaultValue<T>::Exists(); }
  static T Get() { return BuiltInDefaultValue<T>::Get(); }
};

// This partial specialization defines the default values for pointer
// types.
template <typename T>
class BuiltInDefaultValue<T*> {
 public:
  static bool Exists() { return true; }
  static T* Get() { return nullptr; }
};

// The following specializations define the default values for
// specific types we care about.
#define GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(type, value) \
  template <> \
  class BuiltInDefaultValue<type> { \
   public: \
    static bool Exists() { return true; } \
    static type Get() { return value; } \
  }

GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(void, );  // NOLINT
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(::std::string, "");
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(bool, false);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(unsigned char, '\0');
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(signed char, '\0');
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(char, '\0');

// There's no need for a default action for signed wchar_t, as that
// type is the same as wchar_t for gcc, and invalid for MSVC.
//
// There's also no need for a default action for unsigned wchar_t, as
// that type is the same as unsigned int for gcc, and invalid for
// MSVC.
#if GMOCK_WCHAR_T_IS_NATIVE_
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(wchar_t, 0U);  // NOLINT
#endif

GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(unsigned short, 0U);  // NOLINT
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(signed short, 0);     // NOLINT
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(unsigned int, 0U);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(signed int, 0);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(unsigned long, 0UL);  // NOLINT
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(signed long, 0L);     // NOLINT
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(UInt64, 0);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(Int64, 0);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(float, 0);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(double, 0);

#undef GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_

}  // namespace internal

// When an unexpected function call is encountered, Google Mock will
// let it return a default value if the user has specified one for its
// return type, or if the return type has a built-in default value;
// otherwise Google Mock won't know what value to return and will have
// to abort the process.
//
// The DefaultValue<T> class allows a user to specify the
// default value for a type T that is both copyable and publicly
// destructible (i.e. anything that can be used as a function return
// type).  The usage is:
//
//   // Sets the default value for type T to be foo.
//   DefaultValue<T>::Set(foo);
template <typename T>
class DefaultValue {
 public:
  // Sets the default value for type T; requires T to be
  // copy-constructable and have a public destructor.
  static void Set(T x) {
    delete producer_;
    producer_ = new FixedValueProducer(x);
  }

  // Provides a factory function to be called to generate the default value.
  // This method can be used even if T is only move-constructible, but it is not
  // limited to that case.
  typedef T (*FactoryFunction)();
  static void SetFactory(FactoryFunction factory) {
    delete producer_;
    producer_ = new FactoryValueProducer(factory);
  }

  // Unsets the default value for type T.
  static void Clear() {
    delete producer_;
    producer_ = nullptr;
  }

  // Returns true if and only if the user has set the default value for type T.
  static bool IsSet() { return producer_ != nullptr; }

  // Returns true if T has a default return value set by the user or there
  // exists a built-in default value.
  static bool Exists() {
    return IsSet() || internal::BuiltInDefaultValue<T>::Exists();
  }

  // Returns the default value for type T if the user has set one;
  // otherwise returns the built-in default value. Requires that Exists()
  // is true, which ensures that the return value is well-defined.
  static T Get() {
    return producer_ == nullptr ? internal::BuiltInDefaultValue<T>::Get()
                                : producer_->Produce();
  }

 private:
  class ValueProducer {
   public:
    virtual ~ValueProducer() {}
    virtual T Produce() = 0;
  };

  class FixedValueProducer : public ValueProducer {
   public:
    explicit FixedValueProducer(T value) : value_(value) {}
    T Produce() override { return value_; }

   private:
    const T value_;
    GTEST_DISALLOW_COPY_AND_ASSIGN_(FixedValueProducer);
  };

  class FactoryValueProducer : public ValueProducer {
   public:
    explicit FactoryValueProducer(FactoryFunction factory)
        : factory_(factory) {}
    T Produce() override { return factory_(); }

   private:
    const FactoryFunction factory_;
    GTEST_DISALLOW_COPY_AND_ASSIGN_(FactoryValueProducer);
  };

  static ValueProducer* producer_;
};

// This partial specialization allows a user to set default values for
// reference types.
template <typename T>
class DefaultValue<T&> {
 public:
  // Sets the default value for type T&.
  static void Set(T& x) {  // NOLINT
    address_ = &x;
  }

  // Unsets the default value for type T&.
  static void Clear() { address_ = nullptr; }

  // Returns true if and only if the user has set the default value for type T&.
  static bool IsSet() { return address_ != nullptr; }

  // Returns true if T has a default return value set by the user or there
  // exists a built-in default value.
  static bool Exists() {
    return IsSet() || internal::BuiltInDefaultValue<T&>::Exists();
  }

  // Returns the default value for type T& if the user has set one;
  // otherwise returns the built-in default value if there is one;
  // otherwise aborts the process.
  static T& Get() {
    return address_ == nullptr ? internal::BuiltInDefaultValue<T&>::Get()
                               : *address_;
  }

 private:
  static T* address_;
};

// This specialization allows DefaultValue<void>::Get() to
// compile.
template <>
class DefaultValue<void> {
 public:
  static bool Exists() { return true; }
  static void Get() {}
};

// Points to the user-set default value for type T.
template <typename T>
typename DefaultValue<T>::ValueProducer* DefaultValue<T>::producer_ = nullptr;

// Points to the user-set default value for type T&.
template <typename T>
T* DefaultValue<T&>::address_ = nullptr;

// Implement this interface to define an action for function type F.
template <typename F>
class ActionInterface {
 public:
  typedef typename internal::Function<F>::Result Result;
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  ActionInterface() {}
  virtual ~ActionInterface() {}

  // Performs the action.  This method is not const, as in general an
  // action can have side effects and be stateful.  For example, a
  // get-the-next-element-from-the-collection action will need to
  // remember the current element.
  virtual Result Perform(const ArgumentTuple& args) = 0;

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(ActionInterface);
};

// An Action<F> is a copyable and IMMUTABLE (except by assignment)
// object that represents an action to be taken when a mock function
// of type F is called.  The implementation of Action<T> is just a
// std::shared_ptr to const ActionInterface<T>. Don't inherit from Action!
// You can view an object implementing ActionInterface<F> as a
// concrete action (including its current state), and an Action<F>
// object as a handle to it.
template <typename F>
class Action {
  // Adapter class to allow constructing Action from a legacy ActionInterface.
  // New code should create Actions from functors instead.
  struct ActionAdapter {
    // Adapter must be copyable to satisfy std::function requirements.
    ::std::shared_ptr<ActionInterface<F>> impl_;

    template <typename... Args>
    typename internal::Function<F>::Result operator()(Args&&... args) {
      return impl_->Perform(
          ::std::forward_as_tuple(::std::forward<Args>(args)...));
    }
  };

 public:
  typedef typename internal::Function<F>::Result Result;
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  // Constructs a null Action.  Needed for storing Action objects in
  // STL containers.
  Action() {}

  // Construct an Action from a specified callable.
  // This cannot take std::function directly, because then Action would not be
  // directly constructible from lambda (it would require two conversions).
  template <typename G,
            typename = typename ::std::enable_if<
                ::std::is_constructible<::std::function<F>, G>::value>::type>
  Action(G&& fun) : fun_(::std::forward<G>(fun)) {}  // NOLINT

  // Constructs an Action from its implementation.
  explicit Action(ActionInterface<F>* impl)
      : fun_(ActionAdapter{::std::shared_ptr<ActionInterface<F>>(impl)}) {}

  // This constructor allows us to turn an Action<Func> object into an
  // Action<F>, as long as F's arguments can be implicitly converted
  // to Func's and Func's return type can be implicitly converted to F's.
  template <typename Func>
  explicit Action(const Action<Func>& action) : fun_(action.fun_) {}

  // Returns true if and only if this is the DoDefault() action.
  bool IsDoDefault() const { return fun_ == nullptr; }

  // Performs the action.  Note that this method is const even though
  // the corresponding method in ActionInterface is not.  The reason
  // is that a const Action<F> means that it cannot be re-bound to
  // another concrete action, not that the concrete action it binds to
  // cannot change state.  (Think of the difference between a const
  // pointer and a pointer to const.)
  Result Perform(ArgumentTuple args) const {
    if (IsDoDefault()) {
      internal::IllegalDoDefault(__FILE__, __LINE__);
    }
    return internal::Apply(fun_, ::std::move(args));
  }

 private:
  template <typename G>
  friend class Action;

  // fun_ is an empty function if and only if this is the DoDefault() action.
  ::std::function<F> fun_;
};

// The PolymorphicAction class template makes it easy to implement a
// polymorphic action (i.e. an action that can be used in mock
// functions of than one type, e.g. Return()).
//
// To define a polymorphic action, a user first provides a COPYABLE
// implementation class that has a Perform() method template:
//
//   class FooAction {
//    public:
//     template <typename Result, typename ArgumentTuple>
//     Result Perform(const ArgumentTuple& args) const {
//       // Processes the arguments and returns a result, using
//       // std::get<N>(args) to get the N-th (0-based) argument in the tuple.
//     }
//     ...
//   };
//
// Then the user creates the polymorphic action using
// MakePolymorphicAction(object) where object has type FooAction.  See
// the definition of Return(void) and SetArgumentPointee<N>(value) for
// complete examples.
template <typename Impl>
class PolymorphicAction {
 public:
  explicit PolymorphicAction(const Impl& impl) : impl_(impl) {}

  template <typename F>
  operator Action<F>() const {
    return Action<F>(new MonomorphicImpl<F>(impl_));
  }

 private:
  template <typename F>
  class MonomorphicImpl : public ActionInterface<F> {
   public:
    typedef typename internal::Function<F>::Result Result;
    typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

    explicit MonomorphicImpl(const Impl& impl) : impl_(impl) {}

    Result Perform(const ArgumentTuple& args) override {
      return impl_.template Perform<Result>(args);
    }

   private:
    Impl impl_;

    GTEST_DISALLOW_ASSIGN_(MonomorphicImpl);
  };

  Impl impl_;

  GTEST_DISALLOW_ASSIGN_(PolymorphicAction);
};

// Creates an Action from its implementation and returns it.  The
// created Action object owns the implementation.
template <typename F>
Action<F> MakeAction(ActionInterface<F>* impl) {
  return Action<F>(impl);
}

// Creates a polymorphic action from its implementation.  This is
// easier to use than the PolymorphicAction<Impl> constructor as it
// doesn't require you to explicitly write the template argument, e.g.
//
//   MakePolymorphicAction(foo);
// vs
//   PolymorphicAction<TypeOfFoo>(foo);
template <typename Impl>
inline PolymorphicAction<Impl> MakePolymorphicAction(const Impl& impl) {
  return PolymorphicAction<Impl>(impl);
}

namespace internal {

// Helper struct to specialize ReturnAction to execute a move instead of a copy
// on return. Useful for move-only types, but could be used on any type.
template <typename T>
struct ByMoveWrapper {
  explicit ByMoveWrapper(T value) : payload(std::move(value)) {}
  T payload;
};

// Implements the polymorphic Return(x) action, which can be used in
// any function that returns the type of x, regardless of the argument
// types.
//
// Note: The value passed into Return must be converted into
// Function<F>::Result when this action is cast to Action<F> rather than
// when that action is performed. This is important in scenarios like
//
// MOCK_METHOD1(Method, T(U));
// ...
// {
//   Foo foo;
//   X x(&foo);
//   EXPECT_CALL(mock, Method(_)).WillOnce(Return(x));
// }
//
// In the example above the variable x holds reference to foo which leaves
// scope and gets destroyed.  If copying X just copies a reference to foo,
// that copy will be left with a hanging reference.  If conversion to T
// makes a copy of foo, the above code is safe. To support that scenario, we
// need to make sure that the type conversion happens inside the EXPECT_CALL
// statement, and conversion of the result of Return to Action<T(U)> is a
// good place for that.
//
// The real life example of the above scenario happens when an invocation
// of gtl::Container() is passed into Return.
//
template <typename R>
class ReturnAction {
 public:
  // Constructs a ReturnAction object from the value to be returned.
  // 'value' is passed by value instead of by const reference in order
  // to allow Return("string literal") to compile.
  explicit ReturnAction(R value) : value_(new R(std::move(value))) {}

  // This template type conversion operator allows Return(x) to be
  // used in ANY function that returns x's type.
  template <typename F>
  operator Action<F>() const {  // NOLINT
    // Assert statement belongs here because this is the best place to verify
    // conditions on F. It produces the clearest error messages
    // in most compilers.
    // Impl really belongs in this scope as a local class but can't
    // because MSVC produces duplicate symbols in different translation units
    // in this case. Until MS fixes that bug we put Impl into the class scope
    // and put the typedef both here (for use in assert statement) and
    // in the Impl class. But both definitions must be the same.
    typedef typename Function<F>::Result Result;
    GTEST_COMPILE_ASSERT_(
        !std::is_reference<Result>::value,
        use_ReturnRef_instead_of_Return_to_return_a_reference);
    static_assert(!std::is_void<Result>::value,
                  "Can't use Return() on an action expected to return `void`.");
    return Action<F>(new Impl<R, F>(value_));
  }

 private:
  // Implements the Return(x) action for a particular function type F.
  template <typename R_, typename F>
  class Impl : public ActionInterface<F> {
   public:
    typedef typename Function<F>::Result Result;
    typedef typename Function<F>::ArgumentTuple ArgumentTuple;

    // The implicit cast is necessary when Result has more than one
    // single-argument constructor (e.g. Result is std::vector<int>) and R
    // has a type conversion operator template.  In that case, value_(value)
    // won't compile as the compiler doesn't known which constructor of
    // Result to call.  ImplicitCast_ forces the compiler to convert R to
    // Result without considering explicit constructors, thus resolving the
    // ambiguity. value_ is then initialized using its copy constructor.
    explicit Impl(const std::shared_ptr<R>& value)
        : value_before_cast_(*value),
          value_(ImplicitCast_<Result>(value_before_cast_)) {}

    Result Perform(const ArgumentTuple&) override { return value_; }

   private:
    GTEST_COMPILE_ASSERT_(!std::is_reference<Result>::value,
                          Result_cannot_be_a_reference_type);
    // We save the value before casting just in case it is being cast to a
    // wrapper type.
    R value_before_cast_;
    Result value_;

    GTEST_DISALLOW_COPY_AND_ASSIGN_(Impl);
  };

  // Partially specialize for ByMoveWrapper. This version of ReturnAction will
  // move its contents instead.
  template <typename R_, typename F>
  class Impl<ByMoveWrapper<R_>, F> : public ActionInterface<F> {
   public:
    typedef typename Function<F>::Result Result;
    typedef typename Function<F>::ArgumentTuple ArgumentTuple;

    explicit Impl(const std::shared_ptr<R>& wrapper)
        : performed_(false), wrapper_(wrapper) {}

    Result Perform(const ArgumentTuple&) override {
      GTEST_CHECK_(!performed_)
          << "A ByMove() action should only be performed once.";
      performed_ = true;
      return std::move(wrapper_->payload);
    }

   private:
    bool performed_;
    const std::shared_ptr<R> wrapper_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  const std::shared_ptr<R> value_;

  GTEST_DISALLOW_ASSIGN_(ReturnAction);
};

// Implements the ReturnNull() action.
class ReturnNullAction {
 public:
  // Allows ReturnNull() to be used in any pointer-returning function. In C++11
  // this is enforced by returning nullptr, and in non-C++11 by asserting a
  // pointer type on compile time.
  template <typename Result, typename ArgumentTuple>
  static Result Perform(const ArgumentTuple&) {
    return nullptr;
  }
};

// Implements the Return() action.
class ReturnVoidAction {
 public:
  // Allows Return() to be used in any void-returning function.
  template <typename Result, typename ArgumentTuple>
  static void Perform(const ArgumentTuple&) {
    static_assert(std::is_void<Result>::value, "Result should be void.");
  }
};

// Implements the polymorphic ReturnRef(x) action, which can be used
// in any function that returns a reference to the type of x,
// regardless of the argument types.
template <typename T>
class ReturnRefAction {
 public:
  // Constructs a ReturnRefAction object from the reference to be returned.
  explicit ReturnRefAction(T& ref) : ref_(ref) {}  // NOLINT

  // This template type conversion operator allows ReturnRef(x) to be
  // used in ANY function that returns a reference to x's type.
  template <typename F>
  operator Action<F>() const {
    typedef typename Function<F>::Result Result;
    // Asserts that the function return type is a reference.  This
    // catches the user error of using ReturnRef(x) when Return(x)
    // should be used, and generates some helpful error message.
    GTEST_COMPILE_ASSERT_(std::is_reference<Result>::value,
                          use_Return_instead_of_ReturnRef_to_return_a_value);
    return Action<F>(new Impl<F>(ref_));
  }

 private:
  // Implements the ReturnRef(x) action for a particular function type F.
  template <typename F>
  class Impl : public ActionInterface<F> {
   public:
    typedef typename Function<F>::Result Result;
    typedef typename Function<F>::ArgumentTuple ArgumentTuple;

    explicit Impl(T& ref) : ref_(ref) {}  // NOLINT

    Result Perform(const ArgumentTuple&) override { return ref_; }

   private:
    T& ref_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  T& ref_;

  GTEST_DISALLOW_ASSIGN_(ReturnRefAction);
};

// Implements the polymorphic ReturnRefOfCopy(x) action, which can be
// used in any function that returns a reference to the type of x,
// regardless of the argument types.
template <typename T>
class ReturnRefOfCopyAction {
 public:
  // Constructs a ReturnRefOfCopyAction object from the reference to
  // be returned.
  explicit ReturnRefOfCopyAction(const T& value) : value_(value) {}  // NOLINT

  // This template type conversion operator allows ReturnRefOfCopy(x) to be
  // used in ANY function that returns a reference to x's type.
  template <typename F>
  operator Action<F>() const {
    typedef typename Function<F>::Result Result;
    // Asserts that the function return type is a reference.  This
    // catches the user error of using ReturnRefOfCopy(x) when Return(x)
    // should be used, and generates some helpful error message.
    GTEST_COMPILE_ASSERT_(
        std::is_reference<Result>::value,
        use_Return_instead_of_ReturnRefOfCopy_to_return_a_value);
    return Action<F>(new Impl<F>(value_));
  }

 private:
  // Implements the ReturnRefOfCopy(x) action for a particular function type F.
  template <typename F>
  class Impl : public ActionInterface<F> {
   public:
    typedef typename Function<F>::Result Result;
    typedef typename Function<F>::ArgumentTuple ArgumentTuple;

    explicit Impl(const T& value) : value_(value) {}  // NOLINT

    Result Perform(const ArgumentTuple&) override { return value_; }

   private:
    T value_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  const T value_;

  GTEST_DISALLOW_ASSIGN_(ReturnRefOfCopyAction);
};

// Implements the polymorphic DoDefault() action.
class DoDefaultAction {
 public:
  // This template type conversion operator allows DoDefault() to be
  // used in any function.
  template <typename F>
  operator Action<F>() const { return Action<F>(); }  // NOLINT
};

// Implements the Assign action to set a given pointer referent to a
// particular value.
template <typename T1, typename T2>
class AssignAction {
 public:
  AssignAction(T1* ptr, T2 value) : ptr_(ptr), value_(value) {}

  template <typename Result, typename ArgumentTuple>
  void Perform(const ArgumentTuple& /* args */) const {
    *ptr_ = value_;
  }

 private:
  T1* const ptr_;
  const T2 value_;

  GTEST_DISALLOW_ASSIGN_(AssignAction);
};

#if !GTEST_OS_WINDOWS_MOBILE

// Implements the SetErrnoAndReturn action to simulate return from
// various system calls and libc functions.
template <typename T>
class SetErrnoAndReturnAction {
 public:
  SetErrnoAndReturnAction(int errno_value, T result)
      : errno_(errno_value),
        result_(result) {}
  template <typename Result, typename ArgumentTuple>
  Result Perform(const ArgumentTuple& /* args */) const {
    errno = errno_;
    return result_;
  }

 private:
  const int errno_;
  const T result_;

  GTEST_DISALLOW_ASSIGN_(SetErrnoAndReturnAction);
};

#endif  // !GTEST_OS_WINDOWS_MOBILE

// Implements the SetArgumentPointee<N>(x) action for any function
// whose N-th argument (0-based) is a pointer to x's type.
template <size_t N, typename A, typename = void>
struct SetArgumentPointeeAction {
  A value;

  template <typename... Args>
  void operator()(const Args&... args) const {
    *::std::get<N>(std::tie(args...)) = value;
  }
};

// Implements the Invoke(object_ptr, &Class::Method) action.
template <class Class, typename MethodPtr>
struct InvokeMethodAction {
  Class* const obj_ptr;
  const MethodPtr method_ptr;

  template <typename... Args>
  auto operator()(Args&&... args) const
      -> decltype((obj_ptr->*method_ptr)(std::forward<Args>(args)...)) {
    return (obj_ptr->*method_ptr)(std::forward<Args>(args)...);
  }
};

// Implements the InvokeWithoutArgs(f) action.  The template argument
// FunctionImpl is the implementation type of f, which can be either a
// function pointer or a functor.  InvokeWithoutArgs(f) can be used as an
// Action<F> as long as f's type is compatible with F.
template <typename FunctionImpl>
struct InvokeWithoutArgsAction {
  FunctionImpl function_impl;

  // Allows InvokeWithoutArgs(f) to be used as any action whose type is
  // compatible with f.
  template <typename... Args>
  auto operator()(const Args&...) -> decltype(function_impl()) {
    return function_impl();
  }
};

// Implements the InvokeWithoutArgs(object_ptr, &Class::Method) action.
template <class Class, typename MethodPtr>
struct InvokeMethodWithoutArgsAction {
  Class* const obj_ptr;
  const MethodPtr method_ptr;

  using ReturnType = typename std::result_of<MethodPtr(Class*)>::type;

  template <typename... Args>
  ReturnType operator()(const Args&...) const {
    return (obj_ptr->*method_ptr)();
  }
};

// Implements the IgnoreResult(action) action.
template <typename A>
class IgnoreResultAction {
 public:
  explicit IgnoreResultAction(const A& action) : action_(action) {}

  template <typename F>
  operator Action<F>() const {
    // Assert statement belongs here because this is the best place to verify
    // conditions on F. It produces the clearest error messages
    // in most compilers.
    // Impl really belongs in this scope as a local class but can't
    // because MSVC produces duplicate symbols in different translation units
    // in this case. Until MS fixes that bug we put Impl into the class scope
    // and put the typedef both here (for use in assert statement) and
    // in the Impl class. But both definitions must be the same.
    typedef typename internal::Function<F>::Result Result;

    // Asserts at compile time that F returns void.
    static_assert(std::is_void<Result>::value, "Result type should be void.");

    return Action<F>(new Impl<F>(action_));
  }

 private:
  template <typename F>
  class Impl : public ActionInterface<F> {
   public:
    typedef typename internal::Function<F>::Result Result;
    typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

    explicit Impl(const A& action) : action_(action) {}

    void Perform(const ArgumentTuple& args) override {
      // Performs the action and ignores its result.
      action_.Perform(args);
    }

   private:
    // Type OriginalFunction is the same as F except that its return
    // type is IgnoredValue.
    typedef typename internal::Function<F>::MakeResultIgnoredValue
        OriginalFunction;

    const Action<OriginalFunction> action_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  const A action_;

  GTEST_DISALLOW_ASSIGN_(IgnoreResultAction);
};

template <typename InnerAction, size_t... I>
struct WithArgsAction {
  InnerAction action;

  // The inner action could be anything convertible to Action<X>.
  // We use the conversion operator to detect the signature of the inner Action.
  template <typename R, typename... Args>
  operator Action<R(Args...)>() const {  // NOLINT
    Action<R(typename std::tuple_element<I, std::tuple<Args...>>::type...)>
        converted(action);

    return [converted](Args... args) -> R {
      return converted.Perform(std::forward_as_tuple(
        std::get<I>(std::forward_as_tuple(std::forward<Args>(args)...))...));
    };
  }
};

template <typename... Actions>
struct DoAllAction {
 private:
  template <typename... Args, size_t... I>
  std::vector<Action<void(Args...)>> Convert(IndexSequence<I...>) const {
    return {std::get<I>(actions)...};
  }

 public:
  std::tuple<Actions...> actions;

  template <typename R, typename... Args>
  operator Action<R(Args...)>() const {  // NOLINT
    struct Op {
      std::vector<Action<void(Args...)>> converted;
      Action<R(Args...)> last;
      R operator()(Args... args) const {
        auto tuple_args = std::forward_as_tuple(std::forward<Args>(args)...);
        for (auto& a : converted) {
          a.Perform(tuple_args);
        }
        return last.Perform(tuple_args);
      }
    };
    return Op{Convert<Args...>(MakeIndexSequence<sizeof...(Actions) - 1>()),
              std::get<sizeof...(Actions) - 1>(actions)};
  }
};

}  // namespace internal

// An Unused object can be implicitly constructed from ANY value.
// This is handy when defining actions that ignore some or all of the
// mock function arguments.  For example, given
//
//   MOCK_METHOD3(Foo, double(const string& label, double x, double y));
//   MOCK_METHOD3(Bar, double(int index, double x, double y));
//
// instead of
//
//   double DistanceToOriginWithLabel(const string& label, double x, double y) {
//     return sqrt(x*x + y*y);
//   }
//   double DistanceToOriginWithIndex(int index, double x, double y) {
//     return sqrt(x*x + y*y);
//   }
//   ...
//   EXPECT_CALL(mock, Foo("abc", _, _))
//       .WillOnce(Invoke(DistanceToOriginWithLabel));
//   EXPECT_CALL(mock, Bar(5, _, _))
//       .WillOnce(Invoke(DistanceToOriginWithIndex));
//
// you could write
//
//   // We can declare any uninteresting argument as Unused.
//   double DistanceToOrigin(Unused, double x, double y) {
//     return sqrt(x*x + y*y);
//   }
//   ...
//   EXPECT_CALL(mock, Foo("abc", _, _)).WillOnce(Invoke(DistanceToOrigin));
//   EXPECT_CALL(mock, Bar(5, _, _)).WillOnce(Invoke(DistanceToOrigin));
typedef internal::IgnoredValue Unused;

// Creates an action that does actions a1, a2, ..., sequentially in
// each invocation.
template <typename... Action>
internal::DoAllAction<typename std::decay<Action>::type...> DoAll(
    Action&&... action) {
  return {std::forward_as_tuple(std::forward<Action>(action)...)};
}

// WithArg<k>(an_action) creates an action that passes the k-th
// (0-based) argument of the mock function to an_action and performs
// it.  It adapts an action accepting one argument to one that accepts
// multiple arguments.  For convenience, we also provide
// WithArgs<k>(an_action) (defined below) as a synonym.
template <size_t k, typename InnerAction>
internal::WithArgsAction<typename std::decay<InnerAction>::type, k>
WithArg(InnerAction&& action) {
  return {std::forward<InnerAction>(action)};
}

// WithArgs<N1, N2, ..., Nk>(an_action) creates an action that passes
// the selected arguments of the mock function to an_action and
// performs it.  It serves as an adaptor between actions with
// different argument lists.
template <size_t k, size_t... ks, typename InnerAction>
internal::WithArgsAction<typename std::decay<InnerAction>::type, k, ks...>
WithArgs(InnerAction&& action) {
  return {std::forward<InnerAction>(action)};
}

// WithoutArgs(inner_action) can be used in a mock function with a
// non-empty argument list to perform inner_action, which takes no
// argument.  In other words, it adapts an action accepting no
// argument to one that accepts (and ignores) arguments.
template <typename InnerAction>
internal::WithArgsAction<typename std::decay<InnerAction>::type>
WithoutArgs(InnerAction&& action) {
  return {std::forward<InnerAction>(action)};
}

// Creates an action that returns 'value'.  'value' is passed by value
// instead of const reference - otherwise Return("string literal")
// will trigger a compiler error about using array as initializer.
template <typename R>
internal::ReturnAction<R> Return(R value) {
  return internal::ReturnAction<R>(std::move(value));
}

// Creates an action that returns NULL.
inline PolymorphicAction<internal::ReturnNullAction> ReturnNull() {
  return MakePolymorphicAction(internal::ReturnNullAction());
}

// Creates an action that returns from a void function.
inline PolymorphicAction<internal::ReturnVoidAction> Return() {
  return MakePolymorphicAction(internal::ReturnVoidAction());
}

// Creates an action that returns the reference to a variable.
template <typename R>
inline internal::ReturnRefAction<R> ReturnRef(R& x) {  // NOLINT
  return internal::ReturnRefAction<R>(x);
}

// Creates an action that returns the reference to a copy of the
// argument.  The copy is created when the action is constructed and
// lives as long as the action.
template <typename R>
inline internal::ReturnRefOfCopyAction<R> ReturnRefOfCopy(const R& x) {
  return internal::ReturnRefOfCopyAction<R>(x);
}

// Modifies the parent action (a Return() action) to perform a move of the
// argument instead of a copy.
// Return(ByMove()) actions can only be executed once and will assert this
// invariant.
template <typename R>
internal::ByMoveWrapper<R> ByMove(R x) {
  return internal::ByMoveWrapper<R>(std::move(x));
}

// Creates an action that does the default action for the give mock function.
inline internal::DoDefaultAction DoDefault() {
  return internal::DoDefaultAction();
}

// Creates an action that sets the variable pointed by the N-th
// (0-based) function argument to 'value'.
template <size_t N, typename T>
internal::SetArgumentPointeeAction<N, T> SetArgPointee(T x) {
  return {std::move(x)};
}

// The following version is DEPRECATED.
template <size_t N, typename T>
internal::SetArgumentPointeeAction<N, T> SetArgumentPointee(T x) {
  return {std::move(x)};
}

// Creates an action that sets a pointer referent to a given value.
template <typename T1, typename T2>
PolymorphicAction<internal::AssignAction<T1, T2> > Assign(T1* ptr, T2 val) {
  return MakePolymorphicAction(internal::AssignAction<T1, T2>(ptr, val));
}

#if !GTEST_OS_WINDOWS_MOBILE

// Creates an action that sets errno and returns the appropriate error.
template <typename T>
PolymorphicAction<internal::SetErrnoAndReturnAction<T> >
SetErrnoAndReturn(int errval, T result) {
  return MakePolymorphicAction(
      internal::SetErrnoAndReturnAction<T>(errval, result));
}

#endif  // !GTEST_OS_WINDOWS_MOBILE

// Various overloads for Invoke().

// Legacy function.
// Actions can now be implicitly constructed from callables. No need to create
// wrapper objects.
// This function exists for backwards compatibility.
template <typename FunctionImpl>
typename std::decay<FunctionImpl>::type Invoke(FunctionImpl&& function_impl) {
  return std::forward<FunctionImpl>(function_impl);
}

// Creates an action that invokes the given method on the given object
// with the mock function's arguments.
template <class Class, typename MethodPtr>
internal::InvokeMethodAction<Class, MethodPtr> Invoke(Class* obj_ptr,
                                                      MethodPtr method_ptr) {
  return {obj_ptr, method_ptr};
}

// Creates an action that invokes 'function_impl' with no argument.
template <typename FunctionImpl>
internal::InvokeWithoutArgsAction<typename std::decay<FunctionImpl>::type>
InvokeWithoutArgs(FunctionImpl function_impl) {
  return {std::move(function_impl)};
}

// Creates an action that invokes the given method on the given object
// with no argument.
template <class Class, typename MethodPtr>
internal::InvokeMethodWithoutArgsAction<Class, MethodPtr> InvokeWithoutArgs(
    Class* obj_ptr, MethodPtr method_ptr) {
  return {obj_ptr, method_ptr};
}

// Creates an action that performs an_action and throws away its
// result.  In other words, it changes the return type of an_action to
// void.  an_action MUST NOT return void, or the code won't compile.
template <typename A>
inline internal::IgnoreResultAction<A> IgnoreResult(const A& an_action) {
  return internal::IgnoreResultAction<A>(an_action);
}

// Creates a reference wrapper for the given L-value.  If necessary,
// you can explicitly specify the type of the reference.  For example,
// suppose 'derived' is an object of type Derived, ByRef(derived)
// would wrap a Derived&.  If you want to wrap a const Base& instead,
// where Base is a base class of Derived, just write:
//
//   ByRef<const Base>(derived)
//
// N.B. ByRef is redundant with std::ref, std::cref and std::reference_wrapper.
// However, it may still be used for consistency with ByMove().
template <typename T>
inline ::std::reference_wrapper<T> ByRef(T& l_value) {  // NOLINT
  return ::std::reference_wrapper<T>(l_value);
}

}  // namespace testing

#ifdef _MSC_VER
# pragma warning(pop)
#endif


#endif  // GMOCK_INCLUDE_GMOCK_GMOCK_ACTIONS_H_
