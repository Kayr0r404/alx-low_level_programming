#include "main.h"

/**
*string_toupper - entry
*@str: change the string to upper
*Description: 'Write a function that changes all
*lowercase letters of a string to uppercase.
*Prototype: char *string_toupper(char *)'
*Return: string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 122 && str[i] >= 97)
			str[i] = str[i] - 32;
		else
			str[i] = str[i];
	}

	return (str);
}
