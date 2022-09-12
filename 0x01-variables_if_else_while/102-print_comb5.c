i#include <stdio.h>

/**
 *main - Entry point
 *
 *putchar - prints to the screen
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; i <= 9; i++)
				{
					if (j != l)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						if (i != 9 && j != 8 && k != 9 && l != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
