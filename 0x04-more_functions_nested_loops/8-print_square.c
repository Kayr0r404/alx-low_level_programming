#include "main.h"
/**
 *print_square - entry point function
 * @size: The actual size of the square'
 * Description: 'Write a function that prints a square, followed by a new line.
 * Prototype: void print_square(int size)
 * You can only use _putchar function to print
 * Where size is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square'
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
