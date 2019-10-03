// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__GOAL_STATUS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define ACTION_MSGS__MSG__GOAL_STATUS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "action_msgs/msg/goal_status__struct.hpp"
#include "action_msgs/msg/dds_opensplice/ccpp_GoalStatus_.h"

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

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
extern void register_type__GoalStatus(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
extern void convert_ros_message_to_dds(
  const action_msgs::msg::GoalStatus & ros_message,
  action_msgs::msg::dds_::GoalStatus_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
extern void publish__GoalStatus(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
extern void convert_dds_message_to_ros(
  const action_msgs::msg::dds_::GoalStatus_ & dds_message,
  action_msgs::msg::GoalStatus & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
extern bool take__GoalStatus(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_action_msgs
const char *
serialize__GoalStatus(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_action_msgs
const char *
deserialize__GoalStatus(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);


}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace action_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, action_msgs, msg, GoalStatus)();

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__MSG__GOAL_STATUS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
