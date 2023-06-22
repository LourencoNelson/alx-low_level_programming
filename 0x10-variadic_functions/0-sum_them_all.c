#include "variadic_functions.h"

/**
 * sum_them_all - sums a variable number of args
 * @n: number of args
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int i, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	return (sum);
}
