#inlcude "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: aux variable
 *
 * Return: pointer to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1, ln2, totlen;
	char *s;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';
	for (ln1 = 0; s1[ln1] != '\0'; ln1++)
		;
	for (ln2 = 0; s2[ln2] != '\0'; ln2++)
		;
	totlen = ln1 + ln2;
	s = malloc(totlen + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0, j = 0; i < totlen; i++)
	{
		if ((int) n >= ln2)
		{
			if (i < ln1)
				s[i] = s1[i];
			else
				s[i] = s2[j];
			j++;
		}
		else
		{
			if (i < ln1)
				s[i] = s1[i];
			else
				s[i] = s2[j];
			j++;
			if ((int) j > n)
				break;
		}
	}
	s[i] = '\0';
	return (s);
}
