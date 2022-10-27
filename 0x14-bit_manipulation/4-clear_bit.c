#include "main.h"

/**
 * clear_bit - sets the nth bit of a numb
 * @n: number
 * @index: index of the bit
 *
 * Return: the bit at the position
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	return (*n = *n &~(1 << index));
}
