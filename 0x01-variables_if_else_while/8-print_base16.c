#include <stdio.h>
/**
 * main - A program toprint Hexadecimals
 *
 * Description:It dispalys 0-9 then A-Z
 *
 * Return: 0
 */
int main(void)
{
	char cn;

	for (cn = '0'; cn <= 9; cn++)
	{
		putchar(cn);
	}
	for (cn = 'A'; cn <= 'Z'; cn++)
	{
		putchar(cn);
	}
	putchar('\n');
	return (0);
}
