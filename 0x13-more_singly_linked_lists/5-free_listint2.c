#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *current;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
