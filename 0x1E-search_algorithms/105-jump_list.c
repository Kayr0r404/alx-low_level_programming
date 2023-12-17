#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located,
 * or NULL if value is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	size_t low_bound = 0, up_bound = 0;
	listint_t *current = list;

	if (list == NULL)
		return (NULL);

	while (up_bound < size && current->n < value)
	{
		list = current;
		low_bound = up_bound;
		up_bound += jump_step;

		while (current->next != NULL && current->index < up_bound)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low_bound, up_bound);

	while (low_bound <= up_bound && list != NULL && list->index <= up_bound)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);

		list = list->next;
		low_bound++;
	}

	return (NULL);
}
