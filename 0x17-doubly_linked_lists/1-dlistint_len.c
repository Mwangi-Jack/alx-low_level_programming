#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Function
 *
 * Description: this function counts the number of elements
 * in a doubly linked list
 *
 * @h: pointer to the first node of the  list
 *
 * Return: returns the length/count
*/


size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len += 1;
		h = h->next;
	}

	return (len);
}
