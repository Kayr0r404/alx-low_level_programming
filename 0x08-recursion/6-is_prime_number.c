#include "main.h"

/**
 *is_divisible - finds if number is prime
 *@n: input integer
 *@divisor: input inetger
 * Description: 'check if n is divisible any other integer'
 * Return: o if base case reached otherwise 1
 */

int is_divisible(int n, int divisor)
{
	/* Base case: reached smallest divisor*/
	if (divisor == 1)
	{
		/* Number is not divisible by any number less than itself*/
		return (0);
	}
	/* Base case: found a divisor other than 1 and itself*/
	else if (n % divisor == 0)
	{
		return (1);  /* Number is not prime*/
	}

	/*Recursive call with next smaller divisor*/
	return (is_divisible(n, divisor - 1));
}

/**
 *is_prime_number - finds if number is prime
 *@n: input integer
 * Description: 'Write a function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * Prototype: int is_prime_number(int n);'
 * Return: 1 if n is prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)  /*Special case: 1 and below are not prime*/
		return (0);
	/*Check divisibility by all numbers less than itself*/
	return (!is_divisible(n, n - 1));
}
