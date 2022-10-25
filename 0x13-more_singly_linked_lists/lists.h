#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct listint_t - linked list node
 * @n: node data
 * @next: next node pointer
 *
 * Description: structure of a linked list node
 */
struct listint_t
{
	int n;
	struct listint_t *next;
};

/**
 * listint_t - Typedef of listint_t
 */
typedef struct listint_t listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);

#endif
