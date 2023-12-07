#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @n: integer to store in new node
 *
 * Return: address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *temp;

	if (!head)
		return (NULL);

	end = malloc(sizeof(dlistint_t));
	if (!end)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (!*head)
	{
		end->prev = NULL;
		*head = end;
		return (end);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = end;
	end->prev = temp;

	return (end);
}
