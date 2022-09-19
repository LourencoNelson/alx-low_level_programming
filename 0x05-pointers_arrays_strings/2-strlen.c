#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: integer length
 */
int _strlen(char *s)
{
	int  c = 0;

	while (1)
	{
		if (*(s + c) != '\n')
		{
			c++;
		}
		else
		{
			break;
		}
	}
	return (c);
}
