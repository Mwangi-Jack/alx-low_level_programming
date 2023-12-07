#include "lists.h"

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
	int count;

	while (h->next != NULL)
	{
		count += 1;
		h = h->next
	}

	return (count);
}
