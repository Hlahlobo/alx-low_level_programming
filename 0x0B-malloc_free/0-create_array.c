#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create array
 * @size: parameter
 * @c: charecter
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
