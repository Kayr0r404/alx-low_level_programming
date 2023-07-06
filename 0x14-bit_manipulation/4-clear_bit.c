#include "main.h"

/**
 * clear_bit - Write a function that sets the value
 * of a bit to 0 at a given index.
 * Prototype: int clear_bit(unsigned long int *n, unsigned int index);
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: input int
 * Return: 1 if it worked, or -1 if an error occurred
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if the index is valid.*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask with the bit at the given index set to 0.*/
	mask = ~(1 << index);

	/* Clear the bit at the given index in the number.*/
	*n &= mask;

	/* Return 1 if it worked, or -1 if an error occurred.*/
	return (1);
}
