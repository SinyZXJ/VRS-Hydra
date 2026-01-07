// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hydra_msgs:srv/GetDsg.idl
// generated code does not contain a copyright notice
#include "hydra_msgs/srv/detail/get_dsg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
hydra_msgs__srv__GetDsg_Request__init(hydra_msgs__srv__GetDsg_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
hydra_msgs__srv__GetDsg_Request__fini(hydra_msgs__srv__GetDsg_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
hydra_msgs__srv__GetDsg_Request__are_equal(const hydra_msgs__srv__GetDsg_Request * lhs, const hydra_msgs__srv__GetDsg_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
hydra_msgs__srv__GetDsg_Request__copy(
  const hydra_msgs__srv__GetDsg_Request * input,
  hydra_msgs__srv__GetDsg_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

hydra_msgs__srv__GetDsg_Request *
hydra_msgs__srv__GetDsg_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__srv__GetDsg_Request * msg = (hydra_msgs__srv__GetDsg_Request *)allocator.allocate(sizeof(hydra_msgs__srv__GetDsg_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydra_msgs__srv__GetDsg_Request));
  bool success = hydra_msgs__srv__GetDsg_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hydra_msgs__srv__GetDsg_Request__destroy(hydra_msgs__srv__GetDsg_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hydra_msgs__srv__GetDsg_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hydra_msgs__srv__GetDsg_Request__Sequence__init(hydra_msgs__srv__GetDsg_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__srv__GetDsg_Request * data = NULL;

  if (size) {
    data = (hydra_msgs__srv__GetDsg_Request *)allocator.zero_allocate(size, sizeof(hydra_msgs__srv__GetDsg_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydra_msgs__srv__GetDsg_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydra_msgs__srv__GetDsg_Request__fini(&data[i - 1]);
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
hydra_msgs__srv__GetDsg_Request__Sequence__fini(hydra_msgs__srv__GetDsg_Request__Sequence * array)
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
      hydra_msgs__srv__GetDsg_Request__fini(&array->data[i]);
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

hydra_msgs__srv__GetDsg_Request__Sequence *
hydra_msgs__srv__GetDsg_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__srv__GetDsg_Request__Sequence * array = (hydra_msgs__srv__GetDsg_Request__Sequence *)allocator.allocate(sizeof(hydra_msgs__srv__GetDsg_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hydra_msgs__srv__GetDsg_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hydra_msgs__srv__GetDsg_Request__Sequence__destroy(hydra_msgs__srv__GetDsg_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hydra_msgs__srv__GetDsg_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hydra_msgs__srv__GetDsg_Request__Sequence__are_equal(const hydra_msgs__srv__GetDsg_Request__Sequence * lhs, const hydra_msgs__srv__GetDsg_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hydra_msgs__srv__GetDsg_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hydra_msgs__srv__GetDsg_Request__Sequence__copy(
  const hydra_msgs__srv__GetDsg_Request__Sequence * input,
  hydra_msgs__srv__GetDsg_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hydra_msgs__srv__GetDsg_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hydra_msgs__srv__GetDsg_Request * data =
      (hydra_msgs__srv__GetDsg_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hydra_msgs__srv__GetDsg_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hydra_msgs__srv__GetDsg_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hydra_msgs__srv__GetDsg_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `graph`
#include "hydra_msgs/msg/detail/dsg_update__functions.h"

bool
hydra_msgs__srv__GetDsg_Response__init(hydra_msgs__srv__GetDsg_Response * msg)
{
  if (!msg) {
    return false;
  }
  // graph
  if (!hydra_msgs__msg__DsgUpdate__init(&msg->graph)) {
    hydra_msgs__srv__GetDsg_Response__fini(msg);
    return false;
  }
  return true;
}

void
hydra_msgs__srv__GetDsg_Response__fini(hydra_msgs__srv__GetDsg_Response * msg)
{
  if (!msg) {
    return;
  }
  // graph
  hydra_msgs__msg__DsgUpdate__fini(&msg->graph);
}

bool
hydra_msgs__srv__GetDsg_Response__are_equal(const hydra_msgs__srv__GetDsg_Response * lhs, const hydra_msgs__srv__GetDsg_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // graph
  if (!hydra_msgs__msg__DsgUpdate__are_equal(
      &(lhs->graph), &(rhs->graph)))
  {
    return false;
  }
  return true;
}

bool
hydra_msgs__srv__GetDsg_Response__copy(
  const hydra_msgs__srv__GetDsg_Response * input,
  hydra_msgs__srv__GetDsg_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // graph
  if (!hydra_msgs__msg__DsgUpdate__copy(
      &(input->graph), &(output->graph)))
  {
    return false;
  }
  return true;
}

hydra_msgs__srv__GetDsg_Response *
hydra_msgs__srv__GetDsg_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__srv__GetDsg_Response * msg = (hydra_msgs__srv__GetDsg_Response *)allocator.allocate(sizeof(hydra_msgs__srv__GetDsg_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydra_msgs__srv__GetDsg_Response));
  bool success = hydra_msgs__srv__GetDsg_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hydra_msgs__srv__GetDsg_Response__destroy(hydra_msgs__srv__GetDsg_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hydra_msgs__srv__GetDsg_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hydra_msgs__srv__GetDsg_Response__Sequence__init(hydra_msgs__srv__GetDsg_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__srv__GetDsg_Response * data = NULL;

  if (size) {
    data = (hydra_msgs__srv__GetDsg_Response *)allocator.zero_allocate(size, sizeof(hydra_msgs__srv__GetDsg_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydra_msgs__srv__GetDsg_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydra_msgs__srv__GetDsg_Response__fini(&data[i - 1]);
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
hydra_msgs__srv__GetDsg_Response__Sequence__fini(hydra_msgs__srv__GetDsg_Response__Sequence * array)
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
      hydra_msgs__srv__GetDsg_Response__fini(&array->data[i]);
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

hydra_msgs__srv__GetDsg_Response__Sequence *
hydra_msgs__srv__GetDsg_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__srv__GetDsg_Response__Sequence * array = (hydra_msgs__srv__GetDsg_Response__Sequence *)allocator.allocate(sizeof(hydra_msgs__srv__GetDsg_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hydra_msgs__srv__GetDsg_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hydra_msgs__srv__GetDsg_Response__Sequence__destroy(hydra_msgs__srv__GetDsg_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hydra_msgs__srv__GetDsg_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hydra_msgs__srv__GetDsg_Response__Sequence__are_equal(const hydra_msgs__srv__GetDsg_Response__Sequence * lhs, const hydra_msgs__srv__GetDsg_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hydra_msgs__srv__GetDsg_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hydra_msgs__srv__GetDsg_Response__Sequence__copy(
  const hydra_msgs__srv__GetDsg_Response__Sequence * input,
  hydra_msgs__srv__GetDsg_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hydra_msgs__srv__GetDsg_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hydra_msgs__srv__GetDsg_Response * data =
      (hydra_msgs__srv__GetDsg_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hydra_msgs__srv__GetDsg_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hydra_msgs__srv__GetDsg_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hydra_msgs__srv__GetDsg_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "hydra_msgs/srv/detail/get_dsg__functions.h"

bool
hydra_msgs__srv__GetDsg_Event__init(hydra_msgs__srv__GetDsg_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    hydra_msgs__srv__GetDsg_Event__fini(msg);
    return false;
  }
  // request
  if (!hydra_msgs__srv__GetDsg_Request__Sequence__init(&msg->request, 0)) {
    hydra_msgs__srv__GetDsg_Event__fini(msg);
    return false;
  }
  // response
  if (!hydra_msgs__srv__GetDsg_Response__Sequence__init(&msg->response, 0)) {
    hydra_msgs__srv__GetDsg_Event__fini(msg);
    return false;
  }
  return true;
}

void
hydra_msgs__srv__GetDsg_Event__fini(hydra_msgs__srv__GetDsg_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  hydra_msgs__srv__GetDsg_Request__Sequence__fini(&msg->request);
  // response
  hydra_msgs__srv__GetDsg_Response__Sequence__fini(&msg->response);
}

bool
hydra_msgs__srv__GetDsg_Event__are_equal(const hydra_msgs__srv__GetDsg_Event * lhs, const hydra_msgs__srv__GetDsg_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!hydra_msgs__srv__GetDsg_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!hydra_msgs__srv__GetDsg_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
hydra_msgs__srv__GetDsg_Event__copy(
  const hydra_msgs__srv__GetDsg_Event * input,
  hydra_msgs__srv__GetDsg_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!hydra_msgs__srv__GetDsg_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!hydra_msgs__srv__GetDsg_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

hydra_msgs__srv__GetDsg_Event *
hydra_msgs__srv__GetDsg_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__srv__GetDsg_Event * msg = (hydra_msgs__srv__GetDsg_Event *)allocator.allocate(sizeof(hydra_msgs__srv__GetDsg_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydra_msgs__srv__GetDsg_Event));
  bool success = hydra_msgs__srv__GetDsg_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hydra_msgs__srv__GetDsg_Event__destroy(hydra_msgs__srv__GetDsg_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hydra_msgs__srv__GetDsg_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hydra_msgs__srv__GetDsg_Event__Sequence__init(hydra_msgs__srv__GetDsg_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__srv__GetDsg_Event * data = NULL;

  if (size) {
    data = (hydra_msgs__srv__GetDsg_Event *)allocator.zero_allocate(size, sizeof(hydra_msgs__srv__GetDsg_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydra_msgs__srv__GetDsg_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydra_msgs__srv__GetDsg_Event__fini(&data[i - 1]);
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
hydra_msgs__srv__GetDsg_Event__Sequence__fini(hydra_msgs__srv__GetDsg_Event__Sequence * array)
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
      hydra_msgs__srv__GetDsg_Event__fini(&array->data[i]);
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

hydra_msgs__srv__GetDsg_Event__Sequence *
hydra_msgs__srv__GetDsg_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__srv__GetDsg_Event__Sequence * array = (hydra_msgs__srv__GetDsg_Event__Sequence *)allocator.allocate(sizeof(hydra_msgs__srv__GetDsg_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hydra_msgs__srv__GetDsg_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hydra_msgs__srv__GetDsg_Event__Sequence__destroy(hydra_msgs__srv__GetDsg_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hydra_msgs__srv__GetDsg_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hydra_msgs__srv__GetDsg_Event__Sequence__are_equal(const hydra_msgs__srv__GetDsg_Event__Sequence * lhs, const hydra_msgs__srv__GetDsg_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hydra_msgs__srv__GetDsg_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hydra_msgs__srv__GetDsg_Event__Sequence__copy(
  const hydra_msgs__srv__GetDsg_Event__Sequence * input,
  hydra_msgs__srv__GetDsg_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hydra_msgs__srv__GetDsg_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hydra_msgs__srv__GetDsg_Event * data =
      (hydra_msgs__srv__GetDsg_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hydra_msgs__srv__GetDsg_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hydra_msgs__srv__GetDsg_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hydra_msgs__srv__GetDsg_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
