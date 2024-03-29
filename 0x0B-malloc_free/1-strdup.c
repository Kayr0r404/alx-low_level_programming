#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int strLen(char str);
/**
 *_strdup - duplicate a string
 *@str: string to be duplicvated
 * Descrition: 'Write a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * Prototype: char *_strdup(char *str);
 * The _strdup() function returns a pointer to a new string which
 * is a duplicate
 * of the string str. Memory for the new string is obtained with malloc,
 * and can be freed with free.'
 * Return:' NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available'
 */

char *_strdup(char *str)
{
	char *ptrStr;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	ptrStr = (char *) malloc(strlen(str) * sizeof(char) + 1);
	if (ptrStr == NULL)
		return (NULL);

	if (str)
	{
		while (*str != '\0')
		{
			ptrStr[i++] = *str;
			str++;
		}
	}
	ptrStr[i] = '\0';
	return (ptrStr);
}
