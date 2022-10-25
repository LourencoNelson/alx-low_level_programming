#include "function_pointers.h"

/**
 * array_iterator - iterate an array
 * @array: the array
 * @size: array's size
 * @action: callback
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < (unsigned int) size; i++)
	{
		(*action)(array[i]);
	}
}
