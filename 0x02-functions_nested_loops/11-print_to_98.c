#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints number starting from n to 98
 *
 * @n: input number, starting point
 *
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		i = n;
		while (i >= 98)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
			i--;
		}
	}
	else
	{
		i = n;
		while (i <= 98)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
			i++;
		}
	}
	printf("\n");
}
