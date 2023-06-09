#include "main.h"

/**
 * main - Entry point
 * @argv: Array of arguments
 * @argc: Size of argv
 *
 * Return: Always (0) on success
 */
int main(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
