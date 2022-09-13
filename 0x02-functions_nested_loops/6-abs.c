include "main.h"

/**
 *
 * _abs - returns the absolute value
 *
 */
int _abs(int n)
{
	int ret;

	if (n < 0)
	{
		ret = n * (-1);
	}
	else
	{
		ret = n;
	}
	return ret;
}
