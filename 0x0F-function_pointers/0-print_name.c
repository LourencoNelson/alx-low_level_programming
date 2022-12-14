#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: the name parameter
 * @f: callback
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
