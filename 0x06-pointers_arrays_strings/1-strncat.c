#include "main.h"
int len(char *str);

/**
*_strncat - Entry point
*@dest: String
*@src: String
*@n: integer
*Description: 'Write a function that concatenates two strings.
*Prototype: char *_strncat(char *dest, char *src, int n);
*it will use at most n bytes from src; and
*src does not need to be null-terminated if
*it contains n or more bytes'
*Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int lenDest = len(dest);
	int lenSrc = len(src);
	int i;

	if (lenSrc <= n)
	{
		for (i = 0; src[i] != '\0'; i++)
			dest[lenDest + i] = src[i];
	}
	else
	{
		for (i = 0; i < n; i++)
			dest[lenDest + i] = src[i];
	}
	dest[lenDest + i] = '\0';

	return (dest);
}

/**
*len - function
*@str: String
*Description: 'the length of the string passed'
*Return: String length
*/

int len(char *str)
{
	int lenStr = 0;

	while (str[lenStr] != '\0')
		lenStr++;
	return (lenStr);
}
