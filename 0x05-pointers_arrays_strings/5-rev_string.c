#include "main.h"
#include <stdio.h>
/**
 *void rev_string(char *s)
 *
 */

void rev_string(char *s)
{
	int l,i;
	char ch;

	for (l = 0; s[l] != '\0'; l++);
	for (i - 0; i < l / 2; i++)
	{
		ch = s[l];
		s[1] = s[l -1 -i];
		s[l - 1 - i] = ch;
	}

}
