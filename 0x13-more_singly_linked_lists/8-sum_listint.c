#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum
 * @head: input list
 * of all the data (n) of a listint_t linked list.
 * Prototype: int sum_listint(listint_t *head);
 * Return: sum of elements in list
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
