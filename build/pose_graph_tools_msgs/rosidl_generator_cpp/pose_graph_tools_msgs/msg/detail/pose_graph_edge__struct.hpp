// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pose_graph_tools_msgs:msg/PoseGraphEdge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/pose_graph_edge.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__STRUCT_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__msg__PoseGraphEdge __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__msg__PoseGraphEdge __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseGraphEdge_
{
  using Type = PoseGraphEdge_<ContainerAllocator>;

  explicit PoseGraphEdge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key_from = 0ull;
      this->key_to = 0ull;
      this->robot_from = 0l;
      this->robot_to = 0l;
      this->type = 0l;
      std::fill<typename std::array<double, 36>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  explicit PoseGraphEdge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key_from = 0ull;
      this->key_to = 0ull;
      this->robot_from = 0l;
      this->robot_to = 0l;
      this->type = 0l;
      std::fill<typename std::array<double, 36>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _key_from_type =
    uint64_t;
  _key_from_type key_from;
  using _key_to_type =
    uint64_t;
  _key_to_type key_to;
  using _robot_from_type =
    int32_t;
  _robot_from_type robot_from;
  using _robot_to_type =
    int32_t;
  _robot_to_type robot_to;
  using _type_type =
    int32_t;
  _type_type type;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _covariance_type =
    std::array<double, 36>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__key_from(
    const uint64_t & _arg)
  {
    this->key_from = _arg;
    return *this;
  }
  Type & set__key_to(
    const uint64_t & _arg)
  {
    this->key_to = _arg;
    return *this;
  }
  Type & set__robot_from(
    const int32_t & _arg)
  {
    this->robot_from = _arg;
    return *this;
  }
  Type & set__robot_to(
    const int32_t & _arg)
  {
    this->robot_to = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 36> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t UNKNOWN =
    -1;
  static constexpr int32_t ODOM =
    0;
  static constexpr int32_t LOOPCLOSE =
    1;
  static constexpr int32_t LANDMARK =
    2;
  static constexpr int32_t REJECTED_LOOPCLOSE =
    3;
  static constexpr int32_t MESH =
    4;
  static constexpr int32_t POSE_MESH =
    5;
  static constexpr int32_t MESH_POSE =
    6;
  static constexpr int32_t PRIOR =
    7;
  static constexpr int32_t REJECTED_PRIOR =
    8;

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__msg__PoseGraphEdge
    std::shared_ptr<pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__msg__PoseGraphEdge
    std::shared_ptr<pose_graph_tools_msgs::msg::PoseGraphEdge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGraphEdge_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->key_from != other.key_from) {
      return false;
    }
    if (this->key_to != other.key_to) {
      return false;
    }
    if (this->robot_from != other.robot_from) {
      return false;
    }
    if (this->robot_to != other.robot_to) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGraphEdge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGraphEdge_

// alias to use template instance with default allocator
using PoseGraphEdge =
  pose_graph_tools_msgs::msg::PoseGraphEdge_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PoseGraphEdge_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PoseGraphEdge_<ContainerAllocator>::ODOM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PoseGraphEdge_<ContainerAllocator>::LOOPCLOSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PoseGraphEdge_<ContainerAllocator>::LANDMARK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PoseGraphEdge_<ContainerAllocator>::REJECTED_LOOPCLOSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PoseGraphEdge_<ContainerAllocator>::MESH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PoseGraphEdge_<ContainerAllocator>::POSE_MESH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PoseGraphEdge_<ContainerAllocator>::MESH_POSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PoseGraphEdge_<ContainerAllocator>::PRIOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PoseGraphEdge_<ContainerAllocator>::REJECTED_PRIOR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__STRUCT_HPP_
