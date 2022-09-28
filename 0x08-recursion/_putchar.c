#include "main.h"
#include <stdio.h>

/**
 * _putchar - Writes chareters c to out
 * @c: the charecter to print
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c,1));
}
