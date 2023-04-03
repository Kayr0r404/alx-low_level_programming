#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @h: input list
 * Prototype: void free_listint(listint_t *head);
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	curr = head;

	while (curr)
	{
		listint_t *next = curr->next;
		free(curr->next);
		free(curr);

		curr = next;
	}
}
