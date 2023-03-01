#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_strcat - entry point
*@dest: 'string'
*@src: 'string'
*Description: 'Write a function that concatenates two strings.
*Prototype: char *_strcat(char *dest, char *src)
*This function appends the src string to the dest string,
*overwriting the terminating null byte (\0)
*at the end of dest, and then adds a terminating null byte'
*Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	/*first get length of dest*/
	int lenDest = 0, i;

	while (dest[lenDest] != '\0')
		lenDest++;

	/*from the */
	for (i = 0; src[i] != '\0'; i++)
		dest[lenDest + i] = src[i];

	return (dest);
}
