#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees up 'e mem space of 2d grid
 * @grid: double pointer 2d grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
