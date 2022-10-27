#include "dog.h"

/**
 * new_dog - initialize a strcuture
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d, *n, *o;

	strcpy(n, name);
	strcpy(o, owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = n;
	(*d).age = age;
	d->owner = o;

	return (d);
}
