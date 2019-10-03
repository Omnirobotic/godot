// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "action_msgs/srv/cancel_goal__response__struct.hpp"
#include "action_msgs/srv/dds_opensplice/ccpp_CancelGoal_Response_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace action_msgs
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
extern void register_type__CancelGoal_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
extern void convert_ros_message_to_dds(
  const action_msgs::srv::CancelGoal_Response & ros_message,
  action_msgs::srv::dds_::CancelGoal_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
extern void publish__CancelGoal_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
extern void convert_dds_message_to_ros(
  const action_msgs::srv::dds_::CancelGoal_Response_ & dds_message,
  action_msgs::srv::CancelGoal_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
extern bool take__CancelGoal_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_action_msgs
const char *
serialize__CancelGoal_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_action_msgs
const char *
deserialize__CancelGoal_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);


}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace action_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, action_msgs, srv, CancelGoal_Response)();

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
