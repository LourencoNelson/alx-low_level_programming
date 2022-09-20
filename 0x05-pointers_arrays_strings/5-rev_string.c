#include "main.h"

/**
 * rev_string - reverse
 * @s: string
 *
 * putchar - prints to the screen
 *
 */
void rev_string(char *s)
{
	int c = 0;
	int i = 0;
	char ch = *(s + c);

	if (*(s + c) != '\0')
	{
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
			c--;
			(s + i) = *(s + c);
			i++;
		} while (*(s + c) != ch);
	}
	putchar('\n');
}
