#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at
 * @head: start of the list
 * @str: element to be inserted into the list
 * the beginning of a list_t list.
 * Prototype: list_t *add_node(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	/*Allocate mem to duplicate str*/
	char *strDup = malloc(strlen(str) + 1);

	if (!strDup || !newNode)
		return (NULL);

	strDup = strdup(str);/*duplicate str*/
	newNode->str = strDup;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
