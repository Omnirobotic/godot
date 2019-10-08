// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_UPDATE__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_UPDATE__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
inline const char * data_type();

template<typename T>
struct has_fixed_size : std::false_type {};

template<typename T>
struct has_bounded_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "visualization_msgs/msg/interactive_marker_update__struct.hpp"


template<>
struct has_fixed_size<visualization_msgs::msg::InteractiveMarkerUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::InteractiveMarkerUpdate>
  : std::integral_constant<bool, false> {};

template<>
inline const char * data_type<visualization_msgs::msg::InteractiveMarkerUpdate>()
{
  return "visualization_msgs::msg::InteractiveMarkerUpdate";
}

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_UPDATE__TRAITS_HPP_
