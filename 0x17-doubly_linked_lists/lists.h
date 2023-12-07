#ifndef __LISTS_H__
#define __LISTS_H__

#include <stddef.h>


/**
 * dlistint_s- doubly linked list
 *
 * @n: node data
 * @next: pointer to the next node
 * @prev: pointer to the previous node
 *
 * Description: The structure of the doubly linked list
 *
*/

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;


size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif
