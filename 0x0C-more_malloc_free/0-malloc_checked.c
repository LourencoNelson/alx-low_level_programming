#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b:number of bytes
 *
 * Return: pointer (Success) 
 */
void *malloc_checked(unsigned int b)
{
	void  *pointer = malloc(b);

	if (pointer != NULL)
	{
		return (pointer);
	}
	else
	{
		exit();
	}
}
