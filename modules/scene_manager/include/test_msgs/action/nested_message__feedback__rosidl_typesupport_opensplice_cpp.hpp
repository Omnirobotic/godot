// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__NESTED_MESSAGE__FEEDBACK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define TEST_MSGS__ACTION__NESTED_MESSAGE__FEEDBACK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "test_msgs/action/nested_message__feedback__struct.hpp"
#include "test_msgs/action/dds_opensplice/ccpp_NestedMessage_Feedback_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace test_msgs
{

namespace action
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs
extern void register_type__NestedMessage_Feedback(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs
extern void convert_ros_message_to_dds(
  const test_msgs::action::NestedMessage_Feedback & ros_message,
  test_msgs::action::dds_::NestedMessage_Feedback_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs
extern void publish__NestedMessage_Feedback(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs
extern void convert_dds_message_to_ros(
  const test_msgs::action::dds_::NestedMessage_Feedback_ & dds_message,
  test_msgs::action::NestedMessage_Feedback & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs
extern bool take__NestedMessage_Feedback(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_test_msgs
const char *
serialize__NestedMessage_Feedback(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_test_msgs
const char *
deserialize__NestedMessage_Feedback(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);


}  // namespace typesupport_opensplice_cpp

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, test_msgs, action, NestedMessage_Feedback)();

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__ACTION__NESTED_MESSAGE__FEEDBACK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
