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
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
