#include  <ctype.h>

/**
 * _isdigit - checks for a digit
 * @c: input character
 *
 * Return: 1 if is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	int ret;

	if (isdigit(c))
		ret = 1;
	else
		ret = 0;

	return (ret);
}
