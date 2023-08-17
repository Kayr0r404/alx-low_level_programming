#include "lists.h"
/**
 * print_dlistint - Write a function that prints all the
 * elements of a dlistint_t list.
 * @h: input double linked list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next, j++;
	}
	return (j);
}
