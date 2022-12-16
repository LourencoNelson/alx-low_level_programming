#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - inserts a node at the beginning
 * @head: pointer of the head
 * @n: data to insert
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	temp = (dlistint_t *) *head;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (temp == NULL)
	{
		temp = new;
	}
	else
	{
		new->next = temp;
		temp->prev = new;
		temp = new;
	}
	return (new);
}
