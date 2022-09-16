#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * _putchar - prints the line to the screen
 *
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 10; j > i; j--)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
