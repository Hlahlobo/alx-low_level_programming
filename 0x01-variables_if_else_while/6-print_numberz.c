#include <stdio.h>
/**
 * main - A programme that prints bases
 *
 * Description - bases of single digits starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
