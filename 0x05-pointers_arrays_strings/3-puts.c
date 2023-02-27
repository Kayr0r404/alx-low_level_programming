#include "main.h"
#include <unistd.h>

/**
*_puts - entry point
*@str: character passed as an argument
*Description: 'Write a function that prints a string,
*followed by a new line, to stdout.
*Prototype: void _puts(char *str)'
*/
void _puts(char *str)
{
	char newLine = '\n';

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, &newLine, 1);
}
