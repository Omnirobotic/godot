// generated from
// rosidl_typesupport_fastrtps_cpp/resource/msg__rosidl_typesupport_fastrtps_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__MSG__OBJECTS_UPDATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SCENE_MANAGER_INTERFACE__MSG__OBJECTS_UPDATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "scene_manager_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#include "scene_manager_interface/msg/objects_update__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace scene_manager_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_scene_manager_interface
cdr_serialize(
  const scene_manager_interface::msg::ObjectsUpdate & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_scene_manager_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  scene_manager_interface::msg::ObjectsUpdate & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_scene_manager_interface
get_serialized_size(
  const scene_manager_interface::msg::ObjectsUpdate & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_scene_manager_interface
max_serialized_size_ObjectsUpdate(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace scene_manager_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_scene_manager_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, scene_manager_interface, msg, ObjectsUpdate)();

#ifdef __cplusplus
}
#endif

#endif  // SCENE_MANAGER_INTERFACE__MSG__OBJECTS_UPDATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
