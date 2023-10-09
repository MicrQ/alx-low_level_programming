#ifndef MY_HEADER_H
#define MY_HEADER_H

/**
 * struct dog - my first structure project
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: of the dog
 * Description: the dog structure has 3 elements
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
