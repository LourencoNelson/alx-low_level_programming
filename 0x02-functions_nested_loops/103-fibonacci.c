#include <stdio.h>

/**
 * main - Entry point
 *
 * printf - prints
 *
 * Return: 0 always (success)
 */
int main(void)
{
	long int a = 0;
	long int b = 1;
	long int sum = 0;

	long int fib = a + b;

	while (fib <= 4000000)
	{
		if (fib % 2 == 0)
			sum += fib;
		a = b;
		b = fib;
		fib = a + b;
	}
	printf("%li\n", sum);
	return (0);
}
