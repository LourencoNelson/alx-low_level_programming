#include "main.h"

/**
 * _strdup - string copy
 * @str: string to copy
 *
 * Return: a pointer to the new string
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			i++;
		}

		s = (char *)malloc(sizeof(char) * (i++));

		for (j = 0; j < i; j++)
		{
			s[j] = str[j];
		}
		s[j] = '\0';
	}
	return (s);
}
