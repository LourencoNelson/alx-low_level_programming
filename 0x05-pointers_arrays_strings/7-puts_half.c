#include "main.h"

/**
 * puts_half - returns the length of a string
 * @s: string
 *
 */
void puts_half(char *s)
{
	int  c = 0;

	while (1)
	{
		if (*(s + c) != '\0')
		{
			c++;
		}
		else
		{
			break;
		}
	}

	while (1)
	{
		if ((*(s + i) != '\n') && (c / 2) == i)
		{
			putchar(*(s + i));
		}
		else
		{
			break;
		}
	}
}
