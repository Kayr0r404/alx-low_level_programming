#include "main.h"

/**
*puts_half - first Entry
*@str: 'string'
*Description: 'Write a function that prints half of a string,
*followed by a new line.
*Prototype: void puts_half(char *str);
*The function should print the second half of the string
*If the number of characters is odd, the function should print the
*last n characters of the string, where n = (length_of_the_string - 1) / 2'
*/

void puts_half(char *str)
{
	int i, n, j = 0;

	while (str[j] != '\0')
		j++;

	if (j % 2 == 0)
		n = j / 2;
	else
		n = (j - 1) / 2;

	for (i = n + 1; i < j; i++)
		_putchar(str[i]);
	_putchar('\n');
}
