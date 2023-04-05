#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: list input
 * Prototype: void free_listint2(listint_t **head);
 * The function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *curr, *next;

	if (!head)
	{
		return;
	}

	curr = *head;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*head = NULL;
}
