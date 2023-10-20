#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Function
 *
 * Description: function that adds new node at the end of a linked list
 *
 * @head: list head
 * @str: string to add
 *
 * Return: address of new node or NULL if fail
*/

list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *newNode;
	char *data;

	data = strdup(str);

	newNode = malloc(sizeof(struct list_s));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = data;
	newNode->len = strlen(data);
	newNode->next = NULL;

	while (head != NULL)
	{
		if ((*head)->next == NULL)
		{
			(*head)->next = newNode;
		}

		*head = (*head)->next;
	}

	return (newNode);
}
