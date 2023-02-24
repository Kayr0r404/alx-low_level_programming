#include "main.h"
#include <unistd.h>
/**
 *print_numbers - entry point
 * Description: 'Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Prototype: void print_numbers(void)'
 */
void print_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
