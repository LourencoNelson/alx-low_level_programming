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
	unsigned int num = *n;

	if ((1 << index | num))
		return (1);
	return (-1);
}
