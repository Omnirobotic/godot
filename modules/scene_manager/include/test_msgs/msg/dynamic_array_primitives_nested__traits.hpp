// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES_NESTED__TRAITS_HPP_
#define TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES_NESTED__TRAITS_HPP_

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

#include "test_msgs/msg/dynamic_array_primitives_nested__struct.hpp"


template<>
struct has_fixed_size<test_msgs::msg::DynamicArrayPrimitivesNested>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_msgs::msg::DynamicArrayPrimitivesNested>
  : std::integral_constant<bool, false> {};

template<>
inline const char * data_type<test_msgs::msg::DynamicArrayPrimitivesNested>()
{
  return "test_msgs::msg::DynamicArrayPrimitivesNested";
}

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES_NESTED__TRAITS_HPP_