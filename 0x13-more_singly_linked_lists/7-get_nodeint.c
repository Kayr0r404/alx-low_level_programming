#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 * @head: input list
 * Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
 * @index: is the index of the node, starting at 0
 * Return: the node at index
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
		{
			node->n = head->n;
			node->next = NULL;
		}
		head = head->next;
		i++;
	}
		
	return (node);
}
