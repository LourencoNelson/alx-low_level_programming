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
	
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'q') && (ch != 'e'))
		{
			putchar(ch);
		}
	}
 	putchar('\n');	
	return(0);
}
