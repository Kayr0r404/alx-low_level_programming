#include "main.h"
/**
 *print_numbers - entry point
 * Description: 'Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Prototype: void print_numbers(void)'
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar("%d", i);
	_putchar("\n");
}
