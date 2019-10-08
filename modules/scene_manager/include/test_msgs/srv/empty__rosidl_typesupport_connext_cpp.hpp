// generated from
// rosidl_typesupport_connext_cpp/resource/srv__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__SRV__EMPTY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define TEST_MSGS__SRV__EMPTY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include <rmw/types.h>

#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "test_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace test_msgs
{

namespace srv
{

namespace typesupport_connext_cpp
{
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
void *
create_requester__Empty(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
const char *
destroy_requester__Empty(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
int64_t
send_request__Empty(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
void *
create_replier__Empty(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
const char *
destroy_replier__Empty(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
bool
take_request__Empty(
  void * untyped_replier,
  rmw_request_id_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
bool
take_response__Empty(
  void * untyped_requester,
  rmw_request_id_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
bool
send_response__Empty(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
void *
get_request_datawriter__Empty(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
void *
get_reply_datareader__Empty(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
void *
get_request_datareader__Empty(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
void *
get_reply_datawriter__Empty(void * untyped_replier);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, test_msgs, srv, Empty)();

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__SRV__EMPTY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
