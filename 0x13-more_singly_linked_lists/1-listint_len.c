#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Function
 *
 * Description: function to return the number of elements in a linked list
 *
 * @h: pointer to the first node of the list
 *
 * Return: returns number of elements
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->n)
			count++;

		h = h->next;
	}

	return (count);
}
