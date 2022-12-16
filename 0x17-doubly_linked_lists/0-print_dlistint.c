#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double linked list
 * @h: pointer of the head
 *
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t size = 0;

	temp = (dlistint_t *) h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		size++;
	}

	return (size);
}
