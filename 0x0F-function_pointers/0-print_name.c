#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A function that prinsts a name
 * @name: name
 * @f: pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
