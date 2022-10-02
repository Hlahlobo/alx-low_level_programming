#include <stdio.h>

/**
 * main - Function that prints out the name of a program
 * @argc: Argument count
 * @argv: Argument strings
 *
 * Return: Always 0
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
