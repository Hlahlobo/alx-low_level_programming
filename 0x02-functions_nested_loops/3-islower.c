#include "main.h"
/**
 * _islower - a program that checks for lowercase character
 *
 * @c: Interger used 
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
