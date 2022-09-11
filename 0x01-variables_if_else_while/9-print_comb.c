#include <stdio.h>

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

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return(0);
}
