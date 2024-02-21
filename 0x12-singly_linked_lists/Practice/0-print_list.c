#include <stdio.h>
#include "main.h"

/**
 * print_list - Function
 *
 * Description: function to print elements of a linked list
 *
 * @head: pointer to the first element
 *
 * Return: returns nothing (void)
*/


size_t print_list(const list_t *head)
{
	unsigned int count = 0;


	while (head != NULL)
	{
		if (head->str != NULL)
		{
			printf("[%d] %s\n", head->len, head->str);
		} else
		{
			printf("[%d] (nil)\n", head->len);
		}

		count++;
		head = head->next;

	}

	return (count);
}
