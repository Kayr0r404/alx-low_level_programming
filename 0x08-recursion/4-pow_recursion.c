#include "main.h"

/**
 *_pow_recursion - power function
 *@x: base
 *@y: exponent
 * Description: 'Write a function that returns the value of x
 * raised to the power of y.
 * Prototype: int _pow_recursion(int x, int y);
 * If y is lower than 0, the function should return -1'
 * Return: x to the power of y, if y negative -1 is returned
 */

int _pow_recursion(int x, int y)
{
	if (x == 1)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
