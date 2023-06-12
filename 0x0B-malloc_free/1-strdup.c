#include "main.h"

/**
 * _strdup - creates a copy of a string
 * @str: pointer to the string to copy
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *newstr = NULL;

	if (str == NULL)
		return (NULL);

	newstr = (char *) malloc(strlen(str) + 1);

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < (strlen(str) + 1); i++)
		*(newstr + i) = str[i];

	return (newstr);
}
