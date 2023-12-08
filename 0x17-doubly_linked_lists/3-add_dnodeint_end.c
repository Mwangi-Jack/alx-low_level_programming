#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end- Function
 *
 * Description: adds node to the end of the doubly linked list
 *
 * @head: pointer to pointer of the head node
 * @n:  data
 *
 * Return: address of new node of NULL if fail
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last  = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
	new_node->prev = last;

	return (new_node);

}
