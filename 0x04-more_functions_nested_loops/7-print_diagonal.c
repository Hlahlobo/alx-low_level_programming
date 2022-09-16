#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: argument
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int len; int space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar('_');
		}
		_putchar('\\');
		while (len == (n - 1))
		{
			continue;
		}
		_putchar('\n');

	}
	_putchar('\n');
}
