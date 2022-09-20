#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string
 *
 * putchar - prints to the screen
 *
 */
void print_rev(char *s)
{
	int c = 0;
	char ch = *s;

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

	do {
		putchar(*(s + c));
		c--;
	} while (*(s + c) != ch);
}
