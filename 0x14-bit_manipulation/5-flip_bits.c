#include "main.h"
/**
 * flip_bits - count of flipped number
 * @n: first argument
 * @m: second argument
 *
 * Return: count
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = excl >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
