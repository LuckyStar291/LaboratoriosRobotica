// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from matrix_interfaces:srv/Rotxyz.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__FUNCTIONS_H_
#define MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "matrix_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "matrix_interfaces/srv/detail/rotxyz__struct.h"

/// Initialize srv/Rotxyz message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * matrix_interfaces__srv__Rotxyz_Request
 * )) before or use
 * matrix_interfaces__srv__Rotxyz_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Request__init(matrix_interfaces__srv__Rotxyz_Request * msg);

/// Finalize srv/Rotxyz message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
void
matrix_interfaces__srv__Rotxyz_Request__fini(matrix_interfaces__srv__Rotxyz_Request * msg);

/// Create srv/Rotxyz message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * matrix_interfaces__srv__Rotxyz_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
matrix_interfaces__srv__Rotxyz_Request *
matrix_interfaces__srv__Rotxyz_Request__create();

/// Destroy srv/Rotxyz message.
/**
 * It calls
 * matrix_interfaces__srv__Rotxyz_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
void
matrix_interfaces__srv__Rotxyz_Request__destroy(matrix_interfaces__srv__Rotxyz_Request * msg);

/// Check for srv/Rotxyz message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Request__are_equal(const matrix_interfaces__srv__Rotxyz_Request * lhs, const matrix_interfaces__srv__Rotxyz_Request * rhs);

/// Copy a srv/Rotxyz message.
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
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Request__copy(
  const matrix_interfaces__srv__Rotxyz_Request * input,
  matrix_interfaces__srv__Rotxyz_Request * output);

/// Initialize array of srv/Rotxyz messages.
/**
 * It allocates the memory for the number of elements and calls
 * matrix_interfaces__srv__Rotxyz_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Request__Sequence__init(matrix_interfaces__srv__Rotxyz_Request__Sequence * array, size_t size);

/// Finalize array of srv/Rotxyz messages.
/**
 * It calls
 * matrix_interfaces__srv__Rotxyz_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
void
matrix_interfaces__srv__Rotxyz_Request__Sequence__fini(matrix_interfaces__srv__Rotxyz_Request__Sequence * array);

/// Create array of srv/Rotxyz messages.
/**
 * It allocates the memory for the array and calls
 * matrix_interfaces__srv__Rotxyz_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
matrix_interfaces__srv__Rotxyz_Request__Sequence *
matrix_interfaces__srv__Rotxyz_Request__Sequence__create(size_t size);

/// Destroy array of srv/Rotxyz messages.
/**
 * It calls
 * matrix_interfaces__srv__Rotxyz_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
void
matrix_interfaces__srv__Rotxyz_Request__Sequence__destroy(matrix_interfaces__srv__Rotxyz_Request__Sequence * array);

/// Check for srv/Rotxyz message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Request__Sequence__are_equal(const matrix_interfaces__srv__Rotxyz_Request__Sequence * lhs, const matrix_interfaces__srv__Rotxyz_Request__Sequence * rhs);

/// Copy an array of srv/Rotxyz messages.
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
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Request__Sequence__copy(
  const matrix_interfaces__srv__Rotxyz_Request__Sequence * input,
  matrix_interfaces__srv__Rotxyz_Request__Sequence * output);

/// Initialize srv/Rotxyz message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * matrix_interfaces__srv__Rotxyz_Response
 * )) before or use
 * matrix_interfaces__srv__Rotxyz_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Response__init(matrix_interfaces__srv__Rotxyz_Response * msg);

/// Finalize srv/Rotxyz message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
void
matrix_interfaces__srv__Rotxyz_Response__fini(matrix_interfaces__srv__Rotxyz_Response * msg);

/// Create srv/Rotxyz message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * matrix_interfaces__srv__Rotxyz_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
matrix_interfaces__srv__Rotxyz_Response *
matrix_interfaces__srv__Rotxyz_Response__create();

/// Destroy srv/Rotxyz message.
/**
 * It calls
 * matrix_interfaces__srv__Rotxyz_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
void
matrix_interfaces__srv__Rotxyz_Response__destroy(matrix_interfaces__srv__Rotxyz_Response * msg);

/// Check for srv/Rotxyz message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Response__are_equal(const matrix_interfaces__srv__Rotxyz_Response * lhs, const matrix_interfaces__srv__Rotxyz_Response * rhs);

/// Copy a srv/Rotxyz message.
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
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Response__copy(
  const matrix_interfaces__srv__Rotxyz_Response * input,
  matrix_interfaces__srv__Rotxyz_Response * output);

/// Initialize array of srv/Rotxyz messages.
/**
 * It allocates the memory for the number of elements and calls
 * matrix_interfaces__srv__Rotxyz_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Response__Sequence__init(matrix_interfaces__srv__Rotxyz_Response__Sequence * array, size_t size);

/// Finalize array of srv/Rotxyz messages.
/**
 * It calls
 * matrix_interfaces__srv__Rotxyz_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
void
matrix_interfaces__srv__Rotxyz_Response__Sequence__fini(matrix_interfaces__srv__Rotxyz_Response__Sequence * array);

/// Create array of srv/Rotxyz messages.
/**
 * It allocates the memory for the array and calls
 * matrix_interfaces__srv__Rotxyz_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
matrix_interfaces__srv__Rotxyz_Response__Sequence *
matrix_interfaces__srv__Rotxyz_Response__Sequence__create(size_t size);

/// Destroy array of srv/Rotxyz messages.
/**
 * It calls
 * matrix_interfaces__srv__Rotxyz_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
void
matrix_interfaces__srv__Rotxyz_Response__Sequence__destroy(matrix_interfaces__srv__Rotxyz_Response__Sequence * array);

/// Check for srv/Rotxyz message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Response__Sequence__are_equal(const matrix_interfaces__srv__Rotxyz_Response__Sequence * lhs, const matrix_interfaces__srv__Rotxyz_Response__Sequence * rhs);

/// Copy an array of srv/Rotxyz messages.
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
ROSIDL_GENERATOR_C_PUBLIC_matrix_interfaces
bool
matrix_interfaces__srv__Rotxyz_Response__Sequence__copy(
  const matrix_interfaces__srv__Rotxyz_Response__Sequence * input,
  matrix_interfaces__srv__Rotxyz_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__FUNCTIONS_H_
