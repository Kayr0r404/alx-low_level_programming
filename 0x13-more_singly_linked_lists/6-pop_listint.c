#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head: input list
 * Prototype: int pop_listint(listint_t **head);
 * Return: the element at the node before poping
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int currData;

	if (!*head || !head)
		return (0);

	tmp = (*head)->next;
	currData = (*head)->n;
	free(*head);
	*head = tmp;

	return (currData);
}
