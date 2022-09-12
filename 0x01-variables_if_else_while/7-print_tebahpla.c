#include <stdio.h>
/**
 * main - A programme that displays ztoa
 *
 * Discription: Displays all alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
