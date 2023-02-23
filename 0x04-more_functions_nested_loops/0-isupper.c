#include "main.h"
/**
 * _isupper - checks if passed character is an upper character
 * @c: 'passed argument'
 * Description: 'Write a function that checks for uppercase character.
 * Prototype: int _isupper(int c)
 * Returns 1 if c is uppercase
 * Returns 0 otherwise'
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	char alpha;

	for (alpha = 65; alpha <= 90; alpha++)
	{
		if (c <= 90 && c >= 65)
			return (1);
	}
	return (0);
}
