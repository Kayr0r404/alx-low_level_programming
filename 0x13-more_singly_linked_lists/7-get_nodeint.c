#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @head: input list
 * @index: is the index of the node, starting at 0
 * listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
 * Return: the node at index
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
