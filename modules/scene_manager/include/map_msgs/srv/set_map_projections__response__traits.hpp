// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__SET_MAP_PROJECTIONS__RESPONSE__TRAITS_HPP_
#define MAP_MSGS__SRV__SET_MAP_PROJECTIONS__RESPONSE__TRAITS_HPP_

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

#include "map_msgs/srv/set_map_projections__response__struct.hpp"


template<>
struct has_fixed_size<map_msgs::srv::SetMapProjections_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<map_msgs::srv::SetMapProjections_Response>
  : std::integral_constant<bool, false> {};

template<>
inline const char * data_type<map_msgs::srv::SetMapProjections_Response>()
{
  return "map_msgs::srv::SetMapProjections_Response";
}

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__SRV__SET_MAP_PROJECTIONS__RESPONSE__TRAITS_HPP_