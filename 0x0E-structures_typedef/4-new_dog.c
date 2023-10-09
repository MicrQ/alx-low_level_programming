#include "dog.h"
#include <stdlib.h>

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

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	dg->name = name;
	dg->owner = owner;
	dg->age = age;
	return (dg);
}
