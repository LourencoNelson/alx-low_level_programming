#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of the list
 * @n: content of the new node
 *
 * Return: pointer to the new head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	new->prev = temp;
	temp->next = new;

	return (new);
}
