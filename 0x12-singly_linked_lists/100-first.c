#include <stdio.h>

void _attribute_((constructor)) hare(void);

/**
 * hare - print a string
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,"
			"\nI bore my house upon my back!\n");
}
