#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Function
 *
 * Description: function that adds a new node at the end of a linked list
 *
 * @head: Pointer to a pointer to the list head
 * @str: String to add
 *
 * Return: Address of the new node or NULL if fail
*/

list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *newNode;
	struct list_s *current;
	char *data;

	data = strdup(str);

	if (data == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(struct list_s));

	if (newNode == NULL)
	{
		free(data);
		return (NULL);
	}

	newNode->str = data;
	newNode->len = strlen(data);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	} else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}

	return (newNode);
}
