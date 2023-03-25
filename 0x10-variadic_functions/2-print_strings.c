#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char*);

		if (separator == NULL)
		{
			if (str == NULL)
				printf("nil");
			else
				printf("%s", str);
		}
		else
		{
			if (i == 0)
			{
				if (str == NULL)
					printf("nil");
				else
					printf("%s", str);
			}
			else
			{
				if (str == NULL)
					printf("%s%s", separator, "nil");
				else
					printf("%s%s", separator, str);
			}
		}
	}

	printf("\n");

	va_end(args);
}
