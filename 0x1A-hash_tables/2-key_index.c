#include "hash_tables.h"
#include <stdio.h>

/**
 * key_index - Function
 *
 * Description: this functions gives the index  of a key
 *
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: returns the index at which the Key/value pair should
 * be stored in the hash table array
*/


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hash_code, index;

	hash_code = hash_djb2(key);
	index = hash_code % size;

	return (index);
}
