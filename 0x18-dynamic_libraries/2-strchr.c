#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string
 * @c: character
 *
 * Return: Pointer to the char (on success)
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);

}
