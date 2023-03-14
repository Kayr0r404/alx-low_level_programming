#include "main.h"
#include <stdlib.h>

/**
 *create_array - array of chararacters
 *@size: size of the array
 *@c: character to fill the array
 * Deacription: 'Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * Prototype: char *create_array(unsigned int size, char c);'
 * Return: 'NULL if size = 0, a pointer to the array, or NULL if it fails'
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptrArray;
	ptrArray = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptrArray + i) = c;

	return (ptrArray);
}
