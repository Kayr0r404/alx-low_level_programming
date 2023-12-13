#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * used the square root of the size of the array as the jump step.
 * Prototype : int jump_search(int *array, size_t size, int value);
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, return -1
*/

int jump_search(int *array, size_t size, int value)
{
	int jump_step = sqrt(size);
	int low_bound = 0, up_bound = 0, i = 0;

	if (!array)
		return (-1);
	while (up_bound < (int)size && array[up_bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", up_bound, *(array + up_bound));
		low_bound = up_bound;
		up_bound += jump_step;
		i++;
	}

	printf("Value found between indexes [%d] and [%d]\n", low_bound, up_bound);

	up_bound = (up_bound < (int)size) ? up_bound : (int)(size - 1);


	for (i = low_bound; i <= up_bound; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		if (value == *(array + i))
			return (i);
	}

	return (-1);
}
