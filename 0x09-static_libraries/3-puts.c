#include "main.h"

/**
 * _puts - prints to stdout
 * @str: string input
 *
 * putchar - prints to the screen
 *
 */
void _puts(char *str)
{
	int c = 0;

	while (1)
	{
		if (*(str + c) != '\0')
		{
			putchar(*(str + c));
			c++;
		}
		else
		{
			break;
		}
	}
	putchar('\n');
}
