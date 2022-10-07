#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Afunction to check
 * @b: size of memory
 *
 * Return: Pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
