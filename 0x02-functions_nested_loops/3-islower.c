#include "main.h"

/**
 * _islower - checks for lowercase letter
 *
 *  
 *  c: is a int number
 *
 *  Return: 1 if is lower
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
