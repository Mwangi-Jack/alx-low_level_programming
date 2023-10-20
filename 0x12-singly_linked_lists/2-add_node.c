#include <string.h>
#include <stdlib.h>
#include "lists.h"


/**
 * _strlen - Function
 *
 * Description: function to get the length of a string
 *
 * @s: string
 *
 * Return: returns the length
*/

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}


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
	struct list_s *newNode;

	 newNode = malloc(sizeof(struct list_s));

	if (newNode == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *(head);
	*head = newNode;

	return (newNode);
}
