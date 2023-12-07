#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint- Function
 *
 * Description: Function to add a new node at the
 * beginning of a doubly linked list
 *
 * @head: pointer to pointer of the first node of the list
 * @n: data to add
 *
 * Return: address of new element of NULL if fail
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *(head);

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);

}
