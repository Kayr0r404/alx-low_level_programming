#include "main.h"
#include <stdio.h>
int strLen(char *str);
/**
 *_strstr - Entry point
 *@haystack: pointer 1
 *@needle: pointer 2
 * Description: 'Write a function that locates a substring.
 * Prototype: char *_strstr(char *haystack, char *needle);
 * The _strstr() function finds the first occurrence of the substring
 * needle in the string haystack.
 * The terminating null bytes (\0) are not compared'
 * Return: 'a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.'
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, counter = 0;

	if (strLen(needle) != 0)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			int num = i;

			if (haystack[i] == needle[0])
			{
				for (j = 0; needle[j] != '\0'; j++)
				{
					if (needle[j] == haystack[i])
						i++;
					else
						break;
				}
			}

			i = num;

			if (j == strLen(needle))
				break;
		}

		if (j == strLen(needle))
		{
			while (counter <= i - 1)
			{
				counter++;
				haystack++;
			}
			return (haystack);
		}
	}
	return (NULL);
}

/**
 * strLen - string length
 * @str: string passed
 * Description: 'countsnumber of characters in a string
 * Return: number of characters in a string
 */

int strLen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
