#include "lists.h"

/**
 * delete_nodeint_at_index - adds a new node to a list
 * @head: head of the list
 * @index: position to insert
 *
 * Return: the address of the new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, del;
	unsigned int count, i;

	count = 0;
	temp = *head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (count < index || index < 1)
	{
		return (-1);
	}
	else if (index == 0)
	{
		temp = *head;
		head = head->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		temp = *head;
		for (i = 0; i < index - 1; i++)
		{
			temp = temp->next;
		}

		del = temp->next;
		del->next = NULL;
		free(del);
		return (1);
	}
	return (-1);
}
