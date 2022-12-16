#include "main.h"
#include <string.h>

/**
 * _strncpy - Write a function that copies a string.
 * @dest: paramenter
 * @src: parameter2
 * @n: parameter3
 * Return: Nothing
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
