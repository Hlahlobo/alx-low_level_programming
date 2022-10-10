#include <unistd.h>

/**
 * _putchar - Afunction that charecter c to stout
 * @c: charecter to print
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
