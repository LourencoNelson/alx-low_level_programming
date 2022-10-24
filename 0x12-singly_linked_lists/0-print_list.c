#include "lists.h"

/**
 * print_list - prints all  elements of a linked list
 * @h: head of the list
 *
 * Return: length of the list;
 */

size_t print_list(const list_t *h)
{
	unsigned int count;
	list_t *temp;

	temp = h;
	count = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			count++;
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
			temp = temp->next;
			count++;
		}
	}
	return (count);
}
