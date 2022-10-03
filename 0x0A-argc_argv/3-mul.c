#include "main.h"

/**
 * main - Entry point of a C program
 * @argc: Number of elements of argv[]
 * @argv: arguments of the command line
 *
 * printf - prints its content to the stdo
 *
 * Return: always 0 (Succes)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int r = a * b;

		printf("%d\n", r);
		return (0);
	}
}
