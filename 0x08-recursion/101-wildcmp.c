#include "main.h"

/**
 * wildcmp - a function that compares two strings and
 * @s1: input str
 * @s2: input str
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0.
 * s2 can contain the special character *.
 * The special char * can replace any string (including an empty string)
*/

int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are identical*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If s2 contains a * as the first character,*/
	/* we can try to match s1 with s2 starting from the next character*/
	if (*s2 == '*')
	{
		/* Skip the * */
		s2++;

		/* If s2 is empty, it can match any s1*/
		if (*s2 == '\0')
			return (1);

		/* Try to match s1 with the remaining s2*/
		for (; *s1 != '\0'; s1++)
		{
			if (wildcmp(s1, s2))
				return (1);
		}

	}
	else
	{
		/* If s2 does not contain a * as the first character,*/
		/* we need to compare the characters one by one*/
		if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}

