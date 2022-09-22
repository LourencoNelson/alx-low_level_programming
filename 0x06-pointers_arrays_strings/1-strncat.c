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
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; source[j] != '\0' && j < n; j++)
	{
		dest[j + i] = src[j];
	}
	dest[j + i] = '\0';

	return (dest);
}
