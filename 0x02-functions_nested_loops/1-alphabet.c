#include "main.h"
#include <stdio.h>
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
		printf("%c", alph);
	}
	printf("\n");
}
