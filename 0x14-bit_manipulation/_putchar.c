#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes charecters to c
 * @c: Charecter to print
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
