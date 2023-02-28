#include "main.h"
#include <string.h>

/**
*rev_string - Entry point baba
*@s: 'string passed'
*Description: 'Write a function that reverses a string.
*Prototype: void rev_string(char *s)'
*/
void rev_string(char *s)
{
	int length = 0, i;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
