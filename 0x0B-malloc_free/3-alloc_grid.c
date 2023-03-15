#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid - entry
 *@width: num columns
 *@height: num of rows
 * Description: 'Write a function that returns a pointer
 * to a 2 dimensional array of integers.
 * Prototype: int **alloc_grid(int width, int height);
 * Each element of the grid should be initialized to 0'
 * Return: 'The function should return NULL on failure
 * If width or height is 0 or negative, return NULL'
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* Free previously allocated rows */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		/* Initialize row elements to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

