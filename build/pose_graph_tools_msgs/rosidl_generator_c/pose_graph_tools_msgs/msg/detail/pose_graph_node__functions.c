// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pose_graph_tools_msgs:msg/PoseGraphNode.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/pose_graph_node__functions.h"

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
pose_graph_tools_msgs__msg__PoseGraphNode__init(pose_graph_tools_msgs__msg__PoseGraphNode * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pose_graph_tools_msgs__msg__PoseGraphNode__fini(msg);
    return false;
  }
  // robot_id
  // key
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    pose_graph_tools_msgs__msg__PoseGraphNode__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__msg__PoseGraphNode__fini(pose_graph_tools_msgs__msg__PoseGraphNode * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  // key
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
pose_graph_tools_msgs__msg__PoseGraphNode__are_equal(const pose_graph_tools_msgs__msg__PoseGraphNode * lhs, const pose_graph_tools_msgs__msg__PoseGraphNode * rhs)
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
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // key
  if (lhs->key != rhs->key) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__PoseGraphNode__copy(
  const pose_graph_tools_msgs__msg__PoseGraphNode * input,
  pose_graph_tools_msgs__msg__PoseGraphNode * output)
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
  // robot_id
  output->robot_id = input->robot_id;
  // key
  output->key = input->key;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__msg__PoseGraphNode *
pose_graph_tools_msgs__msg__PoseGraphNode__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__PoseGraphNode * msg = (pose_graph_tools_msgs__msg__PoseGraphNode *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__PoseGraphNode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__msg__PoseGraphNode));
  bool success = pose_graph_tools_msgs__msg__PoseGraphNode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__msg__PoseGraphNode__destroy(pose_graph_tools_msgs__msg__PoseGraphNode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__msg__PoseGraphNode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__msg__PoseGraphNode__Sequence__init(pose_graph_tools_msgs__msg__PoseGraphNode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__PoseGraphNode * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__msg__PoseGraphNode *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__msg__PoseGraphNode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__msg__PoseGraphNode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__msg__PoseGraphNode__fini(&data[i - 1]);
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
pose_graph_tools_msgs__msg__PoseGraphNode__Sequence__fini(pose_graph_tools_msgs__msg__PoseGraphNode__Sequence * array)
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
      pose_graph_tools_msgs__msg__PoseGraphNode__fini(&array->data[i]);
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

pose_graph_tools_msgs__msg__PoseGraphNode__Sequence *
pose_graph_tools_msgs__msg__PoseGraphNode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__PoseGraphNode__Sequence * array = (pose_graph_tools_msgs__msg__PoseGraphNode__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__PoseGraphNode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__msg__PoseGraphNode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__msg__PoseGraphNode__Sequence__destroy(pose_graph_tools_msgs__msg__PoseGraphNode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__msg__PoseGraphNode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__msg__PoseGraphNode__Sequence__are_equal(const pose_graph_tools_msgs__msg__PoseGraphNode__Sequence * lhs, const pose_graph_tools_msgs__msg__PoseGraphNode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__msg__PoseGraphNode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__PoseGraphNode__Sequence__copy(
  const pose_graph_tools_msgs__msg__PoseGraphNode__Sequence * input,
  pose_graph_tools_msgs__msg__PoseGraphNode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__msg__PoseGraphNode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__msg__PoseGraphNode * data =
      (pose_graph_tools_msgs__msg__PoseGraphNode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__msg__PoseGraphNode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__msg__PoseGraphNode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__msg__PoseGraphNode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
