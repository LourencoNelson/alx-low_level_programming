#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number input
 *
 * Return: l, the last digit  of n
 */
int print_last_digit(int n)
{
	int l, num;

	if (n < 0)
		num = n * (-1);
	else
		num = n;

	l = num % 10;

	_putchar(l + '0');

	return (l);
}
