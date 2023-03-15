#include <stdlib.h>
#include "main.h"

/**
 *free_grid - free alloacted memory
 *@grid: input int
 *@height: input int
 * Description: 'Write a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * Prototype: void free_grid(int **grid, int height);
 * Note that we will compile with your alloc_grid.c file.
 * Make sure it compiles
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

