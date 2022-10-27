#include "main.h"

/**
 * countSetBits - count set bits
 * @n: bits
 *
 * Return: set bits
 */
unsigned int countSetBits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

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
	return (countSetBits(n ^ m));
}
