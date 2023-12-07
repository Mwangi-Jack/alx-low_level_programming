#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Function
 *
 * Description: function to print all elements of a doubly linked list
 *
 * @h: pointer to head of the doubly linked list
 *
 * Return: returns the number of nodes
*/


size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}

	return (count);
}
