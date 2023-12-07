#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @n: data to be added to new node
 *
 * Return: address of new element, or NULL if failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	temp = *head;
	new->prev = NULL;
	new->next = temp;
	temp->prev = new;
	*head = new;

	return (new);
}
