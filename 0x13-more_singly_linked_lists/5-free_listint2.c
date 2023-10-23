#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function
 *
 * Description: function to free 'listint_t' list and set head to NULL
 *
 * @head: pointer to list head
 *
 * Return: returns nothing (void)
*/

void free_listint2(listint_t **head)
{
	struct listint_s *current = NULL;

	while (head && *head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

}
