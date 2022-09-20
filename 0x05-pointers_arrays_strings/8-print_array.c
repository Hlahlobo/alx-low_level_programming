#include "main.h"
#include <stdio.h>

/**
 *print_array - a function that prints n elements of an array of integers
 *@a: argument 1
 *@i: argument 2
 *@n: number of elements
 *Return: nothing
 */

void print_array(int *a, int n)
{

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
