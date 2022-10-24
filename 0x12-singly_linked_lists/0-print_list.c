#include "main.h"

/**
 * print_list - prints all  elements of a linked list
 * @h: head of the list
 *
 * Return: length of the list;
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	list_t *temp = h;

	while (temp != NULL)
	{
		if ( temp -> str == NULL)
		{
			printf("[0] (nil)");
			temp = temp -> next;
			count++;
		}
		else
		{
			printf("[%d] %s\n", temp -> len, temp -> str);
			temp = temp -> next;
			count++;
		}
	}
	return (count);
}
