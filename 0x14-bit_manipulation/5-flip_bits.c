#include "main.h"

/**
 * flip_bits - function that Return: the number of bits
 * you would need to flip to get from one number to another.
 * Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
 * @n: input int
 * @m: input int
 * Return: number of bits needed to flip from one to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Get the xor of the two numbers.*/
	unsigned long int xor = n ^ m;

	/* Count the number of set bits in the xor.*/
	unsigned int count = 0;

	while (xor)
	{
		if (xor & 1)
			count++;
		xor >>= 1;
	}

	/* Return the count.*/
	return (count);
}

