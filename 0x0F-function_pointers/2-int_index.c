#include "function_pointers.h"

/**
 * int_index - searches for an item
 * @array: the array
 * @size: array's size
 * @cmp: callback
 *
 * Return: index of the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < (int) size; i++)
	{
		if ((*cmp)(array[i]) == 0)
			return (i);
	}
	return (-1);
}
