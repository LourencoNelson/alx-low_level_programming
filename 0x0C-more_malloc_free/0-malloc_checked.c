#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b:number of bytes
 *
 * Return: pointer (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer	= malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
