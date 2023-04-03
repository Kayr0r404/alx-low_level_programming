#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the list
 * Prototype: void free_listint(listint_t *head);
 */

void free_listint(listint_t *head)
{
	listint_t *current = head, *next;

	if (!head)
		return;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}
