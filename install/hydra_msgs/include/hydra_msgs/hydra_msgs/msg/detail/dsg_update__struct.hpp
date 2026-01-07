// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hydra_msgs:msg/DsgUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/dsg_update.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__STRUCT_HPP_
#define HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hydra_msgs__msg__DsgUpdate __attribute__((deprecated))
#else
# define DEPRECATED__hydra_msgs__msg__DsgUpdate __declspec(deprecated)
#endif

namespace hydra_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DsgUpdate_
{
  using Type = DsgUpdate_<ContainerAllocator>;

  explicit DsgUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->full_update = false;
      this->sequence_number = 0ll;
    }
  }

  explicit DsgUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->full_update = false;
      this->sequence_number = 0ll;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _layer_contents_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _layer_contents_type layer_contents;
  using _deleted_nodes_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _deleted_nodes_type deleted_nodes;
  using _deleted_edges_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _deleted_edges_type deleted_edges;
  using _full_update_type =
    bool;
  _full_update_type full_update;
  using _sequence_number_type =
    int64_t;
  _sequence_number_type sequence_number;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__layer_contents(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->layer_contents = _arg;
    return *this;
  }
  Type & set__deleted_nodes(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->deleted_nodes = _arg;
    return *this;
  }
  Type & set__deleted_edges(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->deleted_edges = _arg;
    return *this;
  }
  Type & set__full_update(
    const bool & _arg)
  {
    this->full_update = _arg;
    return *this;
  }
  Type & set__sequence_number(
    const int64_t & _arg)
  {
    this->sequence_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydra_msgs::msg::DsgUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydra_msgs::msg::DsgUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydra_msgs::msg::DsgUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydra_msgs::msg::DsgUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydra_msgs::msg::DsgUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydra_msgs::msg::DsgUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydra_msgs::msg::DsgUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydra_msgs::msg::DsgUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydra_msgs::msg::DsgUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydra_msgs::msg::DsgUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydra_msgs__msg__DsgUpdate
    std::shared_ptr<hydra_msgs::msg::DsgUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydra_msgs__msg__DsgUpdate
    std::shared_ptr<hydra_msgs::msg::DsgUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DsgUpdate_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->layer_contents != other.layer_contents) {
      return false;
    }
    if (this->deleted_nodes != other.deleted_nodes) {
      return false;
    }
    if (this->deleted_edges != other.deleted_edges) {
      return false;
    }
    if (this->full_update != other.full_update) {
      return false;
    }
    if (this->sequence_number != other.sequence_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const DsgUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DsgUpdate_

// alias to use template instance with default allocator
using DsgUpdate =
  hydra_msgs::msg::DsgUpdate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hydra_msgs

#endif  // HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__STRUCT_HPP_
