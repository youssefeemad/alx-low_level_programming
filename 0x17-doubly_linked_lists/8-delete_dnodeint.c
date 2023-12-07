#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *del;

	if (!head)
		return (-1);

	if (index == 0)
	{
		if (!*head)
			return (-1);

		del = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(del);
		return (1);
	}

	temp = *head;
	while (index > 1)
	{
		if (!temp)
			return (-1);

		temp = temp->next;
		index--;
	}

	if (!temp->next)
		return (-1);

	del = temp->next;
	temp->next = del->next;
	if (del->next)
		del->next->prev = temp;
	free(del);

	return (1);
}
