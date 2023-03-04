#include "main.h"

/**
*print_number - entry
*@n: integer
*Description:Write a function that prints an integer.
*/

void print_number(int n)
{
	unsigned int num;

	if (n < 0) /* handle negative numbers */
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10 != 0) /* recursive case */
	{
		 print_number(num / 10);
	}

	_putchar((num % 10) + '0'); /* print the last digit */
}

