#include "lists.h"

/**
 * find_listint_loop - reverse a list
 * @head: head of the list
 *
 * Return: pointer to the head of reversed list
 */
listint_t *find_listint_loop(listint_t **head)
{
	listint_t *slow, *fast;

	slow = *head;
	fast = *head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (slow);
		}
	}
	return (NULL);

}
