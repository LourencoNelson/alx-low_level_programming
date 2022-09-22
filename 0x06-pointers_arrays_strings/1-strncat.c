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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; source[j] != '\0' && j < num; j++)
	{
		dest[j + i] = src[j];
	}
	dest[j + i] = '\0';

	return (dest);
}
