#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes the variable elements of type struct dog
 * @d: a pointer to the variable of type d
 * @name: of the variable d
 * @age: of the variable d
 * @owner: of the variable d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		exit(98);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
