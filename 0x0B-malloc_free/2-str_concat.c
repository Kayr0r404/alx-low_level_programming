#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_nullPtr(char *s);

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

	if (s1 != NULL && s2 != NULL)
	{
		int len = strlen(s1) + strlen(s2) + 1;

		ptrStrConcat = (char *) malloc(len * sizeof(char));

		if (ptrStrConcat == NULL)
			return (NULL);

		while (*s1 != '\0')
		{
			ptrStrConcat[i++] = *s1;
			s1++;
		}

		/*ptrStrConcat = realloc(ptrStrConcat, strlen(s2) * sizeof(char) + 1);*/
		if (ptrStrConcat == NULL)
			return (NULL);

		while (*s2 != '\0')
		{
			ptrStrConcat[i++] = *s2;
			s2++;
		}

		ptrStrConcat[i] = '\0';
	}
	else if (s1 == NULL)
		ptrStrConcat = _nullPtr(s2);
	else if (s2 == NULL)
		ptrStrConcat = _nullPtr(s1);
	else if (s1 == NULL && s2 == NULL)
	{
		ptrStrConcat = (char *) malloc(sizeof(char));
		ptrStrConcat[i] = '\0';
	}

	return (ptrStrConcat);
}

/**
 * _nullPtr - double check if input pointer is null
 * @s: input pointer
 * Description: 'if input pointer is null'
 * Return: a pointer
 */

char *_nullPtr(char *s)
{
	char *ptrStr;

	int i = 0;

	if (s != NULL)
	{
		ptrStr = (char *) malloc(strlen(s) * sizeof(char) + 1);
		if (ptrStr == NULL)
			return (NULL);

		while (*s != '\0')
		{
			ptrStr[i++] = *s;
			s++;
		}
	}
	ptrStr[i] = '\0';
	return (ptrStr);
}
