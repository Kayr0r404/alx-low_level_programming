#include "lists.h"
/**
 * print_dlistint - Write a function that prints all the
 * elements of a dlistint_t list.
 * @h: input double linked list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
