#include "lists.h"

/**
 * add_nodeint - adds a new node to a list
 * @head: head of the list
 * @n: data of the node
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	temp = *head;
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = temp->n;
	new->next = temp;
	*head = new;

	return (new);

}
