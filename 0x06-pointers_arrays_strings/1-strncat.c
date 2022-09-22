#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: limit
 *
 * Return: desttination
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int size;

	size = strlen(dest);

	for (j = 0; source[j] != '\0' && j < n; j++)
	{
		dest[j + size] = src[j];
	}
	dest[j + size] = '\0';

	return (dest);
}
