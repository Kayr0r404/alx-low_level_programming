#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: 'Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alph;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (alph = 97; alph <= 122; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
