#include "main.h"

/**
 * cmp - compare two strings
 * @x: first string
 * @y: second string
 *
 * Return: a number on succes
 */
int cmp(const char *x, const char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
		{
			return (0);
		}
		x++;
		y++;
	}
	return (*y == '\0');
}

/**
 * _strstr - locates a string
 * @haystack: first string
 * @needle: second string
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && cmp(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
