#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

int index = 0, dest_len = 0;

while (dest[index++])
	dest_len++;
for (index = 0; src[index] && index < n;)
	dest[dest_len++] = src[index];

return (dest);

}
