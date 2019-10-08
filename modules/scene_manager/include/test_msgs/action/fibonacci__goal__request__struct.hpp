// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__FIBONACCI__GOAL__REQUEST__STRUCT_HPP_
#define TEST_MSGS__ACTION__FIBONACCI__GOAL__REQUEST__STRUCT_HPP_

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
#include "unique_identifier_msgs/msg/uuid.hpp"  // action_goal_id

#ifndef _WIN32
# define DEPRECATED_test_msgs_action_Fibonacci_Goal_Request __attribute__((deprecated))
#else
# define DEPRECATED_test_msgs_action_Fibonacci_Goal_Request __declspec(deprecated)
#endif

namespace test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_Goal_Request_
{
  using Type = Fibonacci_Goal_Request_<ContainerAllocator>;

  explicit Fibonacci_Goal_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : action_goal_id(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->order = 0l;
    }
  }

  explicit Fibonacci_Goal_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : action_goal_id(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->order = 0l;
    }
  }

  // field types and members
  using _action_goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _action_goal_id_type action_goal_id;
  using _order_type =
    int32_t;
  _order_type order;

  // setters for named parameter idiom
  Type * set__action_goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->action_goal_id = _arg;
    return this;
  }
  Type * set__order(
    const int32_t & _arg)
  {
    this->order = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_msgs_action_Fibonacci_Goal_Request
    std::shared_ptr<test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_msgs_action_Fibonacci_Goal_Request
    std::shared_ptr<test_msgs::action::Fibonacci_Goal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_Goal_Request_ & other) const
  {
    if (this->action_goal_id != other.action_goal_id) {
      return false;
    }
    if (this->order != other.order) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_Goal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_Goal_Request_

// alias to use template instance with default allocator
using Fibonacci_Goal_Request =
  test_msgs::action::Fibonacci_Goal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace test_msgs

#endif  // TEST_MSGS__ACTION__FIBONACCI__GOAL__REQUEST__STRUCT_HPP_
