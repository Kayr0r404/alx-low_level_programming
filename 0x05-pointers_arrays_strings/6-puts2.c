#include "main.h"

/**
*puts2 - Entry point
*@str: 'string passed'
*Desctription: "Write a function that prints every other character of a string,
*starting with the first character, followed by a new line.
*Prototype: void puts2(char *str)'
*/

void puts2(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
