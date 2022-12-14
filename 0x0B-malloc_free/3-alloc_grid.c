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

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

if (width <= 0 || height <= 0)
{
	return (NULL);
}

grid = malloc(sizeof(int *) * height);

if (grid == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	grid[i] = malloc(sizeof(int) * width);

	if (grid == NULL)
	{
		for (i = i - 1; i >= 0; i--)
		{
			free(grid[i]);
		}
		free(grid);
		return (NULL);
	}
}

for (i = 0; j < width; j++)
grid[i][j] = 0;
return (grid);
}
