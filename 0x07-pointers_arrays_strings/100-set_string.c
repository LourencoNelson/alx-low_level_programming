#include "main.h"

/**
 * set_string - locates a char in a string
 * @s: string
 * @to: character
 */

void set_string(char **s, char *to)
{
	if (s == NULL || *s == NULL || to == NULL)
		return;
	**s = *to;
}
