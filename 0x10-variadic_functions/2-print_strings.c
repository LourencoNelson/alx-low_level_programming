#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: strings separator
 * @n: number of args
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < (int) n; i++)
	{
		str = va_arg(ap, char*);
		if (separator == NULL)
		{
			if (str == NULL)
				printf("(nil)");

			else
				printf("%s", str);
		}
		else
		{
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
				if (i != (int) n - 1)
					printf("%s", separator);
			}
		}
	}
	printf("\n");
}
