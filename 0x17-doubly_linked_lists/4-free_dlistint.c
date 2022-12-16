#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dnodeint - free
 * @head: pointer of the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
