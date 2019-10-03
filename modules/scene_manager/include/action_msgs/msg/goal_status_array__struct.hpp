// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__STRUCT_HPP_
#define ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__STRUCT_HPP_

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
#include "action_msgs/msg/goal_status.hpp"  // status_list

#ifndef _WIN32
# define DEPRECATED_action_msgs_msg_GoalStatusArray __attribute__((deprecated))
#else
# define DEPRECATED_action_msgs_msg_GoalStatusArray __declspec(deprecated)
#endif

namespace action_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalStatusArray_
{
  using Type = GoalStatusArray_<ContainerAllocator>;

  explicit GoalStatusArray_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GoalStatusArray_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _status_list_type =
    std::vector<action_msgs::msg::GoalStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<action_msgs::msg::GoalStatus_<ContainerAllocator>>::other>;
  _status_list_type status_list;

  // setters for named parameter idiom
  Type * set__status_list(
    const std::vector<action_msgs::msg::GoalStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<action_msgs::msg::GoalStatus_<ContainerAllocator>>::other> & _arg)
  {
    this->status_list = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_msgs::msg::GoalStatusArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_msgs::msg::GoalStatusArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_msgs::msg::GoalStatusArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_msgs::msg::GoalStatusArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_msgs::msg::GoalStatusArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_msgs::msg::GoalStatusArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_msgs::msg::GoalStatusArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_msgs::msg::GoalStatusArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_msgs::msg::GoalStatusArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_msgs::msg::GoalStatusArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_action_msgs_msg_GoalStatusArray
    std::shared_ptr<action_msgs::msg::GoalStatusArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_action_msgs_msg_GoalStatusArray
    std::shared_ptr<action_msgs::msg::GoalStatusArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalStatusArray_ & other) const
  {
    if (this->status_list != other.status_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalStatusArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalStatusArray_

// alias to use template instance with default allocator
using GoalStatusArray =
  action_msgs::msg::GoalStatusArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace action_msgs

#endif  // ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__STRUCT_HPP_
