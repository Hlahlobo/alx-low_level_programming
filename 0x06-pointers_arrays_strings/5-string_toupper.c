#include "main.h"

/**
 * string_toupper - Write a function that changes all lowercase letters
 * @str: string to be changed
 *
 * Return: address tp string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
