#include <stdio.h>
#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes used
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
