#include "main.h"
/**
 * free_grid  - free
 * @grid: int
 * @height: int
 */
void free_grid(int **grid, int height)
{
int i;

if (height <= 0)
	return;

if (grid == NULL)
	return;

for (i = 0; i < height; i++)
{
	free(grid[i]);
}

free(grid);
}
