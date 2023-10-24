#include "lists.h"

/**
 * sum_listint - function
 *
 * Description: function to summ all the data in a linked list
 *
 * @head: pointer to the first node of the list
 *
 * Return: returns the sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
