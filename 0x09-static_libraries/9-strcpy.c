#include "main.h"

/**
 * _strcpy - copy a string to another
 * @dest: destination
 * @src: source
 *
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
