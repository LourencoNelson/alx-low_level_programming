#include "lists.h"

/**
 * sum_listint - sums all elements of a list
 * @head: head of the list
 *
 * Return: the sum of the list elements
 */
int sum_listint(listint_t *head)
{
	int sum;
	
	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
		
	}

	return (sum);
}
