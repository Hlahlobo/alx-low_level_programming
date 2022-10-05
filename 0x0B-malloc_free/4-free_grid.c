#include "main.h"

/**
 * free_grid - Function for free grid
 *@height: parametwr
 *
 *@grid: grid
 *
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

	free(grid);
}
