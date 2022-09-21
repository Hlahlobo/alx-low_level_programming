#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: parameter
 * Return: returns
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
