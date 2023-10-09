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
	char *tn, *to;
	unsigned int nl, ol;
	

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	for (nl = 0; name[nl] != '\0'; nl++)
	for (ol = 0; owner[ol] != '\0'; ol++)

	tn = malloc(sizeof(char) * (nl + 1));
	if (tn == NULL)
	{
		free(dg);
		return (NULL);
	}
	to = malloc(sizeof(char) * (ol + 1));
	if (to == NULL)
	{
		free(dg);
		free(tn);
		return (NULL);
	}
	tn = name;
	to = owner;

	dg->name = tn;
	dg->owner = to;
	dg->age = age;
	return (dg);
}
