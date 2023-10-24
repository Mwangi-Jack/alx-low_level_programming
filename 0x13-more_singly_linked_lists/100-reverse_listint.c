#include "lists.h"

/**
 * reverse_listint - Function
 *
 * Description:  function to reverse a 'listint_t' linked list
 *
 * @head: pointer to pointer of the first node of the list
 *
 * Return: returns a pointer to the first node of the reverse linked list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *cur_node;

	if (*head != NULL)
	{
		prevNode = *head;
		cur_node = (*head)->next;
		*head = (*head)->next;

		prevNode->next = NULL;

		while (*head != NULL)
		{
			*head = (*head)->next;
			cur_node->next = prevNode;

			prevNode = cur_node;
			cur_node = *head;
		}

		*head = prevNode;
	}
	return (*head);
}
