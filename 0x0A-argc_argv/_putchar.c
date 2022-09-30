#include <stdio.h>

/**
 * _putchar - wrute the charecter c to stout
 * @c: The chareter to print
 *
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
