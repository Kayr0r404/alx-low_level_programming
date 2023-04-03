#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds
 * a new node at the end of a listint_t list.
 * @head: Input list
 * @n: data to be inserted into the list
 * Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		listint_t *tail = *head;
		/*go to the end of the list*/
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
	return (*head);
}
