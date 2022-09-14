#include "main.h"

/**
 * times_table - prints the times table of 9
 */
void times_table(void)
{
	int i;
	int j;
	int num;
	int digit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;

			while (num > 0)
			{
				digit = num % 10;
				num = num / 10;
				_putchar(digit + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
