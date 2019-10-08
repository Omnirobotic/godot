// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__STRUCT_HPP_
#define ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__STRUCT_HPP_

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
#include "action_msgs/msg/goal_info.hpp"  // goals_canceling

#ifndef _WIN32
# define DEPRECATED_action_msgs_srv_CancelGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED_action_msgs_srv_CancelGoal_Response __declspec(deprecated)
#endif

namespace action_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CancelGoal_Response_
{
  using Type = CancelGoal_Response_<ContainerAllocator>;

  explicit CancelGoal_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CancelGoal_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _goals_canceling_type =
    std::vector<action_msgs::msg::GoalInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<action_msgs::msg::GoalInfo_<ContainerAllocator>>::other>;
  _goals_canceling_type goals_canceling;

  // setters for named parameter idiom
  Type * set__goals_canceling(
    const std::vector<action_msgs::msg::GoalInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<action_msgs::msg::GoalInfo_<ContainerAllocator>>::other> & _arg)
  {
    this->goals_canceling = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_msgs::srv::CancelGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_msgs::srv::CancelGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_msgs::srv::CancelGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_msgs::srv::CancelGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_msgs::srv::CancelGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_msgs::srv::CancelGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_msgs::srv::CancelGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_msgs::srv::CancelGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_msgs::srv::CancelGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_msgs::srv::CancelGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_action_msgs_srv_CancelGoal_Response
    std::shared_ptr<action_msgs::srv::CancelGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_action_msgs_srv_CancelGoal_Response
    std::shared_ptr<action_msgs::srv::CancelGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CancelGoal_Response_ & other) const
  {
    if (this->goals_canceling != other.goals_canceling) {
      return false;
    }
    return true;
  }
  bool operator!=(const CancelGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CancelGoal_Response_

// alias to use template instance with default allocator
using CancelGoal_Response =
  action_msgs::srv::CancelGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace action_msgs

#endif  // ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__STRUCT_HPP_
