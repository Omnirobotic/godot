// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__NESTED_MESSAGE__GOAL__RESPONSE__STRUCT_HPP_
#define TEST_MSGS__ACTION__NESTED_MESSAGE__GOAL__RESPONSE__STRUCT_HPP_

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
# define DEPRECATED_test_msgs_action_NestedMessage_Goal_Response __attribute__((deprecated))
#else
# define DEPRECATED_test_msgs_action_NestedMessage_Goal_Response __declspec(deprecated)
#endif

namespace test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NestedMessage_Goal_Response_
{
  using Type = NestedMessage_Goal_Response_<ContainerAllocator>;

  explicit NestedMessage_Goal_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit NestedMessage_Goal_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
    test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_msgs_action_NestedMessage_Goal_Response
    std::shared_ptr<test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_msgs_action_NestedMessage_Goal_Response
    std::shared_ptr<test_msgs::action::NestedMessage_Goal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NestedMessage_Goal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const NestedMessage_Goal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NestedMessage_Goal_Response_

// alias to use template instance with default allocator
using NestedMessage_Goal_Response =
  test_msgs::action::NestedMessage_Goal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace test_msgs

#endif  // TEST_MSGS__ACTION__NESTED_MESSAGE__GOAL__RESPONSE__STRUCT_HPP_
