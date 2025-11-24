// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from p2p_interfaces:action/HoverToPoint.idl
// generated code does not contain a copyright notice

#ifndef P2P_INTERFACES__ACTION__DETAIL__HOVER_TO_POINT__STRUCT_H_
#define P2P_INTERFACES__ACTION__DETAIL__HOVER_TO_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/HoverToPoint in the package p2p_interfaces.
typedef struct p2p_interfaces__action__HoverToPoint_Goal
{
  float x;
  float y;
  float z;
} p2p_interfaces__action__HoverToPoint_Goal;

// Struct for a sequence of p2p_interfaces__action__HoverToPoint_Goal.
typedef struct p2p_interfaces__action__HoverToPoint_Goal__Sequence
{
  p2p_interfaces__action__HoverToPoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p2p_interfaces__action__HoverToPoint_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/HoverToPoint in the package p2p_interfaces.
typedef struct p2p_interfaces__action__HoverToPoint_Result
{
  bool success;
  rosidl_runtime_c__String message;
} p2p_interfaces__action__HoverToPoint_Result;

// Struct for a sequence of p2p_interfaces__action__HoverToPoint_Result.
typedef struct p2p_interfaces__action__HoverToPoint_Result__Sequence
{
  p2p_interfaces__action__HoverToPoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p2p_interfaces__action__HoverToPoint_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/HoverToPoint in the package p2p_interfaces.
typedef struct p2p_interfaces__action__HoverToPoint_Feedback
{
  float current_x;
  float current_y;
  float current_z;
} p2p_interfaces__action__HoverToPoint_Feedback;

// Struct for a sequence of p2p_interfaces__action__HoverToPoint_Feedback.
typedef struct p2p_interfaces__action__HoverToPoint_Feedback__Sequence
{
  p2p_interfaces__action__HoverToPoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p2p_interfaces__action__HoverToPoint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "p2p_interfaces/action/detail/hover_to_point__struct.h"

/// Struct defined in action/HoverToPoint in the package p2p_interfaces.
typedef struct p2p_interfaces__action__HoverToPoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  p2p_interfaces__action__HoverToPoint_Goal goal;
} p2p_interfaces__action__HoverToPoint_SendGoal_Request;

// Struct for a sequence of p2p_interfaces__action__HoverToPoint_SendGoal_Request.
typedef struct p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence
{
  p2p_interfaces__action__HoverToPoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/HoverToPoint in the package p2p_interfaces.
typedef struct p2p_interfaces__action__HoverToPoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} p2p_interfaces__action__HoverToPoint_SendGoal_Response;

// Struct for a sequence of p2p_interfaces__action__HoverToPoint_SendGoal_Response.
typedef struct p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence
{
  p2p_interfaces__action__HoverToPoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/HoverToPoint in the package p2p_interfaces.
typedef struct p2p_interfaces__action__HoverToPoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} p2p_interfaces__action__HoverToPoint_GetResult_Request;

// Struct for a sequence of p2p_interfaces__action__HoverToPoint_GetResult_Request.
typedef struct p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence
{
  p2p_interfaces__action__HoverToPoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.h"

/// Struct defined in action/HoverToPoint in the package p2p_interfaces.
typedef struct p2p_interfaces__action__HoverToPoint_GetResult_Response
{
  int8_t status;
  p2p_interfaces__action__HoverToPoint_Result result;
} p2p_interfaces__action__HoverToPoint_GetResult_Response;

// Struct for a sequence of p2p_interfaces__action__HoverToPoint_GetResult_Response.
typedef struct p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence
{
  p2p_interfaces__action__HoverToPoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "p2p_interfaces/action/detail/hover_to_point__struct.h"

/// Struct defined in action/HoverToPoint in the package p2p_interfaces.
typedef struct p2p_interfaces__action__HoverToPoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  p2p_interfaces__action__HoverToPoint_Feedback feedback;
} p2p_interfaces__action__HoverToPoint_FeedbackMessage;

// Struct for a sequence of p2p_interfaces__action__HoverToPoint_FeedbackMessage.
typedef struct p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence
{
  p2p_interfaces__action__HoverToPoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // P2P_INTERFACES__ACTION__DETAIL__HOVER_TO_POINT__STRUCT_H_
