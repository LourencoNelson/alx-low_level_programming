#include "main.h"

/**
 * _islower - checks for lowercase letter
 * @c: the character to be checked
 *
 *  Return: 1 if is lower. 0 otherwise
 */
int _islower(int c)
{
	int ret;

	if (islower(c))
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
