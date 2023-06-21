#include "function_pointers.h"

/**
 * array_iterator - iterates an array and prints its elements
 * @array: array to iterate
 * @size: array length
 * @action: function to print array elements
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
