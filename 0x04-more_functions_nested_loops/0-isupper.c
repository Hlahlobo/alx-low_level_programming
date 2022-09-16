#include "main.h"

/**
*_isupper - checks if the charecter is upper or not
*@c: charecter to be tested
*Return: 1 when if higher, othewise 0
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
