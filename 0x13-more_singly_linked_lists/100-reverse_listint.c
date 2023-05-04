#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: input list
 * Prototype: listint_t *reverse_listint(listint_t **head);
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *nextNode, *currNode;

	if (!head || !*head)
		return (NULL);

	currNode = (*head);
	prevNode = NULL;
	while (currNode)
	{
		nextNode = currNode->next;
		currNode->next = prevNode;
		prevNode = currNode;
		currNode = nextNode;
	}
	*head = prevNode;

	return (*head);
}

