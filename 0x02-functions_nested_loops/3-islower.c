#include "main.h"

/**
 * _islower - checks for lowercase letter
 *
 */
int _islower(int c)
{
	int ret;

	if (islower(c))
		ret = 1;
	else
		ret = 0;
	
	return ret;
}
