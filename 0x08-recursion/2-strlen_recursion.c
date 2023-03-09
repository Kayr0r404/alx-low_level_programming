#include "main.h"

/**
 *_strlen_recuirsion - recursuion function
 *@s: String passed
 * Description: 'Write a function that returns the length of a string.
 * Prototype: int _strlen_recursion(char *s);'
 *Return: number of chars in a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return 1 + _strlen_recursion(s + 1);
}
