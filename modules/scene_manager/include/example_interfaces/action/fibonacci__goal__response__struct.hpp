// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__FIBONACCI__GOAL__RESPONSE__STRUCT_HPP_
#define EXAMPLE_INTERFACES__ACTION__FIBONACCI__GOAL__RESPONSE__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include "builtin_interfaces/msg/time.hpp"  // stamp

#ifndef _WIN32
# define DEPRECATED_example_interfaces_action_Fibonacci_Goal_Response __attribute__((deprecated))
#else
# define DEPRECATED_example_interfaces_action_Fibonacci_Goal_Response __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_Goal_Response_
{
  using Type = Fibonacci_Goal_Response_<ContainerAllocator>;

  explicit Fibonacci_Goal_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Fibonacci_Goal_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type * set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return this;
  }
  Type * set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_example_interfaces_action_Fibonacci_Goal_Response
    std::shared_ptr<example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_example_interfaces_action_Fibonacci_Goal_Response
    std::shared_ptr<example_interfaces::action::Fibonacci_Goal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_Goal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_Goal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_Goal_Response_

// alias to use template instance with default allocator
using Fibonacci_Goal_Response =
  example_interfaces::action::Fibonacci_Goal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__ACTION__FIBONACCI__GOAL__RESPONSE__STRUCT_HPP_
