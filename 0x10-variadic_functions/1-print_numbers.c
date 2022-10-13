#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: numbers separator
 * @n: number of args
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < (int) n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			printf("%d", va_arg(ap, int));
			if (i != (int) n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}
