#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to first node in the list.
 *
 * Return: address of the node where the loop starts. NULL ifnone is found
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1 = NULL;
	listint_t *node2 = NULL;

	if (head == NULL)
		return (NULL);

	node1 = head;
	node2 = head;

	while (1)
	{
		node1 = node1->next;
		node2 = (node2->next);
		if (node2 == NULL)
			return (NULL);

		node2 = (node2->next);
		if (node2 == NULL)
			return (NULL);

		if (node1 == node2)
			break;
	}

	node1 = head;
	while (1)
	{
		if (node1 == node2)
			break;
		node1 = node1->next;
		node2 = (node2->next);
	}

	return (node1);
}
