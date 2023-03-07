#include "main.h"

/**
 *print_chessboard -entry
 *@a: 2D array
 * Description: Write a function that prints the chessboard.
 * Prototype: void print_chessboard(char (*a)[8]);'
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
