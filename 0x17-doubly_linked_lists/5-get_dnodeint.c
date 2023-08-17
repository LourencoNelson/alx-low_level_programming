#include "lists.h"

/**
 * *get_dnodeint_at_index - gets the nth index element
 * @head: list head
 * @index: element position
 *
 * Return: pointer of the element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
