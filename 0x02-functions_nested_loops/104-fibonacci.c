#include <stdio.h>

/**
 * main - Write a program that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * The numbers should be separated by comma, followed by a space
 * Return: 0
*/


int main(void)
{
	int i, a = 1, b = 2;

	for (i = 1; i <= 98 ; i++)
	{
		int c = a + b;

		a = b;
		b = c;
		if (i != 98)
			printf("%d, ", c);
		else
			printf("%d\n", c);
	}

	return (0);
}
