#include "search_algos.h"

/**
 * advanced_binary_recursive - recursive helper function for advanced_binary
 * @array: pointer to the first element of the array to search in
 * @low: the starting index of the current subarray
 * @high: the ending index of the current subarray
 * @value: the value to search for
 * Return: the index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid = low + (high - low) / 2, i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}

	printf("\n");
	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_recursive(array, low, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));

	return (advanced_binary_recursive(array, low, mid - 1, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
