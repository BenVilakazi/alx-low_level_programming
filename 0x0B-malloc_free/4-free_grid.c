#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimentional grid previously
 * @grid: width of grid
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
