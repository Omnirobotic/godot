// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "trajectory_msgs/msg/joint_trajectory__struct.hpp"
#include "trajectory_msgs/msg/dds_opensplice/ccpp_JointTrajectory_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace trajectory_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
extern void register_type__JointTrajectory(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
extern void convert_ros_message_to_dds(
  const trajectory_msgs::msg::JointTrajectory & ros_message,
  trajectory_msgs::msg::dds_::JointTrajectory_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
extern void publish__JointTrajectory(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
extern void convert_dds_message_to_ros(
  const trajectory_msgs::msg::dds_::JointTrajectory_ & dds_message,
  trajectory_msgs::msg::JointTrajectory & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
extern bool take__JointTrajectory(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_trajectory_msgs
const char *
serialize__JointTrajectory(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_trajectory_msgs
const char *
deserialize__JointTrajectory(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);


}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace trajectory_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, trajectory_msgs, msg, JointTrajectory)();

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
