#include <stdio.h>
#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed
 * @s: address to memory block
 * @b: char to be used
 * @n: 
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1]  = b;
		n--;
	}
	return (s);
}
