#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *h;

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);

	h = *head;
	current->n = n;
	current->prev = NULL;

	if (h != NULL)
	{
		current->next = h;
		h->prev = current;
	}

	*head = current;
	return (current);
}
