#include "main.h"

/**
 *_puts_recursion - entry fun
 *@s: String to be printed
 * Description: 'Write a function that prints a string, followed by a new line.
 * Prototype: void _puts_recursion(char *s);'
 */

void _puts_recursion(char *s)
{
	if ( *s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
