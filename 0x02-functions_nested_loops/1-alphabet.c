#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * _putchar - prints to the screen
 */
void print_alphabet(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
