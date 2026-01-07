// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from semantic_inference_msgs:msg/FeatureImage.idl
// generated code does not contain a copyright notice
#include "semantic_inference_msgs/msg/detail/feature_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `mask_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `features`
#include "semantic_inference_msgs/msg/detail/feature_vector__functions.h"

bool
semantic_inference_msgs__msg__FeatureImage__init(semantic_inference_msgs__msg__FeatureImage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    semantic_inference_msgs__msg__FeatureImage__fini(msg);
    return false;
  }
  // mask_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->mask_ids, 0)) {
    semantic_inference_msgs__msg__FeatureImage__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    semantic_inference_msgs__msg__FeatureImage__fini(msg);
    return false;
  }
  // features
  if (!semantic_inference_msgs__msg__FeatureVector__Sequence__init(&msg->features, 0)) {
    semantic_inference_msgs__msg__FeatureImage__fini(msg);
    return false;
  }
  return true;
}

void
semantic_inference_msgs__msg__FeatureImage__fini(semantic_inference_msgs__msg__FeatureImage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mask_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->mask_ids);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // features
  semantic_inference_msgs__msg__FeatureVector__Sequence__fini(&msg->features);
}

bool
semantic_inference_msgs__msg__FeatureImage__are_equal(const semantic_inference_msgs__msg__FeatureImage * lhs, const semantic_inference_msgs__msg__FeatureImage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // mask_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->mask_ids), &(rhs->mask_ids)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // features
  if (!semantic_inference_msgs__msg__FeatureVector__Sequence__are_equal(
      &(lhs->features), &(rhs->features)))
  {
    return false;
  }
  return true;
}

bool
semantic_inference_msgs__msg__FeatureImage__copy(
  const semantic_inference_msgs__msg__FeatureImage * input,
  semantic_inference_msgs__msg__FeatureImage * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // mask_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->mask_ids), &(output->mask_ids)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // features
  if (!semantic_inference_msgs__msg__FeatureVector__Sequence__copy(
      &(input->features), &(output->features)))
  {
    return false;
  }
  return true;
}

semantic_inference_msgs__msg__FeatureImage *
semantic_inference_msgs__msg__FeatureImage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__msg__FeatureImage * msg = (semantic_inference_msgs__msg__FeatureImage *)allocator.allocate(sizeof(semantic_inference_msgs__msg__FeatureImage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semantic_inference_msgs__msg__FeatureImage));
  bool success = semantic_inference_msgs__msg__FeatureImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semantic_inference_msgs__msg__FeatureImage__destroy(semantic_inference_msgs__msg__FeatureImage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semantic_inference_msgs__msg__FeatureImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semantic_inference_msgs__msg__FeatureImage__Sequence__init(semantic_inference_msgs__msg__FeatureImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__msg__FeatureImage * data = NULL;

  if (size) {
    data = (semantic_inference_msgs__msg__FeatureImage *)allocator.zero_allocate(size, sizeof(semantic_inference_msgs__msg__FeatureImage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semantic_inference_msgs__msg__FeatureImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semantic_inference_msgs__msg__FeatureImage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
semantic_inference_msgs__msg__FeatureImage__Sequence__fini(semantic_inference_msgs__msg__FeatureImage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      semantic_inference_msgs__msg__FeatureImage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

semantic_inference_msgs__msg__FeatureImage__Sequence *
semantic_inference_msgs__msg__FeatureImage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__msg__FeatureImage__Sequence * array = (semantic_inference_msgs__msg__FeatureImage__Sequence *)allocator.allocate(sizeof(semantic_inference_msgs__msg__FeatureImage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semantic_inference_msgs__msg__FeatureImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semantic_inference_msgs__msg__FeatureImage__Sequence__destroy(semantic_inference_msgs__msg__FeatureImage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semantic_inference_msgs__msg__FeatureImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semantic_inference_msgs__msg__FeatureImage__Sequence__are_equal(const semantic_inference_msgs__msg__FeatureImage__Sequence * lhs, const semantic_inference_msgs__msg__FeatureImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semantic_inference_msgs__msg__FeatureImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semantic_inference_msgs__msg__FeatureImage__Sequence__copy(
  const semantic_inference_msgs__msg__FeatureImage__Sequence * input,
  semantic_inference_msgs__msg__FeatureImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semantic_inference_msgs__msg__FeatureImage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semantic_inference_msgs__msg__FeatureImage * data =
      (semantic_inference_msgs__msg__FeatureImage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semantic_inference_msgs__msg__FeatureImage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semantic_inference_msgs__msg__FeatureImage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semantic_inference_msgs__msg__FeatureImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
