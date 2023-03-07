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
	/*if empty char passed, return the whole string*/
	if (*s == '\0')
		return (NULL);
	else if (c == '\0')
		return (s);

	/*loop through the string to find a matching char*/
	while (*s != '\0')
	{
		if (*s ==  c)
			return (s);
		s++;
	}
	/*if the char not found return null*/
	return (NULL);
}
