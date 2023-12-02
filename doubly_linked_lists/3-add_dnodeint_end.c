#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *penultimate;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	penultimate = *head;
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (penultimate->next != NULL)
		penultimate = penultimate->next;

	new->prev = penultimate;
	penultimate->next = new;
	new->n = n;
	new->next = NULL;

	return (new);
}
