// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from semantic_inference_msgs:msg/FeatureVectors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vectors.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__STRUCT_HPP_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'features'
#include "semantic_inference_msgs/msg/detail/feature_vector__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__semantic_inference_msgs__msg__FeatureVectors __attribute__((deprecated))
#else
# define DEPRECATED__semantic_inference_msgs__msg__FeatureVectors __declspec(deprecated)
#endif

namespace semantic_inference_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FeatureVectors_
{
  using Type = FeatureVectors_<ContainerAllocator>;

  explicit FeatureVectors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FeatureVectors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _features_type =
    std::vector<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>>>;
  _features_type features;

  // setters for named parameter idiom
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }
  Type & set__features(
    const std::vector<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>>> & _arg)
  {
    this->features = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator> *;
  using ConstRawPtr =
    const semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semantic_inference_msgs__msg__FeatureVectors
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semantic_inference_msgs__msg__FeatureVectors
    std::shared_ptr<semantic_inference_msgs::msg::FeatureVectors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FeatureVectors_ & other) const
  {
    if (this->names != other.names) {
      return false;
    }
    if (this->features != other.features) {
      return false;
    }
    return true;
  }
  bool operator!=(const FeatureVectors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FeatureVectors_

// alias to use template instance with default allocator
using FeatureVectors =
  semantic_inference_msgs::msg::FeatureVectors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace semantic_inference_msgs

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__STRUCT_HPP_
