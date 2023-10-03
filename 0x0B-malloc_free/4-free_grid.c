#include <stdlib.h>

/**
 * free_grid - frees 2D array memory
 * @grid: 2D array passed
 * @height: the height(column) of the 2D array.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
