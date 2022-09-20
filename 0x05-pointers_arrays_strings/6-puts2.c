#include "main.h"

/**
 * puts2 - prints to stdout
 * @str: string input
 *
 * putchar - prints to the screen
 *
 */
void puts2(char *str)
{
	int c = 0;

	while (1)
	{
		if (*(str + c) != '\0')
		{
			if (c % 2 == 0)
			{
				putchar(*(str + c));
			}
			c++;
		}
		else
		{
			break;
		}
	}
	putchar('\n');
}
