#include "main.h"

/**
 * _strdup - string copy
 * @s1: firrst string
 * @s2: second  string
 *
 * Return: a pointer to the new string
 */
char *_str_concat(char *s1, char *s2)
{
	int k;
	int i;
	int j;
	char *s;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	s = (char *)malloc(sizeof(char) * (i + j + 1));

	for (k = 0; k < (i + j); k++)
	{
		s[j] = str[j];
		if (k < i)
			s[k] = s1[k];
		else
			s[k] = s2[k];
	}
	s[k] = '\0';
	return (s);
}
