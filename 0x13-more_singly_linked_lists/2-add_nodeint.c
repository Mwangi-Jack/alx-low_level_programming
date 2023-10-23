#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function
 *
 * Description: function that adds a new node at the beginning of a list
 *
 * @head: pointer to address of first node
 * @n: integer value to add to node
 *
 * Return: address of the new node or NULL of fail
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *newNode;

	newNode = malloc(sizeof(struct listint_s));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);

}
