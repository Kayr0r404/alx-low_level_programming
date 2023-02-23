#include "main.h"
/**
 *_isdigit - 'checks if the passed artgument is a digit between 0 -9'
 *@num: 'any digit'
 *Description: 'Write a function that checks for a digit (0 through 9).
*Prototype: int _isdigit(int c)
 *Returns 1 if c is a digit
 *Returns 0 otherwise'
 *Return: Always 0
 */
int _isdigit(int num)
{
	if (num <= 57 && num >= 48)
		return (1);
	return (0);
}
