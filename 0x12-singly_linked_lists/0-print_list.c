#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function
 *
 * Description: function to print elements of a list
 *
 * @h: list
 *
 * Return: returns the number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", h->len);
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
