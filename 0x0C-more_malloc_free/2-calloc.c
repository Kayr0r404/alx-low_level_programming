#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *  _calloc - the function that allocates memory for an array, using malloc.
 *  @nmemb: number of bytes needed
 *  @size: size of data type
 *  Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 *  The _calloc function allocates memory for an array of nmemb elements of
 *  size bytes each and
 *  Return: a pointer to the allocated memory.
 *  The memory is set to zero
 *  If nmemb or size is 0, then _calloc returns NULL
 *  If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *voidPtr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	voidPtr = calloc(nmemb, size);

	if (voidPtr == NULL)
		return (NULL);

	return (voidPtr);

}
