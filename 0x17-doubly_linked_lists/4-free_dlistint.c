#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Function
 *
 * Description: Function to free a doubly linked list
 *
 * @head: pointer to first node of list
 *
 * Return: Nothing (void)
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
