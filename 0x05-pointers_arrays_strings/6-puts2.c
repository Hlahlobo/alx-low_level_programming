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
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
