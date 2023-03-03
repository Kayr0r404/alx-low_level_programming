#include "main.h"
int len(char *str);

/**
*_strcmp - entry
*@s1: first string
*@s2: second string
*Description: compare two strings, char by char
*Return: '0 if bothe string are similar,
*1 if 2st string is greater than 2nd string,
*-1 if 2nd string is greater than 1st string'
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	if (len(s1) < len(s2))
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] > s2[i])
				return (1);
			else if (s1[i] < s2[i])
				return (-1);
		}
	}
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			if (s2[i] > s1[i])
				return (1);
			else if (s2[i] < s1[i])
				return (-1);
		}
	}

	return (0);
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
