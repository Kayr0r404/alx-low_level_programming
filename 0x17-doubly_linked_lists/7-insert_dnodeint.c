#include "lists.h"

/**
 * insert_dnodeint_at_index - function that
 * inserts a new node at a given position.
 * @h: input list
 * @idx: is the index of the list where the new node should be added
 * @n: input data
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*h == NULL)
	{
		new_node->next = NULL, new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h, new_node->prev = NULL;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	curr = *h;
	while (curr != NULL)
	{
		if (idx == i + 1)
		{
			new_node->next = curr->next, new_node->prev = curr;
			if (curr->next != NULL)
				curr->next->prev = new_node;
			curr->next = new_node;
			return (new_node);
		}
		curr = curr->next, i++;
	}
	free(new_node);  /* Free the allocated memory if insertion fails*/
	return (NULL);   /* Return NULL if idx is out of bounds*/
}
