#include "main.c"
/**
 * main - Entry point
 * Description: 'Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alph;

	for (int i = 0; i < 10; i++)
	{
		for (aplh = 97; alph <= 122; aplh++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
