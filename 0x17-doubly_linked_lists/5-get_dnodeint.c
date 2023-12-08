#include "lists.h"

/**
 * get_dnodeint_at_index: Function
 *
 * Description: fuction to get the nth node of the list
 *
 * @head: pointer to first node of the list
 * @index: index of the node to get
 *
 * Return: pointer to the nth node or NULL if not found
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}

		head = head->next;
		count += 1;
	}

	return (NULL);
}
