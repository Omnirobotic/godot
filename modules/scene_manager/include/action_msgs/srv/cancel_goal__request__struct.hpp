// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__SRV__CANCEL_GOAL__REQUEST__STRUCT_HPP_
#define ACTION_MSGS__SRV__CANCEL_GOAL__REQUEST__STRUCT_HPP_

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
#include "action_msgs/msg/goal_info.hpp"  // goal_info

#ifndef _WIN32
# define DEPRECATED_action_msgs_srv_CancelGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED_action_msgs_srv_CancelGoal_Request __declspec(deprecated)
#endif

namespace action_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CancelGoal_Request_
{
  using Type = CancelGoal_Request_<ContainerAllocator>;

  explicit CancelGoal_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_info(_init)
  {
    (void)_init;
  }

  explicit CancelGoal_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_info_type =
    action_msgs::msg::GoalInfo_<ContainerAllocator>;
  _goal_info_type goal_info;

  // setters for named parameter idiom
  Type * set__goal_info(
    const action_msgs::msg::GoalInfo_<ContainerAllocator> & _arg)
  {
    this->goal_info = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_msgs::srv::CancelGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_msgs::srv::CancelGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_msgs::srv::CancelGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_msgs::srv::CancelGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_msgs::srv::CancelGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_msgs::srv::CancelGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_msgs::srv::CancelGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_msgs::srv::CancelGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_msgs::srv::CancelGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_msgs::srv::CancelGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_action_msgs_srv_CancelGoal_Request
    std::shared_ptr<action_msgs::srv::CancelGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_action_msgs_srv_CancelGoal_Request
    std::shared_ptr<action_msgs::srv::CancelGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CancelGoal_Request_ & other) const
  {
    if (this->goal_info != other.goal_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const CancelGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CancelGoal_Request_

// alias to use template instance with default allocator
using CancelGoal_Request =
  action_msgs::srv::CancelGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace action_msgs

#endif  // ACTION_MSGS__SRV__CANCEL_GOAL__REQUEST__STRUCT_HPP_
