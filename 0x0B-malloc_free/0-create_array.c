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
	char *array;

	array[0] = c;


	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		return (array);

	}
}
