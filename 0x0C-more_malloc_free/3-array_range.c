#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: string point
 * @max: end point
 * Prototype: int *array_range(int min, int max);
 * The array created should contain all the values from min (included) to
 * max (included), ordered from min to max
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */


int *array_range(int min, int max)
{
	int i = 0, *ptrInt, counter = min;

	if (min > max)
		return (NULL);

	ptrInt = calloc((max - min + 1), sizeof(int));

	if (ptrInt == NULL)
		return (NULL);

	while (i <= max)
	{
		*(ptrInt + i) = counter;
		i++;
		counter++;
	}
	return (ptrInt);
}
