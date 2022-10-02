#include <stdio.h>
#include "main.h"

/**
 * main - A function that multiplies two numbers
 * @argc: Argument count
 * @argv: Argument array
 *
 * Return: 0 if false, 1 if true
 *
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
