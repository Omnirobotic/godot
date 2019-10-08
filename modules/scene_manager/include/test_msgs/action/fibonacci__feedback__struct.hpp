// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__FIBONACCI__FEEDBACK__STRUCT_HPP_
#define TEST_MSGS__ACTION__FIBONACCI__FEEDBACK__STRUCT_HPP_

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
# define DEPRECATED_test_msgs_action_Fibonacci_Feedback __attribute__((deprecated))
#else
# define DEPRECATED_test_msgs_action_Fibonacci_Feedback __declspec(deprecated)
#endif

namespace test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_Feedback_
{
  using Type = Fibonacci_Feedback_<ContainerAllocator>;

  explicit Fibonacci_Feedback_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : action_goal_id(_init)
  {
    (void)_init;
  }

  explicit Fibonacci_Feedback_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : action_goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _action_goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _action_goal_id_type action_goal_id;
  using _sequence_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _sequence_type sequence;

  // setters for named parameter idiom
  Type * set__action_goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->action_goal_id = _arg;
    return this;
  }
  Type * set__sequence(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->sequence = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_msgs::action::Fibonacci_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_msgs::action::Fibonacci_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_msgs::action::Fibonacci_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_msgs::action::Fibonacci_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_msgs::action::Fibonacci_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_msgs::action::Fibonacci_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_msgs::action::Fibonacci_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_msgs::action::Fibonacci_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_msgs::action::Fibonacci_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_msgs::action::Fibonacci_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_msgs_action_Fibonacci_Feedback
    std::shared_ptr<test_msgs::action::Fibonacci_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_msgs_action_Fibonacci_Feedback
    std::shared_ptr<test_msgs::action::Fibonacci_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_Feedback_ & other) const
  {
    if (this->action_goal_id != other.action_goal_id) {
      return false;
    }
    if (this->sequence != other.sequence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_Feedback_

// alias to use template instance with default allocator
using Fibonacci_Feedback =
  test_msgs::action::Fibonacci_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace test_msgs

#endif  // TEST_MSGS__ACTION__FIBONACCI__FEEDBACK__STRUCT_HPP_
