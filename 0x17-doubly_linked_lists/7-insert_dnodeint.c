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
		return (new_node);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	curr = *h;
	while (curr->next != NULL)
	{
		if (idx == i + 1)
		{
			new_node->next = curr->next, new_node->prev = curr;
			curr->next = new_node;
			return (new_node);
		}
		curr = curr->next, i++;
	}
	return (NULL);
}
