#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t numElements(listint_t *head);

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 * @head: input list
 * Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index)
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode, *currNode;
	unsigned int i;

	if (!head || !*head || (numElements(*head) < index))
	{
		return (-1);
	}

	prevNode = *head;

	if (index == 0 && *head)
	{
		currNode = (*head)->next;
		free(*head);
		*head = currNode;

		return (1);
	}

	for (i = 0; i < index - 1 && prevNode; i++)
	{
		/*printf("%d = %d\n",i, prevNode->n);*/
		prevNode = prevNode->next;
	}
	/*printf("after: %d = %d\n",i, prevNode->n);*/

	currNode = prevNode->next;
	/*printf("current = %d\n",currNode->n);*/
	prevNode->next = currNode->next;
	free(currNode);
	currNode = NULL;

	return (1);
}

/**
 * numElements - finds number of elements in list
 * @head: input list
 * Return: number of elements in the list
 */

size_t numElements(listint_t *head)
{
	listint_t *current;
	unsigned int numElements = 0;

	if (!head)
		return (0);

	current = head;

	while (current)
	{
		numElements++;
		current = current->next;
	}

	return (numElements);
}

