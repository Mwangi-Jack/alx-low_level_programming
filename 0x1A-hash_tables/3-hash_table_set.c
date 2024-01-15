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
 *
 * Description : Now, there are certain steps involved in the ht_insert() function.
	Create the item based on the { key: value } pair.
	Compute the index based on the hash function.
	Check if the index is already occupied or not, by comparing the key.
	If it is not occupied, you can directly insert it into index.
	Otherwise, it is a collision, and you will need to handle it.
*/


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	unsigned long int index;

	element = malloc(sizeof(hash_node_t));

	if (element == NULL)
	{
		return (0);
	}

	element->key = strdup(key);
	element->value = strdup(value);
	element->next = NULL;

	printf("Element Value: %s\n", element->value);
	printf("Element Key: %s\n", element->key);
	index = key_index((unsigned char *)key, 1024);

	printf("Index:: %ld\n", index);


	/**
	 * ht->array[index] = element;
	 * head = ht->array[index];
	 */

	if (!ht->array)
	{
		ht->array[index] = element;

		printf("Value from hash table %s\n", ht->array[index]->value);

	} else
	{
		printf("TRUE\n");
	}

	printf("hash table size %ld\n", ht->size);

	return (1);
}
