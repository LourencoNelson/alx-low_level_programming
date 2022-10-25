#include "lists.h"

/**
 * pop_listint - deletes the head of a node
 * @head: head of the list
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (*head == NULL)
		return (0);

	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
