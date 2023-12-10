#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *			they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (comma == 1)
			{
				printf(", ");
				comma = 0;
			}
			if (current->key)
			{
				printf("'%s': '%s'", current->key, current->value);
				comma = 1;
			}
			current = current->next;
		}
	}
	printf("}\n");
}
