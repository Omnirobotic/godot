// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__CHANGE_STATE__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define LIFECYCLE_MSGS__SRV__CHANGE_STATE__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "lifecycle_msgs/srv/change_state__request__struct.hpp"
#include "lifecycle_msgs/srv/dds_opensplice/ccpp_ChangeState_Request_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace lifecycle_msgs
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void register_type__ChangeState_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void convert_ros_message_to_dds(
  const lifecycle_msgs::srv::ChangeState_Request & ros_message,
  lifecycle_msgs::srv::dds_::ChangeState_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void publish__ChangeState_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void convert_dds_message_to_ros(
  const lifecycle_msgs::srv::dds_::ChangeState_Request_ & dds_message,
  lifecycle_msgs::srv::ChangeState_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern bool take__ChangeState_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_lifecycle_msgs
const char *
serialize__ChangeState_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_lifecycle_msgs
const char *
deserialize__ChangeState_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);


}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, lifecycle_msgs, srv, ChangeState_Request)();

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__CHANGE_STATE__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
