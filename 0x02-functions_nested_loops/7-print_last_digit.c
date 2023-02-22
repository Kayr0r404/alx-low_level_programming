#include "main.h"
/**
 * print_last_digit - Entry point
 * @c: 'any integer'
 * Description: 'Write a function that prints the last digit of a number.
 * Returns the value of the last digit'
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	int lastDigit = c % 10;
	if (c < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar(lastDigit + 48);
	return (lastDigit);
}
