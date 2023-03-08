#include "main.h"
unsigned int _strlen(char *s);

/**
 *_strspn - entry
 *@s: String
 *@accept: String
 * Description : 'Write a function that gets the length
 * of a prefix substring.
 * Prototype: unsigned int _strspn(char *s, char *accept);'
 * Return: 'the number of bytes in the initial segment
 * of s which consist only of bytes from accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len_s = 0;
	unsigned int len_accept = 0;

	len_s = _strlen(s);
	len_accept = _strlen(accept);

	for (i = 0; i < len_s; i++)
	{
		for (j = 0; j < len_accept; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (j == len_accept)
			break;
	}
	return (i);
}

/**
 * _strlen - entry
 * @s: String
 * Description: length of as string
 * Return: number of chars in string
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

