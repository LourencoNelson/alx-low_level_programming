#ifndef DOG_H
#define DOG_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a structure for dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: age of the dog's owner
 *
 * Description: The structure creates a type of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * dog_t - new dog type
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
#endif
