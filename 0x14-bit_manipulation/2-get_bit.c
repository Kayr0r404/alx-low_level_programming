#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int getBinary(unsigned long int n);*/
/**
 * get_bit - function that returns the value of a bit at a given index.
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * @num: input decimal
 * @i: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int num, unsigned int i)
{
	/* Check if the index is valid */
	if (i >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Shift the number to the right by i bits */
	num >>= i;

	/* Get the least significant bit of the shifted number */
	return (num & 1);
}

