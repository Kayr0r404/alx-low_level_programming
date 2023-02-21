#include "main.h"
/**
 * _isalpha - Entry point
 * @c: 'ASCII'
 * Description: 'Write a function that checks for alphabetic character.
 * Prototype: int _isalpha(int c)
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise'
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 94) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
