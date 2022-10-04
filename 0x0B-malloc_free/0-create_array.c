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
	char array[size];

	array[0] = c;


	if (size == NULL)
	{
		return (0);
	}
	else
	{
		return (array);

	}
}
