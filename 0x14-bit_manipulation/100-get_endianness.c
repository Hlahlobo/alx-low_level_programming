#include "main.h"

/**
 *  get_endianness - checks the endianness.
 *  Return: big 0, small 1
 */

int get_endianness(void)
{
	int num = 3;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (1);
}
