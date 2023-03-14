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
	
	/*allocate array size using malloc()*/
	ptrArray = malloc(size * sizeof(char));

	/*verify if malloc is successful in allocating memory
	 * if it is unsuccesful then NULL pointer is returned*/
	if (ptrArray == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		/*store c at index i in the array*/
		*(ptrArray + i) = c;

	return (ptrArray);
}
