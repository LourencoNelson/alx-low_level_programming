#include "variadic_functions.h"
/**
 * print_all - prints all
 * @format: string formater
 */
void print_all(const char * const format, ...)
{
	int size strlen(format), j = 0, i, c, flag = 0;
	double f;
	char *s;
	va_list ap;

	va_start(ap, format);
	while (j < size)
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%i", i);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				flag = -1;
		}
		if (j != (int) size -1 && flag == 0)
			printf(", ");
		if (flag == -1)
			flag = 0;
		j++;
	}
	printf("\n");
	va_end(ap);
}
