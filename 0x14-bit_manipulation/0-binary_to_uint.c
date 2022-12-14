#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: number
 *
 * Return: unisgned int numb
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c;
	unsigned int len;

	len = strlen(b);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
			i += k;
		k *= 2;
	}
	return (i);
}
