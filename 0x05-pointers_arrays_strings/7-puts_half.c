#include "main.h"

/**
 * puts_half - returns the length of a string
 * @s: string
 *
 */
void puts_half(char *s)
{
	float c = 0;
	float i = 0;

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
		if (*(s + i) != '\0')
		{
			if (i >= (c / 2) || i > (c / 2))
				putchar(*(s + i));
			i++;
		}
		else
		{
			break;
		}
	}
	putchar('\n');
}
