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
	int i;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int totlen = len1 + len2;
	char *s;

	if (n >= len2)
	{
		s = malloc(len1 + len2 + 1);

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
