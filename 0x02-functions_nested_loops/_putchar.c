#include <unistd.h>

/**
 * _putchar - prints characters
 * @c: char argument
 *
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
