#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal
 *@n: for drawing
 * Return: Nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
