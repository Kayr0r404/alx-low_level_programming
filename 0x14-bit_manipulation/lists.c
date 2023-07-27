#include "shell.h"

/**
 * print_list -  Write a function that prints
 * all the elements of a list_t list.
 * @h: linked list
 * Prototype: size_t print_list(const list_t *h);
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	void *ptr = NULL;

	while (h)
	{
		if (!h->var)
			_printf("%s %p\n", "[0]", ptr);
		else
			_printf("[%u] %s\n", h->id, h->var);
		count++;
		h = h->next;
	}

	return (count);
}

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: linkedlist
 * @str: input string
 * Prototype: list_t *add_node_end(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode || !str)
		return (NULL);

	newNode->var = strdup(str);
	newNode->id = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		list_t *tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}

	return (*head);
}
/**
 * free_list - function that frees a list_t list.
 * @head: input singly linkedlist
 * Prototype: void free_list(list_t *head);
 */

void free_list(list_t *head)
{
	char *str = NULL;

	if (head == NULL)
		return;
	free_list(head->next);
	str = (char *)head->var;
	free(str);
	free(head);
	head = NULL;
}
