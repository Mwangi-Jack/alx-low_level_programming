#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function
 *
 * Description: deletes the head node of a 'listint_t' linked list
 *
 * @head: pointer to head node of the linked list
 *
 * Return: returns integer value
*/

int pop_listint(listint_t **head)
{
	struct listint_s *current;
	int n;

	if (*head == NULL)
		return (0);

	current = (*head)->next;

	n = (*head)->n;
	free(*head);
	*head = current;

	return (n);
}
