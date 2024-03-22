#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t
 * @h: double linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
