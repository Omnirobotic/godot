// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__SRV__REMOVE_MESH__REQUEST__STRUCT_HPP_
#define SCENE_MANAGER_INTERFACE__SRV__REMOVE_MESH__REQUEST__STRUCT_HPP_

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
# define DEPRECATED_scene_manager_interface_srv_RemoveMesh_Request __attribute__((deprecated))
#else
# define DEPRECATED_scene_manager_interface_srv_RemoveMesh_Request __declspec(deprecated)
#endif

namespace scene_manager_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RemoveMesh_Request_
{
  using Type = RemoveMesh_Request_<ContainerAllocator>;

  explicit RemoveMesh_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->scene_object_name = "";
    }
  }

  explicit RemoveMesh_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : scene_object_name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->scene_object_name = "";
    }
  }

  // field types and members
  using _scene_object_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _scene_object_name_type scene_object_name;

  // setters for named parameter idiom
  Type * set__scene_object_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->scene_object_name = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_scene_manager_interface_srv_RemoveMesh_Request
    std::shared_ptr<scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_scene_manager_interface_srv_RemoveMesh_Request
    std::shared_ptr<scene_manager_interface::srv::RemoveMesh_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemoveMesh_Request_ & other) const
  {
    if (this->scene_object_name != other.scene_object_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const RemoveMesh_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemoveMesh_Request_

// alias to use template instance with default allocator
using RemoveMesh_Request =
  scene_manager_interface::srv::RemoveMesh_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace scene_manager_interface

#endif  // SCENE_MANAGER_INTERFACE__SRV__REMOVE_MESH__REQUEST__STRUCT_HPP_
