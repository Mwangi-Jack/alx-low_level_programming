#ifndef __LISTSINT_H__
#define __LISTSINT_H__

#include <stdlib.h>

/**
 * struct listint_s - structure
 *
 * @n: integer value
 * @next: pointer to address of the next node
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif
