#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: input list
 * @index: index of a node to be removed
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1); /* Invalid input or empty list*/

	current = *head;
	/* Traverse to the node at the specified index*/
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1); /* Index out of range*/
		current = current->next;
	}

	/* If the node is the first one*/
	if (index == 0)
		*head = current->next;
	else
	{
		if (current->prev != NULL)
			current->prev->next = current->next;

		if (current->next != NULL)
			current->next->prev = current->prev;
	}

	free(current);
	return (1); /* Successfully deleted the node*/
}
