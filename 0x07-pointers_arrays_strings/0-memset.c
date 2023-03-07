#include "main.h"

/**
 *_memset - eNTRY
 *@s: pointer to a char
 *@b: char
 *@n: intger
 * Description : 'Write a function that fills memory with a constant byte.
 * Prototype: char *_memset(char *s, char b, unsigned int n);
 * The _memset() function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b'
 *Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

