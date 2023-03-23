#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - 'a function that executes a function given
 * as a parameter on each element of an array.'
 * @array: array of intergers
 * @size: size of the array
 * @action: pointer fun as parameter
 * where size is the size of the array
 * and action is a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	void (*pF)(int) = action;

	for (i = 0; i < size; i++)
	{
		(*pF)(array[i]);
	}
}
