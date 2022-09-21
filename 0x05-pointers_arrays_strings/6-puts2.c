#include "main.h"
#include <stdio.h>

/**
 *_puts2 - prints a string
 *@str: string parameter
 *@i: integer parameter
 *Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
