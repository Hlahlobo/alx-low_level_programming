#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: String that will append
 * @src: String too be concentrated
 *
 * Return: returns pointer @de
 */

char *_strcat(char *dest, char *src)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
