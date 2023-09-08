#include "hash_tables.h"

/**
 * hash_table_delete- a function that deletes a hash table.
 * Prototype: void hash_table_delete(hash_table_t *ht);
 * @ht: is the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];

		while (curr)
		{
			hash_node_t *tmp = curr->next;

			free(curr->key);
			free(curr->value);
			free(curr);
			curr = tmp;
		}
	}
}
