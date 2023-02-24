#include "main.h"
/**
 * print_line - entry function
 * @n: 'argumnent only accepts an integer'
 * Description: 'Write a function that draws a straight line in the terminal.
 * Prototype: void print_line(int n)
 * You can only use _putchar function to print
 * Where n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n'
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}

