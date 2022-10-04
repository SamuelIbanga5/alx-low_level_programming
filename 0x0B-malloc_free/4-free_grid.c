#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function that frees a 2 dimensional grid previously
 * created by alloc_grid function
 * @grid: Grid array to free.
 * @height: Number of items in initial array.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		;
	}
	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
