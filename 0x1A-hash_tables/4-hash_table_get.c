#include "hash_tables.h"
#include <stddef.h>
/**
 * hash_table_get - Function
 *
 * Description: this function retrieves a value associated with a key
 *
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: returns the retrieved value or NUll if not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;


	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		return (ht->array[index]->value);
	}

	return (NULL);

}
