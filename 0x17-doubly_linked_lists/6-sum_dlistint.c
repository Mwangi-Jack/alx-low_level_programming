#include "lists.h"


/**
 * sum_dlistint- Function
 *
 * Description: function to sum all the data in a doubly linked list
 *
 * @head: pointer to first node of the list
 *
 * Return: sum of all data
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
