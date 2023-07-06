#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * Prototype: size_t print_listint_safe(const listint_t *head);
 * @head:list
 * Return: the number of nodes in the list
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current_node = head;

	if (head == NULL)
	{
		printf("Error: head is NULL\n");
		exit(98);
	}

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		count++;
		current_node = current_node->next;
	}

	return (count);
}

