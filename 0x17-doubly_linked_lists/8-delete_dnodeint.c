#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: input list
 * @index: index of a node to be removed
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *nxt;
	unsigned int i =  0;

	if (*head == NULL)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		nxt = curr->next, free(curr);
		nxt->prev = NULL, *head = nxt;
		return (1);
	}

	while (curr->next != NULL)
	{
		if (index == i + 1)
		{
			nxt = curr->next->next;
			if (nxt == NULL)
			{
				nxt = curr->next, free(curr->next);
				curr->next = NULL;
				return (1);
			}
			free(curr->next);
			curr->next = nxt, nxt->prev = curr;

			return (1);
		}
		curr = curr->next;
		i++;
	}

	return (-1);
}
