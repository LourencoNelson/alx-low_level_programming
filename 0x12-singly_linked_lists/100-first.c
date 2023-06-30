#include <stdio.h>

void firt(void) __attibute__ ((constructor));

/**
 * first - prints a sentence before the main is exec
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
