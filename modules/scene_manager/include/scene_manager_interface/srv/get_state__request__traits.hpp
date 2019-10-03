// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__SRV__GET_STATE__REQUEST__TRAITS_HPP_
#define SCENE_MANAGER_INTERFACE__SRV__GET_STATE__REQUEST__TRAITS_HPP_

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

#include "scene_manager_interface/srv/get_state__request__struct.hpp"


template<>
struct has_fixed_size<scene_manager_interface::srv::GetState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<scene_manager_interface::srv::GetState_Request>
  : std::integral_constant<bool, true> {};

template<>
inline const char * data_type<scene_manager_interface::srv::GetState_Request>()
{
  return "scene_manager_interface::srv::GetState_Request";
}

}  // namespace rosidl_generator_traits

#endif  // SCENE_MANAGER_INTERFACE__SRV__GET_STATE__REQUEST__TRAITS_HPP_
