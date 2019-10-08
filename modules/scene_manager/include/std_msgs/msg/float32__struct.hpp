// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__FLOAT32__STRUCT_HPP_
#define STD_MSGS__MSG__FLOAT32__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_std_msgs_msg_Float32 __attribute__((deprecated))
#else
# define DEPRECATED_std_msgs_msg_Float32 __declspec(deprecated)
#endif

namespace std_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Float32_
{
  using Type = Float32_<ContainerAllocator>;

  explicit Float32_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0f;
    }
  }

  explicit Float32_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0f;
    }
  }

  // field types and members
  using _data_type =
    float;
  _data_type data;

  // setters for named parameter idiom
  Type * set__data(
    const float & _arg)
  {
    this->data = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    std_msgs::msg::Float32_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_msgs::msg::Float32_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_msgs::msg::Float32_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_msgs::msg::Float32_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      std_msgs::msg::Float32_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::Float32_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      std_msgs::msg::Float32_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::Float32_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_msgs::msg::Float32_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_msgs::msg::Float32_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_std_msgs_msg_Float32
    std::shared_ptr<std_msgs::msg::Float32_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_std_msgs_msg_Float32
    std::shared_ptr<std_msgs::msg::Float32_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Float32_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Float32_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Float32_

// alias to use template instance with default allocator
using Float32 =
  std_msgs::msg::Float32_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__FLOAT32__STRUCT_HPP_
