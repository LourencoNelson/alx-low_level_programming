#include "main.h"

/**
 * print_line - prints lines
 * @n: width of the line
 *
 * _putchar - prints the line to the screen
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
