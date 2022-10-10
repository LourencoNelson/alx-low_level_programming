#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure for dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: age of the dog's owner
 *
 * Description: The structure creates a type of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
