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
	unsigned long a = 0;
	unsigned long b = 1;
	int i = 0;

	unsigned long fib = a + b;

	while (i < 98)
	{
		if (i < 97)
			printf("%lu, ", fib);
		else
			printf("%lu\n", fib);

		a = b;
		b = fib;
		fib = a + b;
		i++;
	}
	return (0);
}
