#include  <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: input character
 *
 * Return: 1 if is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	int ret;

	if (isupper(c))
		ret = 1;
	else
		ret = 0;

	return (ret);
}
