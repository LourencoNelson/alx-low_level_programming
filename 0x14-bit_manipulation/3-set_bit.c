#include "main.h"

/**
 * set_bit - sets the nth bit of a numb
 * @n: number
 * @index: index of the bit
 *
 * Return: the bit at the position
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index - 1);

	if (*n & (1 << (index - 1)))
		return (1);

	return (-1);
}
