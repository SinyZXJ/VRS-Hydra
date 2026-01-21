// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hydra_msgs:msg/LabelUpdateRequest.idl
// generated code does not contain a copyright notice

#include "hydra_msgs/msg/detail/label_update_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_type_hash_t *
hydra_msgs__msg__LabelUpdateRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0xfa, 0x05, 0xd5, 0xd4, 0xbc, 0x01, 0x47,
      0x49, 0xbc, 0x1f, 0x3d, 0xac, 0x02, 0x0f, 0xe4,
      0x27, 0xd8, 0x7e, 0xa0, 0x13, 0x66, 0x6d, 0x69,
      0x9e, 0xf0, 0xa1, 0x74, 0x60, 0x18, 0x9f, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "hydra_msgs/msg/detail/node_label_update__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t hydra_msgs__msg__NodeLabelUpdate__EXPECTED_HASH = {1, {
    0x44, 0x10, 0x10, 0x5f, 0x11, 0x60, 0xbf, 0xb6,
    0x2e, 0x4b, 0x97, 0x5c, 0xa9, 0x0e, 0x69, 0x5d,
    0xb7, 0xbe, 0x74, 0x38, 0x2c, 0x39, 0x84, 0x81,
    0x26, 0x08, 0x23, 0x73, 0xda, 0xc4, 0x96, 0x3c,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char hydra_msgs__msg__LabelUpdateRequest__TYPE_NAME[] = "hydra_msgs/msg/LabelUpdateRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char hydra_msgs__msg__NodeLabelUpdate__TYPE_NAME[] = "hydra_msgs/msg/NodeLabelUpdate";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char hydra_msgs__msg__LabelUpdateRequest__FIELD_NAME__header[] = "header";
static char hydra_msgs__msg__LabelUpdateRequest__FIELD_NAME__updates[] = "updates";

static rosidl_runtime_c__type_description__Field hydra_msgs__msg__LabelUpdateRequest__FIELDS[] = {
  {
    {hydra_msgs__msg__LabelUpdateRequest__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__msg__LabelUpdateRequest__FIELD_NAME__updates, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {hydra_msgs__msg__NodeLabelUpdate__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hydra_msgs__msg__LabelUpdateRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__msg__NodeLabelUpdate__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hydra_msgs__msg__LabelUpdateRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hydra_msgs__msg__LabelUpdateRequest__TYPE_NAME, 33, 33},
      {hydra_msgs__msg__LabelUpdateRequest__FIELDS, 2, 2},
    },
    {hydra_msgs__msg__LabelUpdateRequest__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&hydra_msgs__msg__NodeLabelUpdate__EXPECTED_HASH, hydra_msgs__msg__NodeLabelUpdate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = hydra_msgs__msg__NodeLabelUpdate__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "NodeLabelUpdate[] updates";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hydra_msgs__msg__LabelUpdateRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hydra_msgs__msg__LabelUpdateRequest__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hydra_msgs__msg__LabelUpdateRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hydra_msgs__msg__LabelUpdateRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hydra_msgs__msg__NodeLabelUpdate__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
