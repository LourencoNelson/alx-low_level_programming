#include "lists.h"

/**
 * get_nodeint_at_index - gets a node in the list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count;

	tmp = head;
	count = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
		if (count == (index - 1))
			return (tmp);
	}
}
