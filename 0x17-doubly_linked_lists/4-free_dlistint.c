#include "lists.h"
/**
  * free_dlistint - a function that frees a dlistint_t list
  * @head: input list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
