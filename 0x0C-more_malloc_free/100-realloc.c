#include "main.h"
#include <stdlib.h>

/*
 * _realloc - a function that reallocates a memory block using malloc and free
 * Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
 * @ptr: is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum of the old and new sizes
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense
 */

void *_realloc(void *ptr, unsigned int old_size, usigned int new_size)
{

}
