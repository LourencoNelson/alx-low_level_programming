#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: width of the line
 *
 * _putchar - prints the line to the screen
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
