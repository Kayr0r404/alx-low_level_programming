#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc.
 * @b : input memory size
 * Prototype: void *malloc_checked(unsigned int b);
 * Return: 'a pointer to the allocated memory
 * if malloc fails, the malloc_checked function
 * should cause normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
