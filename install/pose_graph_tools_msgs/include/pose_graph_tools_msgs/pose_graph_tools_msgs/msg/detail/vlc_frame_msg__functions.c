// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pose_graph_tools_msgs:msg/VLCFrameMsg.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `descriptors_mat`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `versors`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `depths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `submap_from_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
pose_graph_tools_msgs__msg__VLCFrameMsg__init(pose_graph_tools_msgs__msg__VLCFrameMsg * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // pose_id
  // submap_id
  // descriptors_mat
  if (!sensor_msgs__msg__Image__init(&msg->descriptors_mat)) {
    pose_graph_tools_msgs__msg__VLCFrameMsg__fini(msg);
    return false;
  }
  // versors
  if (!sensor_msgs__msg__PointCloud2__init(&msg->versors)) {
    pose_graph_tools_msgs__msg__VLCFrameMsg__fini(msg);
    return false;
  }
  // depths
  if (!rosidl_runtime_c__float__Sequence__init(&msg->depths, 0)) {
    pose_graph_tools_msgs__msg__VLCFrameMsg__fini(msg);
    return false;
  }
  // submap_from_pose
  if (!geometry_msgs__msg__Pose__init(&msg->submap_from_pose)) {
    pose_graph_tools_msgs__msg__VLCFrameMsg__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__msg__VLCFrameMsg__fini(pose_graph_tools_msgs__msg__VLCFrameMsg * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // pose_id
  // submap_id
  // descriptors_mat
  sensor_msgs__msg__Image__fini(&msg->descriptors_mat);
  // versors
  sensor_msgs__msg__PointCloud2__fini(&msg->versors);
  // depths
  rosidl_runtime_c__float__Sequence__fini(&msg->depths);
  // submap_from_pose
  geometry_msgs__msg__Pose__fini(&msg->submap_from_pose);
}

bool
pose_graph_tools_msgs__msg__VLCFrameMsg__are_equal(const pose_graph_tools_msgs__msg__VLCFrameMsg * lhs, const pose_graph_tools_msgs__msg__VLCFrameMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // pose_id
  if (lhs->pose_id != rhs->pose_id) {
    return false;
  }
  // submap_id
  if (lhs->submap_id != rhs->submap_id) {
    return false;
  }
  // descriptors_mat
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->descriptors_mat), &(rhs->descriptors_mat)))
  {
    return false;
  }
  // versors
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->versors), &(rhs->versors)))
  {
    return false;
  }
  // depths
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->depths), &(rhs->depths)))
  {
    return false;
  }
  // submap_from_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->submap_from_pose), &(rhs->submap_from_pose)))
  {
    return false;
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__VLCFrameMsg__copy(
  const pose_graph_tools_msgs__msg__VLCFrameMsg * input,
  pose_graph_tools_msgs__msg__VLCFrameMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // pose_id
  output->pose_id = input->pose_id;
  // submap_id
  output->submap_id = input->submap_id;
  // descriptors_mat
  if (!sensor_msgs__msg__Image__copy(
      &(input->descriptors_mat), &(output->descriptors_mat)))
  {
    return false;
  }
  // versors
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->versors), &(output->versors)))
  {
    return false;
  }
  // depths
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->depths), &(output->depths)))
  {
    return false;
  }
  // submap_from_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->submap_from_pose), &(output->submap_from_pose)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__msg__VLCFrameMsg *
pose_graph_tools_msgs__msg__VLCFrameMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__VLCFrameMsg * msg = (pose_graph_tools_msgs__msg__VLCFrameMsg *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__VLCFrameMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__msg__VLCFrameMsg));
  bool success = pose_graph_tools_msgs__msg__VLCFrameMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__msg__VLCFrameMsg__destroy(pose_graph_tools_msgs__msg__VLCFrameMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__msg__VLCFrameMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__init(pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__VLCFrameMsg * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__msg__VLCFrameMsg *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__msg__VLCFrameMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__msg__VLCFrameMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__msg__VLCFrameMsg__fini(&data[i - 1]);
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
pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__fini(pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence * array)
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
      pose_graph_tools_msgs__msg__VLCFrameMsg__fini(&array->data[i]);
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

pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence *
pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence * array = (pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__destroy(pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__are_equal(const pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence * lhs, const pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__msg__VLCFrameMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__copy(
  const pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence * input,
  pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__msg__VLCFrameMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__msg__VLCFrameMsg * data =
      (pose_graph_tools_msgs__msg__VLCFrameMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__msg__VLCFrameMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__msg__VLCFrameMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__msg__VLCFrameMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
