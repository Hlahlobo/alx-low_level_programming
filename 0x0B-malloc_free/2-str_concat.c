#include "main.h"

/**
 * str_concat -  returned pointer should point to a newly allocated space
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Return string 1 + string 2
 *
 */
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int l = 0;
int k = 0;
char *s;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
l = i + j;
s = (char *)malloc(l * sizeof(char) + 1);
if (s == NULL)
return (NULL);

j = 0;

while (k < l)
{
	if (k < i)
	{
		s[k] = s1[k];
	}

	if (k >= j)
	{
		s[k] = s2[j];
		j++;
	}
	k++;
}
s[k] = '\0';
return (s);
}
