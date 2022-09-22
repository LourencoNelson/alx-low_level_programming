#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: limit
 *
 * Return: desttination
 */
char *_strncpy(char *dest, char *src, int n)
{
	if (dest == NULL)
	{
		return (NULL);
	}

	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return ptr;
}
