#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * _putchar - prints the line to the screen
 *
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
}