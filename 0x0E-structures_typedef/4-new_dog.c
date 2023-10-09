#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of the given string
 * @s: is the string passed
 * Return: length
 */

int _strlen(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}


/**
 * _strcpy - copies string to another variable
 * @dest: destination of string
 * @src: source of string
 * Return: the pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (*(src + i) != '\0')
		i++;

	j = 0;
	while (j <= i)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of the new dog
 * @age: of the new dog
 * @owner: of the new dog
 * Return: the new created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	unsigned int nl, ol;

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	nl = _strlen(name);
	ol = _strlen(owner);

	dg->name = malloc(sizeof(char) * (nl + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(sizeof(char) * (ol + 1));
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}

	_strcpy(dg->name, name);
	_strcpy(dg->owner, owner);
	dg->age = age;
	return (dg);
}
