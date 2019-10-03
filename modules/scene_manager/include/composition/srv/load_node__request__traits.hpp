// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef COMPOSITION__SRV__LOAD_NODE__REQUEST__TRAITS_HPP_
#define COMPOSITION__SRV__LOAD_NODE__REQUEST__TRAITS_HPP_

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

#include "composition/srv/load_node__request__struct.hpp"


template<>
struct has_fixed_size<composition::srv::LoadNode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<composition::srv::LoadNode_Request>
  : std::integral_constant<bool, false> {};

template<>
inline const char * data_type<composition::srv::LoadNode_Request>()
{
  return "composition::srv::LoadNode_Request";
}

}  // namespace rosidl_generator_traits

#endif  // COMPOSITION__SRV__LOAD_NODE__REQUEST__TRAITS_HPP_
