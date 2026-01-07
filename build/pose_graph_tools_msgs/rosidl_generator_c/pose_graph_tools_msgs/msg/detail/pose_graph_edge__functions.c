// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pose_graph_tools_msgs:msg/PoseGraphEdge.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/pose_graph_edge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
pose_graph_tools_msgs__msg__PoseGraphEdge__init(pose_graph_tools_msgs__msg__PoseGraphEdge * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pose_graph_tools_msgs__msg__PoseGraphEdge__fini(msg);
    return false;
  }
  // key_from
  // key_to
  // robot_from
  // robot_to
  // type
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    pose_graph_tools_msgs__msg__PoseGraphEdge__fini(msg);
    return false;
  }
  // covariance
  return true;
}

void
pose_graph_tools_msgs__msg__PoseGraphEdge__fini(pose_graph_tools_msgs__msg__PoseGraphEdge * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // key_from
  // key_to
  // robot_from
  // robot_to
  // type
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // covariance
}

bool
pose_graph_tools_msgs__msg__PoseGraphEdge__are_equal(const pose_graph_tools_msgs__msg__PoseGraphEdge * lhs, const pose_graph_tools_msgs__msg__PoseGraphEdge * rhs)
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
  // key_from
  if (lhs->key_from != rhs->key_from) {
    return false;
  }
  // key_to
  if (lhs->key_to != rhs->key_to) {
    return false;
  }
  // robot_from
  if (lhs->robot_from != rhs->robot_from) {
    return false;
  }
  // robot_to
  if (lhs->robot_to != rhs->robot_to) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 36; ++i) {
    if (lhs->covariance[i] != rhs->covariance[i]) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__PoseGraphEdge__copy(
  const pose_graph_tools_msgs__msg__PoseGraphEdge * input,
  pose_graph_tools_msgs__msg__PoseGraphEdge * output)
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
  // key_from
  output->key_from = input->key_from;
  // key_to
  output->key_to = input->key_to;
  // robot_from
  output->robot_from = input->robot_from;
  // robot_to
  output->robot_to = input->robot_to;
  // type
  output->type = input->type;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 36; ++i) {
    output->covariance[i] = input->covariance[i];
  }
  return true;
}

pose_graph_tools_msgs__msg__PoseGraphEdge *
pose_graph_tools_msgs__msg__PoseGraphEdge__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__PoseGraphEdge * msg = (pose_graph_tools_msgs__msg__PoseGraphEdge *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__PoseGraphEdge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__msg__PoseGraphEdge));
  bool success = pose_graph_tools_msgs__msg__PoseGraphEdge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__msg__PoseGraphEdge__destroy(pose_graph_tools_msgs__msg__PoseGraphEdge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__msg__PoseGraphEdge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__init(pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__PoseGraphEdge * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__msg__PoseGraphEdge *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__msg__PoseGraphEdge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__msg__PoseGraphEdge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__msg__PoseGraphEdge__fini(&data[i - 1]);
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
pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__fini(pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * array)
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
      pose_graph_tools_msgs__msg__PoseGraphEdge__fini(&array->data[i]);
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

pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence *
pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * array = (pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__destroy(pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__are_equal(const pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * lhs, const pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__msg__PoseGraphEdge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__copy(
  const pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * input,
  pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__msg__PoseGraphEdge);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__msg__PoseGraphEdge * data =
      (pose_graph_tools_msgs__msg__PoseGraphEdge *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__msg__PoseGraphEdge__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__msg__PoseGraphEdge__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__msg__PoseGraphEdge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
