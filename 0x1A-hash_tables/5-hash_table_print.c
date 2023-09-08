#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Print a hash table in Python dictionary format.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	int first_pair = 1; /*Flag to determine if it's the first pair to print*/

	if (ht == NULL)
		return;

	printf("{");
	/* Go through the array */
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		/* Iterate the lists, and print every key/value pair */
		while (curr)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			first_pair = 0;
			curr = curr->next;
		}
	}
	printf("}\n");
}
