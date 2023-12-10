#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(hash_node_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->key);
		free(head->value);
		free(head);
	}
}
