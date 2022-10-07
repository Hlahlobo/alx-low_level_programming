#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * array_range - function to check range
 * @min - minimum value
 * @max: maximum value
 * 
 *
 *
 * Return: range pointer
 */

int *array_range(int min, int max)
{
	int range;
	int i;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(i + p) = min + i;
	}

	return (p);
}
