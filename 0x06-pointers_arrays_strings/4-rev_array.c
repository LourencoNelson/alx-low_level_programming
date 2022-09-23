#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: array sizer
 */
void reverse_array(int *a, int n)
{
	int i;
	int size = n / 4;
	int aux[size];

	for (i = 0; i < size; i++)
		aux[i] = a[i];

	i = 0;

	while (i < size)
	{
		a + i = aux[size - 1];
		size--;
		i++;
	}
}
