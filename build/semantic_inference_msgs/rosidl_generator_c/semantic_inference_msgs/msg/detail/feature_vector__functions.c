// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from semantic_inference_msgs:msg/FeatureVector.idl
// generated code does not contain a copyright notice
#include "semantic_inference_msgs/msg/detail/feature_vector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
semantic_inference_msgs__msg__FeatureVector__init(semantic_inference_msgs__msg__FeatureVector * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__init(&msg->data, 0)) {
    semantic_inference_msgs__msg__FeatureVector__fini(msg);
    return false;
  }
  return true;
}

void
semantic_inference_msgs__msg__FeatureVector__fini(semantic_inference_msgs__msg__FeatureVector * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__float__Sequence__fini(&msg->data);
}

bool
semantic_inference_msgs__msg__FeatureVector__are_equal(const semantic_inference_msgs__msg__FeatureVector * lhs, const semantic_inference_msgs__msg__FeatureVector * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
semantic_inference_msgs__msg__FeatureVector__copy(
  const semantic_inference_msgs__msg__FeatureVector * input,
  semantic_inference_msgs__msg__FeatureVector * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

semantic_inference_msgs__msg__FeatureVector *
semantic_inference_msgs__msg__FeatureVector__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__msg__FeatureVector * msg = (semantic_inference_msgs__msg__FeatureVector *)allocator.allocate(sizeof(semantic_inference_msgs__msg__FeatureVector), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semantic_inference_msgs__msg__FeatureVector));
  bool success = semantic_inference_msgs__msg__FeatureVector__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semantic_inference_msgs__msg__FeatureVector__destroy(semantic_inference_msgs__msg__FeatureVector * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semantic_inference_msgs__msg__FeatureVector__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semantic_inference_msgs__msg__FeatureVector__Sequence__init(semantic_inference_msgs__msg__FeatureVector__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__msg__FeatureVector * data = NULL;

  if (size) {
    data = (semantic_inference_msgs__msg__FeatureVector *)allocator.zero_allocate(size, sizeof(semantic_inference_msgs__msg__FeatureVector), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semantic_inference_msgs__msg__FeatureVector__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semantic_inference_msgs__msg__FeatureVector__fini(&data[i - 1]);
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
semantic_inference_msgs__msg__FeatureVector__Sequence__fini(semantic_inference_msgs__msg__FeatureVector__Sequence * array)
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
      semantic_inference_msgs__msg__FeatureVector__fini(&array->data[i]);
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

semantic_inference_msgs__msg__FeatureVector__Sequence *
semantic_inference_msgs__msg__FeatureVector__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__msg__FeatureVector__Sequence * array = (semantic_inference_msgs__msg__FeatureVector__Sequence *)allocator.allocate(sizeof(semantic_inference_msgs__msg__FeatureVector__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semantic_inference_msgs__msg__FeatureVector__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semantic_inference_msgs__msg__FeatureVector__Sequence__destroy(semantic_inference_msgs__msg__FeatureVector__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semantic_inference_msgs__msg__FeatureVector__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semantic_inference_msgs__msg__FeatureVector__Sequence__are_equal(const semantic_inference_msgs__msg__FeatureVector__Sequence * lhs, const semantic_inference_msgs__msg__FeatureVector__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semantic_inference_msgs__msg__FeatureVector__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semantic_inference_msgs__msg__FeatureVector__Sequence__copy(
  const semantic_inference_msgs__msg__FeatureVector__Sequence * input,
  semantic_inference_msgs__msg__FeatureVector__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semantic_inference_msgs__msg__FeatureVector);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semantic_inference_msgs__msg__FeatureVector * data =
      (semantic_inference_msgs__msg__FeatureVector *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semantic_inference_msgs__msg__FeatureVector__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semantic_inference_msgs__msg__FeatureVector__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semantic_inference_msgs__msg__FeatureVector__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
