#include "main.h"

/**
 * is_prime_number - says if a number is prime or not
 * @n: number
 *
 * Return: 1 if n is prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - calculates if a number is prime
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
