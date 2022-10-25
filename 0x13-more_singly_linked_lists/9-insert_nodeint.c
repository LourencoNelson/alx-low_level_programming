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
		return (NULL);

	temp = *head;
	i = 0;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new = (listint *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	new->next = temp->next;
	temp->next = new;

	return (new);
}
