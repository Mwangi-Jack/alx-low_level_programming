#include <stdlib.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - Function
 *
 * Description: insert a node at a given index
 *
 * @head: pointer to pointer of first node of list
 *
 * @idx: index at which to insert node
 *
 * @n: value to insert to created  node
 *
 * Return: address of new node or NULL if fail;
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp_node = *head;
	unsigned int i = 0;

	while (tmp_node && i < idx - 1)
	{
		tmp_node = tmp_node->next;
		i++;
	}
	if (tmp_node || (i == idx - 1 || idx == 0))
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node)
		{
			new_node->n = n;
			if (idx == 0)
			{
				new_node->next = *head;
				*head = new_node;
			}
			else
			{
				new_node->next = tmp_node->next;
				tmp_node->next = new_node;
			}
			return (new_node);
		}
	}
	return (NULL);
}
