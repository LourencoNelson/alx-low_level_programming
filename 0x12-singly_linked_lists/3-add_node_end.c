#include "lists.h"

/**
 * add_node_end - adds a new element at the end of the list
 * @head: head of the list
 * @str: string data
 *
 * Return: address of the new element;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t **temp;

	*temp = *head;
	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while ((*temp)->next != NULL)
	{
		*temp = (*temp)->next;
	}

	new->str = strdup(str);
	(*temp)->next = new;

	return (new);
}
