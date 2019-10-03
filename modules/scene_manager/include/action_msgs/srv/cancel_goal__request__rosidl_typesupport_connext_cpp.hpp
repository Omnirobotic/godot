// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__SRV__CANCEL_GOAL__REQUEST__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define ACTION_MSGS__SRV__CANCEL_GOAL__REQUEST__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "action_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "action_msgs/srv/cancel_goal__request__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "action_msgs/srv/dds_connext/CancelGoal_Request_Support.h"
#include "action_msgs/srv/dds_connext/CancelGoal_Request_Plugin.h"

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

namespace action_msgs
{

namespace srv
{

namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__CancelGoal_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
convert_ros_message_to_dds(
  const action_msgs::srv::CancelGoal_Request & ros_message,
  action_msgs::srv::dds_::CancelGoal_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
convert_dds_message_to_ros(
  const action_msgs::srv::dds_::CancelGoal_Request_ & dds_message,
  action_msgs::srv::CancelGoal_Request & ros_message);

bool
to_cdr_stream__CancelGoal_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__CancelGoal_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace action_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, action_msgs, srv, CancelGoal_Request)();

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__SRV__CANCEL_GOAL__REQUEST__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
