// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from semantic_inference_msgs:msg/FeatureVector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vector.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__STRUCT_HPP_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__semantic_inference_msgs__msg__FeatureVector __attribute__((deprecated))
#else
# define DEPRECATED__semantic_inference_msgs__msg__FeatureVector __declspec(deprecated)
#endif

namespace semantic_inference_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FeatureVector_
{
  using Type = FeatureVector_<ContainerAllocator>;

  explicit FeatureVector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FeatureVector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator> *;
  using ConstRawPtr =
    const semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semantic_inference_msgs__msg__FeatureVector
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semantic_inference_msgs__msg__FeatureVector
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FeatureVector_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const FeatureVector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FeatureVector_

// alias to use template instance with default allocator
using FeatureVector =
  semantic_inference_msgs::msg::FeatureVector_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace semantic_inference_msgs

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__STRUCT_HPP_
