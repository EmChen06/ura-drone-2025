// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from p2p_interfaces:action/HoverToPoint.idl
// generated code does not contain a copyright notice

#ifndef P2P_INTERFACES__ACTION__DETAIL__HOVER_TO_POINT__FUNCTIONS_H_
#define P2P_INTERFACES__ACTION__DETAIL__HOVER_TO_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "p2p_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "p2p_interfaces/action/detail/hover_to_point__struct.h"

/// Initialize action/HoverToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p2p_interfaces__action__HoverToPoint_Goal
 * )) before or use
 * p2p_interfaces__action__HoverToPoint_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Goal__init(p2p_interfaces__action__HoverToPoint_Goal * msg);

/// Finalize action/HoverToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Goal__fini(p2p_interfaces__action__HoverToPoint_Goal * msg);

/// Create action/HoverToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p2p_interfaces__action__HoverToPoint_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_Goal *
p2p_interfaces__action__HoverToPoint_Goal__create();

/// Destroy action/HoverToPoint message.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Goal__destroy(p2p_interfaces__action__HoverToPoint_Goal * msg);

/// Check for action/HoverToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Goal__are_equal(const p2p_interfaces__action__HoverToPoint_Goal * lhs, const p2p_interfaces__action__HoverToPoint_Goal * rhs);

/// Copy a action/HoverToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Goal__copy(
  const p2p_interfaces__action__HoverToPoint_Goal * input,
  p2p_interfaces__action__HoverToPoint_Goal * output);

/// Initialize array of action/HoverToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p2p_interfaces__action__HoverToPoint_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Goal__Sequence__init(p2p_interfaces__action__HoverToPoint_Goal__Sequence * array, size_t size);

/// Finalize array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Goal__Sequence__fini(p2p_interfaces__action__HoverToPoint_Goal__Sequence * array);

/// Create array of action/HoverToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p2p_interfaces__action__HoverToPoint_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_Goal__Sequence *
p2p_interfaces__action__HoverToPoint_Goal__Sequence__create(size_t size);

/// Destroy array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Goal__Sequence__destroy(p2p_interfaces__action__HoverToPoint_Goal__Sequence * array);

/// Check for action/HoverToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Goal__Sequence__are_equal(const p2p_interfaces__action__HoverToPoint_Goal__Sequence * lhs, const p2p_interfaces__action__HoverToPoint_Goal__Sequence * rhs);

/// Copy an array of action/HoverToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Goal__Sequence__copy(
  const p2p_interfaces__action__HoverToPoint_Goal__Sequence * input,
  p2p_interfaces__action__HoverToPoint_Goal__Sequence * output);

/// Initialize action/HoverToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p2p_interfaces__action__HoverToPoint_Result
 * )) before or use
 * p2p_interfaces__action__HoverToPoint_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Result__init(p2p_interfaces__action__HoverToPoint_Result * msg);

/// Finalize action/HoverToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Result__fini(p2p_interfaces__action__HoverToPoint_Result * msg);

/// Create action/HoverToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p2p_interfaces__action__HoverToPoint_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_Result *
p2p_interfaces__action__HoverToPoint_Result__create();

/// Destroy action/HoverToPoint message.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Result__destroy(p2p_interfaces__action__HoverToPoint_Result * msg);

/// Check for action/HoverToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Result__are_equal(const p2p_interfaces__action__HoverToPoint_Result * lhs, const p2p_interfaces__action__HoverToPoint_Result * rhs);

/// Copy a action/HoverToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Result__copy(
  const p2p_interfaces__action__HoverToPoint_Result * input,
  p2p_interfaces__action__HoverToPoint_Result * output);

/// Initialize array of action/HoverToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p2p_interfaces__action__HoverToPoint_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Result__Sequence__init(p2p_interfaces__action__HoverToPoint_Result__Sequence * array, size_t size);

/// Finalize array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Result__Sequence__fini(p2p_interfaces__action__HoverToPoint_Result__Sequence * array);

/// Create array of action/HoverToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p2p_interfaces__action__HoverToPoint_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_Result__Sequence *
p2p_interfaces__action__HoverToPoint_Result__Sequence__create(size_t size);

/// Destroy array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Result__Sequence__destroy(p2p_interfaces__action__HoverToPoint_Result__Sequence * array);

/// Check for action/HoverToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Result__Sequence__are_equal(const p2p_interfaces__action__HoverToPoint_Result__Sequence * lhs, const p2p_interfaces__action__HoverToPoint_Result__Sequence * rhs);

/// Copy an array of action/HoverToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Result__Sequence__copy(
  const p2p_interfaces__action__HoverToPoint_Result__Sequence * input,
  p2p_interfaces__action__HoverToPoint_Result__Sequence * output);

/// Initialize action/HoverToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p2p_interfaces__action__HoverToPoint_Feedback
 * )) before or use
 * p2p_interfaces__action__HoverToPoint_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Feedback__init(p2p_interfaces__action__HoverToPoint_Feedback * msg);

/// Finalize action/HoverToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Feedback__fini(p2p_interfaces__action__HoverToPoint_Feedback * msg);

/// Create action/HoverToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p2p_interfaces__action__HoverToPoint_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_Feedback *
p2p_interfaces__action__HoverToPoint_Feedback__create();

/// Destroy action/HoverToPoint message.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Feedback__destroy(p2p_interfaces__action__HoverToPoint_Feedback * msg);

/// Check for action/HoverToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Feedback__are_equal(const p2p_interfaces__action__HoverToPoint_Feedback * lhs, const p2p_interfaces__action__HoverToPoint_Feedback * rhs);

/// Copy a action/HoverToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Feedback__copy(
  const p2p_interfaces__action__HoverToPoint_Feedback * input,
  p2p_interfaces__action__HoverToPoint_Feedback * output);

/// Initialize array of action/HoverToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p2p_interfaces__action__HoverToPoint_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Feedback__Sequence__init(p2p_interfaces__action__HoverToPoint_Feedback__Sequence * array, size_t size);

/// Finalize array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Feedback__Sequence__fini(p2p_interfaces__action__HoverToPoint_Feedback__Sequence * array);

/// Create array of action/HoverToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p2p_interfaces__action__HoverToPoint_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_Feedback__Sequence *
p2p_interfaces__action__HoverToPoint_Feedback__Sequence__create(size_t size);

/// Destroy array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_Feedback__Sequence__destroy(p2p_interfaces__action__HoverToPoint_Feedback__Sequence * array);

/// Check for action/HoverToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Feedback__Sequence__are_equal(const p2p_interfaces__action__HoverToPoint_Feedback__Sequence * lhs, const p2p_interfaces__action__HoverToPoint_Feedback__Sequence * rhs);

/// Copy an array of action/HoverToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_Feedback__Sequence__copy(
  const p2p_interfaces__action__HoverToPoint_Feedback__Sequence * input,
  p2p_interfaces__action__HoverToPoint_Feedback__Sequence * output);

/// Initialize action/HoverToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p2p_interfaces__action__HoverToPoint_SendGoal_Request
 * )) before or use
 * p2p_interfaces__action__HoverToPoint_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Request__init(p2p_interfaces__action__HoverToPoint_SendGoal_Request * msg);

/// Finalize action/HoverToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_SendGoal_Request__fini(p2p_interfaces__action__HoverToPoint_SendGoal_Request * msg);

/// Create action/HoverToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_SendGoal_Request *
p2p_interfaces__action__HoverToPoint_SendGoal_Request__create();

/// Destroy action/HoverToPoint message.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_SendGoal_Request__destroy(p2p_interfaces__action__HoverToPoint_SendGoal_Request * msg);

/// Check for action/HoverToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Request__are_equal(const p2p_interfaces__action__HoverToPoint_SendGoal_Request * lhs, const p2p_interfaces__action__HoverToPoint_SendGoal_Request * rhs);

/// Copy a action/HoverToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Request__copy(
  const p2p_interfaces__action__HoverToPoint_SendGoal_Request * input,
  p2p_interfaces__action__HoverToPoint_SendGoal_Request * output);

/// Initialize array of action/HoverToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence__init(p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence__fini(p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence * array);

/// Create array of action/HoverToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence *
p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence__destroy(p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence * array);

/// Check for action/HoverToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence__are_equal(const p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence * lhs, const p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/HoverToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence__copy(
  const p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence * input,
  p2p_interfaces__action__HoverToPoint_SendGoal_Request__Sequence * output);

/// Initialize action/HoverToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p2p_interfaces__action__HoverToPoint_SendGoal_Response
 * )) before or use
 * p2p_interfaces__action__HoverToPoint_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Response__init(p2p_interfaces__action__HoverToPoint_SendGoal_Response * msg);

/// Finalize action/HoverToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_SendGoal_Response__fini(p2p_interfaces__action__HoverToPoint_SendGoal_Response * msg);

/// Create action/HoverToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_SendGoal_Response *
p2p_interfaces__action__HoverToPoint_SendGoal_Response__create();

/// Destroy action/HoverToPoint message.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_SendGoal_Response__destroy(p2p_interfaces__action__HoverToPoint_SendGoal_Response * msg);

/// Check for action/HoverToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Response__are_equal(const p2p_interfaces__action__HoverToPoint_SendGoal_Response * lhs, const p2p_interfaces__action__HoverToPoint_SendGoal_Response * rhs);

/// Copy a action/HoverToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Response__copy(
  const p2p_interfaces__action__HoverToPoint_SendGoal_Response * input,
  p2p_interfaces__action__HoverToPoint_SendGoal_Response * output);

/// Initialize array of action/HoverToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence__init(p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence__fini(p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence * array);

/// Create array of action/HoverToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence *
p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence__destroy(p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence * array);

/// Check for action/HoverToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence__are_equal(const p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence * lhs, const p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/HoverToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence__copy(
  const p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence * input,
  p2p_interfaces__action__HoverToPoint_SendGoal_Response__Sequence * output);

/// Initialize action/HoverToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p2p_interfaces__action__HoverToPoint_GetResult_Request
 * )) before or use
 * p2p_interfaces__action__HoverToPoint_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Request__init(p2p_interfaces__action__HoverToPoint_GetResult_Request * msg);

/// Finalize action/HoverToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_GetResult_Request__fini(p2p_interfaces__action__HoverToPoint_GetResult_Request * msg);

/// Create action/HoverToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_GetResult_Request *
p2p_interfaces__action__HoverToPoint_GetResult_Request__create();

/// Destroy action/HoverToPoint message.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_GetResult_Request__destroy(p2p_interfaces__action__HoverToPoint_GetResult_Request * msg);

/// Check for action/HoverToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Request__are_equal(const p2p_interfaces__action__HoverToPoint_GetResult_Request * lhs, const p2p_interfaces__action__HoverToPoint_GetResult_Request * rhs);

/// Copy a action/HoverToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Request__copy(
  const p2p_interfaces__action__HoverToPoint_GetResult_Request * input,
  p2p_interfaces__action__HoverToPoint_GetResult_Request * output);

/// Initialize array of action/HoverToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence__init(p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence__fini(p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence * array);

/// Create array of action/HoverToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence *
p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence__destroy(p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence * array);

/// Check for action/HoverToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence__are_equal(const p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence * lhs, const p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence * rhs);

/// Copy an array of action/HoverToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence__copy(
  const p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence * input,
  p2p_interfaces__action__HoverToPoint_GetResult_Request__Sequence * output);

/// Initialize action/HoverToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p2p_interfaces__action__HoverToPoint_GetResult_Response
 * )) before or use
 * p2p_interfaces__action__HoverToPoint_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Response__init(p2p_interfaces__action__HoverToPoint_GetResult_Response * msg);

/// Finalize action/HoverToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_GetResult_Response__fini(p2p_interfaces__action__HoverToPoint_GetResult_Response * msg);

/// Create action/HoverToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_GetResult_Response *
p2p_interfaces__action__HoverToPoint_GetResult_Response__create();

/// Destroy action/HoverToPoint message.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_GetResult_Response__destroy(p2p_interfaces__action__HoverToPoint_GetResult_Response * msg);

/// Check for action/HoverToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Response__are_equal(const p2p_interfaces__action__HoverToPoint_GetResult_Response * lhs, const p2p_interfaces__action__HoverToPoint_GetResult_Response * rhs);

/// Copy a action/HoverToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Response__copy(
  const p2p_interfaces__action__HoverToPoint_GetResult_Response * input,
  p2p_interfaces__action__HoverToPoint_GetResult_Response * output);

/// Initialize array of action/HoverToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence__init(p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence__fini(p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence * array);

/// Create array of action/HoverToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence *
p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence__destroy(p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence * array);

/// Check for action/HoverToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence__are_equal(const p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence * lhs, const p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence * rhs);

/// Copy an array of action/HoverToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence__copy(
  const p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence * input,
  p2p_interfaces__action__HoverToPoint_GetResult_Response__Sequence * output);

/// Initialize action/HoverToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p2p_interfaces__action__HoverToPoint_FeedbackMessage
 * )) before or use
 * p2p_interfaces__action__HoverToPoint_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_FeedbackMessage__init(p2p_interfaces__action__HoverToPoint_FeedbackMessage * msg);

/// Finalize action/HoverToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_FeedbackMessage__fini(p2p_interfaces__action__HoverToPoint_FeedbackMessage * msg);

/// Create action/HoverToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p2p_interfaces__action__HoverToPoint_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_FeedbackMessage *
p2p_interfaces__action__HoverToPoint_FeedbackMessage__create();

/// Destroy action/HoverToPoint message.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_FeedbackMessage__destroy(p2p_interfaces__action__HoverToPoint_FeedbackMessage * msg);

/// Check for action/HoverToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_FeedbackMessage__are_equal(const p2p_interfaces__action__HoverToPoint_FeedbackMessage * lhs, const p2p_interfaces__action__HoverToPoint_FeedbackMessage * rhs);

/// Copy a action/HoverToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_FeedbackMessage__copy(
  const p2p_interfaces__action__HoverToPoint_FeedbackMessage * input,
  p2p_interfaces__action__HoverToPoint_FeedbackMessage * output);

/// Initialize array of action/HoverToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p2p_interfaces__action__HoverToPoint_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence__init(p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence__fini(p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence * array);

/// Create array of action/HoverToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence *
p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/HoverToPoint messages.
/**
 * It calls
 * p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
void
p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence__destroy(p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence * array);

/// Check for action/HoverToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence__are_equal(const p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence * lhs, const p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/HoverToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p2p_interfaces
bool
p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence__copy(
  const p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence * input,
  p2p_interfaces__action__HoverToPoint_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // P2P_INTERFACES__ACTION__DETAIL__HOVER_TO_POINT__FUNCTIONS_H_
