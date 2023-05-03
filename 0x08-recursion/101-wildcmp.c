#include "main.h"
#define nil 0
/**
 * wildcmp - a function that compares two strings and
 * @s1: input str
 * @s2: input str
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0.
 * Prototype: int wildcmp(char *s1, char *s2);
 * s2 can contain the special character *.
 * The special char * can replace any string (including an empty string)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));

	else
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == '\0')
		return (*s2 == '\0');

	if (*s1 != *s2)
		return (nil);

	return (wildcmp(s1 + 1, s2 + 1));
}
