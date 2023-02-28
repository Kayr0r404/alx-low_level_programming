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
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/*Loop over the rest of the string and compute the integer value*/
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

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

