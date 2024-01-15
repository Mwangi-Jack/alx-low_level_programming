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

	table = malloc(size);

	if (table == NULL)
	{
		return (NULL);
	}

	return (table);
}
