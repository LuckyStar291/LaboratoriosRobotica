// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ucb_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACES__SRV__DETAIL__ROT__FUNCTIONS_H_
#define UCB_INTERFACES__SRV__DETAIL__ROT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ucb_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ucb_interfaces/srv/detail/rot__struct.h"

/// Initialize srv/Rot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ucb_interfaces__srv__Rot_Request
 * )) before or use
 * ucb_interfaces__srv__Rot_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Request__init(ucb_interfaces__srv__Rot_Request * msg);

/// Finalize srv/Rot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
void
ucb_interfaces__srv__Rot_Request__fini(ucb_interfaces__srv__Rot_Request * msg);

/// Create srv/Rot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ucb_interfaces__srv__Rot_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
ucb_interfaces__srv__Rot_Request *
ucb_interfaces__srv__Rot_Request__create();

/// Destroy srv/Rot message.
/**
 * It calls
 * ucb_interfaces__srv__Rot_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
void
ucb_interfaces__srv__Rot_Request__destroy(ucb_interfaces__srv__Rot_Request * msg);

/// Check for srv/Rot message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Request__are_equal(const ucb_interfaces__srv__Rot_Request * lhs, const ucb_interfaces__srv__Rot_Request * rhs);

/// Copy a srv/Rot message.
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
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Request__copy(
  const ucb_interfaces__srv__Rot_Request * input,
  ucb_interfaces__srv__Rot_Request * output);

/// Initialize array of srv/Rot messages.
/**
 * It allocates the memory for the number of elements and calls
 * ucb_interfaces__srv__Rot_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Request__Sequence__init(ucb_interfaces__srv__Rot_Request__Sequence * array, size_t size);

/// Finalize array of srv/Rot messages.
/**
 * It calls
 * ucb_interfaces__srv__Rot_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
void
ucb_interfaces__srv__Rot_Request__Sequence__fini(ucb_interfaces__srv__Rot_Request__Sequence * array);

/// Create array of srv/Rot messages.
/**
 * It allocates the memory for the array and calls
 * ucb_interfaces__srv__Rot_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
ucb_interfaces__srv__Rot_Request__Sequence *
ucb_interfaces__srv__Rot_Request__Sequence__create(size_t size);

/// Destroy array of srv/Rot messages.
/**
 * It calls
 * ucb_interfaces__srv__Rot_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
void
ucb_interfaces__srv__Rot_Request__Sequence__destroy(ucb_interfaces__srv__Rot_Request__Sequence * array);

/// Check for srv/Rot message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Request__Sequence__are_equal(const ucb_interfaces__srv__Rot_Request__Sequence * lhs, const ucb_interfaces__srv__Rot_Request__Sequence * rhs);

/// Copy an array of srv/Rot messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Request__Sequence__copy(
  const ucb_interfaces__srv__Rot_Request__Sequence * input,
  ucb_interfaces__srv__Rot_Request__Sequence * output);

/// Initialize srv/Rot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ucb_interfaces__srv__Rot_Response
 * )) before or use
 * ucb_interfaces__srv__Rot_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Response__init(ucb_interfaces__srv__Rot_Response * msg);

/// Finalize srv/Rot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
void
ucb_interfaces__srv__Rot_Response__fini(ucb_interfaces__srv__Rot_Response * msg);

/// Create srv/Rot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ucb_interfaces__srv__Rot_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
ucb_interfaces__srv__Rot_Response *
ucb_interfaces__srv__Rot_Response__create();

/// Destroy srv/Rot message.
/**
 * It calls
 * ucb_interfaces__srv__Rot_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
void
ucb_interfaces__srv__Rot_Response__destroy(ucb_interfaces__srv__Rot_Response * msg);

/// Check for srv/Rot message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Response__are_equal(const ucb_interfaces__srv__Rot_Response * lhs, const ucb_interfaces__srv__Rot_Response * rhs);

/// Copy a srv/Rot message.
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
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Response__copy(
  const ucb_interfaces__srv__Rot_Response * input,
  ucb_interfaces__srv__Rot_Response * output);

/// Initialize array of srv/Rot messages.
/**
 * It allocates the memory for the number of elements and calls
 * ucb_interfaces__srv__Rot_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Response__Sequence__init(ucb_interfaces__srv__Rot_Response__Sequence * array, size_t size);

/// Finalize array of srv/Rot messages.
/**
 * It calls
 * ucb_interfaces__srv__Rot_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
void
ucb_interfaces__srv__Rot_Response__Sequence__fini(ucb_interfaces__srv__Rot_Response__Sequence * array);

/// Create array of srv/Rot messages.
/**
 * It allocates the memory for the array and calls
 * ucb_interfaces__srv__Rot_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
ucb_interfaces__srv__Rot_Response__Sequence *
ucb_interfaces__srv__Rot_Response__Sequence__create(size_t size);

/// Destroy array of srv/Rot messages.
/**
 * It calls
 * ucb_interfaces__srv__Rot_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
void
ucb_interfaces__srv__Rot_Response__Sequence__destroy(ucb_interfaces__srv__Rot_Response__Sequence * array);

/// Check for srv/Rot message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Response__Sequence__are_equal(const ucb_interfaces__srv__Rot_Response__Sequence * lhs, const ucb_interfaces__srv__Rot_Response__Sequence * rhs);

/// Copy an array of srv/Rot messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ucb_interfaces
bool
ucb_interfaces__srv__Rot_Response__Sequence__copy(
  const ucb_interfaces__srv__Rot_Response__Sequence * input,
  ucb_interfaces__srv__Rot_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UCB_INTERFACES__SRV__DETAIL__ROT__FUNCTIONS_H_
