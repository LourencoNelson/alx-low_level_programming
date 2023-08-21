#include "main.h"

/**
 * _isalpha - checks if an input is an alpha
 * @c: character to be checked
 *
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
	int ret;

	if (isalpha(c) && (isupper(c) || islower(c)))
		ret = 1;
	else
		ret = 0;
	return (ret);
}
