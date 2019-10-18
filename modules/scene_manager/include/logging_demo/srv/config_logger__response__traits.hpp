// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__TRAITS_HPP_
#define LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__TRAITS_HPP_

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

#include "logging_demo/srv/config_logger__response__struct.hpp"


template<>
struct has_fixed_size<logging_demo::srv::ConfigLogger_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<logging_demo::srv::ConfigLogger_Response>
  : std::integral_constant<bool, true> {};

template<>
inline const char * data_type<logging_demo::srv::ConfigLogger_Response>()
{
  return "logging_demo::srv::ConfigLogger_Response";
}

}  // namespace rosidl_generator_traits

#endif  // LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__TRAITS_HPP_