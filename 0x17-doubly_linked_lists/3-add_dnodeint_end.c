#include "lists.h"
/**
 * add_dnodeint_end - a function that adds
 * a new node at the end of a dlistint_t list.
 * @head: input doubly list
 * @n: input data
 * Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;

		curr->next = new_node;
		new_node->prev = curr;
	}

	return (new_node);
}
