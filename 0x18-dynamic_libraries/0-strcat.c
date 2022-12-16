#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: destination string concatenated
 */
char *_strcat(char *dest, char *src)
{
	int i, size;

	size = strlen(dest);

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[size + i] = src[i];
	}
	dest[size + i] = '\0';
	return (dest);
}
