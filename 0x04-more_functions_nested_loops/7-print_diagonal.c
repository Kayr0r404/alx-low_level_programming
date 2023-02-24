#include "main.h"
/**
 *print_diagonal - entry point
 *@n: 'number of time the backslash should be printed'
 * Description: 'Write a function that draws a diagonal line on the terminal.
 * Prototype: void print_diagonal(int n);
 * You can only use _putchar function to print
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n'
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
