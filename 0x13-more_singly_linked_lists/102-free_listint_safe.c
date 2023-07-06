#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: list
 * Prototype: size_t free_listint_safe(listint_t **h);
 * This function can free lists with a loop
 * You should go though the list only once
 * Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current_node = *h, *next_node;

	while (current_node != NULL)
	{
		count++;
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}

	*h = NULL;

	return (count);
}

