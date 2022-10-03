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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
