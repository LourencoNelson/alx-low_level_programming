#include "main.h"

/**
 * _calloc - allocates memory
 * @nmemb: number of elements
 * @size: number of bytes
 *
 * Return: pointer (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	pointer = malloc(nmemb * size);

	if (pointer == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		return (pointer);
	}
}
