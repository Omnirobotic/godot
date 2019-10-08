// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__FIBONACCI__RESULT__REQUEST__STRUCT_HPP_
#define EXAMPLE_INTERFACES__ACTION__FIBONACCI__RESULT__REQUEST__STRUCT_HPP_

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
# define DEPRECATED_example_interfaces_action_Fibonacci_Result_Request __attribute__((deprecated))
#else
# define DEPRECATED_example_interfaces_action_Fibonacci_Result_Request __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_Result_Request_
{
  using Type = Fibonacci_Result_Request_<ContainerAllocator>;

  explicit Fibonacci_Result_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : action_goal_id(_init)
  {
    (void)_init;
  }

  explicit Fibonacci_Result_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : action_goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _action_goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _action_goal_id_type action_goal_id;

  // setters for named parameter idiom
  Type * set__action_goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->action_goal_id = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_example_interfaces_action_Fibonacci_Result_Request
    std::shared_ptr<example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_example_interfaces_action_Fibonacci_Result_Request
    std::shared_ptr<example_interfaces::action::Fibonacci_Result_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_Result_Request_ & other) const
  {
    if (this->action_goal_id != other.action_goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_Result_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_Result_Request_

// alias to use template instance with default allocator
using Fibonacci_Result_Request =
  example_interfaces::action::Fibonacci_Result_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__ACTION__FIBONACCI__RESULT__REQUEST__STRUCT_HPP_
