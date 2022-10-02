#include <stdio.h>

/**
 * main - Entry point of a C program
 * @argc: Number of elements of argv[]
 * @argv: arguments of the command line
 *
 * print f - prints its content to the stdo
 *
 * Return: always 0 (Succes)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
