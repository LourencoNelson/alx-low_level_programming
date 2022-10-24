#include "dog.h"

/**
 * new_dog - creates a new dog 
 * @name: dog'sname
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: dog (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	dog.name = name;
	dog.age = age;
	dog.owner = owner;

	return (dog);
}
