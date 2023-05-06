#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index.
 * Prototype: int set_bit(unsigned long int *n, unsigned int index);
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: input int
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);


	mask = 1 << index;

	*n |= mask;

	return (1);
}
