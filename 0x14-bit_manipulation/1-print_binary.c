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
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
			printf("1");
		else
			printf("0");
		mask >>= 1;
	}
}
