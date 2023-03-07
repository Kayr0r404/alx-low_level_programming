#include "main.h"
#include <stdio.h>

/**
 *_strchr - Entry
 *@s: string
 *@c: char
 * Description: 'Write a function that locates a character in a string.
 * Prototype: char *_strchr(char *s, char c);
 * Return: 'a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found'
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s ==  c)
			return (s);
		s++;
	}

	return (NULL);
}
