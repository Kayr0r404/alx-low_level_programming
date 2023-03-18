#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *avoidNullStr(char *s);
/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: destianation string
 * @s2: source string
 * @n: first n chars of s2
 * Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
 * Return: 'The returned pointer shall point to a newly allocated space
 * in memory,which contains s1, followed by the first n bytes of s2,
 * and null terminated If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string'
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptrConcat;
	unsigned int i = 0, counter = 0;

	/*treat null string as empty string*/
	if (s2 == NULL)
		s2 = avoidNullStr(s2);
	else if (s1 == NULL)
		s1 = avoidNullStr(s1);
	if (s1 == NULL && s2 == NULL)
	{
		char *null = malloc(sizeof(char));

		if (null == NULL)
			return (NULL);

		*null = '\0';
		return (null);
	}

	/*If n is greater or equal to the length of s2 then use the entire string s2*/
	if (strlen(s2) <= n)
	{
		ptrConcat = malloc(strlen(s1) + strlen(s2) + 1);
		n = strlen(s2);
	}
	else
		ptrConcat = malloc(strlen(s1) + n + 1);

	/*if malloc fails return null*/
	if (ptrConcat == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		ptrConcat[i++] = *s1;
		s1++;
	}

	while (counter++ <  n)
	{
		ptrConcat[i++] = *s2;
		s2++;
	}

	ptrConcat[i] = '\0';
	return (ptrConcat);
}

/**
 * avoidNullStr - if null str passed set s to empty str
 * @s: input string
 * Return: en empty string
 */

char *avoidNullStr(char *s)
{
	/*char *cP;*/

	if (s == NULL)
	{
		s = "";
	}

	return (s);
}
