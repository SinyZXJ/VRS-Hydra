// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from semantic_inference_msgs:msg/FeatureImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_image.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__STRUCT_HPP_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__STRUCT_HPP_

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
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'features'
#include "semantic_inference_msgs/msg/detail/feature_vector__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__semantic_inference_msgs__msg__FeatureImage __attribute__((deprecated))
#else
# define DEPRECATED__semantic_inference_msgs__msg__FeatureImage __declspec(deprecated)
#endif

namespace semantic_inference_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FeatureImage_
{
  using Type = FeatureImage_<ContainerAllocator>;

  explicit FeatureImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    image(_init)
  {
    (void)_init;
  }

  explicit FeatureImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mask_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _mask_ids_type mask_ids;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _features_type =
    std::vector<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<semantic_inference_msgs::msg::FeatureVector_<ContainerAllocator>>>;
  _features_type features;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mask_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->mask_ids = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
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
    semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semantic_inference_msgs__msg__FeatureImage
    std::shared_ptr<semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semantic_inference_msgs__msg__FeatureImage
    std::shared_ptr<semantic_inference_msgs::msg::FeatureImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FeatureImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mask_ids != other.mask_ids) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->features != other.features) {
      return false;
    }
    return true;
  }
  bool operator!=(const FeatureImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FeatureImage_

// alias to use template instance with default allocator
using FeatureImage =
  semantic_inference_msgs::msg::FeatureImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace semantic_inference_msgs

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__STRUCT_HPP_
