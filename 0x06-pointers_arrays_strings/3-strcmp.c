#include "main.h"
#include <stdio.h>
int max(int a, int b);
int len(char *str);

/**
*_strcmp - entry
*@s1: first string
*@s2: second string
*Description: compare two strings, char by char.
*Return: ASCII difference
*/
int _strcmp(char *s1, char *s2)
{
	int i, asciiDiff;
	int maxi = max(len(s1), len(s2));

	for (i = 0; i < maxi; i++)
	{
		if (s1[i] != s2[i])
		{
			asciiDiff = (s1[i] - s2[i]);
			break;
		}
		else
			asciiDiff = (s1[i] - s2[i]);
	}
	return (asciiDiff);
}

/**
*len - entry
*@str: string
*Description: string length
*Return: string leng
*/

int len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
*max - maxumum function
*@a: integer
*@b: interger
*Description: find maximum number between two numbers
*Return: max number between a nad b
*/

int max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
