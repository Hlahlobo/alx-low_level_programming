#include "main.h"
/**
 * print_alphabet_x10 -a program to print alphabets 10 times
 *
 * Return 0
 */
void print_alphabet_x10(void)
{
	char c;
	char i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
}
