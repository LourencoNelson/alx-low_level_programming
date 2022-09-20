#include "main.h"

/**
 * puts_half - returns the length of a string
 * @s: string
 *
 */
void puts_half(char *s)
{
	int c = 0;
	int i = 0;

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
	i = c / 2;
	while (1)
	{
		if (*(s + i) != '\n')
		{
			putchar(*(s + i));
			i++;
		}
		else
		{
			break;
		}
	}
}
