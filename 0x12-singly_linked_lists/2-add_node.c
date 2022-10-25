#include "lists.h"

/**
 * add_node - adds a new element at the start of the list
 * @head: head of the list
 * @str: string data
 *
 * Return: address of the new element;
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->next = *head;
		*head = new;

		return (new);
	}
}
