#include "main.h"

/**
 * _abs - returns the absolute value
 * @n: number to be converted
 *
 * Return: the absolute number of n
 *
 */
int _abs(int n)
{
	int ret;

	if (n < 0)
	{
		ret = n * (-1);
	}
	else
	{
		ret = n;
	}
	return (ret);
}
