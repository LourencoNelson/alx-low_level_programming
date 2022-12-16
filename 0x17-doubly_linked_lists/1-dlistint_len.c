#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a double linked list
 * @h: pointer of the head
 *
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t size = 0;

	temp = (dlistint_t *) h;

	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}

	return (size);
}
