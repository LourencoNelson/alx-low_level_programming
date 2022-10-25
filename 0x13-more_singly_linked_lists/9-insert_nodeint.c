#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to a list
 * @head: head of the list
 * @idx: position to insert
 * @n: data of the node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	int count, i;

	count = 0;
	temp = *head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (idx > count || idx < 1)
	{
		return (NULL);
	}
	else
	{
		temp = *head;
		new = (listint_t *) malloc(sizeof(listint_t));
		new->n = n;
		new->next = NULL;

		i = idx;

		while (--i)
		{
			temp = temp->next;
		}

		new->next = temp->next;
		temp->next = new;

		return (new);
	}
}
