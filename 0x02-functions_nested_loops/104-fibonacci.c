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
	long long int a = 0;
	long long int b = 1;
	int i = 0;

	long long int fib = a + b;

	while (i < 98)
	{
		if (i < 97)
			printf("%li, ", fib);
		else
			printf("%li\n", fib);

		a = b;
		b = fib;
		fib = a + b;
		i++;
	}
	return (0);
}
