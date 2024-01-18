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

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			return (15);
		}
		if (*s1 < *s2)
		{
			return (-15);
		}
		s1++;
		s2++;
	}
	return (0);
}
