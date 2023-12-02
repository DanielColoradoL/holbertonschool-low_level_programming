#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *next, *del_nod;
	unsigned int count = 0, i;

	if (*head == NULL)
	{
		return (-1);
	}
	prev = next = *head;
	count = dlistint_leng(next);

	if (index == 0)
	{
		if (count > 1)
		{
			next = next->next;
			next->prev = NULL;
			free(*head);
			*head = next;
			return (1);
		}
		else
		{
			*head = NULL;
			free(*head);
			return (1);
		}
	}
	if (index == count - 1)
	{
		while (next->next != NULL)
			next = next->next;
		prev = next->prev;
		free(next);
		prev->next = NULL;
		return (1);
	}
	if (index > count - 1)
		return (-1);
	for (i = 1; i < index; i++)
		prev = prev->next;
	next = del_nod = prev->next;
	for (i = 0; i < 2; i++)
		next = next->next;
	prev->next = next;
	next->prev = prev;
	free(del_nod);
	return (1);
}

/**
 * dlistint_leng - count the number of nodes in list
 * @list: head of the list
 * Return: the lenght of the list
 */
unsigned int dlistint_leng(dlistint_t *list)
{
	unsigned int count = 0;
	while (list != NULL)
	{
		list = list->next;
		count++;
	}
	return (count);
}
