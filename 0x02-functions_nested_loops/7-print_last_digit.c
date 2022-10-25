#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number input
 *
 * Return: l, the last digit  of n
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = n * (-1);

	l = n % 10;

	return (l);
}
