#include "main.h"

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: first element
 *
 * Return: array (Success)
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	array = (char *) malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			*array[i] = c;

		return (array);
	}
}
