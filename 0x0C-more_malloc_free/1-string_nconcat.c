#inlcude "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: just a var
 *
 * Return: pointer to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len1, ln2, totlen;
	char *s;

	for (ln1 = 0; s1[ln1] != '\0'; ln1++)
		;
	for (ln2 = 0; s2[ln2] != '\0'; ln2++)
		;
	totlen = ln1 + ln2;

	if (n >= len2)
	{
		s = malloc(len1 + len2 + 1);
		if (s == NULL)
			return (NULL);
		for (i = 0; i < totlen; i++)
		{
			if (i < len1)
				s[i] = s1[i];
			else
				s[i] = s2[i];
		}
		s[i] = '\0';
	}
	else
	{
		s = malloc(ln1 + ln2 + 1);
		if (s == NULL)
			return (NULL);
		for (i = 0; i < len1 + n; i++)
		{
			if (i < len1)
				s[i] = s1[i];
			else
				s[i] = s2[i];
		}
		s[i] = '\0';
	}
	return (s);
}
