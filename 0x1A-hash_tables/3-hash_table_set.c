#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table.
 * @ht: The hash table.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (can be an empty string).
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	/* Create a new node and duplicate key and value */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Handle collision by inserting at the beginning of the linked list */
	current = ht->array[idx];
	ht->array[idx] = new_node;
	new_node->next = current;

	return (1);
}
