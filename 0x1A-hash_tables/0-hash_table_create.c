#include <stddef.h>
#include <stdlib.h>
#include "hash_tables.h"


/**
 * hash_table_create - Function
 *
 * Description: function to create a hash table
 *
 * @size: the size of the array
 *
 * Return: returns pointer to the created hash table or NULL if fail
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
