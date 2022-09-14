#include "main.h"
/**
 * print_sign - a function that prints the sign of a number.
 *
 * @n: is the in that will be used for function argument
 * Return: 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
