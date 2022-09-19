#include "main.h"

/**
 * swap_int - Afuntion to swap 2 numbers
 * @a: integer one
 * @b: integer two
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
