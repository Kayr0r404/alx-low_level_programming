#include "main.h"

/**
 *factorial - entry point
 *@n: input integer
 * Description: 'Write a function that returns the factorial of a given number.
 * Prototype: int factorial(int n);
 * If n is lower than 0, the function should return -1 to indicate an error
 * Factorial of 0 is 1'
 * Return: '1 if n is 0 and if less than 0 -1 is returned,
 * else factorial of n'
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
