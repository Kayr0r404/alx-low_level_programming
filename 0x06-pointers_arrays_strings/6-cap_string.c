#include "main.h"

/**
*cap_string - entry
*@str: String
*Description: 'Write a function that capitalizes all words of a string.
*Prototype: char *cap_string(char *);
*Separators of words: space, tabulation, new line, ,, ;, .,
*!, ?, ", (, ), {, and }'
*Return: 'always  char *'
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 9 && str[i] <=10) || (str[i] >= 123 && str[i] <= 125))
		{
			if (str[i + 1] <= 122 && str[i + 1] >= 97)
				str[i + 1] = str[i + 1] - 32;
		}
	}

	return (str);
}
