#include "variadic_functions.h"

/**
 * print_numbers - prints a variable number of args
 * @separator: separator
 * @n: number of args
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num = 0;
	va_list args;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		if ( i == (n - 1))
			break;

		if (separator != NULL)
			printf("%d%s", num, separator);
		else
			printf("%d", num);
	}
	va_end(args);
	
	printf("%d\n", num);
}
