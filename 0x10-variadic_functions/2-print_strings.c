#include "variadic_functions.h"

/**
 *  print_strings - prints a variable number of args
 * @separator: separator
 * @n: number of args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str = NULL;
	va_list args;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (i == (n - 1))
			break;

		if (separator != NULL)
		{
			if (str == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", str, separator);
		}
		else
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
	}
	va_end(args);

	if (str == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", str);
}
