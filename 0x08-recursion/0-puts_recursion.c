#include "main.h"

/**
 * _puts_recursion - recursion version of put()
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	_puts_recursion(++s);
}
