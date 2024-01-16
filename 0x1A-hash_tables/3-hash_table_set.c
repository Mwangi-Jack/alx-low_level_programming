#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_set - Function
 *
 * Description: function to add an element to the hash table
 *
 * @ht: pointer to hash table
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: On Success (1). On Fail (0)
*/


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element, *head;

	unsigned long int index;

	element = malloc(sizeof(hash_node_t));

	if (element == NULL)
	{
		return (0);
	}

	element->key = strdup(key);
	element->value = strdup(value);
	element->next = NULL;

	index = key_index((unsigned char *)key, 1024);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = element;

	} else
	{
		int count = 0;

		head = ht->array[index];
		element->next = head;
		printf("HELLO WORLD\n");

		while (element->next)
		{
			printf("Element %d : %s :: %s\n", count, element->key, element->value);
			count += 1;
			element = element->next;
		}
	}
	return (1);
}
