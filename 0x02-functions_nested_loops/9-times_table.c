#include "main.h"

/**
 * times_table - prints the times table of 9
 */
void times_table(void)
{
	int i;
	int j;
	int num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;

			if (num < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(num + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				
			}
			if ( j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
