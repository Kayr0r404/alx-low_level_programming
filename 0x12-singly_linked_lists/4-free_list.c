#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: input singly linkedlist
 * Prototype: void free_list(list_t *head);
 */

void free_list(list_t *head)
{
	list_t *current;

	if (!head)
		return;

	current = head;
	
	while (current != NULL)
	{
		list_t *next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}

