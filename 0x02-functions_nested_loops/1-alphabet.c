#include "main.h"
/**
 * main - Entry point
 * Description: 'Write a program that prints _putchar, followed by a new line'
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (1);
}

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
	_putchar(alph);
}
