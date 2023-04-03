#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a
 * new node at the beginning of a listint_t list.
 * @head: input lists
 * @n: data to be inserted into the new node
 * Prototype: listint_t *add_nodeint(listint_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	*head = newNode;

	return (*head);
}
