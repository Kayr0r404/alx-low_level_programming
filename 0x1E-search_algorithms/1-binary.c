#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * Prototype : int binary_search(int *array, size_t size, int value);
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 * If value is not present in array or if array is NULL, return -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1;

	if (array == NULL)
		return (-1);

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

/**
 * print_array - print the array
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
*/
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: %d", *array);
	for (i = 1; i < size; i++)
		printf(", %d", *(array + i));
	printf("\n");
}
