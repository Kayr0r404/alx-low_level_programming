#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position.
 * @head: input list
 * @n: data value at the new node
 * @idx: is the index of the list where the new node should
 * be added. Index starts at 0
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current;

	if (!*head || !head || !newNode)
		return (NULL);

	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;

		return (*head);
	}

	current = *head;

	for (i = 0; i < idx - 1 && current; i++)
	{
		current = current->next;
	}

	newNode->n = n;
	newNode->next = current->next;
	current->next = newNode;

	return (current);
}
