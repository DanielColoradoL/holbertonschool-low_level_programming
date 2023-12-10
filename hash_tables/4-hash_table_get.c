#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *				  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *		 Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (strcmp(ht->array[i]->key, key) == 0)
				return (ht->array[i]->value);
			current = current->next;
		}
	}
	return (NULL);
}