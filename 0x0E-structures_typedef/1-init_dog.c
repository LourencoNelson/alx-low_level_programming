#include "main.h"

/**
 * init_dog - initialize a strcuture
 * @d: pointer to the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	my_dog.name = d->name;
	my_dog.age = d->age;
	my_dog.owner = d->owner;
}
