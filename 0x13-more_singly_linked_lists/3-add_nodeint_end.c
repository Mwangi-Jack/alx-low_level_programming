#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function
 *
 * Description: adds a node at the end of the node list
 *
 * @head: pointer to the first node of the list
 *
 * @n: integer value to create node
 *
 * Return: address of the new element or NULL of fail
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *newNodeEnd, *current;

	newNodeEnd = malloc(sizeof(struct listint_s));

	if (newNodeEnd == NULL)
	{
		return (NULL);
	}

	newNodeEnd->n = n;
	newNodeEnd->next = NULL;

	if (*head == NULL)
	{
		*head = newNodeEnd;
	} else
	{
		current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = newNodeEnd;

	}


	return (newNodeEnd);
}

