#include "main.h"

/**
 * jack_bauer - prints every minute of a day
 *
 * _putchar - prints to the screen
 *
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (l = 48; l <= 57; i++)
				{
					if (i == 50 && j >= 52)
					{
						break;
					}
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
				}
			}
		}
	}
}
