#ifndef __MAIN_H__
#define __MAIN_H__

#include <stddef.h>

/**
 * struct list_s - singly linked list
 *
 * Description: singly linked list node structure
 *
 * @str: string value
 * @len: length of the string
 * @next: pointer to next node
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *head);
size_t list_len(const list_t *head);



#endif
