#include "lists.h"


/**
 * listint_len - function that returns the number of elements in a linked listint_t list.
 * @h: input list
 * Prototype: size_t listint_len(const listint_t *h);
 * Return : number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}

