#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: array sizer
 */
void reverse_array(int *a, int n)
{
	int i;
	int aux[n];

	for (i = 0; i < n; i++)
		aux[i] = a[i];

	i = 0;

	while (i < n)
	{
		a + i = aux[n - 1];
		n--;
		i++;
	}
}
