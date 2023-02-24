#include "main.h"
/**
 *print_triangle - entry function
 *@size: 'the size of the triangle'
 * Description: 'Write a function that prints a triangle,
 * followed by a new line.
 * Prototype: void print_triangle(int size)
 * Where size is the size of the triangle
 * If size is 0 or less, the function should print only a new line'
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
				if (j >= i)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	}
}
