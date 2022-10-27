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
	unsigned int i;
	void *pointer;
	char *p;

	pointer = (void *) malloc(nmemb * size);

	if (pointer == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		p = pointer;

		for (i = 0; i < nmemb; i++)
		{
			*p = 0;
			p++;
		}

		return (pointer);
	}
}
