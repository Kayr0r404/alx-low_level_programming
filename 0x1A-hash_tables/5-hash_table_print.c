#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table
 * You should print the key/value in the order
 * that they appear in the array of hash table
 * Order: array, list
 * If ht is NULL, don’t print anything
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;

	printf("{");
	/*go through the array*/
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		/*iterarte the lists, and printing every key/ value*/
		while (curr)
		{
			printf("\'%s\': \'%s\'", curr->key, curr->value);
			curr = curr->next;
		}
	}
	printf("}\n");
}
