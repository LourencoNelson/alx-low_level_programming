#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
	int c = 0;
	char *fp = s;
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
	while (*(s + c) != ch)
	{
		putchar(*(s + c));
		c--;
	}

}
