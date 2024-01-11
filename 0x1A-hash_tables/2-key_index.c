#include "hash_tables.h"


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
	int index;

	index = hash_djb2(key);

	return (index % size);
}
