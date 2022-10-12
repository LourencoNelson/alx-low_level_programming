#include "function_pointers"

/**
 * array_iterator - iterate an array
 * @array: the array
 * @size: array's size
 * @action: callback
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array + i);
	}
}
