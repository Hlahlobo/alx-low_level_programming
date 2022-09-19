#include "main.h"
#include <stdio.h>

/**
 *_puts - prints a string
 *@str: string parameter
 *Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
