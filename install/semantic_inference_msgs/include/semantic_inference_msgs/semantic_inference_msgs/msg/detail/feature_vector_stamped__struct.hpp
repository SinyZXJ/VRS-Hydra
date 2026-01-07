// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from semantic_inference_msgs:msg/FeatureVectorStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vector_stamped.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__STRUCT_HPP_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__STRUCT_HPP_

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
// Member 'feature'
#include "semantic_inference_msgs/msg/detail/feature_vector__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__semantic_inference_msgs__msg__FeatureVectorStamped __attribute__((deprecated))
#else
# define DEPRECATED__semantic_inference_msgs__msg__FeatureVectorStamped __declspec(deprecated)
#endif

namespace semantic_inference_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FeatureVectorStamped_
{
  using Type = FeatureVectorStamped_<ContainerAllocator>;

  explicit FeatureVectorStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    feature(_init)
  {
    (void)_init;
  }

  explicit FeatureVectorStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    feature(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _feature_type =
    semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>;
  _feature_type feature;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__feature(
    const semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator> & _arg)
  {
    this->feature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semantic_inference_msgs__msg__FeatureVectorStamped
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semantic_inference_msgs__msg__FeatureVectorStamped
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FeatureVectorStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->feature != other.feature) {
      return false;
    }
    return true;
  }
  bool operator!=(const FeatureVectorStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FeatureVectorStamped_

// alias to use template instance with default allocator
using FeatureVectorStamped =
  semantic_inference_msgs::msg::FeatureVectorStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace semantic_inference_msgs

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__STRUCT_HPP_
