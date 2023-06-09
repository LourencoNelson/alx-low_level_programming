#include "main.h"

/**
 * _putchar - prints a char to the screen
 * @c: char to print
 *
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
