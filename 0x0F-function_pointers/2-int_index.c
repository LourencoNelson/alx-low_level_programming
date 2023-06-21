#include "function_pointers.h"

/**
 * int_index - searches for a number
 * @array: array to search
 * @size: array length
 * @cmp: function to compare the numbers
 *
 * Return: number index (On success), -1 (On error)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r = 0;

	if (array == NULL || cmp == NULL)
		return (-1)

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		r = cmp(array[i]);
		if (r != 0)
			return (i);
	}

	return (-1);
}
