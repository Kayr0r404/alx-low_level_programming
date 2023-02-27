#include "main.h"
#include <unistd.h>

/**
*print_rev - Entry point
*@s: 'passed String'
*Write a function that prints a string, in reverse, followed by a new line.
*Prototype: void print_rev(char *s)'
*/#include "main.h"
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Find the length of the string */
	while (s[len] != '\0')
		len++;

	/* Print the string in reverse */
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
