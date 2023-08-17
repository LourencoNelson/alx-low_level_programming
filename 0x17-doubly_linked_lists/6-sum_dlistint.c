#include "lists.h"

/**
 * sum_dlistint - sums the list elements
 * @head: list head
 *
 * Return: sum of elements
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
