#include "main.h"

/**
 * list_len - function
 *
 * Description: function to get the length of a linked list
 *
 * @head: pointer to first node of the list
 *
 * Return: nothing (void)
*/

size_t list_len(const list_t *head)
{
	int count = 0;

	list_t *current = head;

	while (current->next != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);

}
