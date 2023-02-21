#include "main.h"
/**
 * print_sign - Entry point
 * @n: 'is interger n positive, zero or negative?'
 * Description: 'Write a function that prints the sign of a number.
 * Prototype: int print_sign(int n)
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero'
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar(45);
	}
	return (-1);
}
