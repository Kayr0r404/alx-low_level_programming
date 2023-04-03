#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: input list
 * Prototype: size_t print_listint(const listint_t *h);
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;

	while (h)
	{
		if (!h->n)
			continue;
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}

