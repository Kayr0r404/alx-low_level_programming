#include "main.h"
#include <stdio.h>

/**
*_strncpy - Entry point
*@dest: 'destination String'
*@src: 'Sorce string'
*@n: 'number of string to be copied into dest from src'
*Description: 'Write a function that copies a string.
*Prototype: char *_strncpy(char *dest, char *src, int n);
*Your function should work exactly like strncpy'
*Return: Always the destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
