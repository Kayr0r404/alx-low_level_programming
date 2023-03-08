#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - entry
 *@s: String
 *@accept: String
 * Description: 'Write a function that searches a string for
 * any of a set of bytes.
 * Prototype: char *_strpbrk(char *s, char *accept);
 * The _strpbrk() function locates the first occurrence
 * in the string s of any of the bytes in the string accept;'
 * Return:' a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found'
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	if (*s == '\0')
		return (NULL);
	else if (*accept == '\0')
		return (s);

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return (NULL);
}
