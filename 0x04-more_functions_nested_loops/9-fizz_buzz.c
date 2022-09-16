#include <stdio.h>

/**
 *main - a function to ptint fizz bizz
 *
 *Return - nothing
 */

int main(void)
{
	int num;

	num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0)
		{
			if (num != 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz");
			}
		}


	}
}

