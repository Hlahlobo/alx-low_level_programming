#include "main.h"

/**
 *print_rev - Afunction to preview string
 *@s - string reverse
 *return -nothing
 */

 void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	puchar(10);
}
