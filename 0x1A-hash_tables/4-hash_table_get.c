#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *curr;

	/*if empty hash passed or null key passed return Null*/
	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	curr = ht->array[idx];

	/*iterate through the list in this array index, idx*/
	while (curr)
	{
		/*compare keys to return approopriate value*/
		if (strcmp(key, curr->key) == 0)
			return (curr->value);
		curr = curr->next;
	}

	return (NULL);
}
