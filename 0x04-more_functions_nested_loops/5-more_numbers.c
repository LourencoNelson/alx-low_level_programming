#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 4
 *
 * _putchar - prints to the screen
 */
void more_numbers(void)
{
	int i;
	int j;
	int n;
	int a;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				n = i;
			}
			else
			{
				a = i / 10;
				n = i % 10;
				_putchar(a + '0');
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
