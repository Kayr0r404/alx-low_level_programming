#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list -  Write a function that prints
 * all the elements of a list_t list.
 * @h: linked list
 * Prototype: size_t print_list(const list_t *h);
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	void *ptr = NULL;

	while (h)
	{
		if (!h->str)
			printf("%s %p\n", "[0]", ptr);
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	printf("\n");

	return (count);
}
