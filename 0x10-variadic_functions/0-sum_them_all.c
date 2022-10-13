#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its args
 * @n: number of args
 *
 * Return: sum of all args (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(ap, n);

		for (i = 0; i < (int) n; i++)
		{
			sum += va_arg(ap, int);
		}

		va_end(ap);
	}

	return (sum);
}
