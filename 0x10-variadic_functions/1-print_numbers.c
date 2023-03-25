#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);

	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		if (separator == NULL)
			printf("%d", x);
		else
		{
			if (i == 0)
				printf("%d", x);
			else
				printf("%s%d", separator, x);
		}
	}
	printf("\n");

	va_end(args);
}
