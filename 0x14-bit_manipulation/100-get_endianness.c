#include "main.h"

/**
 * get_endianness - prints a binary number
 *
 * Return: 0 if big endian and 1 if little
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
