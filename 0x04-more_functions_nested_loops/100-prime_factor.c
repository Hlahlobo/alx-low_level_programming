#include <stdio.h>
#include "main.h"

/**
 * print_number - a function to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		printf(num / 10);
	}
	putchar(num % 10 + '0')

}
