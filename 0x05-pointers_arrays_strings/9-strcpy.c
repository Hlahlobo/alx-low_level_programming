#include "main.h"

/**
 * _strcpy -  function that copies the string pointed to by src
 *@dest: destination
 *@scr: source
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(scr + inc) != '\0')
	{
		*(dest + inc) = *(scr + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
