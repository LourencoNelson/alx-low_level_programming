#include "main.h"

/**
 * get_bit - gets the nth bit of a numb
 * @n: number
 * @index: index of the bit
 *
 * Return: the bit at the position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((int)(n >> index) & 1);
}
