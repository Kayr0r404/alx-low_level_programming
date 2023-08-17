#include "lists.h"
/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list
 * @h: input doulbly list
 * Return: number of entries in a list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
