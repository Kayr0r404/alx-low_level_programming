#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	unsigned int long i = 0;

	ptrStrConcat = (char *) malloc(strlen(s1) * sizeof(char));

	if (ptrStrConcat == NULL)
		return (NULL);
	else if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	while (*s1 != '\0')
	{
		ptrStrConcat[i++] = *s1;
		s1++;
	}

	ptrStrConcat = realloc(ptrStrConcat, strlen(s2) * sizeof(char));

	while (*s2 != '\0')
	{
		ptrStrConcat[i++] = *s2;
		s2++;
	}

	return (ptrStrConcat);
}
