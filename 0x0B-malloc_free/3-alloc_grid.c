#include "main.h"

/**
 * alloc_grid - Afunction that allocates space
 *@width: parameter 1
 *@height: parameter 2
 *
 *
 *
 *Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid[i]);
}
