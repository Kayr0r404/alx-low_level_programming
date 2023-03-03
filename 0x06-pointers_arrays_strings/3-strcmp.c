#include "main.h"
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

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
	}

	return (0);
}
