#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *new, *next;
	unsigned int count = 0, i;

	prev = next = *h;

	while (prev != NULL)
	{
		prev = prev->next;
		count++;
	}
	prev = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == count)
		return (add_dnodeint_end(h, n));
	if (idx > count - 1)
		return (NULL);

	for (i = 1; i < idx; i++)
		prev = prev->next;

	next = prev->next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	/* link between prev and new */
	prev->next = new;
	new->prev = prev;

	/* link between new and next */
	next->prev = new;
	new->next = next;

	return (new);
}
