#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an array
 * @a: array
 * @n: an elementof array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[index] = a[index];
		a[index] = tmp;
	}
}
