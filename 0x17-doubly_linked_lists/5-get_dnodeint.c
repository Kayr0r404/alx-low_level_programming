#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list.
 * @head: input list
 * @index: is the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
