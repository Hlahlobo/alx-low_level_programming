#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers -  function that prints the numbe
 * from 0 to 9, followed by a ne
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		_putchar(n);
	}
	_putchar(10);
}
