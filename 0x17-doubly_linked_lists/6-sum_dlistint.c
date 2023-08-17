#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: input list
 * Return: sum data in list, if the list is empty, return 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
