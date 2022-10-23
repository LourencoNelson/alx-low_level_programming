#include "main.h"

/**
 * _factorial - returns thefactorial of a given number
 * @n: number
 *
 * Return: number factorial (on success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1)
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
