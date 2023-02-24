#include "main.h"
/**
 * print_most_numbers - entry point
 * Description: 'Write a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Prototype: void print_most_numbers(void)
 * Do not print 2 and 4'
 */

void print_most_numbers(void)
{
	char num;

	for (num = 48; num < 58; num++)
		if (num == 4 && num == 2
			continue;
		else
			_putchar(num);
	_putchar('\n');
}
