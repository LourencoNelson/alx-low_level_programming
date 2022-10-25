#include "lists.h"

/**
 * listint_len - return the length of a linkedlist
 * @h: head of the list
 *
 * Return: the size of the list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *tmp;
	unsigned int count;

	tmp = (listint_t *) h;
	count = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);

}
