#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n time table
 * @n: argument
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int num;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				num = i * j;

				if (num < 10)
				{
					if (j != 0)
						printf("   %d", num);
					else
						printf("%d", num);
				}
				else if (num < 100)
				{
					if (j != 0)
						printf("  %d", num);
					else
						printf("%d", num);
				}
				else
				{
					if (j != 0)
						printf(" %d", num);
					else
						printf("%d", num);
				}
				if (j != n)
					printf(",");
			}
			printf("\n");
		}
	}
}
