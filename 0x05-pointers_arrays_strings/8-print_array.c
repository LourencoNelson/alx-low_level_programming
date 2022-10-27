#include "main.h"
#include "stdio.h"

/**
 * print_array - prints an array
 * @a: string
 * @n: number of elements
 *
 */
void print_array(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			_putchar(",");
			_putchar(" ");
		}
	}
	_putchar("\n");
}
