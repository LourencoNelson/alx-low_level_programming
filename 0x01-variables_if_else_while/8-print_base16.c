#include <stdio.h>

/**
 *main - Entry point
 *
 *putchar - prints to the screen
 *
 * Return: always 0 (Success)
 */
int main () {
	char ch;
	int i;
	for(i = 0; i <= 9; i++)
	{
		putchar(i+'0');
	}
	for(ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');	
	return(0);
}
