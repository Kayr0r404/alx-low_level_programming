#include "function_pointers.h"
#include <stdlib.h>


/**
 * int_index - Write a function that searches for an integer.
 * @array: given array
 * @size: the size of the array
 * @cmp: point to a fuctionto be used to compare values
 * Prototype: int int_index(int *array, int size, int (*cmp)(int));
 * Return:' the index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1'
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	int (*pF)(int) = cmp;

	if (size <= 0)
		return (-1);
	else if (cmp == NULL || array == NULL)
		exit(98);

	for (i = 0; i < size; i++)
	{
		if ((*pF)(array[i]))
			return (i);
		else if((*pF)(array[i]) == 0)
			exit(98);
	}
	return (-1);
}
