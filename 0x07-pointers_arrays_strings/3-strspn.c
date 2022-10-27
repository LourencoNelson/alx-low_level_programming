#include "main.h"

/**
 * _strspn - gets the length of a preffix substring
 * @s: first string
 * @accept: second string
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found_match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				found_match = 1;
				break;
			}
		}
		if (!found_match)
			break;
		len++;
	}
	return (len);
}
