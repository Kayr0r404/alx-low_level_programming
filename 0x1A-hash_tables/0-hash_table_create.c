#include "hash_tables.h"
/**
 * hash_table_create - Write a function that creates a hash table.
 * Prototype: hash_table_t *hash_table_create(unsigned long int size);
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 *
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;
    hash_table_t *ht;
    
    if (size == 0)
        return (NULL);

    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }
    ht->size = size;

    for (i = 0; i < size; i++)
        *(ht->array + i) = NULL;

    return (ht);
}
