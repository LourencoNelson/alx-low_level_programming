#include "main.h"

/**
 * create_array - creates an array of char using malloc
 * @size: size of the array
 * @c: elements of the array
 *
 * Return: pointer to the array, or NULL if it fails
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(array + i) = c;

	return (array);
}
