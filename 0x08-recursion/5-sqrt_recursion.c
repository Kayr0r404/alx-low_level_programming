#include "main.h"

/**
 *calculate_sqrt - Square root function
 *@n: integer
 *@i: input integer
 * Description 'Write a function that returns the natural
 * square root of a number.
 * Prototype: int _sqrt_recursion(int n);
 * If n does not have a natural square root, the function should return -1'
 * Return: square root of a function, if n is negative -1 is returned
 */

int calculate_sqrt(int n, int i)
{
	/* If i^2 equals n, we found the square root*/
	if (i * i == n)
		return (i);
	/* Negative numbers do not have a natural square root*/
	else if (i * i > n)
		return (-1);
	/* Otherwise, increment i and call the function recursively*/
	return (calculate_sqrt(n, i + 1));
}

/**
*_sqrt_recursion - Square root function
*@n: integer
* Description 'Write a function that returns the natural
* square root of a number.
* Prototype: int _sqrt_recursion(int n);
* If n does not have a natural square root, the function should return -1'
* Return: square root of a function, if n is negative -1 is returned
*/

int _sqrt_recursion(int n)
{
	/* Negative numbers do not have a natural square root*/
	if (n < 0)
		return (-1);

	/* Negative numbers do not have a natural square root*/
	else if (n == 0 || n == 1)
		return (n);
	/* Call the helper function to calculate the square root*/
	return (calculate_sqrt(n, 1));
}

