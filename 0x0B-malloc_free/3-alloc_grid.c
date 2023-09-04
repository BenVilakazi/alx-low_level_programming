#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates grid.
 * @width: width of arr.
 * @height: height of arr.
 * Return: grid with freed spaces.
 */
int **alloc_grid(int width, int height)
{
	/*Declaring Variables */
	int **grid, x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height); /*malloc*/
	if (!grid)
		return (NULL);
	y = 0;
	while (y < height)
	{
		*(grid + y) = malloc(width * sizeof(int));
		if (!(*(grid + y)))
		{
			while (y--)
				free(*(grid + y));
			free(grid);
			return (NULL);
		}
		x = 0;
		while (x < width)
		{
			*(*(grid + y) + x) = 0;
			x++;
		}
		y++;
	}
	return (grid);
}
