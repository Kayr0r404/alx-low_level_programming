#include "main.h"
#include <stdio.h>
/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: input digit
 * Prototype: void print_binary(unsigned long int n);
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}


