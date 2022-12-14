#include "main.h"

/**
 * _strpbrk - locates the first occurrence in a string of any char in string2
 * @s: first string
 * @accept: second string
 *
 * Return: pointer to the char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	pos = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}

	if (flag == 1)
		return (&s[pos]);
	return (NULL);
}
