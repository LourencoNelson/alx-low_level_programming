#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
	int c = 0;
	char *fp = &s;
	char *lp;

	while (1)
	{
		if (*(s + c) != '\0')
		{
			lp = &(s + c);
			c++;
		}
		else
		{
			break;
		}
	
	}
	while (&(s + c) >= fp)
	{
		putchar(*(s + c));
		c--;
	}

}
