#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @index: The index
 * @n: The number
 * Return: 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
