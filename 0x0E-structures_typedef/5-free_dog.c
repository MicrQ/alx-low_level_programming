#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog_t type of variable dog
 * @d: a dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
