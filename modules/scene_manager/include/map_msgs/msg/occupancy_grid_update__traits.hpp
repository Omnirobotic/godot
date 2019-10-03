// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__TRAITS_HPP_
#define MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__TRAITS_HPP_

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

#include "map_msgs/msg/occupancy_grid_update__struct.hpp"


template<>
struct has_fixed_size<map_msgs::msg::OccupancyGridUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<map_msgs::msg::OccupancyGridUpdate>
  : std::integral_constant<bool, false> {};

template<>
inline const char * data_type<map_msgs::msg::OccupancyGridUpdate>()
{
  return "map_msgs::msg::OccupancyGridUpdate";
}

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__TRAITS_HPP_
