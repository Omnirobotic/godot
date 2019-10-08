// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__FIBONACCI__RESULT__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define EXAMPLE_INTERFACES__ACTION__FIBONACCI__RESULT__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "example_interfaces/action/fibonacci__result__request__struct.hpp"
#include "example_interfaces/action/dds_opensplice/ccpp_Fibonacci_Result_Request_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "example_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace example_interfaces
{

namespace action
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void register_type__Fibonacci_Result_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void convert_ros_message_to_dds(
  const example_interfaces::action::Fibonacci_Result_Request & ros_message,
  example_interfaces::action::dds_::Fibonacci_Result_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void publish__Fibonacci_Result_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void convert_dds_message_to_ros(
  const example_interfaces::action::dds_::Fibonacci_Result_Request_ & dds_message,
  example_interfaces::action::Fibonacci_Result_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern bool take__Fibonacci_Result_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_example_interfaces
const char *
serialize__Fibonacci_Result_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_example_interfaces
const char *
deserialize__Fibonacci_Result_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);


}  // namespace typesupport_opensplice_cpp

}  // namespace action

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, example_interfaces, action, Fibonacci_Result_Request)();

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__ACTION__FIBONACCI__RESULT__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
