#include "function_ponters.h"
#include <stdio.h>

/**
 * int_index - Indexing function
 * @array : Array to search in
 * @size: Size of the array
 * @cmp: pointer to the computing function
 *
 *
 * Return: Index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
