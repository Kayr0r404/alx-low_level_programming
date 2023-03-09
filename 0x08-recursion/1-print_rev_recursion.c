#include "main.h"
int strLen(char *S);
/**
 *_print_rev_recursion - entry
 *@s: String
 * Description: 'Write a function that prints a string in reverse.
 * Prototype: void _print_rev_recursion(char *s);'
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
