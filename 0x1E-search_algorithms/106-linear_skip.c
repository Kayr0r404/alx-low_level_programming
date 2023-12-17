#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_skip - Search a singly linked list with an express lane.
 * @list: Pointer to the first node in the linked list.
 * @value: Value to be searched for.
 * Return: Pointer to the first node containing the value,
 * or NULL if not present or the list is empty.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list, *express;

	if (list == NULL)
		return (NULL);

	while (current->next != NULL)
	{
		express = current->express;

		if (express)
		{
			printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
			if (express->n >= value)
				break;
			current = express;
		}
		else
		{
			while (current->next != NULL)
				current = current->next;
			break;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	current->index, current->next ? current->next->index : current->index);

	while (current != NULL && current->next != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
