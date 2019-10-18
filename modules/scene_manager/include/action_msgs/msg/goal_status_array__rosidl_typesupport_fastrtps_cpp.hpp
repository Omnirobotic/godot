// generated from
// rosidl_typesupport_fastrtps_cpp/resource/msg__rosidl_typesupport_fastrtps_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "action_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#include "action_msgs/msg/goal_status_array__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace action_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_action_msgs
cdr_serialize(
  const action_msgs::msg::GoalStatusArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_action_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  action_msgs::msg::GoalStatusArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_action_msgs
get_serialized_size(
  const action_msgs::msg::GoalStatusArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_action_msgs
max_serialized_size_GoalStatusArray(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace action_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_action_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_msgs, msg, GoalStatusArray)();

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_