#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_t - linked list node
 * @str: node data
 * @len: node position
 * @next: next node pointer
 *
 * Description: structure for a node of a linked list
 */
struct list_t
{
	char *str;
	int len;
	struct list_t *next;
};

/**
 * list_t - Typedef for a list node
 */
typedef struct list_t list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
