#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	int result = 1;

	if (n == 0 || n == 1)
		return (n);

	while (result < n)
	{
		i++;
		result =  i * i;
	}

	if (result == n)
		return (i);
	else
		return (-1);
}
