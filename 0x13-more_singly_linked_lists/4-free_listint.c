#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function
 *
 * Description: function to free  a 'listint_t' list
 *
 * @head: pointer to first node of the list
 *
 * Return: returns nothing (void)
*/

void free_listint(listint_t *head)
{
	struct listint_s *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}

}
