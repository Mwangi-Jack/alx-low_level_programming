#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index- Function
 *
 * Description: function to insert node at given index
 *
 * @h: pointer to pointer of the first node of the list
 * @idx: idex to which the node should be inserted
 * @n: data of the node created
 *
 * Return: the address of new node or NULL if failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
