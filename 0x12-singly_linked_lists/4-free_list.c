#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function
 *
 * Description: fuction that frees a "list_t" list
 *
 * @head: pointer to list_t list
 *
 * Return: nothing (void)
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		struct list_s *next = head->next;

		free(head->str);
		free(head);
		head = next;
	}

}
