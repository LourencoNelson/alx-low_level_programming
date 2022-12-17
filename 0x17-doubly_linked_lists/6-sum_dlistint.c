#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sums all elements in the list
 * @head: pointer of the head
 *
 * Return: sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
