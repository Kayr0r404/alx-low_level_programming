#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: 'Write a function that prints the alphabet,
 * in lowercase, followed by a new line'
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 97; alph <= 122; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
