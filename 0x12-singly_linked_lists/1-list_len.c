#include <stdio.h>
#include "lists.h"

/**
 * list_len - Function
 *
 * Description: function to return the number of elements in a linked list
 *
 * @h: head;
 *
 * Return: returns number of elements
*/

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
