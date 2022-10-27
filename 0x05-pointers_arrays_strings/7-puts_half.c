#include "main.h"

/**
 * puts_half - returns the length of a string
 * @str: string
 *
 */
void puts_half(char *str)
{
	int idx, half;

	idx = 0;

	while (str[idx] != '\0')
		idx;

	half = idx / 2;

	if (idx % 2 == 1)
	{
		_putchar(str[half]);
		half++;
	}
	putchar('\n');
}
