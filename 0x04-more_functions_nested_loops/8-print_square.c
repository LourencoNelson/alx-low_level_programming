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

	for (i = 0; i < size; i++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
