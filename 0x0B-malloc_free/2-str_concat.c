#include "main.h"
#include <stdlib.h>
#include <string.h>

int strLen(char *s);
/**
 *str_concat - Entry Point
 *@s1: destination string
 *@s2: Source string
 * Description: 'Write a function that concatenates two strings.
 * Prototype: char *str_concat(char *s1, char *s2);
 * The returned pointer should point to a newly allocated space in memory which
 * contains the contents of s1,
 * followed by the contents of s2, and null terminated'
 * Return:' if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptrStrConcat;

	unsigned int i = 0;
	int len = strLen(s1) + strLen(s2) + 1;

	ptrStrConcat = (char *) malloc(len * sizeof(char));
	if (!ptrStrConcat)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			ptrStrConcat[i++] = *s1;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2 != '\0')
		{
			ptrStrConcat[i++] = *s2;
			s2++;
		}
	}
	ptrStrConcat[i] = '\0';
	return (ptrStrConcat);
}

/**
 * strLen - length of a string
 * @s: passed str
 * Return: numbers of chars in str
*/
int strLen(char *s)
{
	int i = 0;

	if (s)
	{
		while (*s != '\0')
		{
			i++;
			s++;
		}
	}
	else
		i = 0;

	return (i);
}
