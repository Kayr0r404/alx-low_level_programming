#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isBinary(char *b);
int exponent(int base, int pow);

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 * Prototype: unsigned int binary_to_uint(const char *b);
 * @b: where b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 0; /*count bits*/
	int len = strlen(b) - 1;
	size_t num = 0; /* converted binary*/

	/* if b is not binary rerun 0*/
	if (!isBinary(strdup(b)) || !b)
		return (0);

	while (len >= 0)
	{
		if (b[len] == '1')
			num += exponent(2, count);
		count++;
		len--;
	}
	return (num);
}

/**
 * isBinary - double check if passed char is baniry
 * @b: input char
 * Return: true if b is binary otherwise false
 */

bool isBinary(char *b)
{
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (false);
		b++;
	}

	return (true);
}

/**
 * exponent - find
 * @base: base
 * @pow: power
 * Return: base to the power of power
 */
int exponent(int base, int pow)
{
	if (pow == 0)
		return (1);
	return (base * exponent(base, pow - 1));
}
