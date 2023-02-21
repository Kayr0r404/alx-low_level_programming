#include "main.h"
/**
 * _islower - Entry point
 * Description: 'Write a function that checks for lowercase character'
 * @c: 'ASCII for c'
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
