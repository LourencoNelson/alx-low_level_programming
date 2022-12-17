#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at the nth index
 * @h: pointer of the head
 * @idx: node
 * @n: number
 *
 * Return: address of the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if ((*h) == NULL)
	{
		(*h) = new;
	}
	else
	{
		while ((*h) != NULL)
		{
			if (i == idx)
			{
				new->next = (*h);
				new->prev = (*h)->prev;
				(*h)->prev->next = new;
				(*h)->prev = new;
				return (new);
			}
			*h = (*h)->next;
			i++;
		}
	}
	return (NULL);
}
