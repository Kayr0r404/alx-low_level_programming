#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - Entry point
 *@a: sguare array
 *@size: the size of the array
 *Description: 'Write a function that prints
 *the sum of the two diagonals of a square matrix of integers.
 *Prototype: void print_diagsums(int *a, int size)'
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int rightDiag = 0;
	int leftDiag = 0;

	/*summing the entries on both the left and right diagobal*/
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			/*summing the entries on the right diagonal*/
			if (i == j)
				/*rightDiag += a[i][j];*/
				rightDiag += *(a + i * size + j);

			/*summing the elements on the left diagonal*/
			else if (i + j == size - 1)
				leftDiag += *(a + i * size + j);

			/*consider when j == i == size -1*/
			if (size % 2 != 0)
			{
				if (i == size / 2 && j == size / 2)
					leftDiag += *(a + i * size + j);
			}
		}
	}

	/*printing the diagonal sums*/
	printf("%d, %d\n", rightDiag, leftDiag);
}
