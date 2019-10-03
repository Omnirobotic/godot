// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_ID__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define ACTIONLIB_MSGS__MSG__GOAL_ID__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "actionlib_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "actionlib_msgs/msg/goal_id__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "actionlib_msgs/msg/dds_connext/GoalID_Support.h"
#include "actionlib_msgs/msg/dds_connext/GoalID_Plugin.h"

#include "ndds/ndds_cpp.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;

namespace actionlib_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__GoalID();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_actionlib_msgs
convert_ros_message_to_dds(
  const actionlib_msgs::msg::GoalID & ros_message,
  actionlib_msgs::msg::dds_::GoalID_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_actionlib_msgs
convert_dds_message_to_ros(
  const actionlib_msgs::msg::dds_::GoalID_ & dds_message,
  actionlib_msgs::msg::GoalID & ros_message);

bool
to_cdr_stream__GoalID(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__GoalID(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace actionlib_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_actionlib_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, actionlib_msgs, msg, GoalID)();

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__GOAL_ID__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
