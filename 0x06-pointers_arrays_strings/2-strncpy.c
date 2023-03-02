#include "main.h"
#include <stdio.h>
int len(char *str);

/**
*_strncpy - Entry point
*@dest: 'destination String'
*@src: 'Sorce string'
*@n: 'number of string to be copied into dest from src'
*Description: 'Write a function that copies a string.
*Prototype: char *_strncpy(char *dest, char *src, int n);
*Your function should work exactly like strncpy'
*Return: Always the destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	printf("%d\n", len(src));
	if (len(src) >= n)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
		/*dest[i] = '\0';*/
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			 if (i < len(src))
				dest[i] = src[i];
			else
				dest[i] = '\0';
		}
		dest[i] = '\0';
	}

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

