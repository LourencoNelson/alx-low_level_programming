#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: string one
 * @s2: string two
 *
 * Return: desttination
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}

		s1++;
		s2++;
	}

	return (*(const unsigned *char)s1 - *(const unsigned *char)s2);
}
