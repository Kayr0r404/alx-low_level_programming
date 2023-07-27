#include "shell.h"

/**
*_strlen - Entry point
*@s: 'String passed'
*Description: 'Write a function that returns the length of a string.
*Prototype: int _strlen(char *s)'
*Return: 'the length of the string'
*/
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
*_strcpy - entry point
*@dest: 'string"
*@src: 'string
*Description: 'Prototype: char *_strcpy(char *dest, char *src);
*Write a function that copies the string pointed to by src,
*including the terminating null byte (\0), to the buffer pointed to by dest'
*Return: value the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
*_strcmp - entry
*@s1: first string
*@s2: second string
*Description: compare two strings, char by char.
*Return: ASCII difference
*/
int _strcmp(const char *s1, const char *s2)
{
	int i, asciiDiff;
	int maxi = max(_strlen(_strdup(s1)), _strlen(_strdup(s2)));

	for (i = 0; i < maxi; i++)
	{
		if (s1[i] != s2[i])
		{
			asciiDiff = (s1[i] - s2[i]);
			break;
		}
		else
			asciiDiff = (s1[i] - s2[i]);
	}
	return (asciiDiff);
}

/**
*max - maxumum function
*@a: integer
*@b: interger
*Description: find maximum number between two numbers
*Return: max number between a nad b
*/

int max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

/**
 * _strchr - The function takes a pointer to a constant
 * character array and an integer c as arguments.
 * It iterates through the input string str until it
 * reaches the null terminator ('\0'), checking each character.
 * @str: input string that we want to search.
 * @c: represents the character we are searching
 * for within the input string.
 * Return: If c is found in the input string str,
 * _strchr returns a pointer to the memory location
 * of the first occurrence of c in the string.
 * If c is not found in the input string str, returns NULL.
*/
char *_strchr(const char *str, int c)
{
	for (; *str != '\0'; str++)
	{
		if (*str == c)
		{
			/* Cast away the constness to return a non-const pointer*/
			return ((char *)str);
		}
	}

	/* If the character 'c' is not found, return NULL*/
	return (NULL);
}
