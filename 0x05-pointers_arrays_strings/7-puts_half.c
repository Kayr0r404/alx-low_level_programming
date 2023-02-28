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
	int i, n;

	if (_strlen(str) % 2 == 0)
		n = _strlen(str) / 2;
	else
		n = (_strlen(str) - 1) / 2;

	for (i = n; i < _strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
