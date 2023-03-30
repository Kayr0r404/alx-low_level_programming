#include "lists.h"
#include <stddef.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: linkedlist
 * Prototype: size_t list_len(const list_t *h);
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (h->str != NULL)
			count++;
		h = h->next;
	}

	return (count);
}
