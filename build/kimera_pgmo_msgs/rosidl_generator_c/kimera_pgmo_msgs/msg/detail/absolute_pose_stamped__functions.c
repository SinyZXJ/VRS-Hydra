// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kimera_pgmo_msgs:msg/AbsolutePoseStamped.idl
// generated code does not contain a copyright notice
#include "kimera_pgmo_msgs/msg/detail/absolute_pose_stamped__functions.h"

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
kimera_pgmo_msgs__msg__AbsolutePoseStamped__init(kimera_pgmo_msgs__msg__AbsolutePoseStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kimera_pgmo_msgs__msg__AbsolutePoseStamped__fini(msg);
    return false;
  }
  // idx
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    kimera_pgmo_msgs__msg__AbsolutePoseStamped__fini(msg);
    return false;
  }
  return true;
}

void
kimera_pgmo_msgs__msg__AbsolutePoseStamped__fini(kimera_pgmo_msgs__msg__AbsolutePoseStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // idx
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
kimera_pgmo_msgs__msg__AbsolutePoseStamped__are_equal(const kimera_pgmo_msgs__msg__AbsolutePoseStamped * lhs, const kimera_pgmo_msgs__msg__AbsolutePoseStamped * rhs)
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
  // idx
  if (lhs->idx != rhs->idx) {
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
kimera_pgmo_msgs__msg__AbsolutePoseStamped__copy(
  const kimera_pgmo_msgs__msg__AbsolutePoseStamped * input,
  kimera_pgmo_msgs__msg__AbsolutePoseStamped * output)
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
  // idx
  output->idx = input->idx;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

kimera_pgmo_msgs__msg__AbsolutePoseStamped *
kimera_pgmo_msgs__msg__AbsolutePoseStamped__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__AbsolutePoseStamped * msg = (kimera_pgmo_msgs__msg__AbsolutePoseStamped *)allocator.allocate(sizeof(kimera_pgmo_msgs__msg__AbsolutePoseStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kimera_pgmo_msgs__msg__AbsolutePoseStamped));
  bool success = kimera_pgmo_msgs__msg__AbsolutePoseStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kimera_pgmo_msgs__msg__AbsolutePoseStamped__destroy(kimera_pgmo_msgs__msg__AbsolutePoseStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kimera_pgmo_msgs__msg__AbsolutePoseStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence__init(kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__AbsolutePoseStamped * data = NULL;

  if (size) {
    data = (kimera_pgmo_msgs__msg__AbsolutePoseStamped *)allocator.zero_allocate(size, sizeof(kimera_pgmo_msgs__msg__AbsolutePoseStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kimera_pgmo_msgs__msg__AbsolutePoseStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kimera_pgmo_msgs__msg__AbsolutePoseStamped__fini(&data[i - 1]);
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
kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence__fini(kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence * array)
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
      kimera_pgmo_msgs__msg__AbsolutePoseStamped__fini(&array->data[i]);
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

kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence *
kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence * array = (kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence *)allocator.allocate(sizeof(kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence__destroy(kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence__are_equal(const kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence * lhs, const kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kimera_pgmo_msgs__msg__AbsolutePoseStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence__copy(
  const kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence * input,
  kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kimera_pgmo_msgs__msg__AbsolutePoseStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kimera_pgmo_msgs__msg__AbsolutePoseStamped * data =
      (kimera_pgmo_msgs__msg__AbsolutePoseStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kimera_pgmo_msgs__msg__AbsolutePoseStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kimera_pgmo_msgs__msg__AbsolutePoseStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kimera_pgmo_msgs__msg__AbsolutePoseStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
