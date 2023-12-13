#include "search_algos.h"
#include "1-binary.c"

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * Prototype : int exponential_search(int *array, size_t size, int value);
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, L, R;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	R = (bound * 2 < size) ? bound * 2 : size - 1;
	L = bound / 2;

	while (L <= R)
	{
		size_t m = (L + R) / 2;

		print_array(array + L, R - L + 1);

		if (value != array[m])
		{
			if (array[m] < value)
				L = m + 1;
			else
				R = m - 1;
		}
		else
			return (m);
	}

	return (-1);
}
