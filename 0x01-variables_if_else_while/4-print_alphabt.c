#include <stdio.h>

/**
 * main - i sometimes suffer from insomnia
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter == 'q' || letter == 'e')
	{
	continue;  /* skip q and e */
	}
	putchar(letter);
	}
	putchar('\n');

	return (0);
}
