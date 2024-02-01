#include "lists.h"

/**
 * list_len - returns the number of elements of a linked list
 * @h: head of the list
 *
 * Return: length of the list;
 */
size_t list_len(const list_t *h)
{
	unsigned int count;
	list_t *temp;

	temp = (list_t *) h;
	count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
