#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining
 * @head: head of the list
 * @n: content of the new node
 *
 * Return: pointer to the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
