// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "example_interfaces/srv/add_two_ints__response__struct.hpp"
#include "example_interfaces/srv/dds_opensplice/ccpp_AddTwoInts_Response_.h"

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

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void register_type__AddTwoInts_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void convert_ros_message_to_dds(
  const example_interfaces::srv::AddTwoInts_Response & ros_message,
  example_interfaces::srv::dds_::AddTwoInts_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void publish__AddTwoInts_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void convert_dds_message_to_ros(
  const example_interfaces::srv::dds_::AddTwoInts_Response_ & dds_message,
  example_interfaces::srv::AddTwoInts_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern bool take__AddTwoInts_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_example_interfaces
const char *
serialize__AddTwoInts_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_example_interfaces
const char *
deserialize__AddTwoInts_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);


}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, example_interfaces, srv, AddTwoInts_Response)();

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_