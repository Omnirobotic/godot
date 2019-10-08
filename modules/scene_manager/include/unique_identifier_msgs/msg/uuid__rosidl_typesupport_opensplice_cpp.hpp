// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef UNIQUE_IDENTIFIER_MSGS__MSG__UUID__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define UNIQUE_IDENTIFIER_MSGS__MSG__UUID__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "unique_identifier_msgs/msg/uuid__struct.hpp"
#include "unique_identifier_msgs/msg/dds_opensplice/ccpp_UUID_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "unique_identifier_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace unique_identifier_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs
extern void register_type__UUID(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs
extern void convert_ros_message_to_dds(
  const unique_identifier_msgs::msg::UUID & ros_message,
  unique_identifier_msgs::msg::dds_::UUID_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs
extern void publish__UUID(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs
extern void convert_dds_message_to_ros(
  const unique_identifier_msgs::msg::dds_::UUID_ & dds_message,
  unique_identifier_msgs::msg::UUID & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs
extern bool take__UUID(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_unique_identifier_msgs
const char *
serialize__UUID(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_unique_identifier_msgs
const char *
deserialize__UUID(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);


}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace unique_identifier_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, unique_identifier_msgs, msg, UUID)();

#ifdef __cplusplus
}
#endif

#endif  // UNIQUE_IDENTIFIER_MSGS__MSG__UUID__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
