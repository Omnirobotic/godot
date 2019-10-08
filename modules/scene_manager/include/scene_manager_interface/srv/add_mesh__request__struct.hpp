// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__SRV__ADD_MESH__REQUEST__STRUCT_HPP_
#define SCENE_MANAGER_INTERFACE__SRV__ADD_MESH__REQUEST__STRUCT_HPP_

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
#include "scene_manager_interface/msg/document_info.hpp"  // document_info

#ifndef _WIN32
# define DEPRECATED_scene_manager_interface_srv_AddMesh_Request __attribute__((deprecated))
#else
# define DEPRECATED_scene_manager_interface_srv_AddMesh_Request __declspec(deprecated)
#endif

namespace scene_manager_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddMesh_Request_
{
  using Type = AddMesh_Request_<ContainerAllocator>;

  explicit AddMesh_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : document_info(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->scene_object_name = "";
      this->parent_object_name = "";
    }
  }

  explicit AddMesh_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : scene_object_name(_alloc),
    document_info(_alloc, _init),
    parent_object_name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->scene_object_name = "";
      this->parent_object_name = "";
    }
  }

  // field types and members
  using _scene_object_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _scene_object_name_type scene_object_name;
  using _document_info_type =
    scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>;
  _document_info_type document_info;
  using _parent_object_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _parent_object_name_type parent_object_name;

  // setters for named parameter idiom
  Type * set__scene_object_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->scene_object_name = _arg;
    return this;
  }
  Type * set__document_info(
    const scene_manager_interface::msg::DocumentInfo_<ContainerAllocator> & _arg)
  {
    this->document_info = _arg;
    return this;
  }
  Type * set__parent_object_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->parent_object_name = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_scene_manager_interface_srv_AddMesh_Request
    std::shared_ptr<scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_scene_manager_interface_srv_AddMesh_Request
    std::shared_ptr<scene_manager_interface::srv::AddMesh_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddMesh_Request_ & other) const
  {
    if (this->scene_object_name != other.scene_object_name) {
      return false;
    }
    if (this->document_info != other.document_info) {
      return false;
    }
    if (this->parent_object_name != other.parent_object_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddMesh_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddMesh_Request_

// alias to use template instance with default allocator
using AddMesh_Request =
  scene_manager_interface::srv::AddMesh_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace scene_manager_interface

#endif  // SCENE_MANAGER_INTERFACE__SRV__ADD_MESH__REQUEST__STRUCT_HPP_
