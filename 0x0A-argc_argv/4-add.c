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
	int i, sum;

	if (argc == 1)
	{
		print("0");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				sum += argv[i];
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
