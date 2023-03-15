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
 * contains the contents of s1, followed by the contents of s2, and null terminated'
 * Return:' if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptrStrConcat;
	unsigned int long i, j = 0;
	int len = strlen(s1) + strlen(s2);

	ptrStrConcat = (char *) malloc(len + 1);

	if (ptrStrConcat == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		ptrStrConcat[j] = *s1;
		s1++;
		j++;
	}

	for (i = j + 1; *s2 != '\0'; i++)
	{
		ptrStrConcat[i] = *s2;
		s2++;
	}
	/*ptrStrConcat[ i + 1] = '\0';*/
	return (ptrStrConcat);
}
