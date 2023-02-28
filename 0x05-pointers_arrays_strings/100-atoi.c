#include "main.h"
/**
*_atoi - entry point
*@s: 'string'
*Return: 0 for success
*/

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/*Check for sign at the beginning of the string*/
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	/*Loop over the rest of the string and compute the integer value*/
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';
			s++;
			result = result * 10 + digit;
		}
		else
		{
		/*If there is a non-digit character in the string, return 0*/
		return (0);
		}
		i++;
	}
	/*Apply the sign to the result and return it*/
	return (sign * result);
}

