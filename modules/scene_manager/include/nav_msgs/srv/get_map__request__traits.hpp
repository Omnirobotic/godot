// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__GET_MAP__REQUEST__TRAITS_HPP_
#define NAV_MSGS__SRV__GET_MAP__REQUEST__TRAITS_HPP_

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

#include "nav_msgs/srv/get_map__request__struct.hpp"


template<>
struct has_fixed_size<nav_msgs::srv::GetMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav_msgs::srv::GetMap_Request>
  : std::integral_constant<bool, true> {};

template<>
inline const char * data_type<nav_msgs::srv::GetMap_Request>()
{
  return "nav_msgs::srv::GetMap_Request";
}

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__SRV__GET_MAP__REQUEST__TRAITS_HPP_
