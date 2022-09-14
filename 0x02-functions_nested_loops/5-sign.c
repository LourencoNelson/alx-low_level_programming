#include "main.h"

/**
 * print_sign - checks positive and negative numbers
 *
 * n: int number
 *
 * Return: 1 is positive, 0 is zero and -1 if negative
 */

int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		ret = -1;
	}
	else
	{
		_putchar('0');
		ret = 0;
	}
	return (ret);
}
