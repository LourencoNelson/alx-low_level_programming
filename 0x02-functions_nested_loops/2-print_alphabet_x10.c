#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * _putchar - prints to the screen
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch < 'z'; i++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
