#include "main.h"

/**
 *times_table - Prints the 9 times table
 *Return: no return
 */
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			mult = j * i;
			_putchar(44);
			_putchar(32);
			if (mult <= 9)
			{
				_putchar(32);
				_putchar(mult + 48);
			}
			else
			{
				_putchar((mult / 10) + 48);
				_putchar((mult % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
