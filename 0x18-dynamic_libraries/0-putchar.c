#include <unistd.h>

/**
 * _putchar - prints to the screeb
 * @c: character to print
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
