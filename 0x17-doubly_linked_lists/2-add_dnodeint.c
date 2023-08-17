#include "lists.h"
/**
 * add_dnodeint - Write a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: input doubly lists
 * @data: value to be added
 * Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n)
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, int data)
{
	/* Create a new node*/
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		return (NULL);
	}

	/* Initialize the new node*/
	new_node->n = data;
	new_node->prev = NULL;
	new_node->next = *head;

	/* Update the previous node of the current head if it exists*/
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update the head to point to the new node*/
	*head = new_node;

	return (new_node);
}
