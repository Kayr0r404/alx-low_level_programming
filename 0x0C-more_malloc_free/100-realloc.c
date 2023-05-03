#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * unsigned int old_size, unsigned int new_size);
 * @ptr: is a pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * The contents will be copied to the newly allocated space,
 * in the range from the start of
 * ptr up to the minimum of the old and new sizes
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense
 * Return: df
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrNew = NULL;
	size_t copySize;

	/*If new_size is 0, free the memory block pointed to by ptr and return NULL*/
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, allocate a new memory block and return it */
	if (!ptr)
	{
		ptrNew = malloc(new_size);
		return (ptrNew);
	}

	/* If new_size is equal to old_size, do not do anything and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* Allocate a new memory block with the new size */
	ptrNew = malloc(new_size);

	/* Copy the contents of the old memory block to the new memory block */
	copySize = old_size;
	if (new_size < copySize)
		copySize = new_size;

	memcpy(ptrNew, ptr, copySize);

	/* Free the old memory block */
	free(ptr);

	return (ptrNew);
}
