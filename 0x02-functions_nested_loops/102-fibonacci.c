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
	int a = 1;
	int b = 2;
	int c = 0;
	int fib = 0;

	while (fib < 50)
	{
		fib = a + b;
		c = b;
		b = a;
		a = c;

		printf("%d, ", fib);
	}
	return (0);
}
