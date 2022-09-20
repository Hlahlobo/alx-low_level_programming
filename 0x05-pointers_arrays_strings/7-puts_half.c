#include "main.h"
/**
 * print_array -  a function that prints n elements
 * @str: string 
 * @l: parameter
 * @n: anathor parameter
 * Return: nothing
 */

void puts_half(char *str)
{
	int l;

	for (l = 0; str[1] != '\0'; l++)
	{
		if (l % 2 == 0)
		{
			for (n = 1 / 2; str[n] != '\0'; n++)
				_putchar(str[n]);
		}
		else
		{
			for (n = ((l - 1) / 2) + 1; str[n] != '\0'; n++)
				_putchar(str[n]);
		}
		_putchar('\n');
	}
}
