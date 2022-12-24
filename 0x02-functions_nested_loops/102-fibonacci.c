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
	int i = 0;

	long int fib = a + b;

	while (i < 50)
	{
		printf("%d, ", fib);

		a = b;
		b = fib;
		fib = a + b;
		i++;
	}
	return (0);
}
