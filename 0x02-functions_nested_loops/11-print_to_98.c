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

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	else
	{
		for (i = 0; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	printf("\n");
}
