#include "main.h"

/**
 * _pow_recursion - returns the power of a given number to an given expoent
 * @x: number
 * @y: expoent
 *
 * Return: number power (on success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
