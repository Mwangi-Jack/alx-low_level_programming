#include "lists.h"

/**
 * get_nodeint_at_index - function
 *
 * Description: function to get the nth node of a linked list
 *
 * @head: pointer to first node of the linked list
 * @index: index
 *
 * Return: returns the node;
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}
