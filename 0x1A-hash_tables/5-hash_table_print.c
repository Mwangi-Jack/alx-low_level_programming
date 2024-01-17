#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Function
 *
 * Description: this function prints the hash table
 *
 * @ht: hash table to print
 *
 * return: nothing (void)
*/

void hash_table_print(const hash_table_t *ht)
{
	/*hash_node_t *current;**/

	if (ht->array)
	{
		printf("TRUE\n");
	} else
	{
		printf("FALSE\n");
	}
}
