#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Function
 *
 * Description: function to add a new node at the beginning of a list
 * @head: list head
 * @str: string
 *
 * Return: address of the new element or NUll if fail
*/

list_t *add_node(list_t **head, const char *str)
{
	char *data;
	struct list_s *newNode;

	data = strdup(str);

	 newNode = malloc(sizeof(struct list_s));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = data;
	newNode->len = strlen(data);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
