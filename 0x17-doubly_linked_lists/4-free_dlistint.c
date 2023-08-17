#include "lists.h"
/**
  * free_dlistint - a function that frees a dlistint_t list
  * @head: input list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head, *next;

	if (head != NULL)
		return;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
