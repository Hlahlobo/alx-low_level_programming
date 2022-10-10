#include "dog.h"
#include <stdio.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Find string lengh
 * @str: string to be measured
 *
 * Return: Lengh of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string
 * @dest: buffer
 * @src: source string
 *
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: The new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog *doggo;

	if (age || name || owner == NULL)
		return (NULL);
	doggo = malloc(sizeof(dog_t));
	if (doggo->name == NULL)
		return (NULL);

	doggo->name = mallog(sizeof(char) * (_strlen(owner) + 1));

	if (doggo->name == NULL)
	{
		free(doggo->name);
		free(doggo);

		return (NULL);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}
