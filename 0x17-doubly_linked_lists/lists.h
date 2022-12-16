#ifndef LISTS_H
#define LISTS_H

/**
 * struct dlistint_s - double linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: double linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
