#include "main.h"
#include <stdbool.h>

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
	int i, j;
	char arrSepOfWords[] = {'\n', '\t', ' ', 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
			if (str[i] == arrSepOfWords[j] && (str[i + 1] >= 97 && str[i + 1] <= 122))
				str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
