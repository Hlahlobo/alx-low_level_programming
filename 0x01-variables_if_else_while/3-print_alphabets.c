#include <stdio.h>
/**
 * main - print alphabets in lower then upper case
 *
 * Describing: using the main function
 * this program prints lower and UPPER cases
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

