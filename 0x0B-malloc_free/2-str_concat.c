#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr = NULL;

	if (s1 == NULL && s2 == NULL)
	{
		newstr = (char *) malloc(sizeof(char));
		*newstr = '\0';
		return (newstr);
	}
	else if (s1 == NULL)
	{
		newstr = (char *) malloc(strlen(s2) + 1);
		strcpy(newstr, s2);
	}
	else if (s2 == NULL)
	{
		newstr = (char *) malloc(strlen(s1) + 1);
		strcpy(newstr, s1);
	}
	else
	{
		int i = 0;

		newstr = (char *) malloc(strlen(s1) + strlen(s2) + 1);
		if (newstr == NULL)
			return (NULL);
		while (*s1 != '\0')
		{
			*(newstr + i) = *s1;
			i++;
			s1++;
		}
		while (*s2 != '\0')
		{
			*(newstr + i) = *s2;
			i++;
			s2++;
		}
		*(newstr + i) = '\0';
	}
	return (newstr);
}
