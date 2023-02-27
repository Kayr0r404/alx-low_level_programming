#include "main.h"
#include <stdio.h>
/**
*_strlen - Entry point
*@s: 'String passed'
*Description: 'Write a function that returns the length of a string.
*Prototype: int _strlen(char *s)'
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

