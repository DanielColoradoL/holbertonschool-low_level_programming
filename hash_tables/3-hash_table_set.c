#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *		 Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *cp_value;
	hash_node_t *current, *new;

	if (ht == NULL || key == 0)
		return (0);

	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	head = current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = cp_value;
			return (1);
		}
		current = ht->array[index]->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cp_value;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
