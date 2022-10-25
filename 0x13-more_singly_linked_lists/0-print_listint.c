#include "lists.h"

/**
 * print_listint - prints a list of ints
 * @h: head of the list
 *
 * Return: the size of the list
 */
size_t print_listint(const listint_t *h)
{
	listint_t *tmp;
	unsigned int count;

	tmp = h;
	count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}

	return (count);

}
