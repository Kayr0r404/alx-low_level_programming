#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * Prototype : int interpolation_search(int *array, size_t size, int value);
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, return -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		size_t m = L + (((R - L) * ((value - array[L])) / (array[R] - array[L])));

		if (m > size)
		{
			printf("Value checked array[%ld] is out of range\n", m);
			break;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", m, array[m]);
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
	}
	return (-1);
}
