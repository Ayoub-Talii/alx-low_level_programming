#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid created by alloc_grid
 * @grid: pointer to the grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}
