// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pose_graph_tools_msgs:msg/BowRequests.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/bow_requests__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pose_graph_tools_msgs__msg__BowRequests__init(pose_graph_tools_msgs__msg__BowRequests * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pose_graph_tools_msgs__msg__BowRequests__fini(msg);
    return false;
  }
  // source_robot_id
  // destination_robot_id
  // pose_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->pose_ids, 0)) {
    pose_graph_tools_msgs__msg__BowRequests__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__msg__BowRequests__fini(pose_graph_tools_msgs__msg__BowRequests * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // source_robot_id
  // destination_robot_id
  // pose_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->pose_ids);
}

bool
pose_graph_tools_msgs__msg__BowRequests__are_equal(const pose_graph_tools_msgs__msg__BowRequests * lhs, const pose_graph_tools_msgs__msg__BowRequests * rhs)
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
  // source_robot_id
  if (lhs->source_robot_id != rhs->source_robot_id) {
    return false;
  }
  // destination_robot_id
  if (lhs->destination_robot_id != rhs->destination_robot_id) {
    return false;
  }
  // pose_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->pose_ids), &(rhs->pose_ids)))
  {
    return false;
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__BowRequests__copy(
  const pose_graph_tools_msgs__msg__BowRequests * input,
  pose_graph_tools_msgs__msg__BowRequests * output)
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
  // source_robot_id
  output->source_robot_id = input->source_robot_id;
  // destination_robot_id
  output->destination_robot_id = input->destination_robot_id;
  // pose_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->pose_ids), &(output->pose_ids)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__msg__BowRequests *
pose_graph_tools_msgs__msg__BowRequests__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__BowRequests * msg = (pose_graph_tools_msgs__msg__BowRequests *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__BowRequests), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__msg__BowRequests));
  bool success = pose_graph_tools_msgs__msg__BowRequests__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__msg__BowRequests__destroy(pose_graph_tools_msgs__msg__BowRequests * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__msg__BowRequests__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__msg__BowRequests__Sequence__init(pose_graph_tools_msgs__msg__BowRequests__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__BowRequests * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__msg__BowRequests *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__msg__BowRequests), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__msg__BowRequests__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__msg__BowRequests__fini(&data[i - 1]);
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
pose_graph_tools_msgs__msg__BowRequests__Sequence__fini(pose_graph_tools_msgs__msg__BowRequests__Sequence * array)
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
      pose_graph_tools_msgs__msg__BowRequests__fini(&array->data[i]);
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

pose_graph_tools_msgs__msg__BowRequests__Sequence *
pose_graph_tools_msgs__msg__BowRequests__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__BowRequests__Sequence * array = (pose_graph_tools_msgs__msg__BowRequests__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__BowRequests__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__msg__BowRequests__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__msg__BowRequests__Sequence__destroy(pose_graph_tools_msgs__msg__BowRequests__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__msg__BowRequests__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__msg__BowRequests__Sequence__are_equal(const pose_graph_tools_msgs__msg__BowRequests__Sequence * lhs, const pose_graph_tools_msgs__msg__BowRequests__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__msg__BowRequests__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__BowRequests__Sequence__copy(
  const pose_graph_tools_msgs__msg__BowRequests__Sequence * input,
  pose_graph_tools_msgs__msg__BowRequests__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__msg__BowRequests);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__msg__BowRequests * data =
      (pose_graph_tools_msgs__msg__BowRequests *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__msg__BowRequests__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__msg__BowRequests__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__msg__BowRequests__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
