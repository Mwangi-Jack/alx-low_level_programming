#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function
 *
 * Description: function to print elements of a listint_t list
 *
 * @h: pointer to first node of list
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
